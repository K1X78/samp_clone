#include "samp/server/game_layer.hpp"

namespace samp::server {

// Official: FUN_00483630 @ 0x00483630 (samp-server.exe)
void GameLayer::set_player_state(GamePlayer& player, std::uint8_t state) {
    if (player.state == state) return;
    const auto old = player.state;
    player.state = state;
    samp::amx::cell args[]{player.id, state, old};
    samp::amx::cell result = 1;
    for (const auto& script : filterscripts_)
        script->execute("OnPlayerStateChange", args, result);
    // Native reloads the live state after filterscripts, which may have
    // changed it through a nested state transition.
    args[0] = player.id;
    args[1] = player.state;
    vm_.execute("OnPlayerStateChange", args, result);
}

// Official: FUN_00498950 @ 0x00498950 (samp-server.exe)
void GameLayer::handle_player_death(RakNetPeer& peer, const samp::proto::BitStream& payload) {
    auto input = payload;
    std::uint8_t reason = 0;
    std::uint16_t killer = 0xffff;
    if (!input.read(&reason, 1) || !input.read(&killer, 2)) return;
    for (auto& player : players_) {
        if (!player.in_use || player.peer != &peer) continue;
        set_player_state(player, 7);
        const samp::amx::cell args[]{player.id, killer, reason};
        samp::amx::cell result = 1;
        for (const auto& script : filterscripts_)
            script->execute("OnPlayerDeath", args, result);
        vm_.execute("OnPlayerDeath", args, result);
        samp::proto::BitStream death;
        const auto id = static_cast<std::uint16_t>(player.id);
        death.write(&id, 2);
        for (auto& receiver : players_)
            if (receiver.in_use && receiver.peer && receiver.id != player.id)
                send_rpc(*receiver.peer, 166, death);
        return;
    }
}

// Official: FUN_004992a0 @ 0x004992a0 (samp-server.exe)
void GameLayer::handle_player_interior(RakNetPeer& peer,const samp::proto::BitStream& payload) {
    auto input=payload;std::uint8_t interior=0;if(!input.read(&interior,1)) return;
    for(auto& player:players_) {
        if(!player.in_use || player.peer!=&peer) continue;
        const auto old=player.interior;player.interior=interior;
        const samp::amx::cell args[]{player.id,interior,old};samp::amx::cell result=1;
        vm_.execute("OnPlayerInteriorChange",args,result);
        for(const auto& script:filterscripts_) script->execute("OnPlayerInteriorChange",args,result);
        return;
    }
}

// Official: FUN_00484080 @ 0x00484080 (samp-server.exe)
void GameLayer::notify_key_change(GamePlayer& player,std::uint32_t old_keys) {
    if(old_keys==player.keys) return;
    samp::amx::cell args[]{player.id,static_cast<samp::amx::cell>(player.keys),static_cast<samp::amx::cell>(old_keys)};
    samp::amx::cell result=1;
    vm_.execute("OnPlayerKeyStateChange",args,result);
    // 0x4840ba..0x4840d0 reloads current keys after the game-mode callback.
    args[0] = player.id;
    args[1] = static_cast<samp::amx::cell>(player.keys);
    for(const auto& script:filterscripts_) script->execute("OnPlayerKeyStateChange",args,result);
}

} // namespace samp::server
