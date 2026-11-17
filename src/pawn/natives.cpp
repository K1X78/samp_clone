#include "pawn/natives.hpp"

#include "pawn/db_natives.hpp"
#include "samp/proto/bitstream.hpp"
#include "samp/proto/rpc_ids.hpp"
#include "pawn/core_natives.hpp"
#include "pawn/float_natives.hpp"
#include "pawn/property_natives.hpp"
#include "pawn/string_natives.hpp"
#include "pawn/time_natives.hpp"
#include "pawn/format_cells.hpp"
#include "pawn/file_natives.hpp"
#include "pawn/variable_natives.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_set_string_api.hpp"

#include <chrono>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <map>
#include <algorithm>
#include <bit>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <utility>

namespace samp::pawn {

namespace {

using samp::amx::cell;

constexpr auto find_player = [](NativeHost& host, std::span<const cell> args) -> PlayerNativeState* {
    if (args.empty()) return nullptr;
    const auto index = static_cast<std::uint16_t>(args.front());
    if (index >= 1000 || index >= host.players_.size() || !host.players_[index].in_use) {
        return nullptr;
    }
    return &host.players_[index];
};

// Official: FUN_00470bc0 @ 0x00470bc0 (samp-server.exe)
cell is_player_admin(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player && player->is_admin;
}

// Official: FUN_004722a0 @ 0x004722a0 (samp-server.exe)
cell get_player_camera_target_object(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->camera_targets[0] : 0xffff;
}

// Official: FUN_004722f0 @ 0x004722f0 (samp-server.exe)
cell get_player_camera_target_vehicle(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->camera_targets[1] : 0xffff;
}

// Official: FUN_00472340 @ 0x00472340 (samp-server.exe)
cell get_player_camera_target_player(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->camera_targets[2] : 0xffff;
}

// Official: FUN_00472390 @ 0x00472390 (samp-server.exe)
cell get_player_camera_target_actor(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->camera_targets[3] : 0xffff;
}

// Official: FUN_00471460 @ 0x00471460 (samp-server.exe)
cell get_player_pool_size(NativeHost& host, std::span<const cell>) {
    // The pool updates this value after its join and quit callbacks.
    return host.player_pool_highest_;
}

// Official: FUN_00473230 @ 0x00473230 (samp-server.exe)
cell get_tick_count(NativeHost&, std::span<const cell>) {
    using namespace std::chrono;
    const auto ticks = duration_cast<milliseconds>(steady_clock::now().time_since_epoch());
    return std::bit_cast<cell>(static_cast<std::uint32_t>(ticks.count()));
}

// Official: FUN_00474b30 @ 0x00474b30 (samp-server.exe)
cell get_gravity(NativeHost& host, std::span<const cell>) {
    return std::bit_cast<cell>(host.gravity_);
}

// Official: FUN_00473460 @ 0x00473460 (samp-server.exe)
cell show_name_tags(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    host.show_name_tags_ = args.front() != 0;
    return 1;
}

// Official: FUN_00473480 @ 0x00473480 (samp-server.exe)
cell show_player_markers(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    host.player_marker_mode_ = args.front();
    return 1;
}

// Official: FUN_00475eb0 @ 0x00475eb0 (samp-server.exe)
cell enable_zone_names(NativeHost& host, std::span<const cell>) {
    constexpr auto warning = "[warning] EnableZoneNames() is removed since 0.3";
    if (host.log_message_) {
        host.log_message_(warning);
    } else {
        std::puts(warning);
    }
    return 1;
}

// Official: FUN_004777f0 @ 0x004777f0 (samp-server.exe)
cell disable_interior_enter_exits(NativeHost& host, std::span<const cell>) {
    host.interior_enter_exits_disabled_ = true;
    return 1;
}

// Official: FUN_00477800 @ 0x00477800 (samp-server.exe)
cell set_name_tag_draw_distance(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    host.name_tag_draw_distance_ = std::bit_cast<float>(args.front());
    return 1;
}

// Official: FUN_00472e00 @ 0x00472e00 (samp-server.exe)
cell get_player_state(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->state : 0;
}

// Official: FUN_00473c40 @ 0x00473c40 (samp-server.exe)
cell get_player_weapon(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? (player->weapon & 0x3f) : -1;
}

// Official: FUN_00472b40 @ 0x00472b40 (samp-server.exe)
cell get_player_money(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->money : 0;
}

// Official: FUN_00472ad0 @ 0x00472ad0 (samp-server.exe)
cell set_player_score(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    auto* player = find_player(host, args);
    if (!player) return 0;
    player->score = args[1];
    return 1;
}

// Official: FUN_00472b10 @ 0x00472b10 (samp-server.exe)
cell get_player_score(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->score : 0;
}

// Official: FUN_00478120 @ 0x00478120 (samp-server.exe)
cell is_player_npc(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player && player->is_npc;
}

// Official: FUN_00472010 @ 0x00472010 (samp-server.exe)
cell get_player_interior(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->interior : 0;
}

// Official: FUN_00470f30 @ 0x00470f30 (samp-server.exe)
cell get_player_virtual_world(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->virtual_world : 0;
}

// Official: FUN_00471d40 @ 0x00471d40 (samp-server.exe)
cell get_player_vehicle_id(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->vehicle_id : 0;
}

// Official: FUN_00471e30 @ 0x00471e30 (samp-server.exe)
cell get_player_vehicle_seat(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    if (!player || (player->state != 2 && player->state != 3)) return -1;
    return player->vehicle_seat;
}

// Official: FUN_0047a0c0 @ 0x0047a0c0 (samp-server.exe)
cell get_player_custom_skin(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? std::bit_cast<cell>(player->custom_model) : 0;
}

// Official: FUN_00470ea0 @ 0x00470ea0 (samp-server.exe)
cell get_player_skin(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? std::bit_cast<cell>(player->skin) : 0;
}

// Official: FUN_00470e50 @ 0x00470e50 (samp-server.exe)
cell get_player_team(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->team : -1;
}

// Official: FUN_00471d10 @ 0x00471d10 (samp-server.exe)
cell get_player_color(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? std::bit_cast<cell>(player->colour) : 0;
}

// Official: FUN_00485890 @ 0x00485890 (samp-server.exe)
void apply_player_color(NativeHost& host, PlayerNativeState& player, std::uint32_t colour) {
    player.colour = colour;

    const auto id = static_cast<std::uint16_t>(player.id);
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    payload.write(&colour, sizeof(colour));
    const auto num_slots = std::min<std::size_t>(
        host.players_.size(), static_cast<std::size_t>(std::clamp(host.player_pool_highest_, -1, 999) + 1));
    for (auto& recipient : std::span(host.players_).first(num_slots)) {
        if (recipient.in_use && recipient.peer) {
            host.send_rpc(*recipient.peer, static_cast<std::uint8_t>(samp::proto::RpcId::SetPlayerColor), payload);
        }
    }
}

// Official: FUN_00471cd0 @ 0x00471cd0 (samp-server.exe)
cell set_player_color(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    auto* player = find_player(host, args);
    if (!player) return 0;
    apply_player_color(host, *player, std::bit_cast<std::uint32_t>(args[1]));
    return 1;
}

// Official: FUN_004779c0 @ 0x004779c0 (samp-server.exe)
cell get_player_drunk_level(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->drunk_level : 0;
}

// Official: FUN_004712e0 @ 0x004712e0 (samp-server.exe)
cell is_player_in_vehicle(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    return player && (player->state == 2 || player->state == 3) && player->vehicle_id == args[1];
}

// Official: FUN_00471330 @ 0x00471330 (samp-server.exe)
cell is_player_in_any_vehicle(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player && (player->state == 2 || player->state == 3);
}

// Official: FUN_00470690 @ 0x00470690 (samp-server.exe)
cell get_vehicle_model(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto id = static_cast<std::uint16_t>(args.front());
    if (id >= 2000 || id >= host.vehicles_.size() || !host.vehicles_[id].active) return 0;
    return host.vehicles_[id].model;
}

// Official: FUN_00474150 @ 0x00474150 (samp-server.exe)
cell is_valid_vehicle(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto id = static_cast<std::uint16_t>(args.front());
    return id < 2000 && id < host.vehicles_.size() && host.vehicles_[id].active;
}

// Official: FUN_004724a0 @ 0x004724a0 (samp-server.exe)
cell get_player_camera_mode(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->aim.front() : -1;
}

// Official: FUN_00472cb0 @ 0x00472cb0 (samp-server.exe)
cell get_player_target_player(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->target_player : 0xffff;
}

// Official: FUN_00472cf0 @ 0x00472cf0 (samp-server.exe)
cell get_player_target_actor(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player ? player->target_actor : 0xffff;
}

// Official: FUN_0047d3b0 @ 0x0047d3b0 (samp-server.exe)
cell set_player_weather(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    if (player->peer) {
        const auto weather = static_cast<std::uint8_t>(args[1]);
        samp::proto::BitStream payload;
        payload.write(&weather, sizeof(weather));
        host.send_rpc(*player->peer, 152, payload);
    }
    return 1;
}

// Official: FUN_004740f0 @ 0x004740f0 (samp-server.exe)
cell set_gravity(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    host.set_gravity(std::bit_cast<float>(args.front()));
    return 1;
}

// Official: FUN_00473ef0 @ 0x00473ef0 (samp-server.exe)
cell enable_tire_popping(NativeHost& host, std::span<const cell>) {
    constexpr auto warning = "EnableTirePopping() function is removed.";
    if (host.log_message_) {
        host.log_message_(warning);
    } else {
        std::puts(warning);
    }
    return 1;
}

// Official: FUN_0048ee30 @ 0x0048ee30 (samp-server.exe)
float vector_length(float x, float y, float z) {
#if defined(_MSC_VER) && defined(_M_IX86)
    float result;
    __asm {
        fld x
        fmul x
        fld y
        fmul y
        faddp st(1), st(0)
        fld z
        fmul z
        faddp st(1), st(0)
        fsqrt
        fstp result
    }
    return result;
#else
    return static_cast<float>(std::sqrt(static_cast<double>(x) * x +
                                       static_cast<double>(y) * y +
                                       static_cast<double>(z) * z));
#endif
}

// Official: FUN_00473f40 @ 0x00473f40 (samp-server.exe)
cell vector_size(NativeHost&, std::span<const cell> args) {
    if (args.size() < 3) return 0;
    return std::bit_cast<cell>(vector_length(
        std::bit_cast<float>(args[0]), std::bit_cast<float>(args[1]), std::bit_cast<float>(args[2])));
}

constexpr float radians_to_degrees = std::bit_cast<float>(0x42652ee0u);

// Official: FUN_00473fb0 @ 0x00473fb0 (samp-server.exe)
cell arc_tangent(NativeHost&, std::span<const cell> args) {
    if (args.empty()) return 0;
    const float value = std::bit_cast<float>(args.front());
#if defined(_MSC_VER) && defined(_M_IX86)
    float result;
    __asm {
        fld value
        fld1
        fpatan
        fmul radians_to_degrees
        fstp result
    }
#else
    const auto result = static_cast<float>(std::atan(static_cast<double>(value)) * radians_to_degrees);
#endif
    return std::bit_cast<cell>(result);
}

// Official: FUN_00473fd0 @ 0x00473fd0 (samp-server.exe)
cell arc_tangent_two(NativeHost&, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const float y = std::bit_cast<float>(args[0]);
    const float x = std::bit_cast<float>(args[1]);
#if defined(_MSC_VER) && defined(_M_IX86)
    float result;
    __asm {
        fld y
        fld x
        fpatan
        fmul radians_to_degrees
        fstp result
    }
#else
    const auto result = static_cast<float>(
        std::atan2(static_cast<double>(y), static_cast<double>(x)) * radians_to_degrees);
#endif
    return std::bit_cast<cell>(result);
}

// Official: FUN_004734c0 @ 0x004734c0 (samp-server.exe)
cell use_player_ped_anims(NativeHost& host, std::span<const cell>) {
    host.use_player_ped_anims_ = true;
    return 1;
}

// Official: FUN_004734a0 @ 0x004734a0 (samp-server.exe)
cell allow_interior_weapons(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    host.allow_interior_weapons_ = args.front() != 0;
    return 1;
}

// Official: FUN_00477820 @ 0x00477820 (samp-server.exe)
cell disable_name_tag_los(NativeHost& host, std::span<const cell>) {
    host.name_tag_line_of_sight_ = false;
    return 1;
}

// Official: FUN_004725d0 @ 0x004725d0 (samp-server.exe)
cell manual_vehicle_engine_and_lights(NativeHost& host, std::span<const cell>) {
    host.manual_vehicle_control_ = true;
    return 1;
}

// Official: FUN_00474b10 @ 0x00474b10 (samp-server.exe)
cell set_death_drop_amount(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    host.death_drop_amount_ = args.front();
    return 1;
}

// Official: FUN_00473f10 @ 0x00473f10 (samp-server.exe)
cell enable_vehicle_friendly_fire(NativeHost& host, std::span<const cell>) {
    host.vehicle_friendly_fire_ = 1;
    return 1;
}

constexpr auto active_gang_zone = [](NativeHost& host, std::uint16_t id) {
    return id < host.gang_zones_.size() && host.gang_zones_[id].active;
};

constexpr auto zone_wire_colour = [](std::uint32_t colour) {
    return (colour >> 24) | ((colour >> 8) & 0x0000ff00u) |
           ((colour << 8) & 0x00ff0000u) | (colour << 24);
};

constexpr auto broadcast_zone_rpc = [](NativeHost& host, std::uint8_t rpc, const samp::proto::BitStream& payload) {
    for (std::size_t slot = 0;
         slot < 1000 && slot < host.players_.size() && static_cast<int>(slot) <= host.player_pool_highest_;
         ++slot) {
        const auto& player = host.players_[slot];
        if (player.in_use && player.peer) host.send_rpc(*player.peer, rpc, payload);
    }
};

// Official: FUN_00464970 @ 0x00464970 (samp-server.exe)
std::uint16_t allocate_gang_zone(NativeHost& host, const std::array<float, 4>& bounds) {
    for (std::uint16_t id = 0; id < host.gang_zones_.size(); ++id) {
        auto& zone = host.gang_zones_[id];
        if (!zone.active) {
            zone.bounds = bounds;
            zone.active = true;
            return id;
        }
    }
    return 0xffff;
}

// Official: FUN_004649d0 @ 0x004649d0 (samp-server.exe)
void release_gang_zone(NativeHost& host, std::uint16_t id) {
    host.gang_zones_[id].active = false;
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    broadcast_zone_rpc(host, 120, payload);
}

// Official: FUN_00464a80 @ 0x00464a80 (samp-server.exe)
void show_gang_zone(NativeHost& host, const PlayerNativeState& player,
                    std::uint16_t id, std::uint32_t colour) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    const auto& bounds = host.gang_zones_[id].bounds;
    payload.write(bounds.data(), sizeof(bounds));
    const auto encoded_colour = zone_wire_colour(colour);
    payload.write(&encoded_colour, sizeof(encoded_colour));
    if (player.peer) host.send_rpc(*player.peer, 108, payload);
}

// Official: FUN_00464bd0 @ 0x00464bd0 (samp-server.exe)
void show_gang_zone_to_all(NativeHost& host, std::uint16_t id, std::uint32_t colour) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    const auto& bounds = host.gang_zones_[id].bounds;
    payload.write(bounds.data(), sizeof(bounds));
    const auto encoded_colour = zone_wire_colour(colour);
    payload.write(&encoded_colour, sizeof(encoded_colour));
    broadcast_zone_rpc(host, 108, payload);
}

