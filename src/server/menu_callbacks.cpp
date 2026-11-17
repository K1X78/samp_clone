#include "samp/server/game_layer.hpp"

namespace samp::server {

// Official: FUN_0046ba80 @ 0x0046ba80 (samp-server.exe)
std::uint32_t GameLayer::filterscript_menu_exit(int player) {
    const samp::amx::cell args[]{player};samp::amx::cell result=0;
    for(std::size_t slot=0;slot<16 && slot<filterscripts_.size();++slot)
        if(filterscripts_[slot]) filterscripts_[slot]->execute("OnPlayerExitedMenu",args,result);
    return static_cast<std::uint32_t>(result);
}

// Official: FUN_0046baf0 @ 0x0046baf0 (samp-server.exe)
std::uint32_t GameLayer::filterscript_menu_row(int player,int row) {
    const samp::amx::cell args[]{player,row};samp::amx::cell result=0;
    for(std::size_t slot=0;slot<16 && slot<filterscripts_.size();++slot)
        if(filterscripts_[slot]) filterscripts_[slot]->execute("OnPlayerSelectedMenuRow",args,result);
    return static_cast<std::uint32_t>(result);
}

// Official: FUN_0046e760 @ 0x0046e760 (samp-server.exe)
std::uint32_t GameLayer::gamemode_menu_exit(int player) {
    if(!vm_.ok_) return 0;
    const samp::amx::cell args[]{player};samp::amx::cell result=0;
    vm_.execute("OnPlayerExitedMenu",args,result);
    return static_cast<std::uint32_t>(result);
}

// Official: FUN_0046e7c0 @ 0x0046e7c0 (samp-server.exe)
std::uint32_t GameLayer::gamemode_menu_row(int player,int row) {
    if(!vm_.ok_) return 0;
    const samp::amx::cell args[]{player,row};samp::amx::cell result=0;
    vm_.execute("OnPlayerSelectedMenuRow",args,result);
    return static_cast<std::uint32_t>(result);
}

// No standalone C export; RPC132 registration and the complete
// 0x499c50..0x499d40 instructions establish the unvalidated row callback.
// Official: FUN_00499c50 @ 0x00499c50 (samp-server.exe)
void GameLayer::handle_menu_row(RakNetPeer& peer,const samp::proto::BitStream& payload) {
    if(payload.numberOfBitsUsed_==0 || payload.data_.empty()) return;
    std::uint16_t player=0xffff;
    if(peer.stage_==RakNetPeer::Stage::Authenticated || peer.stage_==RakNetPeer::Stage::Closing)
        player=peer.peer_index_;
    for(std::size_t slot=0;slot<players_.size();++slot)
        if(players_[slot].peer==&peer) {player=static_cast<std::uint16_t>(slot);break;}
    auto input=payload;input.data_.resize(payload.numberOfBitsUsed_/8+1,0);
    input.numberOfBitsUsed_=input.data_.size()*8;input.readOffset_=0;
    std::uint8_t row=0;static_cast<void>(input.read(&row,1));
    gamemode_menu_row(player,row);filterscript_menu_row(player,row);
}

// No standalone C export; RPC140 registration at 0x49d5b6 and the complete
// 0x4979b0..0x497a02 instructions accept even an empty exit notification.
// Official: FUN_004979b0 @ 0x004979b0 (samp-server.exe)
void GameLayer::handle_menu_exit(RakNetPeer& peer) {
    std::uint16_t player=0xffff;
    if(peer.stage_==RakNetPeer::Stage::Authenticated || peer.stage_==RakNetPeer::Stage::Closing)
        player=peer.peer_index_;
    for(std::size_t slot=0;slot<players_.size();++slot)
        if(players_[slot].peer==&peer) {player=static_cast<std::uint16_t>(slot);break;}
    gamemode_menu_exit(player);filterscript_menu_exit(player);
}

} // namespace samp::server
