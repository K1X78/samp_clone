// The natives and authoritative host state of the shipped SA-MP 0.3.DL server.
//
// Provenance
//   docs/re/spec/server-natives.json   (lane R10: the 490 registered natives,
//                                       their argument counts and the tables
//                                       they live in)
//   docs/re/spec/game-packets.json     (lane R05)
//   reference/server-win32/pawno/include/  the stock include files, which
//                                       declare the same natives
//
// The resolution is BY NAME: the runtime walks the registered tables
// comparing the name strings (samp-server.exe 0x00401BA0 resolve_natives).
// A script that requires a native the server does not know fails to load
// with AMX_ERR_NOTFOUND (19).
//
// The natives that are implemented here are the ones the stock game modes
// and filterscripts actually call, plus the core runtime natives of the
// amxcore, float, string, time and file tables.  The ones that would need
// a full game world (the text draws, the objects, the actors) are present
// but do nothing yet.

#pragma once

#include <string>
#include <string_view>
#include <vector>
#include <array>
#include <map>

#include "pawn/pawn_vm.hpp"

namespace samp::server { class RakNetPeer; }
namespace samp::proto { class BitStream; }

namespace samp::pawn {

// One entry of the class list a game mode builds with AddPlayerClass and
// AddPlayerClassEx (reference/server-win32/pawno/include/a_samp.inc).
struct PlayerClassSpec {
    int team = 0xFF;  // AddPlayerClassEx passes the team; AddPlayerClass 0xFF.
    int model = 0;
    float x = 0.0F;
    float y = 0.0F;
    float z = 0.0F;
    float angle = 0.0F;
    int weapon[3] = {0, 0, 0};
    int ammunition[3] = {0, 0, 0};
    std::uint32_t custom_model = 0;
};

struct CustomModelSpec {
    std::uint8_t kind=0;
    std::int32_t virtual_world=-1, base_id=0, new_id=0;
    std::string model_file, texture_file;
    std::uint8_t time_on=0,time_off=0;
};
struct CustomModelRecord {
    CustomModelSpec spec;
    std::uint32_t model_crc=0,texture_crc=0,model_size=0,texture_size=0;
};
struct ModelTransfer {
    std::uint8_t type=0;
    std::uint32_t checksum=0,size=0,offset=0,block_size=0;
    std::string path;
    std::vector<std::uint8_t> compressed;
    std::size_t compressed_offset=0;
    bool active=false,redirected=false,final_block=false;
};

// Shared host records let Pawn natives and the networking/game layer refer to
// the same slots. Observed health/weapons/keys are updated by synchronization;
// sending a command does not fabricate a client acknowledgement.
struct PlayerNativeState {
    bool in_use = false;
    int id = 0;
    std::string name;
    std::uint32_t colour = 0;
    std::uint32_t ipv4_address = 0;
    bool is_npc = false;
    bool is_admin = false;
    bool camera_targeting=false;
    std::array<std::uint16_t,4> camera_targets{0xffff,0xffff,0xffff,0xffff};
    bool joined = false;
    bool models_ready = false,model_finish_reported=false;
    ModelTransfer model_transfer;
    bool spawned = false;
    std::uint8_t disconnect_reason = 0;
    samp::server::RakNetPeer* peer = nullptr;
    std::uint8_t team = 0;
    std::uint32_t skin = 0;
    std::uint32_t custom_model = 0;
    float x = 0, y = 0, z = 0, angle = 0;
    std::uint8_t clock_enabled = 0;
    PlayerClassSpec spawn_info{};
    bool has_spawn_info = false;
    bool spawn_authorized = false;
    bool class_allowed = false;
    std::uint8_t state = 0;
    float health = 100, armour = 0;
    std::int32_t money = 0;
    std::int32_t score = 0;
    std::uint32_t last_score_request_ms = 0;
    std::uint8_t weapon = 0;
    std::uint16_t ammo = 0;
    std::uint16_t target_player = 0xffff, target_actor = 0xffff;
    std::int32_t drunk_level = 0;
    std::array<std::uint8_t,31> aim{};
    std::array<std::uint8_t,40> bullet{};
    std::array<std::uint8_t, 13> weapons{};
    std::array<std::uint16_t, 13> ammunition{};
    std::int16_t left_right = 0, up_down = 0;
    std::uint32_t keys = 0;
    float vx = 0, vy = 0, vz = 0;
    std::int32_t virtual_world = 0;
    std::uint8_t interior = 0;
    std::uint16_t vehicle_id = 0;
    std::uint8_t vehicle_seat = 0;
    std::uint64_t last_sync_ms = 0;
    std::vector<std::uint8_t> streamed_to;
    unsigned streamed_count = 0;
    std::vector<std::uint8_t> streamed_objects;
    std::vector<std::uint8_t> streamed_vehicles;
    std::vector<std::uint8_t> streamed_pickups;
    unsigned streamed_vehicle_count = 0;
};

struct ObjectNativeState {
    bool active=false;
    std::uint16_t id=0;
    std::int32_t model=0;
    std::array<float,3> position{},rotation{};
    float draw_distance=0;
};

struct ScriptTimer {
    PawnVm* owner=nullptr;
    std::string callback;
    std::int32_t interval=0,remaining=0;
    bool repeat=false,killed=false;
    std::vector<samp::amx::cell> arguments;
};

struct GangZoneNativeState {
    bool active = false;
    std::array<float,4> bounds{};
};

struct StaticPickupNativeState {
    bool active=false;
    std::int32_t model=0,type=0,world=0;
    std::array<float,3> position{};
};

struct VehicleNativeState {
    bool active = false;
    std::uint16_t id = 0;
    std::uint32_t model = 0;
    float x = 0, y = 0, z = 0, angle = 0;
    float spawn_x = 0, spawn_y = 0, spawn_z = 0, spawn_angle = 0;
    float respawn_x = 0, respawn_y = 0, respawn_z = 0, respawn_angle = 0;
    std::uint64_t created_ms = 0, last_occupied_ms = 0, death_ms = 0;
    bool has_been_occupied = false, dead = false, death_notified = false;
    std::uint16_t killer = 0xffff;
    std::int32_t colour1 = 0, colour2 = 0;
    float health = 1000;
    std::int32_t virtual_world = 0;
    std::uint8_t interior = 0;
    std::int32_t respawn_delay = -1;
    std::uint64_t empty_since_ms = 0;
    bool siren = false;
    int driver = -1;
    std::array<int, 8> passengers{-1, -1, -1, -1, -1, -1, -1, -1};
    std::uint32_t damage_panels = 0, damage_doors = 0;
    std::uint8_t damage_lights = 0, damage_tires = 0;
    std::array<std::uint8_t, 14> mods{};
    std::uint8_t paintjob = 0;
    std::array<float, 4> rotation{1, 0, 0, 0};
    std::array<float, 3> velocity{};
};

// The services the natives need from the game.
class NativeHost {
public:
    virtual ~NativeHost() = default;
    std::vector<PlayerNativeState> players_;
    int player_pool_highest_ = 0;
    std::map<std::uint32_t,ScriptTimer> script_timers_;
    std::uint32_t next_script_timer_=0;
    bool gamemode_exit_requested_=false;
    virtual bool select_gamemode(std::string_view name)=0;
    std::function<void(std::string_view)> log_message_;
    bool show_name_tags_=true,stunt_bonus_enabled_=true;
    std::int32_t player_marker_mode_=1;
    float gravity_=0.008f;
    bool zone_names_enabled_=false;
    bool interior_enter_exits_disabled_=false;
    float name_tag_draw_distance_=70.0f;
    std::array<GangZoneNativeState,1024> gang_zones_{};
    std::vector<StaticPickupNativeState> pickups_=std::vector<StaticPickupNativeState>(4096);
    bool artwork_enabled_=false;
    std::string models_directory_="models";
    std::vector<CustomModelRecord> models_;
    virtual int add_custom_model(const CustomModelSpec& spec)=0;
    virtual bool redirect_download(int player,std::string_view url)=0;
    std::vector<ObjectNativeState> objects_=std::vector<ObjectNativeState>(2000);
    virtual void send_object(PlayerNativeState& player,const ObjectNativeState& object)=0;
    std::vector<VehicleNativeState> vehicles_ = std::vector<VehicleNativeState>(2000);
    virtual void send_vehicle_stream_in(PlayerNativeState& player, const VehicleNativeState& vehicle) = 0;
    virtual void send_rpc(samp::server::RakNetPeer& peer, std::uint8_t id,
                          const samp::proto::BitStream& payload) = 0;

