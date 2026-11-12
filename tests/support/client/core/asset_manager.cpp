#include "samp/client/asset_manager.hpp"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include "LzmaLib.h"

#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>
#endif

namespace samp::client {

namespace {

// The highest id accepted by the official asset insertion function.
constexpr std::int32_t kMaxAssetId = 0x4E20;

}  // namespace

// Pointer-array cleanup thunk; 1000d870 was a geometry-object destructor.
AssetManager::~AssetManager() {
    for(auto& job:http_) if(job && job->cancelled) job->cancelled->store(true);
    for(auto& job:http_) job.reset(); // Workers capture only owned input, never this.
    if(transfer_.output.is_open()) transfer_.output.close();
    std::error_code error;
    if(!transfer_.temporary.empty()) std::filesystem::remove(transfer_.temporary,error);
    transfer_={};staging_length_=0;pending_requests_.clear();
    elements_.clear();downloaded_bytes_=downloaded_compressed_bytes_=0;
    assets_enabled_=finished_=false;ready_=true;awaiting_finish_ack_=false;last_error_=0;
}

void AssetManager::reset() {
    for(auto& job:http_) if(job && job->cancelled) job->cancelled->store(true);
    for(auto& job:http_) job.reset();
    if(transfer_.output.is_open()) transfer_.output.close();
    std::error_code error;
    if(!transfer_.temporary.empty()) std::filesystem::remove(transfer_.temporary,error);
    transfer_={};staging_length_=0;pending_requests_.clear();
    elements_.clear();downloaded_bytes_=downloaded_compressed_bytes_=0;
    assets_enabled_=finished_=false;ready_=true;awaiting_finish_ack_=false;last_error_=0;
    world_=0;
    directory_.clear();
    fallback_directory_.clear();
    samp_root_.clear();
    model_cache_root_.clear();
    cache_initialized_ = false;
    elements_.clear();
    state_ = AssetState::kIdle;
    assets_enabled_ = false;
    finished_ = false;
    current_id_ = 0;
    parent_id_ = 0;
    downloaded_bytes_ = 0;
    downloaded_compressed_bytes_ = 0;
    staging_.fill(0);
    staging_length_ = 0;
}

// Native compressed-block accumulation and final LZMA decode. The two-argument
// API remains available for staging a continuation; network input supplies mode
// and the independent raw block size from RPC183's actual wire header.
bool AssetManager::stage(const std::uint8_t* data,std::size_t size,std::uint8_t mode,std::uint32_t raw_size) {
    if(size>4096 || raw_size>4096 || size>4096-staging_length_ || (size && !data)) return false;
    if(mode!=1 && mode!=2) {fail_download(5002);return false;}
    if(size) std::memcpy(staging_.data()+staging_length_,data,size);
    staging_length_+=size;
    if(mode==1) return true;
    if(!transfer_.active) {staging_length_=0;return false;}
    std::array<std::uint8_t,4096> raw{};std::size_t output=raw_size,input=staging_length_;
    constexpr unsigned char properties[]{0x5d,0,0,1,0};
    const auto code=LzmaUncompress(raw.data(),&output,staging_.data(),&input,properties,5);
    downloaded_compressed_bytes_+=static_cast<std::uint32_t>(staging_length_);staging_length_=0;
    if((code!=0 && code!=6) || output!=raw_size) {fail_download(5001);return false;}
    downloaded_bytes_+=static_cast<std::uint32_t>(output);
    return write_download({raw.data(),output});
}

std::int32_t AssetManager::add_asset(std::uint32_t index, const AssetElement& record) {
    const std::int32_t id = record.asset_id;
    if (id < 0 || id > kMaxAssetId) {
        return -1;
    }
    if(index>=65535) return -1; // Explicit host allocation bound.
    if(index>=elements_.size()) elements_.resize(index+1);
    elements_[index]=record;
    return static_cast<std::int32_t>(index);
}

std::int32_t AssetManager::remove_asset(std::uint32_t index) {
    if (index >= elements_.size() || !elements_[index].has_value()) {
        return -1;
    }
    elements_[index].reset();
    while(!elements_.empty() && !elements_.back().has_value()) elements_.pop_back();
    return static_cast<std::int32_t>(index);
}

std::int32_t AssetManager::find_index(AssetKind kind, std::uint32_t id) const {
    for (std::size_t index = 0; index < elements_.size(); ++index) {
        if (!elements_[index].has_value()) {
            continue;
        }
        const AssetElement& element = elements_[index].value();
        std::uint32_t value = 0;
        if (kind == AssetKind::kModel) {
            value = element.model_id;
        } else if (kind == AssetKind::kTexture) {
            value = element.texture_id;
        } else {
            continue;
        }
        if (value == id) {
            return static_cast<std::int32_t>(index);
        }
    }
    return -1;
}

bool AssetManager::has_model(std::uint32_t id) const {
    for (const auto& element : elements_) {
        if (!element.has_value()) {
            continue;
        }
        if (element->element_id == static_cast<std::int32_t>(id) &&
            element->kind_byte == static_cast<std::uint8_t>(AssetKind::kModel)) {
            return true;
        }
    }
    return false;
}

std::uint32_t AssetManager::flag_56(std::uint32_t id) const {
    std::size_t index = 0;
    for (; index < elements_.size(); ++index) {
        if (!elements_[index].has_value()) {
            continue;
        }
        const auto& element = elements_[index].value();
        if (element.element_id == static_cast<std::int32_t>(id) &&
            element.kind_byte == static_cast<std::uint8_t>(AssetKind::kTexture) &&
            (element.parent_id==-1 || element.parent_id==world_)) {
            return (static_cast<std::uint32_t>(index) & 0xFFFFFF00u) | element.flag_56;
        }
    }
    return static_cast<std::uint32_t>(index) & 0xFFFFFF00u;
}

std::uint32_t AssetManager::flag_57(std::uint32_t id) const {
    std::size_t index = 0;
    for (; index < elements_.size(); ++index) {
        const auto& element = elements_[index];
        if (!element.has_value()) {
            continue;
        }
        if (element->element_id == static_cast<std::int32_t>(id) &&
            element->kind_byte == static_cast<std::uint8_t>(AssetKind::kTexture) &&
            (element->parent_id==-1 || element->parent_id==world_)) {
            return (static_cast<std::uint32_t>(index) & 0xFFFFFF00u) | element->flag_57;
        }
    }
    return static_cast<std::uint32_t>(index) & 0xFFFFFF00u;
}

void AssetManager::initialize_user_directory(std::string_view user_files_directory) {
    std::error_code error;
    if (user_files_directory.empty()) {
        samp_root_ = std::filesystem::current_path(error).string();
        return;
    }
    samp_root_ = (std::filesystem::path(user_files_directory) / "SAMP").string();
    std::filesystem::create_directories(samp_root_, error);
    error.clear();
    std::filesystem::create_directories(std::filesystem::path(samp_root_) / "screens", error);
    model_cache_root_ = (std::filesystem::path(samp_root_) / "cache").string();
#if defined(_WIN32)
    HKEY key = nullptr;
    if (RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\SAMP", 0, KEY_QUERY_VALUE, &key) ==
        ERROR_SUCCESS) {
        std::array<char, 0x108> configured{};
        DWORD type = 0;
        DWORD length = static_cast<DWORD>(configured.size());
        if (RegQueryValueExA(key, "model_cache", nullptr, &type,
                             reinterpret_cast<BYTE*>(configured.data()), &length) ==
                ERROR_SUCCESS &&
            configured[0] != '\0') {
            model_cache_root_ = configured.data();
        }
        RegCloseKey(key);
    }
#endif
    error.clear();
    std::filesystem::create_directories(model_cache_root_, error);
    error.clear();
    std::filesystem::create_directories(std::filesystem::path(model_cache_root_) / "local", error);
    fallback_directory_ = (std::filesystem::path(model_cache_root_) / "local").string();
}

void AssetManager::initialize_cache(std::string_view server_address, std::uint16_t server_port) {
    if (cache_initialized_) {
        return;
    }
    if (model_cache_root_.empty()) {
        cache_initialized_ = true;
        state_ = AssetState::kLoaded;
        return;
    }
    std::string cache_key;
    cache_key.reserve(std::min<std::size_t>(server_address.size(),0x19));
    for(const char c:server_address) {
        if(cache_key.size()==0x19) break;
        if(c=='.' || (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
            cache_key.push_back(c);
    }
    directory_ = (std::filesystem::path(model_cache_root_) /
                  (cache_key + "." + std::to_string(server_port))).string();
    fallback_directory_ = (std::filesystem::path(model_cache_root_) / "local").string();
    std::error_code error;
    std::filesystem::create_directories(directory_, error);
    cache_initialized_ = true;
    state_ = AssetState::kLoaded;
}

void AssetManager::set_current_id(std::uint32_t id) {
    current_id_ = id;ready_=false;finished_=false;awaiting_finish_ack_=false;
    if (elements_.size() != id) {
        return;
    }
    assets_enabled_ = true;
    collect_garbage();
    if (state_ == AssetState::kIdle) {
        state_ = AssetState::kLoaded;
    }
}

bool AssetManager::has_cached_model(std::uint32_t id) const {
    char hex[16]{};
    std::snprintf(hex, sizeof(hex), "%X", id);
    if (!directory_.empty() && std::filesystem::exists(std::filesystem::path(directory_) /
                                                        ("0x" + std::string(hex) + ".dff"))) {
        return true;
    }
    if (fallback_directory_.empty()) {
        return false;
    }
    return std::filesystem::exists(std::filesystem::path(fallback_directory_) /
                                   ("0x" + std::string(hex) + ".dff"));
}

bool AssetManager::has_cached_texture(std::uint32_t id) const {
    char hex[16]{};
    std::snprintf(hex, sizeof(hex), "%X", id);
    if (!directory_.empty() &&
        std::filesystem::exists(std::filesystem::path(directory_) /
                                ("0x" + std::string(hex) + ".txd"))) {
        return true;
    }
    return !fallback_directory_.empty() &&
           std::filesystem::exists(std::filesystem::path(fallback_directory_) /
                                   ("0x" + std::string(hex) + ".txd"));
}

bool AssetManager::load_model(std::uint32_t element_id, const AssetLoader& loader) {
    for (auto& element : elements_) {
        if (!element.has_value() || element->element_id != static_cast<std::int32_t>(element_id) ||
            element->kind_byte != static_cast<std::uint8_t>(AssetKind::kModel)) {
            continue;
        }
        if(element->download_failed || !element->model_loaded || !element->texture_loaded) return false;
        if (!loader) return false;
        const auto base_id=static_cast<std::uint32_t>(element->asset_id);
        const auto record_id=static_cast<std::uint32_t>(element->element_id);
        char model_hex[16]{},texture_hex[16]{},texture_name[16]{};
        std::snprintf(model_hex,sizeof(model_hex),"%X",element->model_id);
        std::snprintf(texture_hex,sizeof(texture_hex),"%X",element->texture_id);
        std::snprintf(texture_name,sizeof(texture_name),"%X",element->texture_id);
        std::filesystem::path model_path,texture_path;
        if(!directory_.empty()) {
            model_path=std::filesystem::path(directory_)/("0x"+std::string(model_hex)+".dff");
            texture_path=std::filesystem::path(directory_)/("0x"+std::string(texture_hex)+".txd");
        }
        if(model_path.empty() || !std::filesystem::exists(model_path)) {
            if(fallback_directory_.empty()) return false;
            model_path=std::filesystem::path(fallback_directory_)/
                       ("0x"+std::string(model_hex)+".dff");
        }
        if(!std::filesystem::exists(model_path)) return false;
        if(texture_path.empty() || !std::filesystem::exists(texture_path)) {
            if(fallback_directory_.empty()) return false;
            texture_path=std::filesystem::path(fallback_directory_)/
                         ("0x"+std::string(texture_hex)+".txd");
        }
        if(!std::filesystem::exists(texture_path) ||
           !loader(false,base_id,record_id,texture_name,model_path.string(),texture_path.string()))
            return false;
        element->flag_59 = 0;
        element->flag_58 = 1;
        return true;
    }
    return false;
}

bool AssetManager::load_texture(std::uint32_t element_id, const AssetLoader& loader) {
    for (auto& element : elements_) {
        if (!element.has_value() || element->element_id != static_cast<std::int32_t>(element_id) ||
            (element->kind_byte != static_cast<std::uint8_t>(AssetKind::kTexture) ||
             (element->parent_id!=-1 && element->parent_id!=world_))) {
            continue;
        }
        if(element->model_loaded==0 || element->texture_loaded==0 || !loader) return false;
        const auto base_id=static_cast<std::uint32_t>(element->asset_id);
        const auto record_id=static_cast<std::uint32_t>(element->element_id);
        char model_hex[16]{},texture_hex[16]{},texture_name[16]{};
        std::snprintf(model_hex,sizeof(model_hex),"%X",element->model_id);
        std::snprintf(texture_hex,sizeof(texture_hex),"%X",element->texture_id);
        std::snprintf(texture_name,sizeof(texture_name),"%X",element->texture_id);
        std::filesystem::path model_path,texture_path;
        if(!directory_.empty()) {
            model_path=std::filesystem::path(directory_)/("0x"+std::string(model_hex)+".dff");
            texture_path=std::filesystem::path(directory_)/("0x"+std::string(texture_hex)+".txd");
        }
        if(model_path.empty() || !std::filesystem::exists(model_path)) {
            if(fallback_directory_.empty()) return false;
            model_path=std::filesystem::path(fallback_directory_)/
                       ("0x"+std::string(model_hex)+".dff");
        }
        if(!std::filesystem::exists(model_path)) return false;
        if(texture_path.empty() || !std::filesystem::exists(texture_path)) {
            if(fallback_directory_.empty()) return false;
            texture_path=std::filesystem::path(fallback_directory_)/
                         ("0x"+std::string(texture_hex)+".txd");
        }
        if(!std::filesystem::exists(texture_path) ||
           !loader(true,base_id,record_id,texture_name,model_path.string(),texture_path.string()))
            return false;
        element->flag_59 = 0;
        element->flag_58 = 1;
        return true;
    }
    return false;
}

void AssetManager::collect_garbage() {
    if (!assets_enabled_ || directory_.empty()) {
        return;
    }
    for (auto& element : elements_) {
        if (!element.has_value()) {
            continue;
        }
        const bool model_record =
            element->kind_byte == static_cast<std::uint8_t>(AssetKind::kModel);
        const bool texture_record =
            element->kind_byte == static_cast<std::uint8_t>(AssetKind::kTexture) &&
            (element->parent_id == static_cast<std::int32_t>(parent_id_) ||
             element->parent_id == -1);
        if (!model_record && !texture_record) {
            continue;
        }
        if (element->model_loaded == 0 && has_cached_model(element->model_id)) {
            element->model_loaded = 1;
        }
        if (element->texture_loaded == 0 && has_cached_texture(element->texture_id)) {
            element->texture_loaded = 1;
        }
    }

    std::error_code error;
    for (std::filesystem::directory_iterator it(directory_, error), end; !error && it != end;
         it.increment(error)) {
        const auto entry = *it;
        if (entry.is_regular_file(error) && entry.path().extension() == ".temp") {
            std::filesystem::remove(std::filesystem::path(directory_) /
                                    entry.path().filename(), error);
        }
    }
    error.clear();
    for (std::filesystem::directory_iterator it(directory_, error), end; !error && it != end;
         it.increment(error)) {
        const auto entry = *it;
        if (!entry.is_regular_file(error) || entry.path().extension() != ".dff") {
            continue;
        }
        const auto name=entry.path().filename().string();
        if(name.size()<2 || name[0]!='0' || name[1]!='x') continue;
        char digits[9]{};
        const auto digit_count=std::min<std::size_t>(8,name.size()-2);
        std::memcpy(digits,name.data()+2,digit_count);
        const auto id=static_cast<std::uint32_t>(std::strtoul(digits,nullptr,16));
        bool id_used=false;
        for(const auto& element:elements_) {
            if(element && (element->model_id==id || element->texture_id==id)) {
                id_used=true;
                break;
            }
        }
        if (id != 0 && !id_used) {
            char hex[16]{};
            std::snprintf(hex,sizeof(hex),"%X",id);
            std::error_code remove_error;
            std::filesystem::remove(std::filesystem::path(directory_)/
                                    ("0x"+std::string(hex)+".dff"),remove_error);
        }
    }
    error.clear();
    for (std::filesystem::directory_iterator it(directory_, error), end; !error && it != end;
         it.increment(error)) {
        const auto entry = *it;
        if (!entry.is_regular_file(error) || entry.path().extension() != ".txd") {
            continue;
        }
        const auto name=entry.path().filename().string();
        if(name.size()<2 || name[0]!='0' || name[1]!='x') continue;
        char digits[9]{};
        const auto digit_count=std::min<std::size_t>(8,name.size()-2);
        std::memcpy(digits,name.data()+2,digit_count);
        const auto id=static_cast<std::uint32_t>(std::strtoul(digits,nullptr,16));
        bool id_used=false;
        for(const auto& element:elements_) {
            if(element && (element->model_id==id || element->texture_id==id)) {
                id_used=true;
                break;
            }
        }
        if (id != 0 && !id_used) {
            char hex[16]{};
            std::snprintf(hex,sizeof(hex),"%X",id);
            std::error_code remove_error;
            std::filesystem::remove(std::filesystem::path(directory_)/
                                    ("0x"+std::string(hex)+".txd"),remove_error);
        }
    }
}

}  // namespace samp::client
