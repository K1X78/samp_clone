#include "samp/server/game_layer.hpp"

namespace samp::server {

namespace {

constexpr auto find_interacting_player = [](GameLayer& game, RakNetPeer& peer) -> GamePlayer* {
    const auto slots = std::span(game.players_).first(std::min<std::size_t>(1000, game.players_.size()));
    const auto it = std::ranges::find_if(slots, [&](const auto& player) {
        return player.in_use && player.peer == &peer;
    });
    return it == slots.end() ? nullptr : &*it;
};

} // namespace

// Official: FUN_0046b930 @ 0x0046b930 (samp-server.exe)
std::uint32_t GameLayer::filterscript_object_moved(std::uint16_t id) {
    const samp::amx::cell args[]{id};
    return static_cast<std::uint32_t>(run_filterscripts("OnObjectMoved", args, FilterscriptStop::Never));
}

// Official: FUN_0046e620 @ 0x0046e620 (samp-server.exe)
std::uint32_t GameLayer::gamemode_object_moved(std::uint16_t id) {
    const samp::amx::cell args[]{id};
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnObjectMoved", args, result);
    return static_cast<std::uint32_t>(result);
}

// Official: FUN_0046b9a0 @ 0x0046b9a0 (samp-server.exe)
std::uint32_t GameLayer::filterscript_player_object_moved(std::uint16_t player_id, std::uint16_t object_id) {
    const samp::amx::cell args[]{player_id, object_id};
    return static_cast<std::uint32_t>(run_filterscripts("OnPlayerObjectMoved", args, FilterscriptStop::Never));
}

// Official: FUN_0046e680 @ 0x0046e680 (samp-server.exe)
std::uint32_t GameLayer::gamemode_player_object_moved(std::uint16_t player_id, std::uint16_t object_id) {
    const samp::amx::cell args[]{player_id, object_id};
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerObjectMoved", args, result);
    return static_cast<std::uint32_t>(result);
}

// Official: FUN_00465560 @ 0x00465560 (samp-server.exe)
void GameLayer::update_objects(float elapsed_seconds) {
    const auto players = samp::pawn::live_player_slots(*this);
    for (std::size_t slot = 0; slot < players.size(); ++slot) {
        if (!players[slot].in_use) continue;
        const auto player_id = static_cast<std::uint16_t>(slot);
        std::uint16_t next_id = 0;
        for (;;) {
            const auto owner = player_objects_.find(player_id);
            if (owner == player_objects_.end()) break;
            const auto object = owner->second.lower_bound(next_id);
            if (object == owner->second.end()) break;
            const auto object_id = object->first;
            // A completion callback may destroy this object or disconnect its owner.
            next_id = static_cast<std::uint16_t>(object_id + 1);
            if (object->second.advance_move(elapsed_seconds)) {
                filterscript_player_object_moved(player_id, object_id);
                gamemode_player_object_moved(player_id, object_id);
            }
        }
    }

    const auto object_count = std::min(objects_.size(), player_object_reservations_.size());
    for (std::size_t slot = 0; slot < object_count; ++slot) {
        auto& object = objects_[slot];
        if (object.active && player_object_reservations_[slot] == 0 && object.advance_move(elapsed_seconds)) {
            const auto id = static_cast<std::uint16_t>(slot);
            filterscript_object_moved(id);
            gamemode_object_moved(id);
        }
    }
}

// no standalone native entry
bool GameLayer::run_object_interaction_filterscripts(std::string_view name,
                                                     std::span<const samp::amx::cell> args) {
    samp::amx::cell result = 0;
    for (std::size_t slot = 0; slot < 16 && slot < filterscripts_.size(); ++slot) {
        auto* script = filterscripts_[slot].get();
        if (script && run_script_callback(*script, name, args, result) && result != 0) return true;
    }
    return false;
}

// Official: FUN_0046ca20 @ 0x0046ca20 (samp-server.exe)
bool GameLayer::filterscript_object_edit(std::span<const samp::amx::cell> args) {
    return run_object_interaction_filterscripts("OnPlayerEditObject", args);
}

// Official: FUN_0046c8a0 @ 0x0046c8a0 (samp-server.exe)
bool GameLayer::filterscript_attached_object_edit(std::span<const samp::amx::cell> args) {
    return run_object_interaction_filterscripts("OnPlayerEditAttachedObject", args);
}

// Official: FUN_0046cb30 @ 0x0046cb30 (samp-server.exe)
bool GameLayer::filterscript_object_selection(std::span<const samp::amx::cell> args) {
    return run_object_interaction_filterscripts("OnPlayerSelectObject", args);
}

// Official: FUN_0046f430 @ 0x0046f430 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_object_edit(std::span<const samp::amx::cell> args) {
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerEditObject", args, result);
    return result;
}