// Official: FUN_00464d20 @ 0x00464d20 (samp-server.exe)
void hide_gang_zone(NativeHost& host, const PlayerNativeState& player, std::uint16_t id) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    if (player.peer) host.send_rpc(*player.peer, 120, payload);
}

// Official: FUN_00464dc0 @ 0x00464dc0 (samp-server.exe)
void hide_gang_zone_from_all(NativeHost& host, std::uint16_t id) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    broadcast_zone_rpc(host, 120, payload);
}

// Official: FUN_00464e60 @ 0x00464e60 (samp-server.exe)
void flash_gang_zone(NativeHost& host, const PlayerNativeState& player,
                     std::uint16_t id, std::uint32_t colour) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    const auto encoded_colour = zone_wire_colour(colour);
    payload.write(&encoded_colour, sizeof(encoded_colour));
    if (player.peer) host.send_rpc(*player.peer, 121, payload);
}

// Official: FUN_00464f40 @ 0x00464f40 (samp-server.exe)
void flash_gang_zone_for_all(NativeHost& host, std::uint16_t id, std::uint32_t colour) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    const auto encoded_colour = zone_wire_colour(colour);
    payload.write(&encoded_colour, sizeof(encoded_colour));
    broadcast_zone_rpc(host, 121, payload);
}

// Official: FUN_00465020 @ 0x00465020 (samp-server.exe)
void stop_flashing_gang_zone(NativeHost& host, const PlayerNativeState& player, std::uint16_t id) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    if (player.peer) host.send_rpc(*player.peer, 85, payload);
}

// Official: FUN_004650c0 @ 0x004650c0 (samp-server.exe)
void stop_flashing_gang_zone_for_all(NativeHost& host, std::uint16_t id) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    broadcast_zone_rpc(host, 85, payload);
}

// Official: FUN_004771a0 @ 0x004771a0 (samp-server.exe)
cell gang_zone_create(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 4) return -1;
    const auto id = allocate_gang_zone(host, {
        std::bit_cast<float>(args[0]), std::bit_cast<float>(args[1]),
        std::bit_cast<float>(args[2]), std::bit_cast<float>(args[3]),
    });
    return id == 0xffff ? -1 : id;
}

// Official: FUN_004771e0 @ 0x004771e0 (samp-server.exe)
cell gang_zone_destroy(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto id = static_cast<std::uint16_t>(args.front());
    if (!active_gang_zone(host, id)) return 0;
    release_gang_zone(host, id);
    return 1;
}

// Official: FUN_00477220 @ 0x00477220 (samp-server.exe)
cell gang_zone_show_for_player(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 3) return 0;
    const auto* player = find_player(host, args);
    const auto id = static_cast<std::uint16_t>(args[1]);
    if (!player || !active_gang_zone(host, id)) return 0;
    show_gang_zone(host, *player, id, static_cast<std::uint32_t>(args[2]));
    return 1;
}

// Official: FUN_00477290 @ 0x00477290 (samp-server.exe)
cell gang_zone_show_for_all(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto id = static_cast<std::uint16_t>(args.front());
    if (!active_gang_zone(host, id)) return 0;
    show_gang_zone_to_all(host, id, static_cast<std::uint32_t>(args[1]));
    return 1;
}

// Official: FUN_004772d0 @ 0x004772d0 (samp-server.exe)
cell gang_zone_hide_for_player(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    const auto id = static_cast<std::uint16_t>(args[1]);
    if (!player || !active_gang_zone(host, id)) return 0;
    hide_gang_zone(host, *player, id);
    return 1;
}

// Official: FUN_00477330 @ 0x00477330 (samp-server.exe)
cell gang_zone_hide_for_all(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto id = static_cast<std::uint16_t>(args.front());
    if (!active_gang_zone(host, id)) return 0;
    hide_gang_zone_from_all(host, id);
    return 1;
}

// Official: FUN_00477370 @ 0x00477370 (samp-server.exe)
cell gang_zone_flash_for_player(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 3) return 0;
    const auto* player = find_player(host, args);
    const auto id = static_cast<std::uint16_t>(args[1]);
    if (!player || !active_gang_zone(host, id)) return 0;
    flash_gang_zone(host, *player, id, static_cast<std::uint32_t>(args[2]));
    return 1;
}

// Official: FUN_004773e0 @ 0x004773e0 (samp-server.exe)
cell gang_zone_flash_for_all(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto id = static_cast<std::uint16_t>(args.front());
    if (!active_gang_zone(host, id)) return 0;
    flash_gang_zone_for_all(host, id, static_cast<std::uint32_t>(args[1]));
    return 1;
}

// Official: FUN_00477420 @ 0x00477420 (samp-server.exe)
cell gang_zone_stop_flash_for_player(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    const auto id = static_cast<std::uint16_t>(args[1]);
    if (!player || !active_gang_zone(host, id)) return 0;
    stop_flashing_gang_zone(host, *player, id);
    return 1;
}

// Official: FUN_00477480 @ 0x00477480 (samp-server.exe)
cell gang_zone_stop_flash_for_all(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto id = static_cast<std::uint16_t>(args.front());
    if (!active_gang_zone(host, id)) return 0;
    stop_flashing_gang_zone_for_all(host, id);
    return 1;
}

using CellWriter = std::function<bool(cell, cell)>;
using StringReader = std::function<const char*(cell)>;

constexpr auto find_vehicle = [](NativeHost& host, cell id) -> VehicleNativeState* {
    const auto index = static_cast<std::uint16_t>(id);
    if (index >= 2000 || index >= host.vehicles_.size() || !host.vehicles_[index].active) return nullptr;
    return &host.vehicles_[index];
};

// Official: FUN_004676b0 @ 0x004676b0 (samp-server.exe)
void set_vehicle_pool_world(NativeHost& host, std::uint16_t id, cell world) {
    if (auto* vehicle = find_vehicle(host, id)) vehicle->virtual_world = world;
}

// Official: FUN_00470f70 @ 0x00470f70 (samp-server.exe)
cell set_vehicle_virtual_world(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2 || !find_vehicle(host, args[0])) return 0;
    set_vehicle_pool_world(host, static_cast<std::uint16_t>(args[0]), args[1]);
    return 1;
}

// Official: FUN_00470fb0 @ 0x00470fb0 (samp-server.exe)
cell get_vehicle_virtual_world(NativeHost& host, std::span<const cell> args) {
    const auto* vehicle = args.empty() ? nullptr : find_vehicle(host, args[0]);
    return vehicle ? vehicle->virtual_world : 0;
}

// Official: FUN_004718f0 @ 0x004718f0 (samp-server.exe)
cell get_vehicle_position(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 4) return 0;
    const auto* vehicle = find_vehicle(host, args[0]);
    if (!vehicle) return 0;
    return write(args[1], std::bit_cast<cell>(vehicle->x)) &&
           write(args[2], std::bit_cast<cell>(vehicle->y)) &&
           write(args[3], std::bit_cast<cell>(vehicle->z));
}

// Official: FUN_00474180 @ 0x00474180 (samp-server.exe)
cell get_vehicle_health(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 2) return 0;
    const auto* vehicle = find_vehicle(host, args[0]);
    return vehicle && write(args[1], std::bit_cast<cell>(vehicle->health));
}

// Official: FUN_00477930 @ 0x00477930 (samp-server.exe)
cell get_vehicle_velocity(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 4) return 0;
    const auto* vehicle = find_vehicle(host, args[0]);
    if (!vehicle) return 0;
    return write(args[1], std::bit_cast<cell>(vehicle->velocity[0])) &&
           write(args[2], std::bit_cast<cell>(vehicle->velocity[1])) &&
           write(args[3], std::bit_cast<cell>(vehicle->velocity[2]));
}

// Official: FUN_00470840 @ 0x00470840 (samp-server.exe)
cell create_pickup(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 5 || host.pickups_.empty()) return 0;
    const std::array<float, 3> position{
        std::bit_cast<float>(args[2]), std::bit_cast<float>(args[3]), std::bit_cast<float>(args[4])};
    return host.create_pickup(args[0], args[1], position, args.size() > 5 ? args[5] : 0);
}

// Official: FUN_004707e0 @ 0x004707e0 (samp-server.exe)
cell add_static_pickup(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 5 || host.pickups_.empty()) return 0;
    const std::array<float, 3> position{
        std::bit_cast<float>(args[2]), std::bit_cast<float>(args[3]), std::bit_cast<float>(args[4])};
    return host.create_pickup(args[0], args[1], position, args.size() > 5 ? args[5] : 0) != -1;
}

// Official: FUN_004708a0 @ 0x004708a0 (samp-server.exe)
cell destroy_pickup(NativeHost& host, std::span<const cell> args) {
    return !args.empty() && host.destroy_pickup(static_cast<std::uint32_t>(args[0]));
}

// Official: FUN_00472d30 @ 0x00472d30 (samp-server.exe)
cell get_player_weapon_data(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 4) return 0;
    const auto slot = static_cast<std::uint8_t>(args[1]);
    const auto* player = find_player(host, args);
    if (!player || slot >= player->weapons.size()) return 0;
    return write(args[2], player->weapons[slot]) &&
           write(args[3], std::bit_cast<std::int16_t>(player->ammunition[slot]));
}

constexpr auto send_player_command = [](NativeHost& host, const PlayerNativeState& player,
                                         samp::proto::RpcId rpc, std::span<const cell> cells) {
    if (!player.peer) return;
    samp::proto::BitStream payload;
    if (!cells.empty()) payload.write(cells.data(), cells.size_bytes());
    host.send_rpc(*player.peer, static_cast<std::uint8_t>(rpc), payload);
};

// Official: FUN_00472f50 @ 0x00472f50 (samp-server.exe)
cell set_world_time(NativeHost& host, std::span<const cell> args) {
    if (!args.empty()) host.set_world_time(static_cast<std::uint8_t>(args[0]));
    return 1;
}

