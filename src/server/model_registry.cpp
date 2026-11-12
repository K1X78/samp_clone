#include "samp/server/game_layer.hpp"
#include <algorithm>
#include <filesystem>
#include <fstream>
#include <limits>
#include <cstdlib>
#include "zlib.h"

namespace samp::server {

// 496bc0 -> 467c60 computes file sizes and streaming CRC32; 482100 returns
// the inserted zero-based slot. The native wrappers pass kind1/2 and byte times.
// Official: FUN_00497170 @ 0x00497170 (samp-server.exe)
int GameLayer::add_custom_model(const samp::pawn::CustomModelSpec& spec) {
    if(!artwork_enabled_ || spec.model_file.empty() || spec.texture_file.empty()) return 0;
    samp::pawn::CustomModelRecord record;record.spec=spec;
    record.spec.model_file.resize(std::min<std::size_t>(record.spec.model_file.size(),260));
    record.spec.texture_file.resize(std::min<std::size_t>(record.spec.texture_file.size(),260));
    const auto inspect=[&](const std::string& name,std::uint32_t& crc,std::uint32_t& size) {
        std::ifstream file(std::filesystem::path(models_directory_)/name,std::ios::binary);
        if(!file) return false;
        std::array<std::uint8_t,1024> buffer{};std::uint64_t count=0;uLong sum=0;
        while(file) {
            file.read(reinterpret_cast<char*>(buffer.data()),buffer.size());
            const auto bytes=file.gcount();if(bytes<=0) break;
            count+=static_cast<std::uint64_t>(bytes);
            if(count>std::numeric_limits<std::uint32_t>::max()) return false;
            sum=crc32(sum,buffer.data(),static_cast<uInt>(bytes));
        }
        crc=static_cast<std::uint32_t>(sum);size=static_cast<std::uint32_t>(count);
        return size!=0 && !file.bad();
    };
    if(!inspect(record.spec.model_file,record.model_crc,record.model_size) ||
       !inspect(record.spec.texture_file,record.texture_crc,record.texture_size)) return 0;
    const auto slot=static_cast<int>(models_.size());models_.push_back(std::move(record));
    // Registration broadcasts the same record layout as the join manifest.
    samp::proto::BitStream payload;
    const auto index=static_cast<std::uint32_t>(slot),count=static_cast<std::uint32_t>(models_.size());
    const auto& model=models_.back();
    payload.write(&index,4);payload.write(&count,4);payload.write(&model.spec.kind,1);
    payload.write(&model.spec.virtual_world,4);payload.write(&model.spec.base_id,4);payload.write(&model.spec.new_id,4);
    payload.write(&model.model_crc,4);payload.write(&model.texture_crc,4);
    payload.write(&model.model_size,4);payload.write(&model.texture_size,4);
    payload.write(&model.spec.time_on,1);payload.write(&model.spec.time_off,1);
    for(auto& player:players_) if(player.in_use && player.joined && player.peer) {
        player.models_ready=false;send_rpc(*player.peer,179,payload);
    }
    return slot;
}

// Official: FUN_00496ce0 @ 0x00496ce0 (samp-server.exe)
void GameLayer::send_model_manifest(GamePlayer& player) {
    if(!artwork_enabled_ || !player.peer) return;
    for(std::uint32_t slot=0;slot<models_.size();++slot) {
        const auto count=static_cast<std::uint32_t>(models_.size());const auto& model=models_[slot];
        samp::proto::BitStream payload;payload.write(&slot,4);payload.write(&count,4);
        payload.write(&model.spec.kind,1);payload.write(&model.spec.virtual_world,4);
        payload.write(&model.spec.base_id,4);payload.write(&model.spec.new_id,4);
        payload.write(&model.model_crc,4);payload.write(&model.texture_crc,4);
        payload.write(&model.model_size,4);payload.write(&model.texture_size,4);
        payload.write(&model.spec.time_on,1);payload.write(&model.spec.time_off,1);
        send_rpc(*player.peer,179,payload);
    }
    player.models_ready=models_.empty();
}

// Official: FUN_00497120 @ 0x00497120 (samp-server.exe)
int GameLayer::model_base_id(std::int32_t custom) const {
    const auto found=std::find_if(models_.begin(),models_.end(),[custom](const auto& model){return model.spec.new_id==custom;});
    return found==models_.end()?-1:found->spec.base_id;
}

// The native RedirectDownload wrapper validates the player/string before this
// owner sends type6 with the pending file type/CRC and an eight-bit URL length.
// Official: FUN_00488240 @ 0x00488240 (samp-server.exe)
bool GameLayer::redirect_download(int id,std::string_view url) {
    if(!artwork_enabled_ || id<0 || id>=1000 || static_cast<std::size_t>(id)>=players_.size() ||
       !players_[id].in_use || !players_[id].peer || url.empty()) return false;
    auto& player=players_[id];auto& transfer=player.model_transfer;
    const auto length=static_cast<std::uint8_t>(url.size());const std::uint8_t mode=6;
    samp::proto::BitStream payload;payload.write(&mode,1);payload.write(&transfer.type,1);
    payload.write(&transfer.checksum,4);payload.write(&length,1);payload.write(url.data(),length);
    send_rpc(*player.peer,183,payload);transfer.redirected=true;return true;
}

// 497640 selects the case-sensitive prefix; 496c90 extracts parentheses,
// 497590/4974c0 split comma arguments and 496c30 keeps filename bytes45..122.
// Official: FUN_004976a0 @ 0x004976a0 (samp-server.exe)
void GameLayer::load_model_config(std::string_view name) {
    if(!artwork_enabled_) return;
    std::ifstream file(std::filesystem::path(models_directory_)/std::string(name));
    std::string line;
    while(std::getline(file,line)) {
        const bool character=line.starts_with("AddCharModel");
        if(!character && !line.starts_with("AddSimpleModel")) continue;
        const auto begin=line.find('('),end=line.find(')');
        if(begin==std::string::npos || end==std::string::npos || end<=begin) continue;
        std::vector<std::string> fields;std::size_t at=begin+1;
        while(at<end) {
            const auto comma=std::min(line.find(',',at),end);
            if(comma>at) fields.push_back(line.substr(at,comma-at));
            at=comma+1;
        }
        if(fields.size()<(character?4u:5u)) continue;
        samp::pawn::CustomModelSpec spec;spec.kind=character?1:2;
        const auto number=[&](std::size_t index){return static_cast<std::int32_t>(std::strtol(fields[index].c_str(),nullptr,10));};
        const auto filename=[&](std::size_t index) {
            std::string result;
            for(const unsigned char c:fields[index]) if(c>=45 && c<=122 && result.size()<260) result+=static_cast<char>(c);
            return result;
        };
        spec.virtual_world=character?-1:number(0);
        spec.base_id=number(character?0:1);spec.new_id=number(character?1:2);
        spec.model_file=filename(character?2:3);spec.texture_file=filename(character?3:4);
        add_custom_model(spec);
    }
}

} // namespace samp::server
