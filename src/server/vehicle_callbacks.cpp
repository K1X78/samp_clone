#include "samp/server/game_layer.hpp"

#include <algorithm>
#include <bit>

namespace samp::server {

using samp::amx::cell;
using samp::pawn::VehicleAppearanceEvent;
using samp::proto::BitStream;

// Shared callback dispatch with no standalone native entry.
cell GameLayer::run_vehicle_filterscripts(std::string_view name, std::span<const cell> args,
                                          bool any_veto) {
    cell result = 1;
    bool accepted = true;
    const auto limit = std::min<std::size_t>(16, filterscripts_.size());
    for (std::size_t slot = 0; slot < limit; ++slot) {
        auto* script = filterscripts_[slot].get();
        if (script && run_script_callback(*script, name, args, result) && result == 0)
            accepted = false;
    }
    return any_veto ? static_cast<cell>(accepted) : result;
}

// Official: FUN_0046bc00 @ 0x0046bc00 (samp-server.exe)
cell GameLayer::filterscript_vehicle_mod(std::span<const cell> args) {
    return run_vehicle_filterscripts("OnVehicleMod", args, true);
}

// Official: FUN_0046bb60 @ 0x0046bb60 (samp-server.exe)
cell GameLayer::filterscript_vehicle_respray(std::span<const cell> args) {
    return run_vehicle_filterscripts("OnVehicleRespray", args, false);
}

// Official: FUN_0046bd40 @ 0x0046bd40 (samp-server.exe)
cell GameLayer::filterscript_vehicle_paintjob(std::span<const cell> args) {
    return run_vehicle_filterscripts("OnVehiclePaintjob", args, false);
}

// Official: FUN_0046bca0 @ 0x0046bca0 (samp-server.exe)
cell GameLayer::filterscript_vehicle_mod_shop(std::span<const cell> args) {
    return run_vehicle_filterscripts("OnEnterExitModShop", args, true);
}

// Official: FUN_0046e8b0 @ 0x0046e8b0 (samp-server.exe)
cell GameLayer::gamemode_vehicle_mod(std::span<const cell> args) {
    if (!vm_.ok_) return 0;
    cell result = 1;
    run_script_callback(vm_, "OnVehicleMod", args, result);
    return result;
}

// Official: FUN_0046e830 @ 0x0046e830 (samp-server.exe)
cell GameLayer::gamemode_vehicle_respray(std::span<const cell> args) {
    if (!vm_.ok_) return 0;
    cell result = 1;
    run_script_callback(vm_, "OnVehicleRespray", args, result);
    return result;
}

// Official: FUN_0046e9b0 @ 0x0046e9b0 (samp-server.exe)
cell GameLayer::gamemode_vehicle_paintjob(std::span<const cell> args) {
    if (!vm_.ok_) return 0;
    cell result = 1;
    run_script_callback(vm_, "OnVehiclePaintjob", args, result);
    return result;
}

// Official: FUN_0046e930 @ 0x0046e930 (samp-server.exe)
cell GameLayer::gamemode_vehicle_mod_shop(std::span<const cell> args) {
    if (!vm_.ok_) return 0;
    cell result = 1;
    run_script_callback(vm_, "OnEnterExitModShop", args, result);
    return result;
}

// Virtual host adapter with no standalone native entry.
bool GameLayer::allow_vehicle_appearance(VehicleAppearanceEvent event, std::uint16_t sender,
                                         std::uint16_t vehicle, std::uint32_t first, std::uint32_t second) {
    const std::array<cell, 4> args{sender, vehicle, std::bit_cast<cell>(first), std::bit_cast<cell>(second)};
    const auto first_three = std::span(args).first<3>();
    switch (event) {
    case VehicleAppearanceEvent::Paintjob:
        return gamemode_vehicle_paintjob(first_three) && filterscript_vehicle_paintjob(first_three);
    case VehicleAppearanceEvent::Component:
        return gamemode_vehicle_mod(first_three) && filterscript_vehicle_mod(first_three);
    case VehicleAppearanceEvent::Respray:
        return gamemode_vehicle_respray(args) && filterscript_vehicle_respray(args);
    case VehicleAppearanceEvent::ModShop:
        return false;
    }
    return false;
}

// Official: FUN_00485eb0 @ 0x00485eb0 (samp-server.exe)
void GameLayer::set_vehicle_mod_shop(GamePlayer& player, std::uint16_t vehicle, std::uint32_t enter,
                                    std::uint32_t interior) {
    player.in_mod_shop = enter != 0;
    const auto sender = static_cast<std::uint16_t>(player.id);
    const cell args[]{sender, std::bit_cast<cell>(enter), std::bit_cast<cell>(interior)};
    filterscript_vehicle_mod_shop(args);
    gamemode_vehicle_mod_shop(args);

    if (!player.in_use) return;
    const std::array<std::uint32_t, 4> values{
        static_cast<std::uint32_t>(VehicleAppearanceEvent::ModShop), vehicle, enter, interior};
    BitStream payload;
    payload.write(&sender, sizeof(sender));
    payload.write(values.data(), sizeof(values));
    const auto highest = std::clamp(player_pool_highest_, -1, 999);
    const auto limit = std::min(players_.size(), static_cast<std::size_t>(highest + 1));
    for (std::size_t id = 0; id < limit; ++id) {
        auto& viewer = players_[id];
        if (id != sender && viewer.in_use && viewer.peer && sender < viewer.streamed_to.size() &&
            viewer.streamed_to[sender]) {
            send_rpc(*viewer.peer, 96, payload);
        }
    }
}

// RPC 96 registration at 0x0049d53f passes this callback beginning at 0x00499510.
// Official: FUN_00499510 @ 0x00499510 (samp-server.exe)
void GameLayer::handle_vehicle_appearance(RakNetPeer& peer, const BitStream& payload) {
    if (gamemode_restarting_) return;
    auto input = payload;
    std::uint32_t wire_vehicle = 0, first = 0, second = 0, wire_event = 0;
    if (!input.read(&wire_vehicle, sizeof(wire_vehicle)) || !input.read(&first, sizeof(first)) ||
        !input.read(&second, sizeof(second)) || !input.read(&wire_event, sizeof(wire_event))) return;

    const auto id = static_cast<std::uint16_t>(wire_vehicle);
    if (id >= 2000 || id >= vehicles_.size() || !vehicles_[id].active) return;
    const auto players = std::span(players_).first(std::min<std::size_t>(1000, players_.size()));
    const auto player = std::ranges::find_if(players, [&peer](const auto& slot) {
        return slot.in_use && slot.peer == &peer;
    });
    if (player == players.end() || (!player->is_npc && peer.stage_ != RakNetPeer::Stage::Authenticated) ||
        player->vehicle_id != id || id >= player->streamed_vehicles.size() || !player->streamed_vehicles[id])
        return;

    const auto sender = static_cast<std::uint16_t>(player->id);
    auto& vehicle = vehicles_[id];
    switch (static_cast<VehicleAppearanceEvent>(wire_event)) {
    case VehicleAppearanceEvent::Paintjob:
        apply_vehicle_paintjob(vehicle, sender, static_cast<std::uint8_t>(first));
        break;
    case VehicleAppearanceEvent::Component:
        apply_vehicle_component(vehicle, sender, static_cast<std::uint16_t>(first));
        break;
    case VehicleAppearanceEvent::Respray:
        apply_vehicle_respray(vehicle, sender, first, second);
        break;
    case VehicleAppearanceEvent::ModShop:
        set_vehicle_mod_shop(*player, id, first, second);
        break;
    }
}

// Official: FUN_0046c640 @ 0x0046c640 (samp-server.exe)
cell GameLayer::filterscript_vehicle_damage(std::uint16_t vehicle, std::uint16_t sender) {
    const cell args[]{vehicle, sender};
    cell result = 0;
    const auto limit = std::min<std::size_t>(16, filterscripts_.size());
    for (std::size_t slot = 0; slot < limit; ++slot) {
        auto* script = filterscripts_[slot].get();
        if (script && run_script_callback(*script, "OnVehicleDamageStatusUpdate", args, result) && result != 0)
            return 1;
    }
    return result;
}

// Official: FUN_0046f150 @ 0x0046f150 (samp-server.exe)
cell GameLayer::gamemode_vehicle_damage(std::uint16_t vehicle, std::uint16_t sender) {
    const cell args[]{vehicle, sender};
    cell result = 0;
    run_script_callback(vm_, "OnVehicleDamageStatusUpdate", args, result);
    return result;
}

// Virtual host adapter with no standalone native entry.
void GameLayer::notify_vehicle_damage(std::uint16_t vehicle, std::uint16_t sender) {
    filterscript_vehicle_damage(vehicle, sender);
    gamemode_vehicle_damage(vehicle, sender);
}

// RPC 106 registration at 0x0049d660 supplies this callback.
// Official: FUN_00498a70 @ 0x00498a70 (samp-server.exe)
void GameLayer::handle_vehicle_damage(RakNetPeer& peer, const BitStream& payload) {
    if (gamemode_restarting_) return;
    auto input = payload;
    std::uint16_t id = 0;
    std::uint32_t panels = 0, doors = 0;
    std::uint8_t lights = 0, tires = 0;
    if (!input.read(&id, sizeof(id)) || !input.read(&panels, sizeof(panels)) ||
        !input.read(&doors, sizeof(doors)) || !input.read(&lights, sizeof(lights)) ||
        !input.read(&tires, sizeof(tires))) return;
    if (id >= 2000 || id >= vehicles_.size() || !vehicles_[id].active) return;
    auto& vehicle = vehicles_[id];
    if (vehicle.driver < 0 || vehicle.driver >= 1000 ||
        static_cast<std::size_t>(vehicle.driver) >= players_.size()) return;
    const auto& player = players_[vehicle.driver];
    if (player.in_use && player.peer == &peer) {
        apply_vehicle_damage(vehicle, static_cast<std::uint16_t>(vehicle.driver), panels, doors,
                             lights, tires);
    }
}

// Official: FUN_0046d000 @ 0x0046d000 (samp-server.exe)
cell GameLayer::filterscript_vehicle_siren(std::uint16_t sender, std::uint16_t vehicle,
                                           std::uint8_t signal) {
    const cell args[]{sender, vehicle, signal};
    return run_filterscripts("OnVehicleSirenStateChange", args, FilterscriptStop::Never);
}

// Official: FUN_0046f7c0 @ 0x0046f7c0 (samp-server.exe)
cell GameLayer::gamemode_vehicle_siren(std::uint16_t sender, std::uint16_t vehicle,
                                       std::uint8_t signal) {
    const cell args[]{sender, vehicle, signal};
    cell result = 1;
    run_script_callback(vm_, "OnVehicleSirenStateChange", args, result);
    return result;
}

// Official: FUN_00489a70 @ 0x00489a70 (samp-server.exe)
void GameLayer::update_vehicle_siren(GameVehicle& vehicle, std::uint16_t sender, std::uint8_t signal) {
    if (signal == vehicle.last_siren_signal) return;
    vehicle.last_siren_signal = signal;
    vehicle.parameters[7] = static_cast<std::uint8_t>(signal != 0);
    if (filterscript_vehicle_siren(sender, vehicle.id, signal) == 0 && vehicle.active)
        gamemode_vehicle_siren(sender, vehicle.id, vehicle.last_siren_signal);
}

} // namespace samp::server