// Official: FUN_0046f310 @ 0x0046f310 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_attached_object_edit(std::span<const samp::amx::cell> args) {
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerEditAttachedObject", args, result);
    return result;
}

// Official: FUN_0046f4f0 @ 0x0046f4f0 (samp-server.exe)
samp::amx::cell GameLayer::gamemode_object_selection(std::span<const samp::amx::cell> args) {
    samp::amx::cell result = 0;
    run_script_callback(vm_, "OnPlayerSelectObject", args, result);
    return result;
}

// RPC 116 is registered at 0x0049d6b5.
// Official: FUN_0049a400 @ 0x0049a400 (samp-server.exe)
void GameLayer::handle_attached_object_edit(RakNetPeer& peer, const samp::proto::BitStream& payload) {
    const auto* player = find_interacting_player(*this, peer);
    if (gamemode_restarting_ || !player || !player->object_edit_enabled) return;

    auto input = payload;
    std::array<samp::amx::cell, 15> fields{};
    if (!input.read(fields.data(), sizeof(fields))) return;
    std::array<samp::amx::cell, 14> args{player->id};
    std::copy_n(fields.begin(), args.size() - 1, args.begin() + 1);
    if (!filterscript_attached_object_edit(args)) gamemode_attached_object_edit(args);
}

// RPC 117 registration at 0x0049d6c6 and complete 0x0049a570..0x0049a7b4 instructions.
// Official: FUN_0049a570 @ 0x0049a570 (samp-server.exe)
void GameLayer::handle_object_edit(RakNetPeer& peer, const samp::proto::BitStream& payload) {
    const auto* player = find_interacting_player(*this, peer);
    if (gamemode_restarting_ || !player || !player->object_edit_enabled || payload.numberOfBitsUsed_ < 241) return;

    auto input = payload;
    const bool player_owned = input.readBit();
    const auto player_id = static_cast<std::uint16_t>(player->id);
    std::uint16_t id = 0;
    std::array<samp::amx::cell, 10> args{player_id, player_owned};
    const auto fields = std::span(args).subspan(3);
    if (!input.read(&id, sizeof(id)) || !input.read(fields.data(), fields.size_bytes())) return;
    if (player_owned ? !find_player_object(player_id, id) : !find_global_object(id)) return;
    args[2] = id;
    if (!filterscript_object_edit(args)) gamemode_object_edit(args);
}

// RPC 27 registration at 0x0049d6d7 and complete 0x0049a7c0..0x0049a9a3 instructions.
// Official: FUN_0049a7c0 @ 0x0049a7c0 (samp-server.exe)
void GameLayer::handle_object_selection(RakNetPeer& peer, const samp::proto::BitStream& payload) {
    const auto* player = find_interacting_player(*this, peer);
    if (gamemode_restarting_ || !player) return;

    auto input = payload;
    const auto player_id = static_cast<std::uint16_t>(player->id);
    std::uint32_t request_type = 0;
    std::uint16_t id = 0;
    std::array<samp::amx::cell, 7> args{player_id};
    const auto fields = std::span(args).subspan(3);
    if (!input.read(&request_type, sizeof(request_type)) || !input.read(&id, sizeof(id)) ||
        !input.read(fields.data(), fields.size_bytes())) return;
    if (find_global_object(id)) args[1] = 1;
    else if (find_player_object(player_id, id)) args[1] = 2;
    else return;
    args[2] = id;
    if (!filterscript_object_selection(args)) gamemode_object_selection(args);
}

// Official: FUN_0049dfc0 @ 0x0049dfc0 (samp-server.exe)
void GameLayer::send_object(GamePlayer& player,const samp::pawn::ObjectNativeState& object) {
    if(!player.peer || !object.active || object.id>=2000) return;
    samp::proto::BitStream payload;
    payload.write(&object.id,2);payload.write(&object.model,4);
    payload.write(object.position.data(),12);payload.write(object.rotation.data(),12);
    payload.write(&object.draw_distance,4);
    const std::uint8_t no_camera_collision=object.no_camera_collision;
    const std::uint8_t no_materials=0;
    payload.write(&no_camera_collision, 1);
    payload.write(&object.attached_vehicle, 2);
    payload.write(&object.attached_object, 2);
    if (object.attached_vehicle != 0xffff || object.attached_object != 0xffff) {
        payload.write(object.attachment_offset.data(), 12);
        payload.write(object.attachment_rotation.data(), 12);
        payload.write(&object.attachment_sync_rotation, 1);
    }
    payload.write(&no_materials, 1);
    send_rpc(*player.peer,44,payload);
}

} // namespace samp::server
