// The camera, menu and text draw RPCs, and the dispatcher that maps the RPC id
// of the server to the handler.
#include <cstring>
#include <bit>

#include "samp/client/server_rpc.hpp"
#include "server_rpc_handlers.hpp"

namespace samp::client {
namespace {


}  // namespace

// 0x10019b20: AttachCameraToObject, objectid (16).  The official handler only
// attaches to an object the map pool holds.
// Official: FUN_10019b20 @ 0x10019b20 (samp.dll)
bool rpc_attach_camera_to_object(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t object_id = 0;
    if (!in.read(&(object_id),2)) {
        return false;
    }
    if ((context.world.objects_.contains(object_id) ? &context.world.objects_.at(object_id) : nullptr) == nullptr) {
        return true;
    }
    CameraState& camera = context.world.stream.camera;
    camera.attached_object = static_cast<std::int16_t>(object_id);
    camera.set = true;
    return true;
}

// 0x10019c20: InterpolateCameraPos.  One bit (the direction the game uses),
// the source position (three floats), the destination position (three floats),
// the time (32) and the mode (8, clamped to 2).  A zero time leaves the camera
// alone.
// Official: FUN_10019c20 @ 0x10019c20 (samp.dll)
bool rpc_interpolate_camera(ServerRpcContext& context, samp::proto::BitStream& in) {
    const bool from_player = in.readBit();
    float source[3] = {};
    float destination[3] = {};
    std::uint32_t time = 0;
    std::uint8_t mode = 0;
    for (float& value : source) {
        if (!in.read(&(value),4)) {
            return false;
        }
    }
    for (float& value : destination) {
        if (!in.read(&(value),4)) {
            return false;
        }
    }
    if (!in.read(&(time),4) || !in.read(&(mode),1)) {
        return false;
    }
    if (mode == 0 || mode > 2) {
        mode = 2;
    }
    if (time == 0) {
        return true;
    }
    (void)from_player;
    CameraState& camera = context.world.stream.camera;
    camera.x = source[0];
    camera.y = source[1];
    camera.z = source[2];
    camera.look_x = destination[0];
    camera.look_y = destination[1];
    camera.look_z = destination[2];
    camera.interpolating = true;
    camera.interpolation_time = time;
    camera.interpolation_mode = mode;
    camera.set = true;
    return true;
}

// 0x100195d0: SetPlayerCameraPos, three floats.
// Official: FUN_100195d0 @ 0x100195d0 (samp.dll)
bool rpc_set_camera_position(ServerRpcContext& context, samp::proto::BitStream& in) {
    float x = 0.0f, y = 0.0f, z = 0.0f;
    if (!in.read(&(x),4) || !in.read(&(y),4) || !in.read(&(z),4)) {
        return false;
    }
    CameraState& camera = context.world.stream.camera;
    camera.x = x;
    camera.y = y;
    camera.z = z;
    camera.set = true;
    if (context.commands) {
        CameraCommand command{CameraCommand::Kind::Position};
        command.coordinates = {std::bit_cast<std::uint32_t>(x),
                               std::bit_cast<std::uint32_t>(y),
                               std::bit_cast<std::uint32_t>(z)};
        context.commands->emplace_back(command);
    }
    return true;
}

// 0x100196a0: SetPlayerCameraLookAt, three floats and the cut mode (8).
// Official: FUN_100196a0 @ 0x100196a0 (samp.dll)
bool rpc_set_camera_look_at(ServerRpcContext& context, samp::proto::BitStream& in) {
    float x = 0.0f, y = 0.0f, z = 0.0f;
    std::uint8_t mode = 0;
    if (!in.read(&(x),4) || !in.read(&(y),4) || !in.read(&(z),4)) {
        return false;
    }
    in.read(&(mode),1);
    if (mode == 0 || mode > 2) {
        mode = 2;
    }
    CameraState& camera = context.world.stream.camera;
    camera.look_x = x;
    camera.look_y = y;
    camera.look_z = z;
    camera.interpolation_mode = mode;
    camera.set = true;
    if (context.commands) {
        CameraCommand command{CameraCommand::Kind::LookAt};
        command.coordinates = {std::bit_cast<std::uint32_t>(x),
                               std::bit_cast<std::uint32_t>(y),
                               std::bit_cast<std::uint32_t>(z)};
        command.transition = mode;
        context.commands->emplace_back(command);
    }
    return true;
}

// 0x1001c650: ShowMenu, the menu id (8).
// Official: FUN_1001c650 @ 0x1001c650 (samp.dll)
bool rpc_show_menu(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t menu = 0;
    if (!in.read(&(menu),1)) {
        return false;
    }
    context.world.stream.active_menu = menu;
    return true;
}

// 0x1001c700: HideMenu, the menu id (8).
// Official: FUN_1001c700 @ 0x1001c700 (samp.dll)
bool rpc_hide_menu(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t menu = 0;
    if (!in.read(&(menu),1)) {
        return false;
    }
    auto& active = context.world.stream.active_menu;
    if (active == menu) {
        active = -1;
    }
    return true;
}

// 0x1001ca30: TextDrawSetString, textdraw id (16), the length (16) and the
// text itself.  The official handler bounds the length at 0x320 and only
// updates a text draw the pool holds.
// Official: FUN_1001ca30 @ 0x1001ca30 (samp.dll)
bool rpc_text_draw_set_string(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint16_t length = 0;
    if (!in.read(&(id),2) || !in.read(&(length),2)) {
        return false;
    }
    if (length >= 0x321) {
        return true;
    }
    std::string text(length, '\0');
    if (length > 0 && !in.read(text.data(), length)) {
        return false;
    }
    auto entry = context.world.stream.text_draws.find(id);
    if (entry == context.world.stream.text_draws.end()) {
        return true;
    }
    entry->second.text = std::move(text);
    return true;
}

// 0x1001c980: TextDrawDestroy, textdraw id (16).
// Official: FUN_1001c980 @ 0x1001c980 (samp.dll)
bool rpc_text_draw_destroy(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    if (!in.read(&(id),2)) {
        return false;
    }
    context.world.stream.text_draws.erase(id);
    return true;
}

// 0x1001dbf0: the table of the official client.  The server RPC ids below are
// the ones the registration loop pairs with each handler.
bool (*const apply_server_rpc)(ServerRpcContext&, std::uint8_t, samp::proto::BitStream) =
    [](ServerRpcContext& context, std::uint8_t rpc_id, samp::proto::BitStream payload) -> bool {
    switch (rpc_id) {
        case 43: return rpc_remove_building(context, payload);
        case 11: return rpc_set_player_name(context, payload);
        case 12: return rpc_set_player_position(context, payload);
        case 13: return rpc_set_player_position_find_z(context, payload);
        case 14: return rpc_set_player_health(context, payload);
        case 15: return rpc_toggle_player_controllable(context, payload);
        case 16: return rpc_player_play_sound(context, payload);
        case 17: return rpc_set_world_bounds(context, payload);
        case 18: return rpc_give_player_money(context, payload);
        case 19: return rpc_set_player_facing_angle(context, payload);
        case 20: return rpc_reset_player_money(context, payload);
        case 21: return rpc_reset_player_weapons(context, payload);
        case 22: return rpc_give_player_weapon(context, payload);
        case 24: return rpc_set_vehicle_component_states(context, payload);
        case 26: return rpc_player_enter_vehicle(context, payload);
        case 27: return rpc_begin_object_edit(context, payload);
        case 28: return rpc_cancel_object_edit(context, payload);
        case 29: return rpc_set_clock(context, payload);
        case 30: return rpc_toggle_clock(context, payload);
        case 34: return rpc_set_player_skill(context, payload);
        case 36: return rpc_show_text_label(context, payload);
        case 37: return rpc_clear_client_flag(context, payload);
        case 38: return rpc_set_race_checkpoint(context, payload);
        case 39: return rpc_disable_race_checkpoint(context, payload);
        case 40: return rpc_reset_player_state(context, payload);
        case 41: return rpc_play_audio_stream(context, payload);
        case 42: return rpc_stop_audio_stream(context, payload);
        case 44: return rpc_create_map_object(context, payload);
        case 45: return rpc_set_object_position(context, payload);
        case 46: return rpc_set_object_rotation(context, payload);
        case 47: return rpc_destroy_object(context, payload);
        case 48: return rpc_set_player_virtual_world(context, payload);
        case 55: return rpc_send_death_message(context, payload);
        case 56: return rpc_set_map_icon(context, payload);
        case 57: return rpc_remove_vehicle_component(context, payload);
        case 144: return rpc_remove_map_icon(context, payload);
        case 58: return rpc_hide_player_text_label(context, payload);
        case 59: return rpc_set_player_chat_bubble(context, payload);
        case 60: return rpc_set_world_time(context, payload);
        case 61: return rpc_show_dialog(context, payload);
        case 63: return rpc_destroy_pickup(context, payload);
        case 65: return rpc_link_vehicle_interior(context, payload);
        case 66: return rpc_set_player_armour(context, payload);
        case 67: return rpc_set_player_armed_weapon(context, payload);
        case 69: return rpc_set_player_team(context, payload);
        case 70: return rpc_put_player_in_vehicle(context, payload);
        case 71: return rpc_remove_player_from_vehicle(context, payload);
        case 72: return rpc_set_player_colour(context, payload);
        case 73: return rpc_show_game_text(context, payload);
        case 74: return rpc_force_class_selection(context, payload);
        case 77: return rpc_show_menu(context, payload);
        case 78: return rpc_hide_menu(context, payload);
        case 79: return rpc_create_explosion(context, payload);
        case 80: return rpc_show_player_name_tag(context, payload);
        case 81: return rpc_attach_camera_to_object(context, payload);
        case 82: return rpc_interpolate_camera(context, payload);
        case 85: return rpc_stop_flash_gang_zone(context, payload);
        case 86: return rpc_apply_animation(context, payload);
        case 87: return rpc_clear_animations(context, payload);
        case 88: return rpc_set_player_special_action(context, payload);
        case 89: return rpc_set_player_fighting_style(context, payload);
        case 90: return rpc_set_player_velocity(context, payload);
        case 91: return rpc_set_vehicle_velocity(context, payload);
        case 146: return rpc_set_gravity(context, payload);
        case 94: return rpc_set_clock_hour(context, payload);
        case 95: return rpc_create_pickup(context, payload);
        case 96: return rpc_scm_event(context, payload);
        case 98: return rpc_set_vehicle_tire_status(context, payload);
        case 99: return rpc_move_object(context, payload);
        case 102: return rpc_set_client_check_blob(context, payload);
        case 103: return rpc_client_check(context, payload);
        case 32: return rpc_player_stream_in(context, payload);
        case 104: return rpc_enable_stunt_bonus(context, payload);
        case 105: return rpc_text_draw_set_string(context, payload);
        case 106: return rpc_set_vehicle_damage_status(context, payload);
        case 107: return rpc_set_checkpoint(context, payload);
        case 108: return rpc_show_gang_zone(context, payload);
        case 111: return rpc_toggle_widescreen(context, payload);
        case 112: return rpc_play_crime_report(context, payload);
        case 116: return rpc_edit_attached_object(context, payload);
        case 117: return rpc_edit_object(context, payload);
        case 120: return rpc_hide_gang_zone(context, payload);
        case 121: return rpc_flash_gang_zone(context, payload);
        case 122: return rpc_stop_object(context, payload);
        case 135: return rpc_text_draw_destroy(context, payload);
        case 137: return rpc_player_join(context, payload);
        case 138: return rpc_player_quit(context, payload);
        case 147: return rpc_set_vehicle_health(context,payload);
        case 159: return rpc_set_vehicle_position(context,payload);
        case 152: return rpc_set_weather(context, payload);
        case 153: return rpc_set_player_skin(context, payload);
        case 151: return rpc_remove_pickup_model(context, payload);
        case 154: return rpc_player_close(context, payload);
        case 156: return rpc_set_player_interior(context, payload);
        case 157: return rpc_set_camera_position(context, payload);
        case 158: return rpc_set_camera_look_at(context, payload);
        case 163: return rpc_player_stream_out(context, payload);
        case 164: return rpc_spawn_vehicle(context, payload);
        case 165: return rpc_stream_out_vehicle(context, payload);
        case 166: return rpc_set_player_dead(context, payload);
        case 170: return rpc_set_camera_targeting(context, payload);
        case 171: return rpc_show_actor(context, payload);
        case 172: return rpc_hide_actor(context, payload);
        case 179: return rpc_request_model(context, payload);
        case 180: return rpc_remove_model(context, payload);
        case 183: return rpc_model_url(context, payload);
        case 185: return rpc_request_all_models(context, payload);
        default: return false;
    }
    };

}  // namespace samp::client
