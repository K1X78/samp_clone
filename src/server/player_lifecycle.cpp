#include "samp/server/game_layer.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_set_string_api.hpp"
#include "pawn/amx_string_api.hpp"

#include <algorithm>
#include <bit>
#include <chrono>
#include <cstring>
#include <optional>

namespace samp::server {

// no standalone native entry
bool GameLayer::run_script_callback(samp::pawn::PawnVm& script, std::string_view name,
                                       std::span<const samp::amx::cell> args, samp::amx::cell& result) {
    if (!script.ok_ || !std::ranges::any_of(script.publics_, [name](const auto& entry) {
            return entry.name == name;
        })) return false;
    script.execute(name, args, result);
    return true;
}

// no standalone native entry
samp::amx::cell GameLayer::run_filterscripts(std::string_view name, std::span<const samp::amx::cell> args,
                                           FilterscriptStop stop, samp::amx::cell initial_result) {
    samp::amx::cell result = initial_result;
    for (std::size_t slot = 0; slot < 16 && slot < filterscripts_.size(); ++slot) {
        auto* script = filterscripts_[slot].get();
        if (!script || !run_script_callback(*script, name, args, result)) continue;
        if ((stop == FilterscriptStop::OnZero && result == 0) ||
            (stop == FilterscriptStop::OnNonzero && result != 0)) break;
    }
    return result;
}

// Official: FUN_0046ae10 @ 0x0046ae10 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_connect(int player) {
    const samp::amx::cell args[]{player};
    return run_filterscripts("OnPlayerConnect", args, FilterscriptStop::OnZero);
}

// Official: FUN_0046dbf0 @ 0x0046dbf0 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_connect(int player) {
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerConnect", args, result);
    return result;
}

// Official: FUN_0046ae90 @ 0x0046ae90 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_disconnect(int player, int reason) {
    const samp::amx::cell args[]{player, reason};
    return run_filterscripts("OnPlayerDisconnect", args, FilterscriptStop::OnZero);
}

// Official: FUN_0046dc50 @ 0x0046dc50 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_disconnect(int player, int reason) {
    const samp::amx::cell args[]{player, reason};
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerDisconnect", args, result);
    return result;
}

// Official: FUN_0046b000 @ 0x0046b000 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_spawn(int player) {
    const samp::amx::cell args[]{player};
    return run_filterscripts("OnPlayerSpawn", args, FilterscriptStop::OnZero);
}

// Official: FUN_0046dcb0 @ 0x0046dcb0 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_spawn(int player) {
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerSpawn", args, result);
    return result;
}

// Official: FUN_0046b080 @ 0x0046b080 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_death(int player, int killer, int reason) {
    const samp::amx::cell args[]{player, killer, reason};
    return run_filterscripts("OnPlayerDeath", args, FilterscriptStop::OnZero);
}

// Official: FUN_0046dd10 @ 0x0046dd10 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_death(int player, int killer, int reason) {
    const samp::amx::cell args[]{player, killer, reason};
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerDeath", args, result);
    return result;
}

// Official: FUN_0046b570 @ 0x0046b570 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_state_change(int player, int state, int previous) {
    const samp::amx::cell args[]{player, state, previous};
    return run_filterscripts("OnPlayerStateChange", args, FilterscriptStop::Never);
}

// Official: FUN_0046e250 @ 0x0046e250 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_state_change(int player, int state, int previous) {
    const auto slot = static_cast<std::uint16_t>(player);
    if (slot >= 1000 || slot >= players_.size() || !players_[slot].in_use) return 0;
    const samp::amx::cell args[]{player, state, previous};
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerStateChange", args, result);
    return result;
}

// Official: FUN_0046b830 @ 0x0046b830 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_key_change(int player, samp::amx::cell keys, samp::amx::cell previous) {
    const samp::amx::cell args[]{player, keys, previous};
    return run_filterscripts("OnPlayerKeyStateChange", args, FilterscriptStop::Never);
}

// Official: FUN_0046e530 @ 0x0046e530 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_key_change(int player, samp::amx::cell keys, samp::amx::cell previous) {
    const samp::amx::cell args[]{player, keys, previous};
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerKeyStateChange", args, result);
    return result;
}

