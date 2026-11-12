#pragma once

#include "samp/client/server_rpc.hpp"

namespace samp::client {

class TestRpcActorSlotsAccess {
public:
    static void clear(ActorSlots& slots, std::uint16_t slot) {
        if (slot >= ActorSlots::kSlotCount) return;
        slots.actors_[slot].reset();
        slots.used_[slot] = 0;
        slots.network_ids_[slot] = 0;
        while (slots.occupied_ > 0 && slots.used_[slots.occupied_] == 0) {
            --slots.occupied_;
        }
    }

    static bool matches(const ActorSlots& slots, std::uint16_t slot,
                        std::uint32_t network_id) {
        return slot < ActorSlots::kSlotCount && slots.actors_[slot] != nullptr &&
               slots.used_[slot] != 0 && slots.network_ids_[slot] == network_id;
    }

    static void set(ActorSlots& slots, std::uint16_t slot,
                    std::uint32_t network_id, std::unique_ptr<RemoteActor> actor) {
        if (slot >= ActorSlots::kSlotCount) return;
        slots.actors_[slot] = std::move(actor);
        slots.used_[slot] = 1;
        slots.network_ids_[slot] = network_id;
        if (slot > slots.occupied_) slots.occupied_ = slot;
    }
};

bool rpc_set_player_skin(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_name(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_position(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_position_find_z(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_facing_angle(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_health(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_toggle_player_controllable(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_player_play_sound(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_world_bounds(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_give_player_money(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_reset_player_money(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_reset_player_weapons(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_give_player_weapon(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_virtual_world(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_armour(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_armed_weapon(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_team(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_colour(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_force_class_selection(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_special_action(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_fighting_style(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_velocity(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_interior(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_apply_animation(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_clear_animations(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_toggle_widescreen(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_world_time(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_weather(ServerRpcContext&, samp::proto::BitStream&);

bool rpc_set_vehicle_health(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_vehicle_position(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_vehicle_component_states(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_remove_vehicle_component(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_link_vehicle_interior(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_vehicle_velocity(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_vehicle_tire_status(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_vehicle_damage_status(ServerRpcContext&, samp::proto::BitStream&);

bool rpc_remove_building(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_create_map_object(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_object_position(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_object_rotation(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_destroy_object(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_move_object(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_stop_object(ServerRpcContext&, samp::proto::BitStream&);

bool rpc_player_enter_vehicle(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_put_player_in_vehicle(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_remove_player_from_vehicle(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_send_death_message(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_chat_bubble(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_show_player_name_tag(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_hide_player_text_label(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_player_join(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_player_quit(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_player_stream_out(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_player_stream_in(ServerRpcContext&, samp::proto::BitStream&);

bool rpc_set_map_icon(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_show_game_text(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_race_checkpoint(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_disable_race_checkpoint(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_play_audio_stream(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_stop_audio_stream(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_create_pickup(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_destroy_pickup(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_create_explosion(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_checkpoint(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_show_gang_zone(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_hide_gang_zone(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_flash_gang_zone(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_stop_flash_gang_zone(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_play_crime_report(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_gravity(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_enable_stunt_bonus(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_remove_map_icon(ServerRpcContext&, samp::proto::BitStream&);

bool rpc_attach_camera_to_object(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_interpolate_camera(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_camera_position(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_camera_look_at(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_show_menu(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_hide_menu(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_text_draw_set_string(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_text_draw_destroy(ServerRpcContext&, samp::proto::BitStream&);

bool rpc_begin_object_edit(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_cancel_object_edit(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_clock(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_toggle_clock(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_skill(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_show_text_label(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_clear_client_flag(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_reset_player_state(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_show_dialog(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_clock_hour(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_scm_event(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_client_check_blob(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_client_check(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_edit_attached_object(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_edit_object(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_remove_pickup_model(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_player_close(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_spawn_vehicle(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_stream_out_vehicle(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_player_dead(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_set_camera_targeting(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_show_actor(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_hide_actor(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_request_model(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_remove_model(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_model_url(ServerRpcContext&, samp::proto::BitStream&);
bool rpc_request_all_models(ServerRpcContext&, samp::proto::BitStream&);

}  // namespace samp::client