// Official: FUN_00473f20 @ 0x00473f20 (samp-server.exe)
cell set_world_weather(NativeHost& host, std::span<const cell> args) {
    if (!args.empty()) host.set_weather(static_cast<std::uint8_t>(args[0]));
    return 1;
}

// Official: FUN_00477640 @ 0x00477640 (samp-server.exe)
cell enable_stunt_bonus_for_all(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    host.stunt_bonus_enabled_ = args[0] == 1;
    // The native also normalizes the live argument cell.
    const_cast<cell&>(args[0]) = host.stunt_bonus_enabled_ ? 1 : 0;
    samp::proto::BitStream payload;
    if (host.stunt_bonus_enabled_) payload.write1();
    else payload.write0();
    for (const auto& player : host.players_) {
        if (player.in_use && player.peer) {
            host.send_rpc(*player.peer, static_cast<std::uint8_t>(samp::proto::RpcId::EnableStuntBonusForPlayer), payload);
        }
    }
    return 1;
}

// Official: FUN_0047a230 @ 0x0047a230 (samp-server.exe)
cell set_player_world_bounds(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 5) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    send_player_command(host, *player, samp::proto::RpcId::SetWorldBounds, args.subspan(1, 4));
    return 1;
}

// Official: FUN_0047d130 @ 0x0047d130 (samp-server.exe)
cell set_player_map_icon(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 8) return 0;
    const auto icon = static_cast<std::uint8_t>(args[1]);
    const auto* player = find_player(host, args);
    if (icon >= 100 || !player) return 0;
    if (player->peer) {
        const auto type = static_cast<std::uint8_t>(args[5]);
        const auto style = static_cast<std::uint8_t>(args[7]);
        samp::proto::BitStream payload;
        payload.write(&icon, sizeof(icon));
        payload.write(args.data() + 2, 3 * sizeof(cell));
        payload.write(&type, sizeof(type));
        payload.write(&args[6], sizeof(cell));
        payload.write(&style, sizeof(style));
        host.send_rpc(*player->peer, static_cast<std::uint8_t>(samp::proto::RpcId::SetPlayerMapIcon), payload);
    }
    return 1;
}

// Official: FUN_0047d2c0 @ 0x0047d2c0 (samp-server.exe)
cell remove_player_map_icon(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto icon = static_cast<std::uint8_t>(args[1]);
    const auto* player = find_player(host, args);
    if (icon >= 100 || !player) return 0;
    if (player->peer) {
        samp::proto::BitStream payload;
        payload.write(&icon, sizeof(icon));
        host.send_rpc(*player->peer, static_cast<std::uint8_t>(samp::proto::RpcId::RemovePlayerMapIcon), payload);
    }
    return 1;
}

// Official: FUN_0047b650 @ 0x0047b650 (samp-server.exe)
cell send_death_message(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 3) return 0;
    const auto killer = static_cast<std::uint16_t>(args[0]);
    const auto victim = static_cast<std::uint16_t>(args[1]);
    const auto reason = static_cast<std::uint8_t>(args[2]);
    samp::proto::BitStream payload;
    payload.write(&killer, sizeof(killer));
    payload.write(&victim, sizeof(victim));
    payload.write(&reason, sizeof(reason));
    for (const auto& player : host.players_) {
        if (player.in_use && player.peer) {
            host.send_rpc(*player.peer, static_cast<std::uint8_t>(samp::proto::RpcId::SendDeathMessage), payload);
        }
    }
    return 1;
}

// Official: FUN_0047b970 @ 0x0047b970 (samp-server.exe)
cell game_text_for_player(NativeHost& host, std::span<const cell> args, const StringReader& read) {
    if (args.size() < 4) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    const auto* text = read(args[1]);
    if (!text || !*text) return 0;
    if (player->peer) {
        const auto length = static_cast<std::uint32_t>(std::strlen(text));
        samp::proto::BitStream payload;
        payload.write(&args[3], sizeof(cell));
        payload.write(&args[2], sizeof(cell));
        payload.write(&length, sizeof(length));
        payload.write(text, length);
        host.send_rpc(*player->peer, static_cast<std::uint8_t>(samp::proto::RpcId::SendGameText), payload);
    }
    return 1;
}

// Official: FUN_004841a0 @ 0x004841a0 (samp-server.exe)
int get_weapon_slot(std::uint8_t weapon) {
    constexpr int slots[]{0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 10, 10, 10, 10, 10, 10,
                          8, 8, 8, -1, -1, -1, 2, 2, 2, 3, 3, 3, 4, 4, 5, 5,
                          4, 6, 6, 7, 7, 7, 7, 8, 12, 9, 9, 9, 11, 11, 11};
    return weapon < std::size(slots) ? slots[weapon] : -1;
}

// Official: FUN_00472c50 @ 0x00472c50 (samp-server.exe)
cell get_player_ammo(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    if (!player) return 0;
    const auto slot = get_weapon_slot(player->weapon);
    return slot < 0 ? 0 : std::bit_cast<std::int16_t>(player->ammunition[slot]);
}

// Official: FUN_00483790 @ 0x00483790 (samp-server.exe)
void set_camera_targeting(NativeHost& host, PlayerNativeState& player, bool enabled) {
    if (player.camera_targeting == enabled) return;
    player.camera_targeting = enabled;
    if (!enabled) player.camera_targets.fill(0xffff);
    if (player.peer) {
        samp::proto::BitStream payload;
        if (enabled) payload.write1();
        else payload.write0();
        host.send_rpc(*player.peer, 170, payload);
    }
}

// Official: FUN_00472230 @ 0x00472230 (samp-server.exe)
cell enable_player_camera_target(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    auto* player = find_player(host, args);
    if (!player) return 0;
    set_camera_targeting(host, *player, args[1] != 0);
    return 1;
}

// Official: FUN_004724f0 @ 0x004724f0 (samp-server.exe)
cell get_player_camera_aspect_ratio(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    if (!player) return 0;
    return std::bit_cast<cell>(static_cast<float>(1.0 + double(player->aim[30]) * (1.0f / 255.0f)));
}

// Official: FUN_00472560 @ 0x00472560 (samp-server.exe)
cell get_player_camera_zoom(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    if (!player) return 0;
    const auto zoom = player->aim[29] & 0x3f;
    return std::bit_cast<cell>(static_cast<float>(double(zoom) * (1.0f / 63.0f) * 35.0 + 35.0));
}

constexpr auto write_sync_cells = [](std::span<const cell> destinations, const std::uint8_t* source,
                                    const CellWriter& write) {
    for (const auto address : destinations) {
        cell value;
        std::memcpy(&value, source, sizeof(value));
        if (!write(address, value)) return false;
        source += sizeof(value);
    }
    return true;
};

// Official: FUN_00472090 @ 0x00472090 (samp-server.exe)
cell get_player_camera_pos(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 4) return 0;
    const auto* player = find_player(host, args);
    return player && write_sync_cells(args.subspan(1, 3), player->aim.data() + 13, write);
}

// Official: FUN_00472160 @ 0x00472160 (samp-server.exe)
cell get_player_camera_front_vector(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 4) return 0;
    const auto* player = find_player(host, args);
    return player && write_sync_cells(args.subspan(1, 3), player->aim.data() + 1, write);
}

// Official: FUN_004710a0 @ 0x004710a0 (samp-server.exe)
cell get_player_last_shot_vectors(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 7) return 0;
    const auto* player = find_player(host, args);
    return player && write_sync_cells(args.subspan(1, 6), player->bullet.data() + 3, write);
}

// Official: FUN_0047ad00 @ 0x0047ad00 (samp-server.exe)
cell set_player_team(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    auto* player = find_player(host, args);
    if (!player) return 0;
    const auto id = static_cast<std::uint16_t>(args[0]);
    player->team = static_cast<std::uint8_t>(args[1]);
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    payload.write(&player->team, sizeof(player->team));
    for (std::size_t i = 0; i < host.players_.size() && i < 1000 && static_cast<int>(i) <= host.player_pool_highest_; ++i) {
        const auto& receiver = host.players_[i];
        if (receiver.in_use && receiver.peer) {
            host.send_rpc(*receiver.peer, static_cast<std::uint8_t>(samp::proto::RpcId::SetPlayerTeam), payload);
        }
    }
    return 1;
}

// Official: FUN_004801e0 @ 0x004801e0 (samp-server.exe)
cell set_player_drunk_level(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    constexpr auto set_drunk_level = static_cast<samp::proto::RpcId>(35);
    send_player_command(host, *player, set_drunk_level, args.subspan(1, 1));
    return 1;
}

// Official: FUN_00471550 @ 0x00471550 (samp-server.exe)
cell get_player_distance_from_point(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 4) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    return std::bit_cast<cell>(static_cast<float>(player->distance_from_point(
        std::bit_cast<float>(args[1]), std::bit_cast<float>(args[2]), std::bit_cast<float>(args[3]))));
}

// Official: FUN_00489970 @ 0x00489970 (samp-server.exe)
double vehicle_distance_from_point(const VehicleNativeState& vehicle, float x, float y, float z) {
    const double dx = double(vehicle.x) - x;
    const double dy = double(vehicle.y) - y;
    const double dz = double(vehicle.z) - z;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

// Official: FUN_004715d0 @ 0x004715d0 (samp-server.exe)
cell get_vehicle_distance_from_point(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 4) return 0;
    const auto* vehicle = find_vehicle(host, args[0]);
    if (!vehicle) return 0;
    return std::bit_cast<cell>(static_cast<float>(vehicle_distance_from_point(
        *vehicle, std::bit_cast<float>(args[1]), std::bit_cast<float>(args[2]), std::bit_cast<float>(args[3]))));
}

// Official: FUN_004714c0 @ 0x004714c0 (samp-server.exe)
cell is_player_in_range_of_point(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 5) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    const double radius = std::bit_cast<float>(args[1]);
    const double dx = double(player->x) - std::bit_cast<float>(args[2]);
    const double dy = double(player->y) - std::bit_cast<float>(args[3]);
    const float dz = player->z - std::bit_cast<float>(args[4]);
    return dx * dx + dy * dy + double(dz) * dz <= radius * radius;
}

// Official: FUN_00485950 @ 0x00485950 (samp-server.exe)
void toggle_checkpoint(NativeHost& host, PlayerNativeState& player, bool enabled) {
    auto& checkpoint = player.checkpoint;
    checkpoint.enabled = enabled;
    checkpoint.inside = false;
    if (!player.peer) return;
    samp::proto::BitStream payload;
    if (enabled) {
        payload.write(checkpoint.position.data(), sizeof(checkpoint.position));
        payload.write(&checkpoint.radius, sizeof(checkpoint.radius));
    }
    host.send_rpc(*player.peer, enabled ? 107 : 37, payload);
}

// Official: FUN_00485a80 @ 0x00485a80 (samp-server.exe)
void toggle_race_checkpoint(NativeHost& host, PlayerNativeState& player, bool enabled) {
    auto& checkpoint = player.race_checkpoint;
    checkpoint.enabled = enabled;
    checkpoint.inside = false;
    if (!player.peer) return;
    samp::proto::BitStream payload;
    if (enabled) {
        payload.write(&player.race_checkpoint_type, sizeof(player.race_checkpoint_type));
        payload.write(checkpoint.position.data(), sizeof(checkpoint.position));
        payload.write(player.race_checkpoint_next.data(), sizeof(player.race_checkpoint_next));
        payload.write(&checkpoint.radius, sizeof(checkpoint.radius));
    }
    host.send_rpc(*player.peer, enabled ? 38 : 39, payload);
}

// Official: FUN_004879b0 @ 0x004879b0 (samp-server.exe)
void configure_checkpoint(NativeHost& host, PlayerNativeState& player, std::span<const cell, 4> values) {
    auto& checkpoint = player.checkpoint;
    for (std::size_t i = 0; i < 3; ++i) checkpoint.position[i] = std::bit_cast<float>(values[i]);
    checkpoint.radius = std::bit_cast<float>(values[3]);
    toggle_checkpoint(host, player, true);
}

// Official: FUN_004879f0 @ 0x004879f0 (samp-server.exe)
void configure_race_checkpoint(NativeHost& host, PlayerNativeState& player, std::uint8_t type,
                               std::span<const cell, 7> values) {
    auto& checkpoint = player.race_checkpoint;
    for (std::size_t i = 0; i < 3; ++i) {
        checkpoint.position[i] = std::bit_cast<float>(values[i]);
        player.race_checkpoint_next[i] = std::bit_cast<float>(values[i + 3]);
    }
    player.race_checkpoint_type = type;
    checkpoint.radius = std::bit_cast<float>(values[6]);
    toggle_race_checkpoint(host, player, true);
}

