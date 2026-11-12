#pragma once
#include "samp/client/game_script.hpp"
#include "samp/client/game_model_pools.hpp"
#include "samp/client/hooks.hpp"
#include "samp/client/world_state.hpp"
#include "samp/client/game_command.hpp"
#include "samp/client/remote_peds.hpp"
#include "samp/proto/own_sync.hpp"
#include "samp/client/frame_timing.hpp"
#include <span>
#include <map>

namespace samp::client {
class AssetManager;

// Integration of recovered startup, player and essential vehicle paths.
// Advanced vehicle modes and further official game patches remain pending.
// Real GTA execution still requires the separately authorized runtime gate.
class GameRuntime {
    friend struct GameRuntimeTestAccess;
public:
    using Logger = void(*)(const char*);
    Logger logger_ = nullptr;
    AssetManager* assets_=nullptr;
    WorldState* world_=nullptr;
    bool prepare_boot();
    void capture_shot(const float* origin,const float* position,void* entity,std::uint8_t weapon);
    std::vector<std::array<std::uint8_t,40>> shots_;
    int local_player_id_=-1, lag_compensation_mode_=1;
    std::uint8_t death_info(const std::uint8_t* ped, std::uint16_t& killer) const;
    void tick(bool connected,bool network_spawned,bool class_ready,const WorldClass& spawn,
              std::vector<GameCommand>& pending_commands);
    static void __fastcall process_ped_control(void* ped, void*);
    std::uint16_t local_vehicle_id_ = 0xffff;
    std::uint8_t local_vehicle_seat_ = 0;
    void* local_vehicle_entity_ = nullptr;
    bool loading_ = false;
    bool playing_ = false;
    bool selecting_ = false;
    std::uint32_t selection_started_ = 0;
    bool debug_mode_=false,head_movement_=true,hud_scale_fix_=true;
    bool vehicle_selector_active_=false;
    void process_vehicle_selector();
    void display_game_text(const GameTextCommand& text);
    void process_head_movement();
    void collect_camera_targets();
    std::array<std::uint16_t,4> camera_targets_{0xffff,0xffff,0xffff,0xffff};
private:
    bool target_sphere(const std::array<float,3>& from,const std::array<float,3>& to,void* entity,const std::array<float,3>& center,float scale,bool visible);
public:
    struct HeadMovement {std::array<float,3> direction{};std::uint32_t sampled=0,applied=0;};
    std::map<int,HeadMovement> head_states_;
    bool vehicle_selector_initialized_=false;
    int selected_vehicle_model_=400;
    std::vector<std::pair<std::uint32_t,bool>> pickup_notices_;
    FrameTimingState frame_timing_;
    FrameTimingHost frame_timing_host_;
    bool stream_vehicle(const VehicleSpawnCommand& command);
    bool apply_player_skin(std::uint8_t* ped,std::uint32_t model);
    void set_world_clock(std::uint8_t hour,std::uint8_t minute);
    void set_map_icon(const MapIcon& icon);
    void remove_map_icon(std::uint8_t id);
    void draw_gang_zones(std::uint32_t now);
    bool enforce_world_bounds(std::uint8_t* entity,const WorldBoundsState& bounds);
private:
    std::array<std::uint32_t,100> map_icon_handles_{};
    std::array<std::uint32_t,100> map_icon_revisions_{};
    bool gang_flash_phase_=false,enter_exits_applied_=false;
    std::uint32_t gang_flash_tick_=0;
    float last_gravity_=-1.f;
    int last_weather_=-1;
    void process_connection_scene();
    std::uint16_t last_clock_=0xffff;
    bool begin_loading();
    bool spawn_player(const WorldClass& spawn);
    void remove_vehicle(std::uint16_t id);
    bool stream_remote_player(const RemotePlayerStream& command);
    bool give_weapon(std::uint8_t* ped, std::uint32_t weapon, std::uint32_t ammo);
    bool load_custom_ped(std::uint32_t base,std::int32_t id,const std::string& texture_name,
                         const std::string& model_path,const std::string& texture_path);
    bool load_custom_object(std::uint32_t base,std::int32_t id,const std::string& texture_name,
                            const std::string& model_path,const std::string& texture_path);
    bool load_custom_texture(std::int32_t id,const std::string& name,const std::string& path);
    bool install_custom_collision();
    static std::uintptr_t __cdecl read_custom_collision(void* stream,std::uint32_t size,void*,int,int);
    static GameRuntime* model_loader_;
    std::int32_t loading_model_id_=0;
    bool collision_plugin_installed_=false;
    void release_custom_texture(std::string_view name);
    std::map<std::string,int> owned_custom_textures_;

    struct RuntimeObject {
        std::uint32_t handle=0;void* entity=nullptr;
        MapObject source{};std::int32_t model=0;std::uint8_t time_on=0,time_off=0;
        bool visible=false;
        std::uint32_t hidden_frames=0;
    };
    bool stream_object(const MapObject& object);
    void remove_runtime_object(std::uint16_t id);
    void update_runtime_object(RuntimeObject& object,const MapObject& source);
    static bool custom_object_visible(std::uint8_t on,std::uint8_t off,std::uint8_t hour);
    std::map<std::uint16_t,RuntimeObject> runtime_objects_;
    std::int32_t object_world_=0;
    void replay_bullet(const RemoteBulletCommand& command);
    bool set_ped_model(std::uint8_t* ped, std::uint32_t model);
    void* resolve_actor(std::uint32_t actor);
public:
    GameScript script_;
private:
public:
    RemotePeds remote_peds_;
    struct RuntimeVehicle { std::uint32_t handle=0; void* entity=nullptr; int driver=-1; };
    static GameRuntime* vehicle_control_runtime_;
    std::map<std::uintptr_t,void*> vehicle_controls_;
    std::map<std::uint16_t,RuntimeVehicle> remote_vehicles_;
    struct RuntimeActor {std::uint32_t handle=0;void* entity=nullptr;ActorState source;};
    std::map<std::uint16_t,RuntimeActor> runtime_actors_;
private:
    bool create_actor(const ActorState& actor);
    void remove_actor(std::uint16_t id);
    struct RuntimePickup {std::uint32_t handle=0;std::int32_t game_id=-1;PickupState source{};std::uint32_t cooldown=0;};
    std::map<std::uint32_t,RuntimePickup> runtime_pickups_;
    std::uint32_t create_engine_pickup(const PickupState& pickup,std::int32_t& game_id);
    GameModelPools models_;
    std::vector<PatchRecord> patches_;
    bool refused_ = false;
    std::uint32_t version_ = 0;
    bool connection_scene_started_ = false;
    std::uint32_t preview_model_ = 0xffffffff;
    bool connected_ = false;
    bool awaiting_respawn_ = false;
    std::array<std::uint8_t,5> process_control_call_bytes_{};
    bool process_control_hook_installed_ = false;
    bool replaying_shot_ = false;
    std::array<float,3> replay_target_{};
};

}  // namespace samp::client