// Official: FUN_0046b5f0 @ 0x0046b5f0 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_interior_change(int player, int interior, int previous) {
    const samp::amx::cell args[]{player, interior, previous};
    return run_filterscripts("OnPlayerInteriorChange", args, FilterscriptStop::Never);
}

// Official: FUN_0046e2f0 @ 0x0046e2f0 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_interior_change(int player, int interior, int previous) {
    const auto slot = static_cast<std::uint16_t>(player);
    if (slot >= 1000 || slot >= players_.size() || !players_[slot].in_use) return 0;
    const samp::amx::cell args[]{player, interior, previous};
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerInteriorChange", args, result);
    return result;
}

// Official: FUN_0046bfa0 @ 0x0046bfa0 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_stream_in(int player, int viewer) {
    const samp::amx::cell args[]{player, viewer};
    return run_filterscripts("OnPlayerStreamIn", args, FilterscriptStop::Never, 1);
}

// Official: FUN_0046ebc0 @ 0x0046ebc0 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_stream_in(int player, int viewer) {
    if (!vm_.ok_) return 0;
    const samp::amx::cell args[]{player, viewer};
    samp::amx::cell result = 1;
    run_script_callback(vm_, "OnPlayerStreamIn", args, result);
    return result;
}

// Official: FUN_0046c020 @ 0x0046c020 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_stream_out(int player, int viewer) {
    const samp::amx::cell args[]{player, viewer};
    return run_filterscripts("OnPlayerStreamOut", args, FilterscriptStop::Never, 1);
}

// Official: FUN_0046ec30 @ 0x0046ec30 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_stream_out(int player, int viewer) {
    if (!vm_.ok_) return 0;
    const samp::amx::cell args[]{player, viewer};
    samp::amx::cell result = 1;
    run_script_callback(vm_, "OnPlayerStreamOut", args, result);
    return result;
}

// Official: FUN_0046b380 @ 0x0046b380 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_request_class(int player, int class_id) {
    const samp::amx::cell args[]{player, class_id};
    return run_filterscripts("OnPlayerRequestClass", args, FilterscriptStop::Never, 1);
}

// Official: FUN_0046e010 @ 0x0046e010 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_request_class(int player, int class_id) {
    if (!vm_.ok_) return 0;
    const auto slot = static_cast<std::uint16_t>(player);
    if (slot >= 1000 || slot >= players_.size() || !players_[slot].in_use) return 1;
    const samp::amx::cell args[]{player, class_id};
    samp::amx::cell result = 1;
    run_script_callback(vm_, "OnPlayerRequestClass", args, result);
    return result;
}

// Official: FUN_0046b400 @ 0x0046b400 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_request_spawn(int player) {
    const samp::amx::cell args[]{player};
    return run_filterscripts("OnPlayerRequestSpawn", args, FilterscriptStop::OnZero, 1);
}

// Official: FUN_0046e0a0 @ 0x0046e0a0 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_request_spawn(int player) {
    if (!vm_.ok_) return 0;
    const auto slot = static_cast<std::uint16_t>(player);
    if (slot >= 1000 || slot >= players_.size() || !players_[slot].in_use) return 1;
    const samp::amx::cell args[]{player};
    samp::amx::cell result = 1;
    run_script_callback(vm_, "OnPlayerRequestSpawn", args, result);
    return result;
}

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
    const auto stream_position = [&] {
        if (player.in_use && player.joined && player.peer) update_player_markers(player, tick());
        update_streaming();
        if (player.in_use && player.joined && player.peer) {
            update_text_label_streaming(player);
            const float distance = config_ ? config_->getFloat("stream_distance", 200.0f) : 200.0f;
            update_actor_streaming(player, distance);
        }
    };
    if (player.position_correction_pending) {
        const auto& target = player.position_correction_target;
        const auto elapsed = std::bit_cast<std::int32_t>(tick() - player.position_correction_ms);
        const auto distance = config_ ? config_->getFloat("stream_distance", 200.f) : 200.f;
        if (elapsed < 5000 && player.distance_from_point(target[0], target[1], target[2]) > distance) return;
        player.position_correction_pending = false;
        stream_position();
    } else if (force_stream) {
        stream_position();
    } else {
        const auto interval = config_ ? config_->getInt("stream_rate", 1000) : 1000;
        if (std::bit_cast<std::int32_t>(tick() - player.last_stream_position_ms) > interval) {
            stream_position();
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
    filterscript_player_state_change(player.id, state, old);
    // Native reloads the live state after filterscripts, which may have
    // changed it through a nested state transition.
    gamemode_player_state_change(player.id, player.state, old);
}

// Official: FUN_0046c390 @ 0x0046c390 (samp-server.exe)
bool GameLayer::filterscript_player_click(std::span<const samp::amx::cell> args) {
    return run_filterscripts("OnPlayerClickPlayer", args, FilterscriptStop::OnNonzero) != 0;
}

// Official: FUN_0046ef30 @ 0x0046ef30 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_click(std::span<const samp::amx::cell> args) {
    if (!player_slot_is_occupied(static_cast<std::uint16_t>(args.front()))) return 0;
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerClickPlayer", args, result);
    return result;
}

