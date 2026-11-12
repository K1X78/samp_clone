#include "game_runtime.hpp"
#include "samp/client/remote_motion.hpp"
#include <algorithm>
#include <cmath>
#include <cstring>

namespace samp::client {

void GameRuntime::capture_shot(const float* origin,const float* position,void* entity,std::uint8_t weapon) {
    if(!origin || !position || shots_.size()>=128 || (weapon==34 && !entity)) return;
    for(int i=0;i<3;++i) if(!std::isfinite(origin[i]) || !std::isfinite(position[i])) return;
    std::array<std::uint8_t,40> packet{};
    std::uint16_t target=0xffff;
    for(const auto& [id,ped]:remote_peds_.peds_) if(ped.ped==entity) {packet[0]=1;target=static_cast<std::uint16_t>(id);break;}
    if(target==0xffff) for(const auto& [id,vehicle]:remote_vehicles_)
        if(vehicle.entity==entity) {packet[0]=2;target=id;break;}
    std::memcpy(packet.data()+1,&target,2);std::memcpy(packet.data()+3,origin,12);
    std::memcpy(packet.data()+15,position,12);
    float offset[3]{};
    if(entity) {
        const auto* matrix=*reinterpret_cast<const PedMatrix* const*>(static_cast<const std::uint8_t*>(entity)+0x14);
        if(matrix) {
            float delta[3];for(int axis=0;axis<3;++axis) delta[axis]=position[axis]-(*matrix)[12+axis];
            if(lag_compensation_mode_==0) for(int axis=0;axis<3;++axis)
                offset[axis]=delta[0]*(*matrix)[axis*4]+delta[1]*(*matrix)[axis*4+1]+delta[2]*(*matrix)[axis*4+2];
            else std::copy(std::begin(delta),std::end(delta),offset);
        }
        if(target==0xffff) std::copy(position,position+3,offset);
    }
    std::memcpy(packet.data()+27,offset,12);packet[39]=weapon;shots_.push_back(packet);
}

bool GameRuntime::give_weapon(std::uint8_t* ped,std::uint32_t weapon,std::uint32_t ammo) {
    constexpr int models[]{-1,331,333,334,335,336,337,338,339,341,321,322,323,324,325,326,
        342,343,344,-1,-1,-1,346,347,348,349,350,351,352,353,355,356,372,357,358,359,
        360,361,362,363,364,365,366,367,368,369,371};
    if(!ped || weapon>=std::size(models) || models[weapon]<0) return false;
    script_.command(0x0247,"i",static_cast<std::uint32_t>(models[weapon]));script_.command(0x038b,"");
    reinterpret_cast<void(__thiscall*)(void*,int,int,bool)>(0x5e6080)(ped,weapon,ammo,true);
    reinterpret_cast<void(__thiscall*)(void*,int)>(0x5e6280)(ped,weapon);
    return true;
}

void GameRuntime::replay_bullet(const RemoteBulletCommand& command) {
    const auto found=remote_peds_.peds_.find(command.player_id);
    if(found==remote_peds_.peds_.end()) return;
    auto* ped=static_cast<std::uint8_t*>(found->second.ped);
    if(!ped || resolve_actor(found->second.actor)!=ped) return;
    const auto type=command.data[39];if(type<22 || (type>34 && type!=38)) return;
    float origin[3],hit[3];std::memcpy(origin,command.data.data()+3,12);std::memcpy(hit,command.data.data()+15,12);
    for(int i=0;i<3;++i) if(!std::isfinite(origin[i]) || !std::isfinite(hit[i])) return;
    // Native 10016010 resolves the hit entity; the LOS hook reconstructs
    // its current hit point from the transmitted offset and lag-comp mode.
    std::uint16_t target_id=0xffff;std::memcpy(&target_id,command.data.data()+1,2);
    std::uint8_t* target=nullptr;
    if(command.data[0]==1) {
        if(target_id==local_player_id_) target=*reinterpret_cast<std::uint8_t**>(0xb7cd98);
        else if(const auto found=remote_peds_.peds_.find(target_id);found!=remote_peds_.peds_.end()) target=static_cast<std::uint8_t*>(found->second.ped);
        if(target==ped) return;
    } else if(command.data[0]==2) {
        if(const auto found=remote_vehicles_.find(target_id);found!=remote_vehicles_.end()) target=static_cast<std::uint8_t*>(found->second.entity);
    }
    if(target) {
        const auto* matrix=*reinterpret_cast<const PedMatrix* const*>(target+0x14);
        float offset[3];std::memcpy(offset,command.data.data()+27,12);
        for(const auto value:offset) if(!std::isfinite(value) || std::fabs(value)>=300.f) return;
        if(matrix) for(int axis=0;axis<3;++axis) {
            hit[axis]=(*matrix)[12+axis];
            if(lag_compensation_mode_==0) for(int component=0;component<3;++component) hit[axis]+=offset[component]*(*matrix)[component*4+axis];
            else hit[axis]+=offset[axis];
        }
    }
    if(!give_weapon(ped,type,9999)) return;
    const auto slot=ped[0x718];if(slot>=13) return;
    auto* weapon=ped+0x5a0+slot*28;
    const auto previous=*reinterpret_cast<std::uint8_t*>(0xb7cd74);
    *reinterpret_cast<std::uint8_t*>(0xb7cd74)=static_cast<std::uint8_t>(found->second.slot);
    replay_target_={hit[0],hit[1],hit[2]};replaying_shot_=true;
    if(type==34) reinterpret_cast<bool(__thiscall*)(void*,void*,void*,void*)>(0x73aac0)(weapon,ped,nullptr,nullptr);
    else reinterpret_cast<bool(__thiscall*)(void*,void*,const float*,const float*,void*,const float*,void*,bool,bool)>(0x73fb10)(
        weapon,ped,origin,origin,nullptr,hit,nullptr,false,true);
    replaying_shot_=false;*reinterpret_cast<std::uint8_t*>(0xb7cd74)=previous;
}

} // namespace samp::client
