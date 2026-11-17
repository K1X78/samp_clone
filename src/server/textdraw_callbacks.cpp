#include "samp/server/game_layer.hpp"

namespace samp::server {

// Official: FUN_0046cc10 @ 0x0046cc10 (samp-server.exe)
bool GameLayer::filterscript_textdraw_click(int player,int id) {
    const samp::amx::cell args[]{player,id};samp::amx::cell result=0;
    for(std::size_t slot=0;slot<16 && slot<filterscripts_.size();++slot) {
        if(!filterscripts_[slot]) continue;
        filterscripts_[slot]->execute("OnPlayerClickTextDraw",args,result);
        if(result!=0) return true;
    }
    return false;
}

// Official: FUN_0046cca0 @ 0x0046cca0 (samp-server.exe)
bool GameLayer::filterscript_player_textdraw_click(int player,int id) {
    const samp::amx::cell args[]{player,id};samp::amx::cell result=0;
    for(std::size_t slot=0;slot<16 && slot<filterscripts_.size();++slot) {
        if(!filterscripts_[slot]) continue;
        filterscripts_[slot]->execute("OnPlayerClickPlayerTextDraw",args,result);
        if(result!=0) return true;
    }
    return false;
}

// Official: FUN_0046f580 @ 0x0046f580 (samp-server.exe)
std::uint32_t GameLayer::gamemode_textdraw_click(int player,int id) {
    const samp::amx::cell args[]{player,id};samp::amx::cell result=0;
    vm_.execute("OnPlayerClickTextDraw",args,result);
    return static_cast<std::uint32_t>(result);
}

// Official: FUN_0046f5e0 @ 0x0046f5e0 (samp-server.exe)
std::uint32_t GameLayer::gamemode_player_textdraw_click(int player,int id) {
    const samp::amx::cell args[]{player,id};samp::amx::cell result=0;
    vm_.execute("OnPlayerClickPlayerTextDraw",args,result);
    return static_cast<std::uint32_t>(result);
}

// No standalone C export; RPC83 registration at 0x49d6e8 and the complete
// 0x49a9b0..0x49ab12 instructions establish this owner and its unchecked read.
// Official: FUN_0049a9b0 @ 0x0049a9b0 (samp-server.exe)
void GameLayer::handle_textdraw_click(RakNetPeer& peer,const samp::proto::BitStream& payload) {
    if(gamemode_restarting_ || payload.numberOfBitsUsed_==0 || payload.data_.empty()) return;
    for(std::size_t slot=0;slot<1000 && slot<players_.size();++slot) {
        if(!players_[slot].in_use || players_[slot].peer!=&peer) continue;
        auto input=payload;
        // The native borrows bits/8+1 bytes, including its padding byte.
        input.data_.resize(payload.numberOfBitsUsed_/8+1,0);
        input.numberOfBitsUsed_=input.data_.size()*8;input.readOffset_=0;
        std::uint16_t id=0xffff;
        static_cast<void>(input.read(&id,2)); // Failure retains the cancellation ID.
        const auto player=static_cast<int>(slot);
        if(id>=2048 && id<2304) {
            id=static_cast<std::uint16_t>(id-2048);
            if(!filterscript_player_textdraw_click(player,id)) gamemode_player_textdraw_click(player,id);
        } else if(!filterscript_textdraw_click(player,id)) gamemode_textdraw_click(player,id);
        return;
    }
}

} // namespace samp::server