// Registered at 0x0049d5d8, RPC ID at 0x004c00dc.
// Official: FUN_00499f70 @ 0x00499f70 (samp-server.exe)
void GameLayer::handle_player_click(RakNetPeer& peer, const samp::proto::BitStream& payload) {
    auto input = payload;
    std::uint16_t target = 0;
    std::uint8_t source = 0;
    if (!input.read(&target, sizeof(target)) || !player_slot_is_occupied(target) ||
        !input.read(&source, sizeof(source))) return;
    const auto player = std::ranges::find(players_, &peer, &GamePlayer::peer);
    if (player == players_.end() || !player_slot_is_occupied(static_cast<std::uint16_t>(player->id))) return;
    const samp::amx::cell args[]{player->id, target, source};
    filterscript_player_click(args);
    gamemode_player_click(args);
}

// Official: FUN_0046c800 @ 0x0046c800 (samp-server.exe)
bool GameLayer::filterscript_player_map_click(std::span<const samp::amx::cell> args) {
    return run_filterscripts("OnPlayerClickMap", args, FilterscriptStop::OnNonzero) != 0;
}

// Official: FUN_0046f2a0 @ 0x0046f2a0 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_map_click(std::span<const samp::amx::cell> args) {
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerClickMap", args, result);
    return result;
}

// Registered at 0x0049d561, RPC ID at 0x004bfb40.
// Official: FUN_00499720 @ 0x00499720 (samp-server.exe)
void GameLayer::handle_player_map_click(RakNetPeer& peer, const samp::proto::BitStream& payload) {
    const auto player = std::ranges::find(players_, &peer, &GamePlayer::peer);
    if (player == players_.end() || !player_slot_is_occupied(static_cast<std::uint16_t>(player->id))) return;
    auto input = payload;
    std::array<samp::amx::cell, 4> args{player->id};
    if (!input.read(args.data() + 1, sizeof(samp::amx::cell) * 3)) return;
    gamemode_player_map_click(args);
    filterscript_player_map_click(args);
}

// Official: FUN_0046ba10 @ 0x0046ba10 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_player_pickup(std::span<const samp::amx::cell> args) {
    return run_filterscripts("OnPlayerPickUpPickup", args, FilterscriptStop::Never);
}

// Official: FUN_0046e6f0 @ 0x0046e6f0 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_player_pickup(std::span<const samp::amx::cell> args) {
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerPickUpPickup", args, result);
    return result;
}

// Registered at 0x0049d594, RPC ID at 0x004c00ec.
// Official: FUN_00499b20 @ 0x00499b20 (samp-server.exe)
void GameLayer::handle_player_pickup(RakNetPeer& peer, const samp::proto::BitStream& payload) {
    if (gamemode_restarting_) return;
    const auto player = std::ranges::find(players_, &peer, &GamePlayer::peer);
    if (player == players_.end() || !player_slot_is_occupied(static_cast<std::uint16_t>(player->id))) return;
    auto input = payload;
    std::array<samp::amx::cell, 2> args{player->id};
    if (!input.read(&args[1], sizeof(args[1]))) return;
    gamemode_player_pickup(args);
    filterscript_player_pickup(args);
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
        filterscript_player_death(player.id, killer, reason);
        gamemode_player_death(player.id, killer, reason);
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
        gamemode_player_interior_change(player.id, interior, old);
        filterscript_player_interior_change(player.id, player.interior, old);
        return;
    }
}

