#include "samp/client/asset_manager.hpp"
#include "zlib.h"
#include <algorithm>
#include <cstdio>
#include <cstring>

namespace samp::client {

bool AssetManager::begin_download(std::uint8_t type,std::uint32_t checksum) {
    if(type!=1 && type!=2) return false;
    const auto index=find_index(type==1?AssetKind::kModel:AssetKind::kTexture,checksum);
    if(index<0 || directory_.empty()) return false;
    auto& element=*elements_[index];
    const auto pending=std::find(pending_requests_.begin(),pending_requests_.end(),std::pair{type,checksum});
    if(pending!=pending_requests_.end()) pending_requests_.erase(pending);
    if(transfer_.output.is_open()) transfer_.output.close();
    std::error_code error;if(!transfer_.temporary.empty()) std::filesystem::remove(transfer_.temporary,error);
    transfer_={};transfer_.type=type;transfer_.checksum=checksum;transfer_.index=static_cast<std::uint32_t>(index);
    transfer_.expected=type==1?element.model_size:element.texture_size;
    char name[64];std::snprintf(name,sizeof(name),"%05u_%X.temp",transfer_.index,checksum);
    transfer_.temporary=std::filesystem::path(directory_)/name;
    transfer_.output.open(transfer_.temporary,std::ios::binary|std::ios::trunc);
    if(!transfer_.output) {fail_download(6001);return false;}
    transfer_.active=true;staging_length_=0;state_=AssetState::kDownloading;last_error_=0;
    return true;
}

bool AssetManager::write_download(std::span<const std::uint8_t> bytes) {
    if(!transfer_.active || !transfer_.output) return false;
    if(std::uint64_t(transfer_.received)+bytes.size()>transfer_.expected) {fail_download(100);return false;}
    transfer_.output.write(reinterpret_cast<const char*>(bytes.data()),bytes.size());
    if(!transfer_.output) {fail_download(6001);return false;}
    transfer_.crc=static_cast<std::uint32_t>(crc32(transfer_.crc,bytes.data(),static_cast<uInt>(bytes.size())));
    transfer_.received+=static_cast<std::uint32_t>(bytes.size());return true;
}

void AssetManager::fail_download(std::uint32_t code) {
    last_error_=code;
    if(!transfer_.active && transfer_.type==0 && !pending_requests_.empty()) {
        const auto [type,checksum]=pending_requests_.front();pending_requests_.erase(pending_requests_.begin());
        const auto index=find_index(type==1?AssetKind::kModel:AssetKind::kTexture,checksum);
        transfer_.type=type;transfer_.checksum=checksum;
        transfer_.index=index<0?UINT32_MAX:static_cast<std::uint32_t>(index);
    }
    if(transfer_.output.is_open()) transfer_.output.close();
    std::error_code error;if(!transfer_.temporary.empty()) std::filesystem::remove(transfer_.temporary,error);
    if(transfer_.index<elements_.size() && elements_[transfer_.index]) {
        const auto& failed=*elements_[transfer_.index];
        const auto checksum=transfer_.type==2?failed.texture_id:failed.model_id;
        // A shared file has only one request. All dependent records must reach
        // fallback together, or the deduplicated request can never complete.
        for(auto& element:elements_) if(element &&
            (transfer_.type==2?element->texture_id:element->model_id)==checksum) element->download_failed=1;
    }
    transfer_={};staging_length_=0;state_=AssetState::kLoaded;
}

// The original closes the temporary stream, checks bytes/CRC/format, then
// renames the validated file into the server cache. Failure keeps no final file.
bool AssetManager::finish_download() {
    if(!transfer_.active) return false;
    if(transfer_.output.is_open()) transfer_.output.close();
    if(transfer_.received!=transfer_.expected) {fail_download(100);return false;}
    if(transfer_.crc!=transfer_.checksum) {fail_download(101);return false;}
    if(transfer_.type==1?!validate_model_file(transfer_.temporary):!validate_texture_file(transfer_.temporary)) {
        const auto code=transfer_.type==1?102u:103u;fail_download(code);return false;
    }
    char name[40];std::snprintf(name,sizeof(name),"0x%X.%s",transfer_.checksum,transfer_.type==1?"dff":"txd");
    const auto destination=std::filesystem::path(directory_)/name;
    std::error_code error;
    if(std::filesystem::exists(destination,error)) std::filesystem::remove(destination,error);
    if(error) {fail_download(6001);return false;}
    std::filesystem::rename(transfer_.temporary,destination,error);
    if(error) {fail_download(6001);return false;}
    // Equal checksums can be shared by several records/worlds; mark them all.
    for(auto& element:elements_) if(element) {
        if(transfer_.type==1 && element->model_id==transfer_.checksum) element->model_loaded=1;
        if(transfer_.type==2 && element->texture_id==transfer_.checksum) element->texture_loaded=1;
    }
    transfer_={};staging_length_=0;state_=AssetState::kLoaded;return true;
}

void AssetManager::process_downloads(std::int32_t world,const AssetRpcEmitter& emit) {
    if(world_!=world) {world_=world;parent_id_=static_cast<std::uint32_t>(world);finished_=false;ready_=!assets_enabled_;}
    poll_http_downloads();
    if(!assets_enabled_ || finished_ || state_!=AssetState::kLoaded || elements_.size()!=current_id_ ||
       transfer_.active || !pending_requests_.empty() ||
       std::all_of(http_.begin(),http_.end(),[](const auto& job){return job.has_value();})) return;
    if(std::any_of(elements_.begin(),elements_.end(),[](const auto& e){return !e.has_value();})) return;
    for(auto& element:elements_) {
        if(!element || element->download_failed || (element->kind_byte!=1 && element->kind_byte!=2) ||
           (element->kind_byte==2 && element->parent_id!=-1 && element->parent_id!=world)) continue;
        for(const std::uint8_t type:{1,2}) {
            auto& loaded=type==1?element->model_loaded:element->texture_loaded;
            auto& started=type==1?element->model_download_started:element->texture_download_started;
            const auto checksum=type==1?element->model_id:element->texture_id;
            const auto expected=type==1?element->model_size:element->texture_size;
            // Existing files are checked before they can satisfy negotiation.
            // This also repairs a cold-start cache that was corrupted on disk.
            char name[40];std::snprintf(name,sizeof(name),"0x%X.%s",checksum,type==1?"dff":"txd");
            const auto cached=[&]() {
                for(const auto& root:{directory_,fallback_directory_}) {
                    if(root.empty()) continue;
                    const auto path=std::filesystem::path(root)/name;std::error_code error;
                    if(std::filesystem::file_size(path,error)!=expected || error) continue;
                    std::ifstream file(path,std::ios::binary);std::array<std::uint8_t,4096> data{};uLong crc=0;
                    while(file) {file.read(reinterpret_cast<char*>(data.data()),data.size());const auto n=file.gcount();
                        if(n>0) crc=crc32(crc,data.data(),static_cast<uInt>(n));}
                    if(!file.bad() && static_cast<std::uint32_t>(crc)==checksum &&
                       (type==1?validate_model_file(path):validate_texture_file(path))) return true;
                }
                return false;
            };
            if(!started) loaded=cached()?1:0;
            if(loaded || started) continue;
            bool already_started=false;
            for(const auto& candidate:elements_) {
                if(!candidate) continue;
                if(type==1) {
                    if(candidate->model_id==checksum && candidate->model_download_started!=0) {
                        already_started=true;
                        break;
                    }
                } else if(candidate->texture_id==checksum && candidate->texture_download_started!=0) {
                    already_started=true;
                    break;
                }
            }
            if(already_started) continue;
            samp::proto::BitStream request;request.write(&checksum,4);
            started=1;state_=AssetState::kDownloading;
            pending_requests_.emplace_back(type,checksum);emit(type==1?181:182,request);return;
        }
    }
    // No relevant file can be outstanding when the completion bit is sent.
    for(const auto& element:elements_) if(element && !element->download_failed &&
        (element->kind_byte==1 || (element->kind_byte==2 && (element->parent_id==-1 || element->parent_id==world))) &&
        (!element->model_loaded || !element->texture_loaded)) return;
    finished_=true;ready_=false;awaiting_finish_ack_=true;state_=AssetState::kLoaded;
    samp::proto::BitStream done;done.write1();emit(184,done);
}

} // namespace samp::client