// Official: FUN_00471e80 @ 0x00471e80 (samp-server.exe)
cell set_player_checkpoint(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 5) return 0;
    auto* player = find_player(host, args);
    if (!player) return 0;
    configure_checkpoint(host, *player, args.subspan<1, 4>());
    return 1;
}

// Official: FUN_00471ed0 @ 0x00471ed0 (samp-server.exe)
cell disable_player_checkpoint(NativeHost& host, std::span<const cell> args) {
    auto* player = find_player(host, args);
    if (!player) return 0;
    toggle_checkpoint(host, *player, false);
    return 1;
}

// Official: FUN_00471f10 @ 0x00471f10 (samp-server.exe)
cell is_player_in_checkpoint(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player && player->checkpoint.inside;
}

// Official: FUN_00471f40 @ 0x00471f40 (samp-server.exe)
cell set_player_race_checkpoint(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 9) return 0;
    auto* player = find_player(host, args);
    if (!player) return 0;
    configure_race_checkpoint(host, *player, static_cast<std::uint8_t>(args[1]), args.subspan<2, 7>());
    return 1;
}

// Official: FUN_00471fa0 @ 0x00471fa0 (samp-server.exe)
cell disable_player_race_checkpoint(NativeHost& host, std::span<const cell> args) {
    auto* player = find_player(host, args);
    if (!player) return 0;
    toggle_race_checkpoint(host, *player, false);
    return 1;
}

// Official: FUN_00471fe0 @ 0x00471fe0 (samp-server.exe)
cell is_player_in_race_checkpoint(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    return player && player->race_checkpoint.inside;
}

// Official: FUN_0047a8a0 @ 0x0047a8a0 (samp-server.exe)
cell toggle_player_spectating(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    auto* player = find_player(host, args);
    if (!player) return 0;
    player->spectating = args[1] != 0;
    player->spectate_target = 0xffffffffu;
    player->spectate_target_type = 0;
    send_player_command(host, *player, samp::proto::RpcId::TogglePlayerSpectating, args.subspan(1, 1));
    return 1;
}

// Official: FUN_0047a9b0 @ 0x0047a9b0 (samp-server.exe)
cell player_spectate_vehicle(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    auto* player = find_player(host, args);
    const auto* vehicle = find_vehicle(host, args[1]);
    if (!player || !vehicle) return 0;
    player->spectate_target = static_cast<std::uint16_t>(args[1]);
    player->spectate_target_type = 2;
    const std::array position{vehicle->x, vehicle->y, vehicle->z};
    host.update_player_position(*player, position[0], position[1], position[2], true);
    player->expect_position(position[0], position[1], position[2]);
    host.set_player_state(*player, 9);
    if (player->peer) {
        const auto id = static_cast<std::uint16_t>(args[1]);
        const auto mode = static_cast<std::uint8_t>(args.size() > 2 ? args[2] : 1);
        samp::proto::BitStream payload;
        payload.write(&id, sizeof(id));
        payload.write(&mode, sizeof(mode));
        host.send_rpc(*player->peer, static_cast<std::uint8_t>(samp::proto::RpcId::PlayerSpectateVehicle), payload);
    }
    return 1;
}

// Official: FUN_0047ab50 @ 0x0047ab50 (samp-server.exe)
cell player_spectate_player(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    auto* player = find_player(host, args);
    const auto* target = find_player(host, args.subspan(1));
    if (!player || !target) return 0;
    player->spectate_target = static_cast<std::uint16_t>(args[1]);
    player->spectate_target_type = 1;
    const std::array position{target->x, target->y, target->z};
    host.update_player_position(*player, position[0], position[1], position[2], true);
    player->expect_position(position[0], position[1], position[2]);
    host.set_player_state(*player, 9);
    if (player->peer) {
        const auto id = static_cast<std::uint16_t>(args[1]);
        const auto mode = static_cast<std::uint8_t>(args.size() > 2 ? args[2] : 1);
        samp::proto::BitStream payload;
        payload.write(&id, sizeof(id));
        payload.write(&mode, sizeof(mode));
        host.send_rpc(*player->peer, static_cast<std::uint8_t>(samp::proto::RpcId::PlayerSpectatePlayer), payload);
    }
    return 1;
}

// Official: FUN_00472b70 @ 0x00472b70 (samp-server.exe)
cell reset_player_money(NativeHost& host, std::span<const cell> args) {
    auto* player = find_player(host, args);
    if (!player) return 0;
    player->money = 0;
    send_player_command(host, *player, samp::proto::RpcId::ResetPlayerMoney, {});
    return 1;
}

// Official: FUN_0047c710 @ 0x0047c710 (samp-server.exe)
cell give_player_money(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    auto* player = find_player(host, args);
    if (!player) return 0;
    player->money = std::bit_cast<cell>(
        static_cast<std::uint32_t>(player->money) + static_cast<std::uint32_t>(args[1]));
    send_player_command(host, *player, samp::proto::RpcId::GivePlayerMoney, args.subspan(1, 1));
    return 1;
}

// Official: FUN_0047ca00 @ 0x0047ca00 (samp-server.exe)
cell give_player_weapon(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 3) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    send_player_command(host, *player, samp::proto::RpcId::GivePlayerWeapon, args.subspan(1, 2));
    return 1;
}

// Official: FUN_0047caf0 @ 0x0047caf0 (samp-server.exe)
cell set_player_armed_weapon(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    send_player_command(host, *player, samp::proto::RpcId::SetPlayerArmedWeapon, args.subspan(1, 1));
    return 1;
}

// Official: FUN_00472e90 @ 0x00472e90 (samp-server.exe)
cell reset_player_weapons(NativeHost& host, std::span<const cell> args) {
    const auto* player = find_player(host, args);
    if (!player) return 0;
    send_player_command(host, *player, samp::proto::RpcId::ResetPlayerWeapons, {});
    return 1;
}

// Official: FUN_0047b090 @ 0x0047b090 (samp-server.exe)
cell set_player_health(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    send_player_command(host, *player, samp::proto::RpcId::SetPlayerHealth, args.subspan(1, 1));
    return 1;
}

// Official: FUN_0047cf30 @ 0x0047cf30 (samp-server.exe)
cell set_player_armour(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    send_player_command(host, *player, samp::proto::RpcId::SetPlayerArmour, args.subspan(1, 1));
    return 1;
}

// Official: FUN_00470ff0 @ 0x00470ff0 (samp-server.exe)
cell get_player_position(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 4) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    return write(args[1], std::bit_cast<cell>(player->x)) &&
           write(args[2], std::bit_cast<cell>(player->y)) &&
           write(args[3], std::bit_cast<cell>(player->z));
}

// Official: FUN_00472e30 @ 0x00472e30 (samp-server.exe)
cell get_player_facing_angle(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    return player && write(args[1], std::bit_cast<cell>(player->angle));
}

// Official: FUN_004711b0 @ 0x004711b0 (samp-server.exe)
cell get_player_health(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    return player && write(args[1], std::bit_cast<cell>(player->health));
}

// Official: FUN_00473dd0 @ 0x00473dd0 (samp-server.exe)
cell get_player_armour(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 2) return 0;
    const auto* player = find_player(host, args);
    return player && write(args[1], std::bit_cast<cell>(player->armour));
}

// Official: FUN_00477830 @ 0x00477830 (samp-server.exe)
cell get_player_velocity(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 4) return 0;
    const auto* player = find_player(host, args);
    const bool on_foot = player && player->state == 1;
    const bool stored = write(args[1], std::bit_cast<cell>(on_foot ? player->vx : 0.0f)) &&
                        write(args[2], std::bit_cast<cell>(on_foot ? player->vy : 0.0f)) &&
                        write(args[3], std::bit_cast<cell>(on_foot ? player->vz : 0.0f));
    return on_foot && stored;
}

// Official: FUN_00473e30 @ 0x00473e30 (samp-server.exe)
cell get_player_keys(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 4) return 0;
    const auto* player = find_player(host, args);
    if (!player) return 0;
    switch (player->state) {
    case 1:
    case 2:
    case 3:
    case 9:
        return write(args[1], std::bit_cast<cell>(player->keys)) &&
               write(args[2], player->up_down) && write(args[3], player->left_right);
    default:
        return 0;
    }
}

using OutputNative = cell (*)(NativeHost&, std::span<const cell>, const CellWriter&);
constexpr std::pair<const char*, OutputNative> output_natives[] = {
    {"GetPlayerArmour", get_player_armour},
    {"GetPlayerCameraFrontVector", get_player_camera_front_vector},
    {"GetPlayerCameraPos", get_player_camera_pos},
    {"GetPlayerFacingAngle", get_player_facing_angle},
    {"GetPlayerHealth", get_player_health},
    {"GetPlayerKeys", get_player_keys},
    {"GetPlayerLastShotVectors", get_player_last_shot_vectors},
    {"GetPlayerPos", get_player_position},
    {"GetPlayerVelocity", get_player_velocity},
    {"GetPlayerWeaponData", get_player_weapon_data},
    {"GetVehicleHealth", get_vehicle_health},
    {"GetVehiclePos", get_vehicle_position},
    {"GetVehicleVelocity", get_vehicle_velocity},
};

using ServerNative = cell (*)(NativeHost&, std::span<const cell>);
constexpr std::pair<const char*, ServerNative> server_natives[] = {
    {"AllowInteriorWeapons", allow_interior_weapons},
    {"atan", arc_tangent},
    {"atan2", arc_tangent_two},
    {"DisableInteriorEnterExits", disable_interior_enter_exits},
    {"DisableNameTagLOS", disable_name_tag_los},
    {"DisablePlayerCheckpoint", disable_player_checkpoint},
    {"DisablePlayerRaceCheckpoint", disable_player_race_checkpoint},
    {"EnableTirePopping", enable_tire_popping},
    {"EnableVehicleFriendlyFire", enable_vehicle_friendly_fire},
    {"EnableZoneNames", enable_zone_names},
    {"GangZoneCreate", gang_zone_create},
    {"GangZoneDestroy", gang_zone_destroy},
    {"GangZoneFlashForAll", gang_zone_flash_for_all},
    {"GangZoneFlashForPlayer", gang_zone_flash_for_player},
    {"GangZoneHideForAll", gang_zone_hide_for_all},
    {"GangZoneHideForPlayer", gang_zone_hide_for_player},
    {"GangZoneShowForAll", gang_zone_show_for_all},
    {"GangZoneShowForPlayer", gang_zone_show_for_player},
    {"GangZoneStopFlashForAll", gang_zone_stop_flash_for_all},
    {"GangZoneStopFlashForPlayer", gang_zone_stop_flash_for_player},
    {"GetGravity", get_gravity},
    {"GetPlayerCameraAspectRatio", get_player_camera_aspect_ratio},
    {"GetPlayerCameraMode", get_player_camera_mode},
    {"GetPlayerCameraTargetActor", get_player_camera_target_actor},
    {"GetPlayerCameraTargetObject", get_player_camera_target_object},
    {"GetPlayerCameraTargetPlayer", get_player_camera_target_player},
    {"GetPlayerCameraTargetVehicle", get_player_camera_target_vehicle},
    {"GetPlayerCameraZoom", get_player_camera_zoom},
    {"GetPlayerColor", get_player_color},
    {"GetPlayerCustomSkin", get_player_custom_skin},
    {"GetPlayerDistanceFromPoint", get_player_distance_from_point},
    {"GetPlayerDrunkLevel", get_player_drunk_level},
    {"GetPlayerInterior", get_player_interior},
    {"GetPlayerMoney", get_player_money},
    {"GetPlayerPoolSize", get_player_pool_size},
    {"GetPlayerScore", get_player_score},
    {"GetPlayerSkin", get_player_skin},
    {"GetPlayerState", get_player_state},
    {"GetPlayerTargetActor", get_player_target_actor},
    {"GetPlayerTargetPlayer", get_player_target_player},
    {"GetPlayerTeam", get_player_team},
    {"GetPlayerVehicleID", get_player_vehicle_id},
    {"GetPlayerVehicleSeat", get_player_vehicle_seat},
    {"GetPlayerVirtualWorld", get_player_virtual_world},
    {"EnablePlayerCameraTarget", enable_player_camera_target},
    {"EnableStuntBonusForAll", enable_stunt_bonus_for_all},
    {"AddStaticPickup", add_static_pickup},
    {"CreatePickup", create_pickup},
    {"DestroyPickup", destroy_pickup},
    {"GetPlayerAmmo", get_player_ammo},
    {"GetPlayerWeapon", get_player_weapon},
    {"GetTickCount", get_tick_count},
    {"GetVehicleDistanceFromPoint", get_vehicle_distance_from_point},
    {"GetVehicleModel", get_vehicle_model},
    {"GetVehicleVirtualWorld", get_vehicle_virtual_world},
    {"GivePlayerMoney", give_player_money},
    {"GivePlayerWeapon", give_player_weapon},
    {"IsPlayerAdmin", is_player_admin},
    {"IsPlayerInAnyVehicle", is_player_in_any_vehicle},
    {"IsPlayerInCheckpoint", is_player_in_checkpoint},
    {"IsPlayerInRaceCheckpoint", is_player_in_race_checkpoint},
    {"IsPlayerInRangeOfPoint", is_player_in_range_of_point},
    {"IsPlayerInVehicle", is_player_in_vehicle},
    {"IsPlayerNPC", is_player_npc},
    {"IsValidVehicle", is_valid_vehicle},
    {"ManualVehicleEngineAndLights", manual_vehicle_engine_and_lights},
    {"PlayerSpectatePlayer", player_spectate_player},
    {"PlayerSpectateVehicle", player_spectate_vehicle},
    {"RemovePlayerMapIcon", remove_player_map_icon},
    {"ResetPlayerMoney", reset_player_money},
    {"ResetPlayerWeapons", reset_player_weapons},
    {"SendDeathMessage", send_death_message},
    {"SetDeathDropAmount", set_death_drop_amount},
    {"SetGravity", set_gravity},
    {"SetNameTagDrawDistance", set_name_tag_draw_distance},
    {"SetPlayerArmour", set_player_armour},
    {"SetPlayerArmedWeapon", set_player_armed_weapon},
    {"SetPlayerCheckpoint", set_player_checkpoint},
    {"SetPlayerColor", set_player_color},
    {"SetPlayerDrunkLevel", set_player_drunk_level},
    {"SetPlayerHealth", set_player_health},
    {"SetPlayerMapIcon", set_player_map_icon},
    {"SetPlayerRaceCheckpoint", set_player_race_checkpoint},
    {"SetPlayerScore", set_player_score},
    {"SetPlayerTeam", set_player_team},
    {"SetPlayerWeather", set_player_weather},
    {"SetPlayerWorldBounds", set_player_world_bounds},
    {"SetVehicleVirtualWorld", set_vehicle_virtual_world},
    {"SetWeather", set_world_weather},
    {"SetWorldTime", set_world_time},
    {"ShowNameTags", show_name_tags},
    {"ShowPlayerMarkers", show_player_markers},
    {"TogglePlayerSpectating", toggle_player_spectating},
    {"UsePlayerPedAnims", use_player_ped_anims},
    {"VectorSize", vector_size},
};

}  // namespace

