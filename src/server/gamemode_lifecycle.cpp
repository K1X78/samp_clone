#include "samp/server/game_layer.hpp"
#include <algorithm>
#include <bit>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <iterator>

namespace samp::server {

// Official: FUN_00493460 @ 0x00493460 (samp-server.exe)
std::string GameLayer::next_configured_gamemode() {
    if (!config_) return {};
    const auto mode_name = [](std::string_view entry) {
        const auto begin = entry.find_first_not_of(' ');
        if (begin == std::string_view::npos) return std::string{};
        const auto end = entry.find(' ', begin);
        return std::string(entry.substr(begin, end - begin));
    };
    ++gamemode_index_;
    std::string mode = mode_name(config_->get("gamemode" + std::to_string(gamemode_index_)));
    if (mode.empty()) {
        gamemode_index_ = 0;
        mode = mode_name(config_->get("gamemode0"));
    }
    return mode;
}

// Official: FUN_00493520 @ 0x00493520 (samp-server.exe)
bool GameLayer::select_gamemode(std::string_view requested) {
    if(!config_) return false;
    std::string name(requested);
    if(name.empty()) {
        if(gamemode_repetitions_!=0 || !gamemode_selected_) --gamemode_index_;
        ++gamemode_index_;
        auto entry=config_->get("gamemode"+std::to_string(gamemode_index_));
        if(entry.empty()) {gamemode_index_=0;entry=config_->get("gamemode0");}
        std::istringstream fields(entry);std::uint32_t repetitions=0;
        if(!(fields>>name)) return false;
        fields>>repetitions;
        if(!std::filesystem::is_regular_file(std::filesystem::path(gamemodes_directory_)/(name+".amx"))) return false;
        if(gamemode_repetitions_==0) gamemode_repetitions_=repetitions;
        --gamemode_repetitions_;gamemode_selected_=true;
    } else {
        if(!std::filesystem::is_regular_file(std::filesystem::path(gamemodes_directory_)/(name+".amx"))) return false;
        gamemode_repetitions_=0;
    }
    next_gamemode_=std::move(name);return true;
}

// Official: FUN_00494c30 @ 0x00494c30 (samp-server.exe)
void GameLayer::begin_gamemode_restart() {
    gamemode_exit_requested_=false;
    samp::proto::BitStream restart;
    for(auto& player:players_) if(player.in_use && player.peer) send_rpc(*player.peer,40,restart);
    for(auto& player:players_) if(player.in_use) {
        gamemode_player_disconnect(player.id, 1);
        filterscript_player_disconnect(player.id, 1);
        if(!player.in_use) continue;
        const auto id=player.id;const auto name=player.name;const auto colour=player.colour;
        const auto ip=player.ipv4_address;const auto npc=player.is_npc;const auto admin=player.is_admin;auto* peer=player.peer;
        const auto ready=player.models_ready;
        player=samp::pawn::PlayerNativeState{};
        player.id=id;player.name=name;player.colour=colour;player.ipv4_address=ip;player.is_npc=npc;
        player.is_admin=admin;
        player.peer=peer;player.in_use=player.joined=true;player.models_ready=ready;
        player.streamed_to.assign(players_.size(),0);player.streamed_vehicles.assign(vehicles_.size(),0);
        player.streamed_pickups.assign(pickups_.size(),0);
        player.last_marker_sync_ms = static_cast<std::uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
    }
    samp::amx::cell result=0;vm_.execute("OnGameModeExit",{},result);
    remove_script_timers(&vm_);vm_.ok_=false;
    reset_global_text_labels();
    reset_actors();
    reset_objects();
    classes_.clear();vehicles_.assign(vehicles_.size(),{});pickups_.assign(pickups_.size(),{});
    pickup_pool_highest_ = 0;
    vehicle_pool_highest_ = 0;
    menu_pool_.reset();textdraw_pool_.release();
    gang_zones_.fill({});gravity_=0.008f;
    world_hour_=12;weather_id_=1;gamemode_restarting_=true;gamemode_restart_elapsed_=0.f;
}

// Official: FUN_004963f0 @ 0x004963f0 (samp-server.exe)
void GameLayer::finish_gamemode_restart() {
    menu_pool_.reset(new(std::nothrow) samp::pawn::MenuPool);
    textdraw_pool_.reset();
    actor_pool_ready_ = true;
    auto& vm=vm_;const auto path=std::filesystem::path(gamemodes_directory_)/(next_gamemode_+".amx");
    std::ifstream input(path,std::ios::binary);std::vector<std::uint8_t> bytes{std::istreambuf_iterator<char>(input),{}};
    if (!vm.load(bytes, path.string())) return;
    // New-game initializer4935f0 restores these defaults before script init.
    show_name_tags_=true;player_marker_mode_=1;zone_names_enabled_=false;
    limit_player_marker_radius_ = false;
    player_marker_radius_ = 10000.0f;
    limit_global_chat_radius_ = false;
    global_chat_radius_ = 10000.0f;
    interior_enter_exits_disabled_=false;name_tag_draw_distance_=70.0f;
    use_player_ped_anims_ = false;
    name_tag_line_of_sight_ = true;
    manual_vehicle_control_ = false;
    samp::pawn::register_server_natives(vm,*this);start_gamemode();
    gamemode_restarting_=false;
    for(auto& player:players_) if(player.in_use && player.peer) {
        for(const auto& object:objects_) if(object.active) send_global_object(player,object);
        initialize_player(player);
        filterscript_player_connect(player.id);
        gamemode_player_connect(player.id);
    }
}

// Official: FUN_00495dc0 @ 0x00495dc0 (samp-server.exe)
void GameLayer::initialize_player(GamePlayer& player) {
    if(!player.in_use || !player.peer) return;
    player.world_hour = static_cast<std::uint8_t>(world_hour_);
    player.world_minute = 0;
    using samp::proto::BitStream;
    const int slot=player.id;auto& peer=*player.peer;
    BitStream init;
    if(zone_names_enabled_) init.write1();else init.write0(); // EnableZoneNames
    if (use_player_ped_anims_) init.write1(); else init.write0();
    if (allow_interior_weapons_) init.write1(); else init.write0();
    if (limit_global_chat_radius_) init.write1(); else init.write0();
    init.write(&global_chat_radius_, sizeof(global_chat_radius_));
    if(stunt_bonus_enabled_) init.write1();else init.write0();
    init.write(std::bit_cast<std::array<std::uint8_t,4>>(name_tag_draw_distance_).data(),4); // SetNameTagDrawDistance
    if(interior_enter_exits_disabled_) init.write1();else init.write0(); // DisableInteriorEnterExits
    if (name_tag_line_of_sight_) init.write1(); else init.write0();
    if (manual_vehicle_control_) init.write1(); else init.write0();
    // The number of classes is what the client reads as its class count; the
    // field is called SetSpawnInfoCount because the same slot carries the
    // spawn info of the older protocol.
    init.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(static_cast<std::uint32_t>(classes_.size()))).data(),4);
    init.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(static_cast<std::uint16_t>(slot))).data(),2);
    if(show_name_tags_) init.write1();else init.write0();
    init.write(&player_marker_mode_,4);
    init.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(static_cast<std::uint8_t>(world_hour_))}.data(),1);  // SetWorldTime
    init.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(static_cast<std::uint8_t>(weather_id_))}.data(),1);  // SetWeather
    init.write(std::bit_cast<std::array<std::uint8_t,4>>(gravity_).data(),4);  // SetGravity
    init.write0();          // LanMode
    init.write(&death_drop_amount_, sizeof(death_drop_amount_));
    init.write0();          // Instagib
    init.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(config_->getInt("onfoot_rate", 80))).data(),4);   // OnFootRate
    init.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(config_->getInt("incar_rate", 80))).data(),4);    // InCarRate
    init.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(config_->getInt("weapon_rate", 40))).data(),4);   // WeaponRate
    init.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(2)).data(),4);    // Multiplier
    init.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(config_->getInt("lagcompmode", 1))).data(),4);    // LagCompensation
    const std::string server_name = config_->get("hostname", "SA-MP Server");
    const auto server_name_length=static_cast<std::uint8_t>(server_name.size());
    init.write(&server_name_length,sizeof(server_name_length));
    if(!server_name.empty()) init.write(server_name.data(),server_name.size());
    std::fill(vehicle_models_.begin(),vehicle_models_.end(),std::uint8_t{0});
    for(const auto& vehicle:vehicles_) if(vehicle.active && vehicle.model>=400 && vehicle.model<=611)
        ++vehicle_models_[vehicle.model-400];
    for (const std::uint8_t model : vehicle_models_) {
        init.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(model)}.data(),1);
    }
    init.write(&vehicle_friendly_fire_, sizeof(vehicle_friendly_fire_));
    // 496740 sends the model manifest before normal player initialization.
    send_rpc(peer, kRpcPlayerInit, init);

    player.joined = true;
    player.model_finish_reported=player.models_ready;
}

} // namespace samp::server
