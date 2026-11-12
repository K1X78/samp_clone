#include "samp/server/game_layer.hpp"
#include "LzmaLib.h"
#include <algorithm>
#include <bit>
#include <filesystem>
#include <fstream>

namespace samp::server {

// Official: FUN_004881a0 @ 0x004881a0 (samp-server.exe)
void GameLayer::send_model_error(GamePlayer& player) {
    if(!player.peer) return;
    const std::uint8_t error=0;samp::proto::BitStream response;response.write(&error,1);
    send_rpc(*player.peer,183,response);player.model_transfer={};
}

// Official: FUN_00488360 @ 0x00488360 (samp-server.exe)
bool GameLayer::begin_model_transfer(GamePlayer& player,const samp::pawn::CustomModelRecord& model) {
    auto& transfer=player.model_transfer;
    if(transfer.active || !player.peer) return false;
    transfer.path=(std::filesystem::path(models_directory_)/
        (transfer.type==2?model.spec.texture_file:model.spec.model_file)).string();
    transfer.size=transfer.type==2?model.texture_size:model.model_size;
    std::ifstream file(transfer.path,std::ios::binary);
    if(!file || transfer.size==0) {send_model_error(player);return false;}
    transfer.active=true;transfer.offset=0;transfer.final_block=false;
    transfer.compressed.clear();transfer.compressed_offset=0;
    const std::uint8_t begin=5;samp::proto::BitStream response;
    response.write(&begin,1);response.write(&transfer.type,1);response.write(&transfer.checksum,4);
    send_rpc(*player.peer,183,response);return true;
}

// Registration callbacks49ac60/49ad60 supply filetype1/2 and a raw CRC32.
// Official: FUN_00496f60 @ 0x00496f60 (samp-server.exe)
void GameLayer::request_model_download(GamePlayer& player,std::uint8_t type,std::uint32_t checksum) {
    if(!artwork_enabled_ || !player.in_use || !player.peer || (type!=1 && type!=2)) return;
    if(player.model_transfer.active) return;
    auto& transfer=player.model_transfer;transfer={};transfer.type=type;transfer.checksum=checksum;
    const samp::amx::cell args[]{player.id,type,std::bit_cast<samp::amx::cell>(checksum)};
    const auto allow=[&](samp::pawn::PawnVm& script) {
        if(!std::any_of(script.publics_.begin(),script.publics_.end(),[](const auto& p){return p.name=="OnPlayerRequestDownload";})) return true;
        samp::amx::cell result=1;
        return script.execute("OnPlayerRequestDownload",args,result)==0 && result!=0;
    };
    bool permitted=true;
    for(const auto& script:filterscripts_) if(!allow(*script)) {permitted=false;break;}
    if(permitted) permitted=allow(vm_);
    if(transfer.redirected) return;
    if(!permitted) {send_model_error(player);return;}
    const auto found=std::find_if(models_.begin(),models_.end(),[=](const auto& model){
        return (type==2?model.texture_crc:model.model_crc)==checksum;
    });
    if(found==models_.end()) {send_model_error(player);return;}
    begin_model_transfer(player,*found);
}

// Native properties: level1/dictionary65536/lc3/lp0/pb2/fastbytes32/thread1.
// Official: FUN_004880f0 @ 0x004880f0 (samp-server.exe)
bool GameLayer::read_model_block(GamePlayer& player) {
    auto& transfer=player.model_transfer;
    std::ifstream file(transfer.path,std::ios::binary);
    if(!file) return false;
    file.seekg(transfer.offset);if(!file) return false;
    std::array<std::uint8_t,4096> raw{};file.read(reinterpret_cast<char*>(raw.data()),raw.size());
    if(file.bad()) return false;
    const auto count=static_cast<std::size_t>(file.gcount());
    transfer.compressed.assign(4096,0);std::size_t encoded=4096,property_size=5;
    std::array<unsigned char,5> properties{};
    const auto result=LzmaCompress(transfer.compressed.data(),&encoded,raw.data(),count,
        properties.data(),&property_size,1,65536,3,0,2,32,1);
    if(result!=0 || encoded>4096 || properties!=std::array<unsigned char,5>{0x5d,0,0,1,0}) return false;
    transfer.compressed.resize(encoded);transfer.compressed_offset=0;
    transfer.block_size=static_cast<std::uint32_t>(count);
    transfer.offset+=transfer.block_size;transfer.final_block=count<4096;
    return true;
}

// Official: FUN_004884a0 @ 0x004884a0 (samp-server.exe)
void GameLayer::process_model_download(GamePlayer& player,std::size_t mtu) {
    auto& transfer=player.model_transfer;
    if(!player.in_use || !player.peer || !transfer.active || mtu<=40) return;
    if(transfer.compressed_offset==transfer.compressed.size()) {
        if(transfer.final_block) {
            const std::uint8_t end=2;samp::proto::BitStream payload;payload.write(&end,1);
            send_rpc(*player.peer,183,payload);transfer={};return;
        }
        if(!read_model_block(player)) {send_model_error(player);return;}
    }
    const auto count=std::min({mtu-40,transfer.compressed.size()-transfer.compressed_offset,std::size_t{4096}});
    const std::uint8_t operation=1;
    const std::uint8_t mode=transfer.compressed_offset+count==transfer.compressed.size()?2:1;
    const auto length=static_cast<std::uint32_t>(count);
    samp::proto::BitStream payload;payload.write(&operation,1);payload.write(&mode,1);
    payload.write(&transfer.block_size,4);payload.write(&length,4);
    payload.write(transfer.compressed.data()+transfer.compressed_offset,count);
    send_rpc(*player.peer,183,payload);transfer.compressed_offset+=count;
}

// Official: FUN_00497b10 @ 0x00497b10 (samp-server.exe)
void GameLayer::handle_model_finish(RakNetPeer& peer,const samp::proto::BitStream& payload) {
    if(!artwork_enabled_ || payload.numberOfBitsUsed_==0) return;
    auto found=std::find_if(players_.begin(),players_.end(),[&](const auto& p){return p.in_use && p.peer==&peer;});
    if(found==players_.end()) return;
    auto& player=*found;player.models_ready=true;
    samp::amx::cell result=1;
    // 497bc9's flag guards the initial object batch (465760), not OnPlayerConnect.
    if(!player.model_finish_reported) {
        player.model_finish_reported=true;
        for(const auto& object:objects_) if(object.active) send_object(player,object);
    }
    const samp::amx::cell args[]{player.id,player.virtual_world};
    for(const auto& script:filterscripts_) script->execute("OnPlayerFinishedDownloading",args,result);
    vm_.execute("OnPlayerFinishedDownloading",args,result);
    samp::proto::BitStream response;response.write1();send_rpc(peer,185,response);
}

} // namespace samp::server