// Official: FUN_004840f0 @ 0x004840f0 (samp-server.exe)
double PlayerNativeState::distance_from_point(float point_x, float point_y, float point_z) const {
    const double dx = double(x) - point_x;
    const double dy = double(y) - point_y;
    const double dz = double(z) - point_z;
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

// Official: FUN_00483ee0 @ 0x00483ee0 (samp-server.exe)
void PlayerNativeState::expect_position(float target_x, float target_y, float target_z) {
    position_correction_pending = true;
    position_correction_ms = static_cast<std::uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    position_correction_target = {target_x, target_y, target_z};
}

// Official: FUN_0047a100 @ 0x0047a100 (samp-server.exe)
// This is the SA-MP native-table registration wrapper for the server AMX host.
void register_server_natives(PawnVm& vm, NativeHost& host) {
    for (const auto& [name, function] : server_natives) {
        vm.native_functions_[name] = [&host, function](std::span<const cell> args) {
            return function(host, args);
        };
    }
    const StringReader read_script_string = [&vm](std::int32_t address) -> const char* {
        const std::uint8_t* start = nullptr;
        if (vm.ok_ && address >= 0 && static_cast<std::int64_t>(address) < vm.amx_.stp &&
            !(address >= vm.amx_.hea && address < vm.amx_.stk)) {
            const std::size_t at = static_cast<std::size_t>(vm.header_.dat + address);
            if (at < vm.image_.size()) start = vm.image_.data() + at;
        }
        if (start == nullptr) return nullptr;
        const std::size_t available = static_cast<std::size_t>(vm.amx_.stp - address);
        if (available < sizeof(cell)) return nullptr;
        std::uint32_t first = 0;
        std::memcpy(&first, start, sizeof(first));
        const bool packed = first >= 0x1000000u;
        std::string text;
        for (std::size_t offset = 0; offset + sizeof(cell) <= available; offset += sizeof(cell)) {
            std::uint32_t value = 0;
            std::memcpy(&value, start + offset, sizeof(value));
            if (packed) {
                for (int shift = 24; shift >= 0; shift -= 8) {
                    const auto character = static_cast<unsigned char>(value >> shift);
                    if (character == 0) {
                        auto& buffer = vm.string_buffers_[address];
                        buffer = std::move(text);
                        return buffer.c_str();
                    }
                    text.push_back(static_cast<char>(character));
                }
            } else {
                if (value == 0) {
                    auto& buffer = vm.string_buffers_[address];
                    buffer = std::move(text);
                    return buffer.c_str();
                }
                text.push_back(static_cast<char>(value));
            }
        }
        return nullptr;
    };
    const auto data_pointer = [&vm](std::int32_t address) -> const std::uint8_t* {
        if (!vm.ok_ || address < 0 || static_cast<std::int64_t>(address) >= vm.amx_.stp ||
            (address >= vm.amx_.hea && address < vm.amx_.stk)) return nullptr;
        const std::size_t at = static_cast<std::size_t>(vm.header_.dat + address);
        return at < vm.image_.size() ? vm.image_.data() + at : nullptr;
    };
    const auto as_float = [](cell value) {
        float result = 0.0f;
        std::memcpy(&result, &value, sizeof(result));
        return result;
    };
    const auto as_cell = [](float value) {
        cell result = 0;
        std::memcpy(&result, &value, sizeof(result));
        return result;
    };
    const auto player_slot = [&host](cell id) -> PlayerNativeState* {
        return find_player(host, {&id, 1});
    };
    const CellWriter store_cell = [&vm, data_pointer](cell address, cell value) {
        if (address < 0 || std::int64_t(address) + 4 > vm.amx_.stp) return false;
        auto* destination = const_cast<std::uint8_t*>(data_pointer(address));
        if (!destination || std::uint64_t(vm.header_.dat) + address + 4 > vm.image_.size()) return false;
        std::memcpy(destination, &value, 4); return true;
    };
    for (const auto& [name, function] : output_natives) {
        vm.native_functions_[name] = [&host, function, store_cell](std::span<const cell> args) {
            return function(host, args, store_cell);
        };
    }
    // ------------------------------------------------------------- the core
    vm.native_functions_["print"] = [&vm, read_script_string](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            const char* text = read_script_string(args[0]);
            std::fputs(text != nullptr ? text : "", stdout);
        }
        return 0;
    };
    // Official: FUN_00473110 @ 0x00473110 (samp-server.exe)
    vm.native_functions_["printf"] = [&vm,&host, data_pointer](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            const auto* format=reinterpret_cast<const cell*>(data_pointer(args[0]));
            const auto text=format_cells(&vm.amx_,format,args.subspan(1));
            if(host.log_message_) host.log_message_(text);else std::puts(text.c_str());
        }
        return 0;
    };
    // Original473140 writes unpacked AMX output and returns1, not its length.
    // Official: FUN_00473140 @ 0x00473140 (samp-server.exe)
    vm.native_functions_["format"] = [&vm,data_pointer](std::span<const cell> args) -> cell {
        if(args.size()>=3) {
            auto* destination=const_cast<cell*>(reinterpret_cast<const cell*>(data_pointer(args[0])));
            const auto* format=reinterpret_cast<const cell*>(data_pointer(args[2]));
            if(!destination || !format || args[1]<=0 || std::int64_t(args[0])+std::int64_t(args[1])*4>vm.amx_.stp) return 0;
            const auto text=format_cells(&vm.amx_,format,args.subspan(3));
            amx_string::set_string(destination,text.c_str(),0,0,static_cast<std::uint32_t>(args[1]));
            return 1;
        }
        return 0;
    };
    // Official: FUN_00473190 @ 0x00473190 (samp-server.exe)
    vm.native_functions_["SetTimer"]=[&host,&vm,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<3) return 0;
        const auto* name=read_script_string(args[0]);if(!name) return 0;
        const auto id=++host.next_script_timer_;
        auto& timer=host.script_timers_[id];
        timer.owner=&vm;timer.callback=std::string(name).substr(0,255);
        timer.interval=timer.remaining=args[1];timer.repeat=args[2]!=0;timer.killed=false;
        return std::bit_cast<cell>(id);
    };
    // Official: FUN_00473c80 @ 0x00473c80 (samp-server.exe)
    vm.native_functions_["SetTimerEx"]=[&host,&vm,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<4 || args.size()>260) return 0;
        const auto* name=read_script_string(args[0]);if(!name) return 0;
        const auto* format=read_script_string(args[3]);if(!format) return 0;
        const auto format_length=std::strlen(format);
        if(args.size()<4+format_length) return 0;
        std::vector<cell> storage(format_length);
        bool valid=true;
        for(std::size_t remaining=format_length;remaining>0;--remaining) {
            const std::size_t index=remaining-1;
            const cell value=args[4+index];
            if(format[index]=='s') {
                const auto* text=read_script_string(value);
                if(!text) {valid=false;break;}
                const auto capacity=static_cast<int>(std::strlen(text)+1);
                cell address=0;samp::amx::cell* destination=nullptr;
                if(amx_memory::allot(&vm.amx_,capacity,&address,&destination)!=0 || !destination) {
                    valid=false;break;
                }
                amx_string::set_string(destination,text,0,0,static_cast<std::uint32_t>(capacity));
                storage[index]=address;
            } else if(format[index]=='a') {
                samp::amx::cell* source=nullptr;
                if(amx_memory::get_address(&vm.amx_,value,&source)!=0 || !source) {
                    valid=false;break;
                }
                if(index+1>=format_length) {valid=false;break;}
                samp::amx::cell* length_cell=nullptr;
                if(amx_memory::get_address(&vm.amx_,args[4+index+1],&length_cell)!=0 || !length_cell) {
                    valid=false;break;
                }
                const cell cells=*length_cell;
                if(cells<0 || static_cast<std::int64_t>(value)+static_cast<std::int64_t>(cells)*4>vm.amx_.stp) {valid=false;break;}
                cell address=0;samp::amx::cell* destination=nullptr;
                if(amx_memory::allot(&vm.amx_,static_cast<int>(cells),&address,&destination)!=0 || !destination) {
                    valid=false;break;
                }
                for(cell i=0;i<cells;++i) destination[i]=source[i];
                storage[index]=address;
            } else {
                samp::amx::cell* scalar=nullptr;
                if(amx_memory::get_address(&vm.amx_,value,&scalar)!=0 || !scalar) {
                    valid=false;break;
                }
                storage[index]=*scalar;
            }
        }
        if(!valid) return 0;
        const auto id=++host.next_script_timer_;
        auto& timer=host.script_timers_[id];
        timer.owner=&vm;timer.callback=std::string(name).substr(0,255);
        timer.interval=timer.remaining=args[1];timer.repeat=args[2]!=0;timer.killed=false;
        timer.arguments=std::move(storage);
        return std::bit_cast<cell>(id);
    };
    // Official: FUN_00473210 @ 0x00473210 (samp-server.exe)
    vm.native_functions_["KillTimer"]=[&host](std::span<const cell> args)->cell {
        if(!args.empty()) if(const auto timer=host.script_timers_.find(static_cast<std::uint32_t>(args[0]));timer!=host.script_timers_.end()) {
            timer->second.remaining=0;timer->second.repeat=false;timer->second.killed=true;
        }
        return 1;
    };
    for (const auto& [name, function] : core_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }
    for (const auto& [name, function] : property_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }
    for (const auto& [name, function] : time_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }
    for (const auto& [name, function] : string_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }

    // ------------------------------------------------------------- the floats
    for (const auto& [name, function] : float_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }

    // ------------------------------------------------------------- the files
    for (const auto& [name, function] : file_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }

    // ------------------------------------------------------------- the server
    for(const auto& [name,function]:variable_natives::kNatives)
        vm.native_functions_[std::string(name)]=[&vm,&host,function](std::span<const cell> args) {
            return function(&vm.amx_,host,args);
        };

    vm.native_functions_["SetGameModeText"] = [&host, read_script_string](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            const char* text = read_script_string(args[0]);
            host.set_game_mode_text(text != nullptr ? text : "");
        }
        return 0;
    };
    // Official: FUN_0046feb0 @ 0x0046feb0 (samp-server.exe)
    vm.native_functions_["GameModeExit"]=[&host](std::span<const cell>)->cell {
        if(host.select_gamemode({})) host.gamemode_exit_requested_=true;
        else {
            constexpr auto message="The gamemode finished and I couldn't start another script.";
            if(host.log_message_) host.log_message_(message);else std::puts(message);
            std::fflush(nullptr);std::exit(1);
        }
        return 0;
    };
    vm.native_functions_["GetMaxPlayers"] = [&host](std::span<const cell>) -> cell {
        return host.max_players();
    };
    // Official: FUN_0047bb00 @ 0x0047bb00 (samp-server.exe)
    vm.native_functions_["SetPlayerInterior"] = [&host, player_slot](std::span<const cell> args) -> cell {
        if (args.size() < 2 || !player_slot(args[0])) return 0;
        host.set_player_interior(static_cast<std::uint16_t>(args[0]), args[1]);
        return 1;
    };
    // Official: FUN_0047ae30 @ 0x0047ae30 (samp-server.exe)
    vm.native_functions_["SetPlayerPos"] = [&host, as_float, player_slot](std::span<const cell> args) -> cell {
        if (args.size() < 4 || !player_slot(args[0])) return 0;
        host.set_player_pos(static_cast<std::uint16_t>(args[0]), as_float(args[1]), as_float(args[2]),
                            as_float(args[3]));
        return 1;
    };
    // Official: FUN_0047c920 @ 0x0047c920 (samp-server.exe)
    vm.native_functions_["SetPlayerFacingAngle"] = [&host, as_float, player_slot](std::span<const cell> args) -> cell {
        if (args.size() < 2 || !player_slot(args[0])) return 0;
        host.set_player_facing_angle(static_cast<std::uint16_t>(args[0]), as_float(args[1]));
        return 1;
    };
    // Official: FUN_0047bcc0 @ 0x0047bcc0 (samp-server.exe)
    vm.native_functions_["SetPlayerCameraPos"] = [&host, as_float, player_slot](std::span<const cell> args) -> cell {
        if (args.size() < 4 || !player_slot(args[0])) return 0;
        host.set_camera_pos(static_cast<std::uint16_t>(args[0]), as_float(args[1]), as_float(args[2]),
                            as_float(args[3]));
        return 1;
    };
    // Official: FUN_0047bde0 @ 0x0047bde0 (samp-server.exe)
    vm.native_functions_["SetPlayerCameraLookAt"] = [&host, as_float, player_slot](std::span<const cell> args) -> cell {
        if (args.size() < 4 || !player_slot(args[0])) return 0;
        // The fifth argument defaults to CAMERA_CUT (2).
        const int cut = args.size() >= 5 ? args[4] : 2;
        host.set_camera_look_at(static_cast<std::uint16_t>(args[0]), as_float(args[1]), as_float(args[2]),
                                as_float(args[3]), cut);
        return 1;
    };
    // Official: FUN_00473050 @ 0x00473050 (samp-server.exe)
    vm.native_functions_["TogglePlayerClock"] = [&host, player_slot](std::span<const cell> args) -> cell {
        if (args.size() < 2 || !player_slot(args[0])) return 0;
        host.toggle_player_clock(static_cast<std::uint16_t>(args[0]), static_cast<std::uint8_t>(args[1]));
        return 1;
    };
    vm.native_functions_["AllowAdminTeleport"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["PlayerPlaySound"] = [&host,as_float](std::span<const cell> args) -> cell {
        if(args.size()<5) return 0;
        return host.play_player_sound(args[0],args[1],{as_float(args[2]),as_float(args[3]),as_float(args[4])});
    };
    vm.native_functions_["SetCameraBehindPlayer"] = [&host](std::span<const cell> args) -> cell {
        return args.empty()?0:host.set_camera_behind_player(args[0]);
    };
    vm.native_functions_["InterpolateCameraPos"] = [&host,as_float](std::span<const cell> args) -> cell {
        if(args.size()<9) return 0;
        return host.interpolate_camera_pos(args[0],{as_float(args[1]),as_float(args[2]),as_float(args[3])},
            {as_float(args[4]),as_float(args[5]),as_float(args[6])},args[7],args[8]);
    };
    vm.native_functions_["InterpolateCameraLookAt"] = [&host,as_float](std::span<const cell> args) -> cell {
        if(args.size()<9) return 0;
        return host.interpolate_camera_look_at(args[0],{as_float(args[1]),as_float(args[2]),as_float(args[3])},
            {as_float(args[4]),as_float(args[5]),as_float(args[6])},args[7],args[8]);
    };
    vm.native_functions_["SetPlayerVelocity"] = [&host,as_float](std::span<const cell> args) -> cell {
        if(args.size()<4) return 0;
        return host.set_player_velocity(args[0],{as_float(args[1]),as_float(args[2]),as_float(args[3])});
    };
    vm.native_functions_["SetPlayerPosFindZ"] = [&host,as_float](std::span<const cell> args) -> cell {
        if(args.size()<4) return 0;
        return host.set_player_pos_find_z(args[0],{as_float(args[1]),as_float(args[2]),as_float(args[3])});
    };
    vm.native_functions_["SetPlayerSpecialAction"] = [&host](std::span<const cell> args) -> cell {
        return args.size()<2?0:host.set_player_special_action(args[0],args[1]);
    };
    vm.native_functions_["SetPlayerAmmo"] = [&host](std::span<const cell> args) -> cell {
        return args.size()<3?0:host.set_player_ammo(args[0],args[1],args[2]);
    };
    vm.native_functions_["RemoveBuildingForPlayer"] = [&host,as_float](std::span<const cell> args) -> cell {
        if(args.size()<6) return 0;
        return host.remove_building_for_player(args[0],args[1],{as_float(args[2]),as_float(args[3]),as_float(args[4])},as_float(args[5]));
    };
    vm.native_functions_["PlayAudioStreamForPlayer"] = [&host,as_float,read_script_string](std::span<const cell> args) -> cell {
        if(args.size()<7) return 0;
        const auto* url=read_script_string(args[1]);
        if(!url) return 0;
        return host.play_audio_stream_for_player(args[0],url,{as_float(args[2]),as_float(args[3]),as_float(args[4])},
            as_float(args[5]),args[6]);
    };
    vm.native_functions_["StopAudioStreamForPlayer"] = [&host](std::span<const cell> args) -> cell {
        return args.empty()?0:host.stop_audio_stream_for_player(args[0]);
    };
    vm.native_functions_["GameTextForPlayer"] = [&host, read_script_string](std::span<const cell> args) {
        return game_text_for_player(host, args, read_script_string);
    };
    // Official: FUN_00471370 @ 0x00471370 (samp-server.exe)
    vm.native_functions_["GetPlayerName"]=[player_slot,store_cell](std::span<const cell> args)->cell {
        const auto* player=args.size()<3?nullptr:player_slot(args[0]);if(!player) return 0;
        const auto capacity=static_cast<std::uint32_t>(args[2]);
        const auto count=capacity?std::min<std::size_t>(player->name.size(),capacity-1u):0;
        for(std::size_t i=0;i<=count;++i) {
            const auto address=std::int64_t(args[1])+static_cast<std::int64_t>(i)*4;
            if(address<0 || address>INT32_MAX || !store_cell(static_cast<cell>(address),
                i<count?static_cast<signed char>(player->name[i]):0)) return 0;
        }
        return static_cast<cell>(count);
    };
    vm.native_functions_["IsPlayerConnected"] = [&host](std::span<const cell> args) -> cell {
        return !args.empty() && host.is_player_connected(args[0]);
    };
    vm.native_functions_["Kick"] = [&host](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            host.kick_player(args[0]);
        }
        return 0;
    };
    // 00471b70 returns1 after sending to a connected ushort player slot.
    vm.native_functions_["SendClientMessage"] = [&host, read_script_string,player_slot](std::span<const cell> args) -> cell {
        if(args.size()<3 || !player_slot(args[0])) return 0;
        const char* text=read_script_string(args[2]);if(!text) return 0;
        host.send_client_message(static_cast<std::uint16_t>(args[0]),args[1],text);
        return 1;
    };
    // Official: FUN_00471c40 @ 0x00471c40 (samp-server.exe)
    vm.native_functions_["SendClientMessageToAll"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;
        const char* text=read_script_string(args[1]);
        for(const auto& player:host.players_) if(player.in_use && player.peer)
            host.send_client_message(player.id,args[0],text?text:"");
        return 1;
    };
    // ------------------------------------------------------- the class list
    //
    // AddPlayerClass(modelid, Float:x, Float:y, Float:z, Float:angle,
    //                weapon1, weapon1_ammo, weapon2, weapon2_ammo,
    //                weapon3, weapon3_ammo)
    // Official: FUN_0046ff70 @ 0x0046ff70 (samp-server.exe)
    vm.native_functions_["AddPlayerClass"] = [&host, as_float](std::span<const cell> args) -> cell {
        if (args.size() < 11) {
            return 0;
        }
        PlayerClassSpec spec;
        spec.model = args[0];
        spec.x = as_float(args[1]);
        spec.y = as_float(args[2]);
        spec.z = as_float(args[3]);
        spec.angle = as_float(args[4]);
        for (int i = 0; i < 3; ++i) {
            spec.weapon[i] = args[5 + i * 2];
            spec.ammunition[i] = args[6 + i * 2];
        }
        return host.add_player_class(spec);
    };
    // AddPlayerClassEx(teamid, modelid, Float:x, ...): the same with a team.
    // Official: FUN_0046fff0 @ 0x0046fff0 (samp-server.exe)
    vm.native_functions_["AddPlayerClassEx"] = [&host, as_float](std::span<const cell> args) -> cell {
        if (args.size() < 12) {
            return 0;
        }
        PlayerClassSpec spec;
        spec.team = static_cast<std::uint8_t>(args[0]);
        spec.model = args[1];
        spec.x = as_float(args[2]);
        spec.y = as_float(args[3]);
        spec.z = as_float(args[4]);
        spec.angle = as_float(args[5]);
        for (int i = 0; i < 3; ++i) {
            spec.weapon[i] = args[6 + i * 2];
            spec.ammunition[i] = args[7 + i * 2];
        }
        return host.add_player_class(spec);
    };
    // 00467530: vehicle IDs 1..1999, models 400..611; no slot returns 0xffff.
    const auto vehicle_slot = [&host](cell id) -> VehicleNativeState* {
        const auto index=static_cast<std::uint16_t>(id);
        return index<host.vehicles_.size() && host.vehicles_[index].active?&host.vehicles_[index]:nullptr;
    };
    const auto create_vehicle = [&host,as_float](std::span<const cell> args, bool dynamic, bool extended) -> cell {
        if(args.size()<(extended?8u:7u)) return 0xffff;
        if(dynamic && (args[0]==537 || args[0]==538)) {
            constexpr auto message="Only create trains with AddStaticVehicle/Ex";
            if(host.log_message_) host.log_message_(message);else std::puts(message);
            return 0;
        }
        if(args[0]<400 || args[0]>611) return 0xffff;
        auto make=[&](int model,cell delay,bool siren) -> cell {
            for(std::size_t id=1;id<2000 && id<host.vehicles_.size();++id) {
                if(host.vehicles_[id].active) continue;
                auto& v=host.vehicles_[id];v=VehicleNativeState{};
                v.active=true;v.id=static_cast<std::uint16_t>(id);v.model=model;
                v.x=v.spawn_x=as_float(args[1]);v.y=v.spawn_y=as_float(args[2]);v.z=v.spawn_z=as_float(args[3]);
                v.angle=v.spawn_angle=as_float(args[4]);v.colour1=args[5];v.colour2=args[6];
                v.respawn_delay_ms=delay;v.siren=siren;
                v.respawn_x=v.x;v.respawn_y=v.y;v.respawn_z=v.z;v.respawn_angle=v.angle;
                v.created_ms=v.last_occupied_ms=static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
                    std::chrono::steady_clock::now().time_since_epoch()).count());
                return static_cast<cell>(id);
            }
            return 0xffff;
        };
        // 0x4717e0 / 0x4701c0 use IMUL in the 32-bit cell domain;
        // AddStaticVehicle always supplies 120000 ms and has no siren argument.
        const cell seconds=extended?args[7]:120;
        const cell delay=seconds==-1?-1:std::bit_cast<cell>(static_cast<std::uint32_t>(seconds)*1000u);
        const auto first=make(args[0],delay,extended && args.size()>8 && args[8]!=0);
        if(!dynamic && (args[0]==537 || args[0]==538))
            for(int i=0;i<3;++i) make(args[0]==537?569:570,-1,false);
        return first;
    };
    // Official: FUN_004717e0 @ 0x004717e0 (samp-server.exe)
    vm.native_functions_["CreateVehicle"]=[create_vehicle](auto args)->cell{return create_vehicle(args,true,true);};
    // Official: FUN_00470070 @ 0x00470070 (samp-server.exe)
    vm.native_functions_["AddStaticVehicle"]=[create_vehicle](auto args)->cell{return create_vehicle(args,false,false);};
    // Official: FUN_004701c0 @ 0x004701c0 (samp-server.exe)
    vm.native_functions_["AddStaticVehicleEx"]=[create_vehicle](auto args)->cell{return create_vehicle(args,false,true);};
    // 004718b0 -> 004677d0 broadcasts removal and frees all per-player holds.
    vm.native_functions_["DestroyVehicle"]=[&host,vehicle_slot](std::span<const cell> args)->cell {
        auto* v=args.empty()?nullptr:vehicle_slot(args[0]);if(!v) return 0;
        const auto id=v->id;samp::proto::BitStream payload;payload.write(&id,2);
        for(auto& p:host.players_) {
            if(p.in_use && p.peer && id<p.streamed_vehicles.size() && p.streamed_vehicles[id]) {
                host.send_rpc(*p.peer,165,payload);p.streamed_vehicles[id]=0;
                if(p.streamed_vehicle_count) --p.streamed_vehicle_count;
            }
            if(p.vehicle_id==id) {p.vehicle_id=0;p.vehicle_seat=0;}
        }
        *v=VehicleNativeState{};return 1;
    };
    // 00474110 -> 00489c40: update observed vehicle health and streamed clients.
    vm.native_functions_["SetVehicleHealth"]=[&host,vehicle_slot,as_float](std::span<const cell> args)->cell {
        auto* v=args.size()<2?nullptr:vehicle_slot(args[0]);if(!v) return 0;
        v->health=as_float(args[1]);samp::proto::BitStream payload;payload.write(&v->id,2);payload.write(&args[1],4);
        for(auto& p:host.players_) if(p.in_use && p.peer && v->id<p.streamed_vehicles.size() && p.streamed_vehicles[v->id])
            host.send_rpc(*p.peer,147,payload);
        return 1;
    };
    // 00471980 / 00489d10: position changes the spawn/current position together.
    vm.native_functions_["SetVehiclePos"]=[&host,vehicle_slot,as_float](std::span<const cell> args)->cell {
        auto* v=args.size()<4?nullptr:vehicle_slot(args[0]);if(!v) return 0;
        v->x=v->spawn_x=as_float(args[1]);v->y=v->spawn_y=as_float(args[2]);v->z=v->spawn_z=as_float(args[3]);
        samp::proto::BitStream payload;payload.write(&v->id,2);payload.write(&args[1],12);
        for(auto& p:host.players_) if(p.in_use && p.peer && v->id<p.streamed_vehicles.size() && p.streamed_vehicles[v->id]) {
            host.send_rpc(*p.peer,159,payload);
            if(v->driver==p.id) {p.x=v->x;p.y=v->y;p.z=v->z;}
        }
        return 1;
    };
    // Native owner 0047a120: interior is metadata/engine placement, not a world visibility filter.
    vm.native_functions_["LinkVehicleToInterior"]=[&host,vehicle_slot](std::span<const cell> args)->cell {
        auto* v=args.size()<2?nullptr:vehicle_slot(args[0]);if(!v) return 0;v->interior=static_cast<std::uint8_t>(args[1]);
        samp::proto::BitStream payload;payload.write(&v->id,2);payload.write(&v->interior,1);
        for(auto& p:host.players_) if(p.in_use && p.peer && v->id<p.streamed_vehicles.size() && p.streamed_vehicles[v->id])
            host.send_rpc(*p.peer,65,payload);
        return 1;
    };
    // 0047b180 ensures the vehicle is streamed before the targeted RPC 70.
    vm.native_functions_["PutPlayerInVehicle"]=[&host,player_slot,vehicle_slot](std::span<const cell> args)->cell {
        auto* p=args.size()<3?nullptr:player_slot(args[0]);auto* v=args.size()<3?nullptr:vehicle_slot(args[1]);
        if(!p || !v || !p->peer) return 0;
        host.send_vehicle_stream_in(*p,*v);
        p->vehicle_id=v->id;p->x=v->x;p->y=v->y;p->z=v->z;
        if(args[2]==0) v->driver=p->id;
        samp::proto::BitStream payload;payload.write(&v->id,2);const auto seat=static_cast<std::uint8_t>(args[2]);payload.write(&seat,1);
        host.send_rpc(*p->peer,70,payload);return 1;
    };
    // Native owner 00471210 sends a command; state changes on subsequent sync.
    vm.native_functions_["RemovePlayerFromVehicle"]=[&host,player_slot](std::span<const cell> args)->cell {
        auto* p=args.empty()?nullptr:player_slot(args[0]);if(!p || !p->peer) return 0;
        samp::proto::BitStream payload;host.send_rpc(*p->peer,71,payload);return 1;
    };
    // 00470ee0 -> 00466a20: the RPC is sent only for a changed virtual world.
    vm.native_functions_["SetPlayerVirtualWorld"]=[&host,player_slot](std::span<const cell> args)->cell {
        auto* p=args.size()<2?nullptr:player_slot(args[0]);if(!p || !p->peer) return 0;
        if(p->virtual_world!=args[1]) {
            if(host.artwork_enabled_ && args[1]!=0) p->models_ready=false;
            p->virtual_world=args[1];samp::proto::BitStream payload;payload.write(&args[1],4);host.send_rpc(*p->peer,48,payload);
        }
        return 1;
    };


    vm.native_functions_["TextDrawCreate"] = [&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<3) return 0xffff;
        const auto* text=read_script_string(args[2]);
        return host.text_draw_create(args[0],args[1],text?text:"");
    };
    vm.native_functions_["TextDrawSetString"] = [&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;
        const auto* text=read_script_string(args[1]);
        return host.text_draw_set_string(args[0],text?text:"");
    };
    vm.native_functions_["TextDrawLetterSize"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.text_draw_letter_size(a[0],a[1],a[2]);
    };
    vm.native_functions_["TextDrawTextSize"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.text_draw_text_size(a[0],a[1],a[2]);
    };
    vm.native_functions_["TextDrawAlignment"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_alignment(a[0],a[1]);
    };
    vm.native_functions_["TextDrawColor"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_colour(a[0],static_cast<std::uint32_t>(a[1]));
    };
    vm.native_functions_["TextDrawUseBox"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_use_box(a[0],a[1]);
    };
    vm.native_functions_["TextDrawBoxColor"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_box_colour(a[0],static_cast<std::uint32_t>(a[1]));
    };
    vm.native_functions_["TextDrawSetShadow"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_shadow(a[0],a[1]);
    };
    vm.native_functions_["TextDrawSetOutline"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_outline(a[0],a[1]);
    };
    vm.native_functions_["TextDrawBackgroundColor"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_background_colour(a[0],static_cast<std::uint32_t>(a[1]));
    };
    vm.native_functions_["TextDrawFont"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_font(a[0],a[1]);
    };
    vm.native_functions_["TextDrawSetProportional"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_proportional(a[0],a[1]);
    };
    vm.native_functions_["TextDrawSetSelectable"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_selectable(a[0],a[1]);
    };
    vm.native_functions_["TextDrawSetPreviewModel"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_preview_model(a[0],a[1]);
    };
    vm.native_functions_["TextDrawSetPreviewRot"] = [&host](std::span<const cell> a)->cell {
        return a.size()<5?0:host.text_draw_preview_rotation(a[0],{a[1],a[2],a[3],a[4]});
    };
    vm.native_functions_["TextDrawSetPreviewVehCol"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.text_draw_preview_colours(a[0],a[1],a[2]);
    };
    vm.native_functions_["TextDrawShowForPlayer"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_show_for_player(a[0],a[1]);
    };
    vm.native_functions_["TextDrawHideForPlayer"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.text_draw_hide_for_player(a[0],a[1]);
    };
    vm.native_functions_["TextDrawShowForAll"] = [&host](std::span<const cell> a)->cell {
        return a.empty()?0:host.text_draw_show_for_all(a[0]);
    };
    vm.native_functions_["TextDrawHideForAll"] = [&host](std::span<const cell> a)->cell {
        return a.empty()?0:host.text_draw_hide_for_all(a[0]);
    };
    vm.native_functions_["TextDrawDestroy"] = [&host](std::span<const cell> a)->cell {
        return a.empty()?0:host.text_draw_destroy(a[0]);
    };
    vm.native_functions_["CreatePlayerTextDraw"] = [&host,read_script_string](std::span<const cell> a)->cell {
        if(a.size()<4) return 0;
        const auto* text=read_script_string(a[3]);
        return host.player_text_draw_create(a[0],a[1],a[2],text?text:"");
    };
    vm.native_functions_["PlayerTextDrawSetString"] = [&host,read_script_string](std::span<const cell> a)->cell {
        if(a.size()<3) return 0;
        const auto* text=read_script_string(a[2]);
        return host.player_text_draw_set_string(a[0],a[1],text?text:"");
    };
    vm.native_functions_["PlayerTextDrawLetterSize"] = [&host](std::span<const cell> a)->cell {
        return a.size()<4?0:host.player_text_draw_letter_size(a[0],a[1],a[2],a[3]);
    };
    vm.native_functions_["PlayerTextDrawTextSize"] = [&host](std::span<const cell> a)->cell {
        return a.size()<4?0:host.player_text_draw_text_size(a[0],a[1],a[2],a[3]);
    };
    vm.native_functions_["PlayerTextDrawAlignment"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_alignment(a[0],a[1],a[2]);
    };
    vm.native_functions_["PlayerTextDrawColor"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_colour(a[0],a[1],static_cast<std::uint32_t>(a[2]));
    };
    vm.native_functions_["PlayerTextDrawUseBox"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_use_box(a[0],a[1],a[2]);
    };
    vm.native_functions_["PlayerTextDrawBoxColor"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_box_colour(a[0],a[1],static_cast<std::uint32_t>(a[2]));
    };
    vm.native_functions_["PlayerTextDrawSetShadow"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_shadow(a[0],a[1],a[2]);
    };
    vm.native_functions_["PlayerTextDrawSetOutline"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_outline(a[0],a[1],a[2]);
    };
    vm.native_functions_["PlayerTextDrawBackgroundColor"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_background_colour(a[0],a[1],static_cast<std::uint32_t>(a[2]));
    };
    vm.native_functions_["PlayerTextDrawFont"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_font(a[0],a[1],a[2]);
    };
    vm.native_functions_["PlayerTextDrawSetProportional"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_proportional(a[0],a[1],a[2]);
    };
    vm.native_functions_["PlayerTextDrawSetSelectable"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_selectable(a[0],a[1],a[2]);
    };
    vm.native_functions_["PlayerTextDrawSetPreviewModel"] = [&host](std::span<const cell> a)->cell {
        return a.size()<3?0:host.player_text_draw_preview_model(a[0],a[1],a[2]);
    };
    vm.native_functions_["PlayerTextDrawSetPreviewRot"] = [&host](std::span<const cell> a)->cell {
        return a.size()<6?0:host.player_text_draw_preview_rotation(a[0],a[1],{a[2],a[3],a[4],a[5]});
    };
    vm.native_functions_["PlayerTextDrawSetPreviewVehCol"] = [&host](std::span<const cell> a)->cell {
        return a.size()<4?0:host.player_text_draw_preview_colours(a[0],a[1],a[2],a[3]);
    };
    vm.native_functions_["PlayerTextDrawShow"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.player_text_draw_show(a[0],a[1]);
    };
    vm.native_functions_["PlayerTextDrawHide"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.player_text_draw_hide(a[0],a[1]);
    };
    vm.native_functions_["PlayerTextDrawDestroy"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.player_text_draw_destroy(a[0],a[1]);
    };
    vm.native_functions_["SelectTextDraw"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.select_text_draw(a[0],static_cast<std::uint32_t>(a[1]));
    };
    vm.native_functions_["CancelSelectTextDraw"] = [&host](std::span<const cell> a)->cell {
        return a.empty()?0:host.cancel_select_text_draw(a[0]);
    };
    vm.native_functions_["CreateMenu"] = [&host,read_script_string](std::span<const cell> a)->cell {
        if(a.size()<6) return -1;const auto* text=read_script_string(a[0]);
        return host.create_menu(text?text:"",a[1],{a[2],a[3],a[4],a[5]});
    };
    vm.native_functions_["DestroyMenu"] = [&host](std::span<const cell> a)->cell {
        return a.empty()?0:host.destroy_menu(a[0]);
    };
    vm.native_functions_["AddMenuItem"] = [&host,read_script_string](std::span<const cell> a)->cell {
        if(a.size()<3) return 0;const auto* text=read_script_string(a[2]);
        return host.add_menu_item(a[0],a[1],text?text:"");
    };
    vm.native_functions_["SetMenuColumnHeader"] = [&host,read_script_string](std::span<const cell> a)->cell {
        if(a.size()<3) return 0;const auto* text=read_script_string(a[2]);
        return host.set_menu_header(a[0],a[1],text?text:"");
    };
    vm.native_functions_["ShowMenuForPlayer"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.show_menu_for_player(a[0],a[1]);
    };
    vm.native_functions_["HideMenuForPlayer"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.hide_menu_for_player(a[0],a[1]);
    };
    vm.native_functions_["IsValidMenu"] = [&host](std::span<const cell> a)->cell {
        return a.empty()?0:host.is_valid_menu(a[0]);
    };
    vm.native_functions_["DisableMenu"] = [&host](std::span<const cell> a)->cell {
        return a.empty()?0:host.disable_menu(a[0]);
    };
    vm.native_functions_["DisableMenuRow"] = [&host](std::span<const cell> a)->cell {
        return a.size()<2?0:host.disable_menu_row(a[0],a[1]);
    };
    vm.native_functions_["GetPlayerMenu"] = [&host](std::span<const cell> a)->cell {
        return a.empty()?255:host.get_player_menu(a[0]);
    };

    // 00470c00 stores spawn info, authorizes the spawn, then sends RPC 68.
    vm.native_functions_["SetSpawnInfo"]=[&host,player_slot,as_float](std::span<const cell> args)->cell {
        auto* p=args.size()<13?nullptr:player_slot(args[0]);if(!p || !p->peer) return 0;
        auto& spec=p->spawn_info;spec.team=args[1];spec.model=args[2];spec.custom_model=0;
        // 00470c67..00470c9e: resolve a registered custom skin's stock base.
        if(host.artwork_enabled_ && spec.model>20000) for(const auto& entry:host.models_) {
            if(entry.spec.new_id==spec.model) {
                spec.custom_model=static_cast<std::uint32_t>(spec.model);spec.model=entry.spec.base_id;break;
            }
        }
        p->team=static_cast<std::uint8_t>(spec.team);p->skin=spec.model;p->custom_model=spec.custom_model;
        spec.x=as_float(args[3]);spec.y=as_float(args[4]);spec.z=as_float(args[5]);spec.angle=as_float(args[6]);
        for(int i=0;i<3;++i) {spec.weapon[i]=args[7+i*2];spec.ammunition[i]=args[8+i*2];}
        p->has_spawn_info=p->spawn_authorized=true;
        samp::proto::BitStream payload;const auto team=static_cast<std::uint8_t>(spec.team);
        const auto custom=spec.custom_model;const std::uint8_t extra=0;
        payload.write(&team,1);payload.write(&spec.model,4);payload.write(&custom,4);payload.write(&extra,1);
        payload.write(&spec.x,4);payload.write(&spec.y,4);payload.write(&spec.z,4);payload.write(&spec.angle,4);
        payload.write(spec.weapon,12);payload.write(spec.ammunition,12);host.send_rpc(*p->peer,68,payload);return 1;
    };

    // 0047a380 authorizes a forced spawn and sends RPC129's DWORD answer2.
    vm.native_functions_["SpawnPlayer"]=[&host,player_slot](std::span<const cell> args)->cell {
        auto* p=args.empty()?nullptr:player_slot(args[0]);if(!p || !p->peer) return 0;
        p->spawn_authorized=true;
        const std::uint32_t forced=2;samp::proto::BitStream payload;payload.write(&forced,4);
        host.send_rpc(*p->peer,129,payload);return 1;
    };

    // Official native wrappers 00479bf0 / 00479cf0 / 00479df0 delegate
    // registration to 00497170. Character entries are global; object entries
    // retain the supplied virtual world. Timed values narrow to bytes.
    vm.native_functions_["AddCharModel"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<4 || !host.artwork_enabled_) return 0;
        const auto* dff=read_script_string(args[2]);if(!dff || !*dff) return 0;
        CustomModelSpec spec;spec.kind=1;spec.virtual_world=-1;spec.base_id=args[0];spec.new_id=args[1];spec.model_file=dff;
        const auto* txd=read_script_string(args[3]);if(!txd || !*txd) return 0;spec.texture_file=txd;
        return host.add_custom_model(spec);
    };
    vm.native_functions_["AddSimpleModel"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<5 || !host.artwork_enabled_) return 0;
        const auto* dff=read_script_string(args[3]);if(!dff || !*dff) return 0;
        CustomModelSpec spec;spec.kind=2;spec.virtual_world=args[0];spec.base_id=args[1];spec.new_id=args[2];spec.model_file=dff;
        const auto* txd=read_script_string(args[4]);if(!txd || !*txd) return 0;spec.texture_file=txd;
        return host.add_custom_model(spec);
    };
    vm.native_functions_["AddSimpleModelTimed"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<7 || !host.artwork_enabled_) return 0;
        const auto* dff=read_script_string(args[3]);if(!dff || !*dff) return 0;
        CustomModelSpec spec;spec.kind=2;spec.virtual_world=args[0];spec.base_id=args[1];spec.new_id=args[2];spec.model_file=dff;
        const auto* txd=read_script_string(args[4]);if(!txd || !*txd) return 0;spec.texture_file=txd;
        spec.time_on=static_cast<std::uint8_t>(args[5]);spec.time_off=static_cast<std::uint8_t>(args[6]);
        return host.add_custom_model(spec);
    };
    const auto filename_from_crc=[&host,store_cell](std::span<const cell> args,bool texture)->cell {
        if(args.size()<3 || !host.artwork_enabled_) return 0;
        const auto crc=static_cast<std::uint32_t>(args[0]);
        const auto found=std::find_if(host.models_.begin(),host.models_.end(),[=](const auto& model){
            return (texture?model.texture_crc:model.model_crc)==crc;
        });
        if(found==host.models_.end()) return 0;
        const auto& name=texture?found->spec.texture_file:found->spec.model_file;
        if(args[2]<=0) return 1;
        const auto count=std::min<std::size_t>(name.size(),static_cast<std::uint32_t>(args[2])-1u);
        for(std::size_t i=0;i<=count;++i) {
            const auto address=std::int64_t(args[1])+static_cast<std::int64_t>(i)*4;
            if(address<0 || address>INT32_MAX || !store_cell(static_cast<cell>(address),i<count?static_cast<unsigned char>(name[i]):0)) return 0;
        }
        return 1;
    };
    // 00479f10 / 00479f70 find the first CRC match and write unpacked cells.
    vm.native_functions_["FindModelFileNameFromCRC"]=[filename_from_crc](auto args)->cell{return filename_from_crc(args,false);};
    vm.native_functions_["FindTextureFileNameFromCRC"]=[filename_from_crc](auto args)->cell{return filename_from_crc(args,true);};
    // 00479fe0: live player checks and URL redirect.
    vm.native_functions_["RedirectDownload"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;const auto* url=read_script_string(args[1]);
        return url && *url && host.redirect_download(static_cast<std::uint16_t>(args[0]),url);
    };

    // 0047a6b0 resolves the skin, updates the authoritative spawn slot,
    // sends RPC153 to the player and its stream observers, then RPC68 locally.
    vm.native_functions_["SetPlayerSkin"]=[&host,player_slot](std::span<const cell> args)->cell {
        auto* p=args.size()<2?nullptr:player_slot(args[0]);if(!p) return 0;
        p->skin=static_cast<std::uint32_t>(args[1]);p->custom_model=0;
        if(host.artwork_enabled_ && args[1]>20000) for(const auto& entry:host.models_) {
            if(entry.spec.new_id==args[1]) {p->skin=entry.spec.base_id;p->custom_model=args[1];break;}
        }
        p->spawn_info.model=static_cast<int>(p->skin);p->spawn_info.custom_model=p->custom_model;
        if(!p->has_spawn_info) return 1;
        samp::proto::BitStream payload;const auto id=static_cast<std::uint16_t>(p->id);
        payload.write(&id,2);payload.write(&p->skin,4);payload.write(&p->custom_model,4);
        for(auto& receiver:host.players_) if(receiver.in_use && receiver.peer &&
            (receiver.id==p->id || (id<receiver.streamed_to.size() && receiver.streamed_to[id])))
            host.send_rpc(*receiver.peer,153,payload);
        if(p->peer) {
            const auto& spec=p->spawn_info;const auto team=static_cast<std::uint8_t>(spec.team);const std::uint8_t extra=0;
            samp::proto::BitStream info;info.write(&team,1);info.write(&spec.model,4);info.write(&spec.custom_model,4);info.write(&extra,1);
            info.write(&spec.x,4);info.write(&spec.y,4);info.write(&spec.z,4);info.write(&spec.angle,4);
            info.write(spec.weapon,12);info.write(spec.ammunition,12);host.send_rpc(*p->peer,68,info);
        }
        return 1;
    };

    // Essential global objects are needed to exercise AddSimpleModel through
    // real Pawn callers. Allocation465380 searches slots1..1999;474b40 sends44.
    const auto object_slot=[&host](cell id)->ObjectNativeState* {
        const auto index=static_cast<std::uint16_t>(id);
        return index<host.objects_.size() && host.objects_[index].active?&host.objects_[index]:nullptr;
    };
    vm.native_functions_["CreateObject"]=[&host,as_float](std::span<const cell> args)->cell {
        if(args.size()<8) return 0xffff;
        for(std::size_t id=1;id<host.objects_.size();++id) if(!host.objects_[id].active) {
            auto& object=host.objects_[id];object={};object.active=true;object.id=static_cast<std::uint16_t>(id);object.model=args[0];
            for(int i=0;i<3;++i) {object.position[i]=as_float(args[1+i]);object.rotation[i]=as_float(args[4+i]);}
            object.draw_distance=as_float(args[7]);
            for(auto& player:host.players_) if(player.in_use && player.peer) host.send_object(player,object);
            return static_cast<cell>(id);
        }
        return 0xffff;
    };
    // 0047dd60 broadcasts destroy47 after releasing the authoritative slot.
    vm.native_functions_["DestroyObject"]=[&host,object_slot](std::span<const cell> args)->cell {
        auto* object=args.empty()?nullptr:object_slot(args[0]);if(!object) return 0;
        const auto id=object->id;object->active=false;samp::proto::BitStream payload;payload.write(&id,2);
        for(auto& player:host.players_) if(player.in_use && player.peer) {
            host.send_rpc(*player.peer,47,payload);
            if(id<player.streamed_objects.size()) player.streamed_objects[id]=0;
        }
        return 1;
    };
    // 00475460 /00475390 preserve invalid-object results0 /-1.
    vm.native_functions_["IsValidObject"]=[object_slot](std::span<const cell> args)->cell {return !args.empty() && object_slot(args[0]);};
    vm.native_functions_["GetObjectModel"]=[object_slot](std::span<const cell> args)->cell {
        const auto* object=args.empty()?nullptr:object_slot(args[0]);return object?object->model:-1;
    };
    // 0047dab0 /0047dc10 update the stored transform and broadcast45/46.
    const auto set_object_transform=[&host,object_slot,as_float](std::span<const cell> args,bool rotation)->cell {
        auto* object=args.size()<4?nullptr:object_slot(args[0]);if(!object) return 1;
        auto& values=rotation?object->rotation:object->position;
        for(int i=0;i<3;++i) values[i]=as_float(args[1+i]);
        samp::proto::BitStream payload;payload.write(&object->id,2);payload.write(values.data(),12);
        for(auto& player:host.players_) if(player.in_use && player.peer) host.send_rpc(*player.peer,rotation?46:45,payload);
        return 1;
    };
    vm.native_functions_["SetObjectPos"]=[set_object_transform](auto args)->cell{return set_object_transform(args,false);};
    vm.native_functions_["SetObjectRot"]=[set_object_transform](auto args)->cell{return set_object_transform(args,true);};
    // 00475260 /004752f0 write unpacked float cells through AMX references.
    const auto get_object_transform=[object_slot,store_cell](std::span<const cell> args,bool rotation)->cell {
        const auto* object=args.size()<4?nullptr:object_slot(args[0]);if(!object) return 0;
        const auto& values=rotation?object->rotation:object->position;
        for(int i=0;i<3;++i) if(!store_cell(args[1+i],std::bit_cast<cell>(values[i]))) return 0;
        return 1;
    };
    vm.native_functions_["GetObjectPos"]=[get_object_transform](auto args)->cell{return get_object_transform(args,false);};
    vm.native_functions_["GetObjectRot"]=[get_object_transform](auto args)->cell{return get_object_transform(args,true);};

    // ------------------------------------------------------------- the db
    // The 18 SQLite natives of a_sampdb.inc (backed by the vendored 3.7.0).
    register_db_natives(vm);
}

}  // namespace samp::pawn
