#include "samp/server/game_layer.hpp"

#include <algorithm>
#include <bit>
#include <chrono>
#include <optional>

namespace samp::server {

// Official: FUN_0046b670 @ 0x0046b670 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_enter_checkpoint(int player) {
    static constexpr std::string_view name = "OnPlayerEnterCheckpoint";
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    for (const auto& script : filterscripts_)
        if (script && std::ranges::any_of(script->publics_, [](const auto& entry) { return entry.name == name; }))
            script->execute(name, args, result);
    return result;
}

// Official: FUN_0046b6e0 @ 0x0046b6e0 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_leave_checkpoint(int player) {
    static constexpr std::string_view name = "OnPlayerLeaveCheckpoint";
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    for (const auto& script : filterscripts_)
        if (script && std::ranges::any_of(script->publics_, [](const auto& entry) { return entry.name == name; }))
            script->execute(name, args, result);
    return result;
}

// Official: FUN_0046b750 @ 0x0046b750 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_enter_race_checkpoint(int player) {
    static constexpr std::string_view name = "OnPlayerEnterRaceCheckpoint";
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    for (const auto& script : filterscripts_)
        if (script && std::ranges::any_of(script->publics_, [](const auto& entry) { return entry.name == name; }))
            script->execute(name, args, result);
    return result;
}

// Official: FUN_0046b7c0 @ 0x0046b7c0 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_leave_race_checkpoint(int player) {
    static constexpr std::string_view name = "OnPlayerLeaveRaceCheckpoint";
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    for (const auto& script : filterscripts_)
        if (script && std::ranges::any_of(script->publics_, [](const auto& entry) { return entry.name == name; }))
            script->execute(name, args, result);
    return result;
}

// Official: FUN_0046e390 @ 0x0046e390 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_enter_checkpoint(int player) {
    static constexpr std::string_view name = "OnPlayerEnterCheckpoint";
    if (!vm_.ok_ || !is_player_connected(player)) return 0;
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    if (std::ranges::any_of(vm_.publics_, [](const auto& entry) { return entry.name == name; }))
        vm_.execute(name, args, result);
    return result;
}

// Official: FUN_0046e410 @ 0x0046e410 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_leave_checkpoint(int player) {
    static constexpr std::string_view name = "OnPlayerLeaveCheckpoint";
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    if (vm_.ok_ && std::ranges::any_of(vm_.publics_, [](const auto& entry) { return entry.name == name; }))
        vm_.execute(name, args, result);
    return result;
}

// Official: FUN_0046e470 @ 0x0046e470 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_enter_race_checkpoint(int player) {
    static constexpr std::string_view name = "OnPlayerEnterRaceCheckpoint";
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    if (vm_.ok_ && std::ranges::any_of(vm_.publics_, [](const auto& entry) { return entry.name == name; }))
        vm_.execute(name, args, result);
    return result;
}

// Official: FUN_0046e4d0 @ 0x0046e4d0 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_leave_race_checkpoint(int player) {
    static constexpr std::string_view name = "OnPlayerLeaveRaceCheckpoint";
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    if (vm_.ok_ && std::ranges::any_of(vm_.publics_, [](const auto& entry) { return entry.name == name; }))
        vm_.execute(name, args, result);
    return result;
}

// Official: FUN_00486620 @ 0x00486620 (samp-server.exe)
void GameLayer::update_player_position(GamePlayer& player, float x, float y, float z, bool force_stream) {
    player.x = x;
    player.y = y;
    player.z = z;
    const auto tick = [] {
        return static_cast<std::uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
    };
    if (player.position_correction_pending) {
        const auto& target = player.position_correction_target;
        const auto elapsed = std::bit_cast<std::int32_t>(tick() - player.position_correction_ms);
        const auto distance = config_ ? config_->getFloat("stream_distance", 200.f) : 200.f;
        if (elapsed < 5000 && player.distance_from_point(target[0], target[1], target[2]) > distance) return;
        player.position_correction_pending = false;
        update_streaming();
    } else if (force_stream) {
        update_streaming();
    } else {
        const auto interval = config_ ? config_->getInt("stream_rate", 1000) : 1000;
        if (std::bit_cast<std::int32_t>(tick() - player.last_stream_position_ms) > interval) {
            update_streaming();
            player.last_stream_position_ms = tick();
        }
    }

    const auto checkpoint_transition = [&](auto& checkpoint) -> std::optional<bool> {
        if (!checkpoint.enabled) return std::nullopt;
        const auto& position = checkpoint.position;
        const bool inside = player.distance_from_point(position[0], position[1], position[2]) < checkpoint.radius;
        if (inside == checkpoint.inside) return std::nullopt;
        checkpoint.inside = inside;
        return inside;
    };
    const auto id = player.id;
    if (const auto entered = checkpoint_transition(player.checkpoint)) {
        if (*entered) {
            filterscript_enter_checkpoint(id);
            gamemode_enter_checkpoint(id);
        } else {
            filterscript_leave_checkpoint(id);
            gamemode_leave_checkpoint(id);
        }
    }
    if (const auto entered = checkpoint_transition(player.race_checkpoint)) {
        if (*entered) {
            filterscript_enter_race_checkpoint(id);
            gamemode_enter_race_checkpoint(id);
        } else {
            filterscript_leave_race_checkpoint(id);
            gamemode_leave_race_checkpoint(id);
        }
    }
}

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