    // The maximum number of players.
    [[nodiscard]] virtual int max_players() const = 0;
    // Queries actual slot occupancy using the official native's WORD ID.
    [[nodiscard]] virtual bool is_player_connected(int id) const = 0;
    // Sets the game mode text (the "gamemodetext" variable).
    virtual void set_game_mode_text(std::string_view text) = 0;
    // Sets the world time and the weather.  The original writes the
    // "worldtime" and "weather" variables with sprintf("%02d:%02d") and
    // sprintf("%d") (lane R16).
    virtual void set_world_time(int hour) = 0;
    virtual void set_weather(int id) = 0;
    virtual void set_gravity(float gravity) = 0;
    // Kicks a player.
    virtual void kick_player(int id) = 0;
    // Sends a chat message to a player.
    virtual void send_client_message(int id, int type, std::string_view text) = 0;

    // ---------------------------------------------------- the player natives
    //
    // Each of these is one native that the official server turns into an RPC
    // to the player.  There is no default behaviour: the game layer owns the
    // only implementation, exactly like the official server.
    virtual void add_player_class(const PlayerClassSpec& spec) = 0;
    virtual void set_player_interior(int id, int interior) = 0;
    virtual void set_player_pos(int id, float x, float y, float z) = 0;
    virtual void set_player_facing_angle(int id, float angle) = 0;
    virtual void set_camera_pos(int id, float x, float y, float z) = 0;
    virtual void set_camera_look_at(int id, float x, float y, float z, int cut) = 0;
    virtual void toggle_player_clock(int id, std::uint8_t on) = 0;
};

// Registers the natives on the virtual machine.
void register_server_natives(PawnVm& vm, NativeHost& host);

}  // namespace samp::pawn
