#include "game_runtime.hpp"
#include <windows.h>
#include <cstring>
#include <cmath>
#include <type_traits>

namespace samp::client {
void GameRuntime::display_game_text(const GameTextCommand& text) {
    if (static_cast<std::int32_t>(text.style) > 200) return;
    script_.command(0x00be, "");
    static std::array<char,512> buffer{};
    std::strncpy(buffer.data(),text.text.c_str(),buffer.size());
    reinterpret_cast<void(__cdecl*)(const char*,std::uint32_t,std::uint32_t)>(0x69f2b0)(
        buffer.data(),text.time,text.style);
}
// Original collision helper's model bounds and RenderWare sphere/line test.
bool GameRuntime::target_sphere(const std::array<float,3>& from,const std::array<float,3>& to,
                               void* object,const std::array<float,3>& center,float scale,bool visible) {
    auto* entity=static_cast<std::uint8_t*>(object);
    if(!entity || !*reinterpret_cast<void**>(entity+0x14)) return false;
    const auto* info=static_cast<const std::uint8_t*>(models_.model_info(*reinterpret_cast<const std::int16_t*>(entity+0x22)));
    const auto* collision=info?*reinterpret_cast<const std::uint8_t* const*>(info+0x14):nullptr;
    if(!collision) return false;
    const auto bound=*reinterpret_cast<const float*>(collision+0x24);
    if(visible) {
        const float sphere[]{center[0],center[1],center[2],bound};
        auto* camera=*reinterpret_cast<void**>(0xc1703c);
        if(!camera || !reinterpret_cast<int(__cdecl*)(void*,const float*)>(version_==1?0x7ee2d0:0x7ee310)(camera,sphere)) return false;
    }
    float radius=bound<0.5f?0.5f:bound;if(radius<1.f) radius*=1.5f;radius*=scale;
    const float sphere[]{0,0,0,radius};
    const float line[]{from[0]-center[0],from[1]-center[1],from[2]-center[2],0,
                       to[0]-center[0],to[1]-center[1],to[2]-center[2],0};
    return reinterpret_cast<bool(__cdecl*)(const float*,const float*)>(0x417470)(line,sphere);
}

// Camera targeting is server-enabled separately from the /ctd display flag.
void GameRuntime::collect_camera_targets() {
    camera_targets_.fill(0xffff);
    if(!world_ || !world_->stream.camera_targeting) return;
    const auto* aim=reinterpret_cast<const float*>(0xb6f32c);
    const std::array<float,3> from{aim[3]+aim[0],aim[4]+aim[1],aim[5]+aim[2]};
    const std::array<float,3> to{aim[3]+aim[0]*70.f,aim[4]+aim[1]*70.f,aim[5]+aim[2]*70.f};
    using Ray=bool(__cdecl*)(const float*,const float*,void*,void**,bool,bool,bool,bool,bool,bool,bool,bool);
    const auto ray=reinterpret_cast<Ray>(0x56ba00);
    const auto pick=[&](unsigned kind,const auto& entries,bool vehicles,bool peds,bool objects,float range,float scale) {
        std::array<std::uint8_t,44> hit{};void* entity=nullptr;
        const bool collided=ray(from.data(),to.data(),hit.data(),&entity,true,vehicles,peds,objects,false,false,false,false);
        std::array<float,3> target=to;if(collided) std::memcpy(target.data(),hit.data(),12);
        float closest=100000.f;
        for(const auto& [id,record]:entries) {
            void* object=nullptr;
            using T=std::decay_t<decltype(record)>;
            if constexpr(std::is_same_v<T,RuntimeObject> || std::is_same_v<T,RuntimeVehicle> || std::is_same_v<T,RuntimeActor>) object=record.entity;
            else object=record.ped;
            if(!object) continue;
            auto* bytes=static_cast<std::uint8_t*>(object);std::array<float,3> center{};
            reinterpret_cast<void(__thiscall*)(void*,float*)>(0x534250)(object,center.data());
            const auto* matrix=*reinterpret_cast<const float* const*>(bytes+0x14);if(!matrix) continue;
            const float dx=matrix[12]-aim[3],dy=matrix[13]-aim[4],dz=matrix[14]-aim[5];
            const float distance=std::sqrt(dx*dx+dy*dy+dz*dz);if(!(distance<range)) continue;
            if(!target_sphere(from,target,object,center,scale,true)) continue;
            const float tx=center[0]-from[0],ty=center[1]-from[1],tz=center[2]-from[2];
            const float start_distance=std::sqrt(tx*tx+ty*ty+tz*tz);
            if(start_distance<closest) {closest=start_distance;camera_targets_[kind]=static_cast<std::uint16_t>(id);}
        }
    };
    pick(0,runtime_objects_,false,false,false,40.f,1.f);
    pick(1,remote_vehicles_,false,true,false,40.f,1.f);
    pick(2,remote_peds_.peds_,false,true,true,20.f,0.75f);
    pick(3,runtime_actors_,false,true,true,20.f,0.75f);
}
// Local02fd0 and remote14240 cache aim every1000ms and apply IK every200ms.
void GameRuntime::process_head_movement() {
    if(!head_movement_) return;
    const auto now=GetTickCount();
    const auto look=[&](int id,std::uint8_t* ped,const float* aim,int duration) {
        if(!ped || !aim) return;
        const auto* matrix=*reinterpret_cast<const float* const*>(ped+0x14);if(!matrix) return;
        auto& state=head_states_[id];
        if(now-state.sampled>1000) {
            for(int axis=0;axis<3;++axis) state.direction[axis]=(matrix[12+axis]+aim[axis]*20.f)-matrix[12+axis];
            state.sampled=now;
        }
        if(now-state.applied<=200) return;
        float target[3];for(int axis=0;axis<3;++axis) target[axis]=matrix[12+axis]+state.direction[axis];
        // Wrapper100adbd0 invokes CIKChainManager618970 with FollowPedSA.
        using Look=void(__thiscall*)(void*,const char*,void*,void*,int,int,const float*,bool,float,int,int,bool);
        reinterpret_cast<Look>(0x618970)(reinterpret_cast<void*>(0xc15448),"FollowPedSA",ped,nullptr,duration,-1,target,false,0.1f,500,3,false);
        state.applied=now;
    };
    look(-1,*reinterpret_cast<std::uint8_t**>(0xb7cd98),reinterpret_cast<const float*>(0xb6f32c),2000);
    for(auto& [id,remote]:remote_peds_.peds_) {
        if(!remote.has_aim || resolve_actor(remote.actor)!=remote.ped) continue;
        float direction[3];std::memcpy(direction,remote.aim.data()+1,12);
        look(id,static_cast<std::uint8_t*>(remote.ped),direction,1000);
    }
}

// Original debug selector's preview, new-key navigation and confirmation.
void GameRuntime::process_vehicle_selector() {
    if(!debug_mode_ || !vehicle_selector_active_) return;
    auto* ped=*reinterpret_cast<std::uint8_t**>(0xb7cd98);if(!ped) return;
    constexpr std::uint16_t preview=1999;
    const auto create=[&] {
        VehicleSpawnCommand vehicle;vehicle.id=preview;vehicle.model=selected_vehicle_model_;
        vehicle.x=vehicle.y=5;vehicle.z=500;stream_vehicle(vehicle);
    };
    if(!vehicle_selector_initialized_) {
        script_.command(0x0925,"");
        script_.command(0x015f,"ffffff",-4.,-4.,502.,0.,0.,0.);
        script_.command(0x0160,"fffi",5.,5.,500.,1);
        script_.command(0x01b4,"ii",0u,0u);script_.command(0x04d7,"ii",1u,1u);
        static char title[]="Vehicle Select";
        reinterpret_cast<void(__cdecl*)(char*,int,int)>(0x69f2b0)(title,4000,6);
        create();vehicle_selector_initialized_=true;
    }
    *reinterpret_cast<std::uint8_t*>(0xba6769)=0;
    if(const auto found=remote_vehicles_.find(preview);found!=remote_vehicles_.end() && found->second.entity) {
        auto* entity=static_cast<std::uint8_t*>(found->second.entity);
        const float turn[]{0,0,0.03f},velocity[]{0,0,0};
        std::memcpy(entity+0x50,turn,12);std::memcpy(entity+0x44,velocity,12);
        if(auto* matrix=*reinterpret_cast<float**>(entity+0x14)) {matrix[12]=matrix[13]=5;matrix[14]=500;}
    }
    const auto* pad=reinterpret_cast<const std::uint8_t*>(0xb73458);
    const auto pressed=[&](unsigned offset) {return *reinterpret_cast<const std::int16_t*>(pad+offset)!=0 && *reinterpret_cast<const std::int16_t*>(pad+offset+0x30)==0;};
    if(pressed(0x1c)) {
        --selected_vehicle_model_;if(selected_vehicle_model_==538) selected_vehicle_model_=536;
        if(selected_vehicle_model_==399) selected_vehicle_model_=611;create();return;
    }
    if(pressed(0x20)) {
        ++selected_vehicle_model_;if(selected_vehicle_model_==537) selected_vehicle_model_=539;
        if(selected_vehicle_model_==612) selected_vehicle_model_=400;create();return;
    }
    if(!pressed(0x1e)) return;
    remove_vehicle(preview);script_.command(0x02eb,"");
    const auto* matrix=*reinterpret_cast<const float* const*>(ped+0x14);
    if(matrix) {
        VehicleSpawnCommand vehicle;vehicle.id=1998;vehicle.model=selected_vehicle_model_;
        vehicle.x=matrix[12]-5;vehicle.y=matrix[13]-5;vehicle.z=matrix[14]+1;
        if(stream_vehicle(vehicle)) script_.command(0x036a,"ii",1u,remote_vehicles_[1998].handle);
    }
    script_.command(0x02eb,"");script_.command(0x0930,"i",0u);script_.command(0x0925,"");script_.command(0x0373,"");script_.command(0x02eb,"");
    script_.command(0x01b4,"ii",0u,1u);script_.command(0x04d7,"ii",1u,0u);
    *reinterpret_cast<std::uint8_t*>(0xba6769)=1;
    vehicle_selector_active_=vehicle_selector_initialized_=false;
}
}
