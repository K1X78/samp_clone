#include "samp/server/game_layer.hpp"
#include <algorithm>
#include <cstring>

namespace samp::server {

// 00467860 supplies the 40+23 byte vehicle record.
// Official: FUN_00483aa0 @ 0x00483aa0 (samp-server.exe)
void GameLayer::send_vehicle_stream_in(GamePlayer& player, const GameVehicle& vehicle) {
    if(!player.peer || !vehicle.active || vehicle.id>=vehicles_.size()) return;
    player.streamed_vehicles.resize(vehicles_.size());
    if(player.streamed_vehicles[vehicle.id] || player.streamed_vehicle_count>700) return;
    std::array<std::uint8_t,40> spawn{};
    std::memcpy(spawn.data(),&vehicle.id,2);std::memcpy(spawn.data()+2,&vehicle.model,4);
    std::memcpy(spawn.data()+6,&vehicle.spawn_x,4);std::memcpy(spawn.data()+10,&vehicle.spawn_y,4);
    std::memcpy(spawn.data()+14,&vehicle.spawn_z,4);std::memcpy(spawn.data()+18,&vehicle.angle,4);
    spawn[22]=static_cast<std::uint8_t>(vehicle.colour1);spawn[23]=static_cast<std::uint8_t>(vehicle.colour2);
    std::memcpy(spawn.data()+24,&vehicle.health,4);spawn[28]=vehicle.interior;
    std::memcpy(spawn.data()+29,&vehicle.damage_doors,4);std::memcpy(spawn.data()+33,&vehicle.damage_panels,4);
    spawn[37]=vehicle.damage_lights;spawn[38]=vehicle.damage_tires;spawn[39]=vehicle.siren;
    std::array<std::uint8_t,23> tune{};
    std::copy(vehicle.mods.begin(),vehicle.mods.end(),tune.begin());tune[14]=vehicle.paintjob;
    const std::int32_t body=-1;std::memcpy(tune.data()+15,&body,4);std::memcpy(tune.data()+19,&body,4);
    samp::proto::BitStream payload;payload.write(spawn.data(),spawn.size());payload.write(tune.data(),tune.size());
    send_rpc(*player.peer,164,payload);
    player.streamed_vehicles[vehicle.id]=1;++player.streamed_vehicle_count;
    const samp::amx::cell args[]{vehicle.id,player.id};samp::amx::cell result=1;
    for(const auto& script:filterscripts_) script->execute("OnVehicleStreamIn",args,result);
    vm_.execute("OnVehicleStreamIn",args,result);
}

// Official: FUN_00483a20 @ 0x00483a20 (samp-server.exe)
void GameLayer::send_vehicle_stream_out(GamePlayer& player, std::uint16_t vehicle) {
    if(!player.peer || vehicle>=player.streamed_vehicles.size() || !player.streamed_vehicles[vehicle]) return;
    samp::proto::BitStream payload;payload.write(&vehicle,2);send_rpc(*player.peer,165,payload);
    player.streamed_vehicles[vehicle]=0;
    if(player.streamed_vehicle_count) --player.streamed_vehicle_count;
    const samp::amx::cell args[]{vehicle,player.id};samp::amx::cell result=1;
    for(const auto& script:filterscripts_) script->execute("OnVehicleStreamOut",args,result);
    vm_.execute("OnVehicleStreamOut",args,result);
}

} // namespace samp::server
