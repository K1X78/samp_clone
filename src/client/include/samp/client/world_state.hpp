// What the client knows about the world the server streams.
//
// The server sends the map of the game in pieces: the buildings as the
// objects (the RPC 44), the icons as the RPC 56, the buildings that are
// removed for a player as the RPC 43, and the other players as the
// synchronisation packets (the ids 200 to 212).  The client keeps them
// here, so the game side can draw them.
//
// Provenance
//   docs/re/protocol/rpc-server-to-client.json   (the RPCs of the server)
//   docs/re/protocol/game-packets.json           (the synchronisation packets)

#pragma once
#include <ctime>

#include <cstdint>
#include <array>
#include <string>
#include <unordered_map>
#include <vector>
#include "samp/client/actor_slots.hpp"
#include "samp/client/world_text.hpp"
#include "samp/client/score_ping.hpp"

namespace samp::client {

// A building of the map.
struct MapObject {
    std::uint16_t id = 0;
    std::uint32_t model = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float rotation_x = 0.0f;
    float rotation_y = 0.0f;
    float rotation_z = 0.0f;
    float radius = 0.0f;
    bool dynamic = false;
    std::uint16_t sync_time = 0;
    std::uint16_t sync_counter = 0;
    std::uint8_t material = 0;
    // The RPC 99 interpolation: the server moves the object to the target.
    bool moving = false;
    float target_x = 0.0f;
    float target_y = 0.0f;
    float target_z = 0.0f;
    float speed = 0.0f;
};

// An icon of the map.
struct MapIcon {
    std::uint32_t revision = 0;
    std::uint8_t id = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    std::uint8_t type = 0;
    std::uint32_t colour = 0;
    std::uint8_t style = 0;
};

// A building that is removed for one player.
struct RemovedBuilding {
    std::uint32_t model = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float radius = 0.0f;
};

// A line of text the server sends: the chat, the messages, the hints.
struct GameText {
    std::uint32_t style = 0;
    std::uint32_t time = 0;
    std::string text;
};

// A message the server sends to one client.
struct ClientMessage {
    std::uint32_t colour = 0;
    std::string message;
    std::time_t received_at=std::time(nullptr);
};

// The other players, as the server synchronises them.
struct WorldPlayer {
    int id = -1;
    std::uint32_t colour = 0;
    bool npc = false;
    std::string name;
    ScorePingValue score_ping;
    // The last position the server synchronised.
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float health = 0.0f;
    float armour = 0.0f;
    std::uint32_t weapon = 0;
    std::uint32_t ammo = 0;
    bool in_vehicle = false;
    std::uint16_t vehicle_id = 0;
    bool present = false;
    // The skin and the 0.3.DL custom model the server streamed in with the
    // RPC 32 (samp-server.exe 0x4877e0 writes them after the id byte).
    std::uint32_t skin = 0;
    std::uint32_t custom_model = 0;
    // The facing angle of the last synchronisation, in degrees.
    float angle = 0.0f;
    bool streamed_in = false;
    std::uint8_t team = 0xff;
    std::uint8_t fighting_style = 4;
    std::array<std::uint16_t, 11> weapon_skills{};
    // The state the last synchronisation carried on top of the position.
    float aim_x = 0.0f;
    float aim_y = 0.0f;
    float aim_z = 0.0f;
    bool aiming = false;
    std::uint8_t special_action = 0;
    // The surfing of the player: the object or the vehicle it rides on.
    bool surfing = false;
    std::uint16_t surfing_id = 0;
    float surfing_x = 0.0f;
    float surfing_y = 0.0f;
    float surfing_z = 0.0f;
    // The animation the player plays.
    std::uint32_t animation_id = 0;
    // The animation the RPC 86 applies, and the flags that come with it.
    std::string animation_library;
    std::string animation_name;
    bool animation_loop = false;
    bool animation_lock_x = false;
    bool animation_lock_y = false;
    bool animation_freeze = false;
    bool animation_applied = false;
    std::uint32_t animation_time = 0;
    // The interior the RPC 156 sets.
    std::uint8_t interior = 0;
    // The number of the synchronisations the server sent for this player.
    std::uint32_t updates = 0;
    // The moment the last synchronisation arrived, in milliseconds.
    std::uint64_t last_update_ms = 0;
    // The RPC 166 marks the player dead on the client.
    bool dead = false;
};

// A class of the server: the data the server sends for every class the
// client asks for.
struct WorldClass {
    int id = 0;
    // Whether the class can be picked.  The Grand Larceny refuses the
    // class until the player has picked a city.
    bool selectable = false;
    std::uint8_t team = 0;
    std::uint32_t model = 0;
    // The model of the custom ped of 0.3.DL.
    std::uint32_t custom_model = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float angle = 0.0f;
    std::uint32_t weapons[3] = {0, 0, 0};
    std::uint32_t ammunition[3] = {0, 0, 0};
};

// A text draw of the server: a line of text the gamemode puts on the
// screen of a player.
struct WorldTextDraw {
    int id = -1;
    std::string text;
    std::uint32_t colour = 0xFFFFFFFFu;
    float x = 0.0f;
    float y = 0.0f;
    float width = 0.0f;
    float height = 0.0f;
    std::uint8_t font = 0;
    std::uint8_t style = 0;
    std::uint8_t alignment = 0;
    // The player the draw is shown to, or -1 when it is shown to every
    // player.
    int player_id = -1;
    bool visible = false;
};

// A marker of a player on the radar: the server sends the position of the
// player as a grid of the radar.
struct WorldMarker {
    int player_id = -1;
    bool present = false;
    std::uint16_t x = 0;
    std::uint16_t y = 0;
    std::uint16_t z = 0;
};

// A vehicle of the world.  The server tells the client about a vehicle when
// a player drives it; the model of the vehicle is not part of the
// synchronisation, so it stays zero until the server names the model.
struct WorldVehicle {
    std::uint16_t id = 0;
    std::uint32_t model = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float rotation_x = 0.0f;
    float rotation_y = 0.0f;
    float rotation_z = 0.0f;
    float health = 0.0f;
    int driver = -1;
    bool present = false;
    bool siren = false;
    bool landing_gear = false;
    std::uint16_t trailer_id = 0xFFFFu;
    // The plate and the damage the server set with the RPC 24 and 106.
    std::string plate;
    // The 16 component flags the RPC 24 sends (samp.dll 0x100111c0 toggles the
    // vehicle parts from 16 raw bytes; the first 12 are single booleans).
    std::array<std::uint8_t, 16> component_states{};
    std::uint32_t damage_panels = 0;
    std::uint32_t damage_doors = 0;
    std::uint8_t damage_lights = 0;
    std::uint8_t damage_tires = 0;
    std::uint8_t interior = 0;
    std::vector<std::uint16_t> removed_components;
    // The velocity of the RPC 91: the flag picks linear or angular.
    bool angular_velocity = false;
    float velocity_x = 0.0f;
    float velocity_y = 0.0f;
    float velocity_z = 0.0f;
    std::array<std::uint8_t,12> unoccupied_state{};
    std::uint32_t unoccupied_animation = 0;
    // The spawn record of the RPC 164 and the tuning that follows it.
    float angle = 0.0f;
    std::uint8_t colour1 = 0;
    std::uint8_t colour2 = 0;
    std::uint8_t paintjob = 0;
    std::int32_t body_colour1 = -1;
    std::int32_t body_colour2 = -1;
    std::array<std::uint32_t, 14> mods{};
    std::vector<std::uint32_t> components;
    // The number of the synchronisations the server sent for this vehicle.
    std::uint32_t updates = 0;
};

// The state the server streams about this client's own player and the
// transient world effects.
struct LocalPlayerState {
    int id = -1;
    std::string name;
    float health = 100.0f;
    float armour = 0.0f;
    int money = 0;
    std::uint32_t weapon = 0;
    std::uint32_t ammo = 0;
    std::uint32_t armed_weapon = 0;
    std::uint32_t last_sound_id = 0;
    float sound_x = 0.0f, sound_y = 0.0f, sound_z = 0.0f;
    std::uint32_t virtual_world = 0;
    // The two collision flags the official client clears on a world change.
    std::uint8_t virtual_world_flags = 0;
    std::uint8_t team = 0xff;
    std::uint32_t colour = 0;
    std::uint8_t interior = 0;
    bool controllable = true;
    float x = 0.0f, y = 0.0f, z = 0.0f;
    // The RPC 13 asks the game for the ground height at x/y; the game layer
    // resolves it and adds the 1.5 the official handler adds.
    bool find_ground_z = false;
    float velocity_x = 0.0f, velocity_y = 0.0f, velocity_z = 0.0f;
    std::uint8_t special_action = 0;
    std::uint8_t fighting_style = 4;
    // The vehicle the local player sits in, from the RPC 70, 71.
    bool in_vehicle = false;
    std::uint16_t vehicle_id = 0;
    std::uint8_t vehicle_seat = 0;
    std::string animation_library;
    std::string animation_name;
    bool animation_loop = false;
    bool animation_lock_x = false;
    bool animation_lock_y = false;
    bool animation_freeze = false;
    std::uint32_t animation_time = 0;
    // The eleven weapon skills the RPC 34 sets.
    std::array<std::uint16_t, 11> weapon_skills{};
    bool stunt_bonus = false;
    bool widescreen = false;
};

// RPC95 contains a32-bit id and model/type/position record (20 bytes).
struct PickupState {
    std::uint32_t id = 0;
    std::uint32_t model = 0;
    std::int32_t type = 0;
    float x = 0.0f, y = 0.0f, z = 0.0f;
};

struct GangZoneState {
    std::uint16_t id = 0;
    float min_x = 0.0f, min_y = 0.0f, max_x = 0.0f, max_y = 0.0f;
    std::uint32_t colour = 0;
    std::uint32_t base_colour = 0;
    bool shown = true;
    bool flashing = false;
};

struct CheckpointState {
    bool active = false;
    float x = 0.0f, y = 0.0f, z = 0.0f, radius = 0.0f;
};

struct RaceCheckpointState {
    bool active = false;
    std::uint8_t type = 0;
    float x = 0.0f, y = 0.0f, z = 0.0f;
    float next_x = 0.0f, next_y = 0.0f, next_z = 0.0f;
    float radius = 0.0f;
};

struct AudioStreamState {
    bool active = false;
    std::string url;
    float x = 0.0f, y = 0.0f, z = 0.0f, radius = 0.0f;
    bool use_pos = false;
    std::uint32_t revision=0;
};

struct DeathMessageState {
    std::uint16_t killer = 0xFFFF;
    std::uint16_t victim = 0xFFFF;
    std::uint8_t reason = 0;
};

struct ChatBubbleState {
    int player_id = -1;
    std::uint32_t colour = 0;
    float distance = 0.0f;
    std::uint32_t expire_time = 0;
    std::string text;
};

struct ExplosionState {
    float x = 0.0f, y = 0.0f, z = 0.0f, radius = 0.0f;
    std::uint32_t type = 0;
};

struct CrimeReportState {
    std::uint16_t suspect = 0xFFFF;
    // The words 1 to 3 of the RPC: the suspect was in a vehicle, its model and
    // its colour.  On foot all three are zero.
    bool in_vehicle = false;
    std::uint32_t vehicle_model = 0;
    std::uint32_t vehicle_colour = 0;
    std::uint32_t crime = 0;
    // The words 4 to 7: the crime and the position.  The official client only
    // uses the crime and x; y and z are kept for the record.
    float x = 0.0f, y = 0.0f, z = 0.0f;
};

struct WorldBoundsState {
    float min_x = 0.0f, min_y = 0.0f, max_x = 0.0f, max_y = 0.0f;
    bool set = false;
};

// The camera the RPC 81, 82, 157 and 158 move.
struct CameraState {
    float x = 0.0f, y = 0.0f, z = 0.0f;
    float look_x = 0.0f, look_y = 0.0f, look_z = 0.0f;
    std::int16_t attached_object = -1;
    bool interpolating = false;
    std::uint32_t interpolation_time = 0;
    std::uint8_t interpolation_mode = 2;
    bool set = false;
};

// A text label the server shows with the RPC 36 and hides with the RPC 58.
// The id is the label id as it arrives; the player labels live at 0x800 and
// above and the official handler refuses to create them.
struct TextLabelState {
    std::uint16_t id = 0;
    std::uint32_t colour = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float draw_distance = 0.0f;
    bool line_of_sight = false;
    std::uint16_t attached_player = 0xFFFFu;
    std::uint16_t attached_vehicle = 0xFFFFu;
    std::string text;
};

// An actor the server shows with the RPC 171 and hides with the RPC 172.
struct ActorState : RemoteActor {
    std::uint16_t id = 0;
    std::uint32_t skin = 0;
    std::uint32_t custom_skin = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float angle = 0.0f;
    float health = 0.0f;
    bool invulnerable = false;
};

// The dialog the RPC 61 opens.
struct DialogState {
    std::uint16_t id = 0;
    std::uint8_t style = 0;
    std::string title;
    std::string button1;
    std::string button2;
    std::string text;
    bool shown = false;
};

// The object editor of the server: the RPC 27 begins the selection, the
// RPC 28 cancels it, the RPC 116 edits an attached object and the RPC 117
// edits a map object.
struct ObjectEditState {
    bool selecting = false;
    bool cancelled = false;
    bool object_edit = false;
    std::uint32_t attached_object = 0;
    std::uint16_t object_id = 0xFFFFu;
};

// The answer the RPC 103 asks for.  The official client sends it back with
// the RPC 9 (samp.dll 0x10011860).
struct ClientCheckReply {
    std::uint8_t type = 0;
    std::uint32_t base = 0;
    std::uint8_t status = 0;
};

// A model or texture download the RPC 183 announces.
struct AssetDownloadRequest {
    std::uint8_t type = 0;
    std::uint8_t pool = 0;
    std::uint32_t checksum = 0;
    std::uint32_t length = 0;
    std::string url;
};

// The SCM event of the RPC 96.
struct ScmEventState {
    std::uint16_t player = 0;
    std::uint32_t event = 0;
    std::uint32_t vehicle = 0;
    std::uint32_t arg1 = 0;
    std::uint32_t arg2 = 0;
};

// Everything the server streams to this client, outside the player, object
// and vehicle pools.
struct ServerStreamState {
    LocalPlayerState local;
    std::unordered_map<std::uint32_t, PickupState> pickups;
    std::unordered_map<std::uint16_t, GangZoneState> gang_zones;
    std::unordered_map<int, ChatBubbleState> chat_bubbles;
    std::unordered_map<int, bool> name_tags;
    std::unordered_map<int, TextLabelState> text_labels;
    WorldTextTable world_text_labels;
    ActorSlots actors;
    std::unordered_map<int, WorldTextDraw> text_draws;
    std::vector<DeathMessageState> death_messages;
    std::vector<ExplosionState> explosions;
    std::vector<CrimeReportState> crime_reports;
    std::vector<ClientCheckReply> client_check_replies;
    std::vector<AssetDownloadRequest> asset_downloads;
    std::vector<ScmEventState> scm_events;
    CheckpointState checkpoint;
    RaceCheckpointState race_checkpoint;
    AudioStreamState audio_stream;
    WorldBoundsState world_bounds;
    CameraState camera;
    DialogState dialog;
    ObjectEditState object_edit;
    // The 0x128 bytes the RPC 102 copies into the client check state.
    std::array<std::uint8_t, 0x128> client_check_blob{};
    std::uint32_t world_time_minutes = 0;
    std::uint8_t weather = 0;
    float gravity = 0.008f;
    bool interior_enter_exits_disabled = false;
    bool stunt_bonus = false;
    bool widescreen = false;
    bool force_class_selection = false;
    int active_menu = -1;
    // The clock of the RPC 29, 30, 94 and the reset of the RPC 40.
    std::uint8_t clock_hour = 12;
    std::uint8_t clock_minute = 0;
    bool clock_enabled = true;
    // The name tag distance of the RPC 40 (60.0f).
    float name_tag_distance = 60.0f;
    bool show_name_tags=true,name_tag_los=true;
    std::array<std::uint8_t,212> preloaded_vehicles{};
    // The connection state the RPC 40 sets to 0xb.
    std::uint8_t connection_state = 0;
    // The client flag the RPC 37 and 40 clear (samp.dll client+0x4d).
    std::uint32_t client_flag_4d = 0;
    // "Camera targets" flag of the RPC 170 (samp.dll client+0x233).
    bool camera_targeting = false;
    // The per-slot state of the RPC 185: six request slots ready and no
    // pending download.
    std::uint8_t asset_slots_ready = 0;
    std::uint8_t asset_pending = 0;
};

// Data populated by the official packet and RPC handlers.
struct WorldState {
    std::unordered_map<std::uint16_t, MapObject> objects_;
    std::uint32_t map_icon_revision_=0;
    std::unordered_map<std::uint8_t, MapIcon> icons_;
    std::vector<RemovedBuilding> removed_buildings_;
    std::vector<GameText> texts_;
    std::vector<ClientMessage> messages_;
    std::unordered_map<int, WorldPlayer> players_;
    std::unordered_map<int, WorldMarker> markers_;
    std::unordered_map<int, WorldClass> classes_;
    int selected_class_ = -1;
    std::unordered_map<std::uint16_t, WorldVehicle> vehicles_;
    ServerStreamState stream;
};

}  // namespace samp::client