// no standalone native entry
void GameLayer::run_script_text_callback(samp::pawn::PawnVm& script, std::string_view name,
                                         std::span<const samp::amx::cell> prefix, const char* text,
                                         samp::amx::cell& result, std::string* copy_back) {
    if (!script.ok_ || !std::ranges::any_of(script.publics_, [name](const auto& entry) {
            return entry.name == name;
        })) return;
    const auto cells = static_cast<int>(std::strlen(text) + 1);
    const auto previous_heap = script.hea_;
    const auto end = static_cast<std::int64_t>(previous_heap) + 4 * cells;
    if (!script.amx_.base || previous_heap < 0 || end + 64 > script.stk_) return;
    samp::amx::cell address = 0;
    samp::amx::cell* destination = nullptr;
    script.amx_.hea = previous_heap;
    script.amx_.stk = script.stk_;
    if (samp::pawn::amx_memory::allot(&script.amx_, cells, &address, &destination) != 0) return;
    script.hea_ = script.amx_.hea;
    samp::pawn::amx_string::set_string(destination, text, 0, 0, static_cast<std::uint32_t>(cells));
    std::array<samp::amx::cell, 5> args{};
    std::ranges::copy(prefix, args.begin());
    args[prefix.size()] = address;
    script.execute(name, std::span(args).first(prefix.size() + 1), result);
    if (copy_back) {
        std::vector<char> value(static_cast<std::size_t>(cells));
        samp::pawn::amx_string::get_string(value.data(), destination, 0, static_cast<std::uint32_t>(cells));
        copy_back->assign(value.data());
    }
    samp::pawn::amx_memory::release(&script.amx_, address);
    script.hea_ = script.amx_.hea;
}

// Official: FUN_0046c2a0 @ 0x0046c2a0 (samp-server.exe)
samp::amx::cell GameLayer::filterscript_dialog_response(const std::array<samp::amx::cell, 4>& prefix,
                                                       const char* text) {
    samp::amx::cell result = 0;
    for (std::size_t slot = 0; slot < 16 && slot < filterscripts_.size(); ++slot) {
        if (!filterscripts_[slot]) continue;
        run_script_text_callback(*filterscripts_[slot], "OnDialogResponse", prefix, text, result);
        if (result != 0) return 1;
    }
    return result;
}

// Official: FUN_0046ee60 @ 0x0046ee60 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_dialog_response(const std::array<samp::amx::cell, 4>& prefix,
                                                   const char* text) {
    const auto slot = static_cast<std::uint16_t>(prefix[0]);
    if (slot >= 1000 || slot >= players_.size() || !players_[slot].in_use) return 0;
    samp::amx::cell result = 0;
    run_script_text_callback(vm_, "OnDialogResponse", prefix, text, result);
    return result;
}

// Official: FUN_00499d50 @ 0x00499d50 (samp-server.exe)
void GameLayer::handle_dialog_response(RakNetPeer& peer, const samp::proto::BitStream& payload) {
    auto input = payload;
    std::uint16_t id = 0;
    std::uint8_t response = 0, length = 0;
    std::int16_t selection = 0;
    if (!input.read(&id, 2) || !input.read(&response, 1) ||
        !input.read(&selection, 2) || !input.read(&length, 1)) return;
    const auto player = std::ranges::find_if(players_, [&](const auto& entry) {
        return entry.in_use && entry.joined && entry.peer == &peer;
    });
    if (player == players_.end() || player->dialog_id != id) return;
    std::array<char, 129> text{};
    if (length > 0 && length <= 128 && !input.read(text.data(), length)) return;
    const std::array<samp::amx::cell, 4> prefix{player->id, id, response, selection};
    filterscript_dialog_response(prefix, text.data());
    gamemode_dialog_response(prefix, text.data());
}

// Official: FUN_00484080 @ 0x00484080 (samp-server.exe)
void GameLayer::notify_key_change(GamePlayer& player,std::uint32_t old_keys) {
    if(old_keys==player.keys) return;
    const auto before = std::bit_cast<samp::amx::cell>(old_keys);
    gamemode_player_key_change(player.id, std::bit_cast<samp::amx::cell>(player.keys), before);
    // 0x4840ba..0x4840d0 reloads current keys after the game-mode callback.
    filterscript_player_key_change(player.id, std::bit_cast<samp::amx::cell>(player.keys), before);
}

} // namespace samp::server
