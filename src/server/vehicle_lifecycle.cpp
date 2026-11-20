#include "samp/server/game_layer.hpp"
#include <algorithm>
#include <bit>
#include <cstdlib>

namespace samp::server {

// Official: FUN_00467640 @ 0x00467640 (samp-server.exe)
void GameLayer::update_vehicles(std::uint64_t now) {
    for(auto& vehicle:vehicles_) if(vehicle.active) process_vehicle(vehicle,now);
}

// Official: FUN_00489b60 @ 0x00489b60 (samp-server.exe)
void GameLayer::process_vehicle(GameVehicle& vehicle,std::uint64_t now) {
    // The native checks expensive idle/death expiry on rand()%20==0.
    const auto elapsed=[](std::uint64_t end,std::uint64_t start) {
        return std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(end)-static_cast<std::uint32_t>(start));
    };
    if(!vehicle.death_notified && vehicle.respawn_delay_ms>0 && std::rand()%20==0) {
        const bool train=vehicle.model==537 || vehicle.model==538 || vehicle.model==569 || vehicle.model==570 || vehicle.model==449;
        bool occupied=false;
        // 0x489660 scans only the cached live player-pool domain.
        for(std::size_t slot=0;slot<1000 && slot<players_.size() && static_cast<int>(slot)<=player_pool_highest_;++slot) {
            const auto& player=players_[slot];
            if(player.in_use && player.vehicle_id==vehicle.id && (player.state==2 || player.state==3)) {
                occupied=true;break;
            }
        }
        // 0x489b00 uses signed, wrapping DWORD tick differences.
        if(!train && !occupied && vehicle.has_been_occupied && elapsed(now,vehicle.created_ms)>=10000 &&
            elapsed(now,vehicle.last_occupied_ms)>=vehicle.respawn_delay_ms)
            respawn_vehicle(vehicle,now);
        return;
    }
    if(!vehicle.dead) return;
    if(!vehicle.death_notified) {
        vehicle.death_notified=true;vehicle.death_ms=now;
        const samp::amx::cell args[]{vehicle.id,vehicle.killer};samp::amx::cell result=1;
        for(const auto& script:filterscripts_) script->execute("OnVehicleDeath",args,result);
        const samp::amx::cell live_args[]{vehicle.id,vehicle.killer};
        vm_.execute("OnVehicleDeath",live_args,result);
    }
    if(std::rand()%20==0 && elapsed(now,vehicle.death_ms)>10000)
        respawn_vehicle(vehicle,now);
}

// Official: FUN_00489790 @ 0x00489790 (samp-server.exe)
void GameLayer::respawn_vehicle(GameVehicle& vehicle,std::uint64_t now) {
    const auto id=vehicle.id;
    vehicle.x=vehicle.spawn_x=vehicle.respawn_x;vehicle.y=vehicle.spawn_y=vehicle.respawn_y;
    vehicle.z=vehicle.spawn_z=vehicle.respawn_z;vehicle.angle=vehicle.spawn_angle=vehicle.respawn_angle;
    vehicle.health=1000;vehicle.rotation={1,0,0,0};vehicle.velocity={};
    vehicle.damage_doors=vehicle.damage_panels=0;vehicle.damage_lights=vehicle.damage_tires=0;
    vehicle.mods={};vehicle.paintjob=0;vehicle.dead=vehicle.death_notified=vehicle.has_been_occupied=false;
    vehicle.respray_colour1 = -1;
    vehicle.respray_colour2 = -1;
    vehicle.parameters.fill(0xff);
    vehicle.created_ms=vehicle.last_occupied_ms=now;vehicle.death_ms=0;vehicle.killer=0xffff;
    vehicle.driver=-1;vehicle.passengers.fill(-1);
    clear_vehicle_streaming(id);
    const samp::amx::cell args[]{id};samp::amx::cell result=1;
    for(const auto& script:filterscripts_) script->execute("OnVehicleSpawn",args,result);
    vm_.execute("OnVehicleSpawn",args,result);
}

// Official: FUN_00499880 @ 0x00499880 (samp-server.exe)
void GameLayer::handle_vehicle_death(RakNetPeer& peer,const samp::proto::BitStream& payload) {
    auto input=payload;std::uint16_t id=0;if(!input.read(&id,2) || id>=vehicles_.size() || !vehicles_[id].active) return;
    for(const auto& player:players_) {
        if(!player.in_use || player.peer!=&peer || id>=player.streamed_vehicles.size() || !player.streamed_vehicles[id]) continue;
        auto& vehicle=vehicles_[id];vehicle.dead=true;vehicle.killer=static_cast<std::uint16_t>(player.id);return;
    }
}

} // namespace samp::server
