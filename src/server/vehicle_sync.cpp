#include "samp/server/game_layer.hpp"
#include <algorithm>
#include <cmath>
#include <cstring>
#include <chrono>

namespace samp::server {

// Official: FUN_00494fd0 @ 0x00494fd0 (samp-server.exe)
void GameLayer::handle_driver_packet(GamePlayer& player,const samp::proto::BitStream& message) {
    if(message.numberOfBitsUsed_<64*8) return;
    const auto* raw=message.data_.data()+1;
    const auto u16=[raw](std::size_t at){std::uint16_t n;std::memcpy(&n,raw+at,2);return n;};
    const auto f32=[raw](std::size_t at){float n;std::memcpy(&n,raw+at,4);return n;};
    const auto id=u16(0);
    if(id==0 || id>=vehicles_.size() || !vehicles_[id].active ||
       vehicles_[id].virtual_world!=player.virtual_world || id>=player.streamed_vehicles.size() ||
       !player.streamed_vehicles[id]) return;
    for(std::size_t at=8;at<=48;at+=4) if(!std::isfinite(f32(at))) return;
    auto& vehicle=vehicles_[id];
    if(vehicle.driver!=-1 && vehicle.driver!=player.id) {
        const auto old=static_cast<std::size_t>(vehicle.driver);
        if(old<players_.size() && players_[old].in_use && players_[old].state==2 && players_[old].vehicle_id==id) return;
    }
    for(auto& old:vehicles_) {
        if(old.driver==player.id && old.id!=id) old.driver=-1;
        for(auto& passenger:old.passengers) if(passenger==player.id) passenger=-1;
    }
    const auto old_keys=player.keys;
    player.vehicle_id=id;player.vehicle_seat=0;
    player.left_right=static_cast<std::int16_t>(u16(2));player.up_down=static_cast<std::int16_t>(u16(4));player.keys=u16(6);
    player.x=vehicle.x=f32(24);player.y=vehicle.y=f32(28);player.z=vehicle.z=f32(32);
    for(int i=0;i<4;++i) vehicle.rotation[i]=f32(8+i*4);
    for(int i=0;i<3;++i) vehicle.velocity[i]=f32(36+i*4);
    vehicle.health=f32(48);vehicle.driver=player.id;vehicle.has_been_occupied=true;
    vehicle.last_occupied_ms=static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    player.health=raw[52];player.armour=raw[53];player.weapon=raw[54]&0x3f;
    if(raw[54]>>6) player.keys |= 1u<<(15+(raw[54]>>6));
    notify_key_change(player,old_keys);
    set_player_state(player,2);
    const samp::amx::cell args[]{player.id};samp::amx::cell result=1;
    const auto allow=[&](samp::pawn::PawnVm& script) {
        if(!std::any_of(script.publics_.begin(),script.publics_.end(),[](const auto& p){return p.name=="OnPlayerUpdate";})) return true;
        return script.execute("OnPlayerUpdate",args,result)==0 && result!=0;
    };
    for(const auto& script:filterscripts_) if(!allow(*script)) return;
    if(!allow(vm_)) return;
    update_streaming();
    samp::proto::BitStream relay;
    const std::uint8_t kind=200;const auto sender=static_cast<std::uint16_t>(player.id);
    relay.write(&kind,1);relay.write(&sender,2);relay.write(raw,8);
    for(float value:vehicle.rotation) if(value<0) relay.write1();else relay.write0();
    for(int i=1;i<4;++i) {
        const auto component=static_cast<std::uint16_t>(std::clamp(std::fabs(vehicle.rotation[i]),0.f,1.f)*65535.f);
        relay.write(&component,2);
    }
    relay.write(raw+24,12);
    const float speed=std::sqrt(vehicle.velocity[0]*vehicle.velocity[0]+vehicle.velocity[1]*vehicle.velocity[1]+vehicle.velocity[2]*vehicle.velocity[2]);
    relay.write(&speed,4);
    if(speed>0.00001f) for(const auto value:vehicle.velocity) {
        const auto normalized=static_cast<std::uint16_t>(std::clamp((value/speed+1.f)*32767.5f,0.f,65535.f));
        relay.write(&normalized,2);
    }
    const auto health=static_cast<std::uint16_t>(std::clamp(vehicle.health,0.f,65535.f));relay.write(&health,2);
    const auto nibble=[](unsigned value){return value>=100?15u:value/7;};
    const auto packed=static_cast<std::uint8_t>((nibble(raw[52])<<4)|nibble(raw[53]));relay.write(&packed,1);
    const auto weapon=static_cast<std::uint8_t>(raw[54]&0x3f);relay.write(&weapon,1);
    if(raw[55]) relay.write1();else relay.write0();
    if(raw[56]) relay.write1();else relay.write0();
    std::uint32_t train=0;std::memcpy(&train,raw+59,4);
    if(train) {relay.write1();relay.write(&train,4);}else relay.write0();
    const auto trailer=u16(57);
    if(trailer) {relay.write1();relay.write(&trailer,2);}else relay.write0();
    relay_sync(player,relay);
}

// Official: FUN_00495140 @ 0x00495140 (samp-server.exe)
void GameLayer::handle_passenger_packet(GamePlayer& player,const samp::proto::BitStream& message) {
    if(message.numberOfBitsUsed_<25*8) return;
    const auto* raw=message.data_.data()+1;std::uint16_t id=0;std::memcpy(&id,raw,2);
    const auto seat=static_cast<std::uint8_t>(raw[2]&0x3f);
    if(id==0 || id>=vehicles_.size() || !vehicles_[id].active || seat==0 || seat>8 ||
        vehicles_[id].virtual_world!=player.virtual_world || id>=player.streamed_vehicles.size() ||
        !player.streamed_vehicles[id]) return;
    float position[3];std::memcpy(position,raw+12,12);
    if(!std::all_of(std::begin(position),std::end(position),[](float x){return std::isfinite(x);})) return;
    for(auto& vehicle:vehicles_) {
        if(vehicle.driver==player.id) vehicle.driver=-1;
        for(auto& occupant:vehicle.passengers) if(occupant==player.id) occupant=-1;
    }
    auto& vehicle=vehicles_[id];vehicle.passengers[seat-1]=player.id;
    const auto old_keys=player.keys;
    player.vehicle_id=id;player.vehicle_seat=seat;player.weapon=raw[3]&0x3f;
    player.health=raw[4];player.armour=raw[5];
    std::memcpy(&player.left_right,raw+6,2);std::memcpy(&player.up_down,raw+8,2);
    std::uint16_t keys=0;std::memcpy(&keys,raw+10,2);player.keys=keys;
    if(raw[3]>>6) player.keys |= 1u<<(15+(raw[3]>>6));
    notify_key_change(player,old_keys);
    player.x=position[0];player.y=position[1];player.z=position[2];set_player_state(player,3);
    update_streaming();
    samp::proto::BitStream relay;const std::uint8_t kind=211;const auto sender=static_cast<std::uint16_t>(player.id);
    relay.write(&kind,1);relay.write(&sender,2);relay.write(raw,24);relay_sync(player,relay);
}

// Official: FUN_00498bf0 @ 0x00498bf0 (samp-server.exe)
void GameLayer::handle_vehicle_enter(RakNetPeer& peer,const samp::proto::BitStream& payload) {
    auto input=payload;std::uint16_t id=0;std::uint8_t passenger=0;
    if(!input.read(&id,2) || !input.read(&passenger,1)) return;
    for(auto& player:players_) {
        if(!player.in_use || player.peer!=&peer) continue;
        if(id==0xffff) {kick_player(player.id);return;}
        if(id>=vehicles_.size() || !vehicles_[id].active) return;
        const samp::amx::cell args[]{player.id,id,passenger};samp::amx::cell result=1;
        for(const auto& script:filterscripts_) script->execute("OnPlayerEnterVehicle",args,result);
        vm_.execute("OnPlayerEnterVehicle",args,result);
        samp::proto::BitStream relay;const auto sender=static_cast<std::uint16_t>(player.id);
        relay.write(&sender,2);relay.write(&id,2);relay.write(&passenger,1);
        for(auto& receiver:players_) if(receiver.in_use && receiver.peer && receiver.id!=player.id &&
            receiver.virtual_world==player.virtual_world && receiver.streamed_to[player.id])
            send_rpc(*receiver.peer,26,relay);
        return;
    }
}

// Official: FUN_00498d60 @ 0x00498d60 (samp-server.exe)
void GameLayer::handle_vehicle_exit(RakNetPeer& peer,const samp::proto::BitStream& payload) {
    auto input=payload;std::uint16_t id=0;if(!input.read(&id,2)) return;
    for(auto& player:players_) {
        if(!player.in_use || player.peer!=&peer) continue;
        if(id==0xffff) {kick_player(player.id);return;}
        const samp::amx::cell args[]{player.id,id};samp::amx::cell result=1;
        for(const auto& script:filterscripts_) script->execute("OnPlayerExitVehicle",args,result);
        vm_.execute("OnPlayerExitVehicle",args,result);
        samp::proto::BitStream relay;const auto sender=static_cast<std::uint16_t>(player.id);
        relay.write(&sender,2);relay.write(&id,2);
        for(auto& receiver:players_) if(receiver.in_use && receiver.peer && receiver.id!=player.id &&
            receiver.virtual_world==player.virtual_world && receiver.streamed_to[player.id])
            send_rpc(*receiver.peer,154,relay);
        return;
    }
}

} // namespace samp::server
