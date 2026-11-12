#include "game_runtime.hpp"
#include "samp/client/remote_motion.hpp"
#include <cmath>
#include <algorithm>
#include <cstring>
#include <windows.h>

namespace samp::client {
GameRuntime* GameRuntime::vehicle_control_runtime_=nullptr;

// 100b7f00 supplies the GTA create/load/script operations used by this pool.
// The audited vehicle-pool creation path is in net/vehiclepool.cpp.
bool GameRuntime::stream_vehicle(const VehicleSpawnCommand& command) {
    if(command.id>=2000 || command.model<400 || command.model>611 ||
        !std::isfinite(command.x) || !std::isfinite(command.y) || !std::isfinite(command.z) ||
        !std::isfinite(command.angle) || !std::isfinite(command.health)) return false;
    remove_vehicle(command.id);
    const bool train=command.model==537 || command.model==538 || command.model==449;
    if(train) {
        for(const auto model:{538u,570u,537u,569u,449u}) script_.command(0x0247,"i",model);
    } else script_.command(0x0247,"i",command.model);
    script_.command(0x038b,"");
    RuntimeVehicle vehicle;
    if(train) {
        const auto type=command.model==538?5u:command.model==537?3u:9u;
        script_.command(0x06d8,"ifffiv",type,static_cast<double>(command.x),static_cast<double>(command.y),
            static_cast<double>(command.z),command.angle>180.f?1u:0u,&vehicle.handle);
    } else {
        script_.command(0x00a5,"ifffv",command.model,static_cast<double>(command.x),
            static_cast<double>(command.y),static_cast<double>(command.z),&vehicle.handle);
        script_.command(0x0175,"if",vehicle.handle,static_cast<double>(command.angle));
        script_.command(0x09c4,"ii",vehicle.handle,0u);
        script_.command(0x07ff,"ii",vehicle.handle,0u);
        script_.command(0x053f,"ii",vehicle.handle,0u);
    }
    if(!vehicle.handle) return false;
    auto* pool=*reinterpret_cast<void**>(0xb74494);
    if(!pool) return false;
    vehicle.entity=reinterpret_cast<void*(__thiscall*)(void*,std::uint32_t)>(0x4048e0)(pool,vehicle.handle);
    if(!vehicle.entity) return false;
    auto* entity=static_cast<std::uint8_t*>(vehicle.entity);
    if(command.colour1!=255 || command.colour2!=255) {entity[0x434]=command.colour1;entity[0x435]=command.colour2;}
    *reinterpret_cast<float*>(entity+0x4c0)=command.health;
    if(command.interior) script_.command(0x0840,"ii",vehicle.handle,static_cast<std::uint32_t>(command.interior));
    // Native 100a2e70 dispatches the vehicle vtable's ProcessControl and
    // installs the driver's remote pad around it. Patch only verified slots.
    constexpr std::pair<std::uintptr_t,std::uintptr_t> controls[]{
        {0x871120,0x6b1880},{0x8721a0,0x6f1770},{0x871360,0x6b9250},
        {0x871948,0x6c9260},{0x871680,0x6c7050},{0x871528,0x6bfa30},
        {0x8717d8,0x6c8250},{0x871ae8,0x6cdcc0},{0x872370,0x6f86a0},{0x871c28,0x6ced20}};
    const auto table=reinterpret_cast<std::uintptr_t>(*reinterpret_cast<void***>(entity));
    const auto specification=std::find_if(std::begin(controls),std::end(controls),[&](const auto& p){return p.first==table;});
    if(specification!=std::end(controls) && !vehicle_controls_.contains(table)) {
        auto** slot=reinterpret_cast<void**>(table)+10;
        if(reinterpret_cast<std::uintptr_t>(*slot)!=specification->second) return false;
        using VehicleControl=decltype(&GameRuntime::process_ped_control);
        const VehicleControl adapter=[](void* object,void*) {
            auto* runtime=vehicle_control_runtime_;if(!runtime || !object) return;
            const auto table=reinterpret_cast<std::uintptr_t>(*static_cast<void***>(object));
            const auto original=runtime->vehicle_controls_.find(table);
            if(original==runtime->vehicle_controls_.end()) return;
            auto call=reinterpret_cast<void(__thiscall*)(void*)>(original->second);
            RemotePed* driver=nullptr;
            for(auto& [id,vehicle]:runtime->remote_vehicles_) {
                (void)id;if(vehicle.entity!=object || vehicle.driver<0) continue;
                const auto found=runtime->remote_peds_.peds_.find(vehicle.driver);
                if(found!=runtime->remote_peds_.peds_.end()) driver=&found->second;
                break;
            }
            if(!driver || *reinterpret_cast<void**>(static_cast<std::uint8_t*>(object)+0x460)!=driver->ped || *reinterpret_cast<std::uint8_t*>(0xb7cd74)!=0) {call(object);return;}
            auto* pad=reinterpret_cast<std::uint8_t*>(0xb73458);RemoteControlPad previous;
            std::memcpy(previous.data(),pad,previous.size());
            const auto index=*reinterpret_cast<std::uint8_t*>(0xb7cd74);
            std::memcpy(pad,driver->control_pad.data(),driver->control_pad.size());
            *reinterpret_cast<std::uint8_t*>(0xb7cd74)=static_cast<std::uint8_t>(driver->slot);
            call(object);
            *reinterpret_cast<std::uint8_t*>(0xb7cd74)=index;std::memcpy(pad,previous.data(),previous.size());
        };
        DWORD protection=0;
        if(!VirtualProtect(slot,4,PAGE_READWRITE,&protection)) return false;
        vehicle_controls_[table]=*slot;vehicle_control_runtime_=this;
        PatchRecord patch;patch.address=static_cast<std::uint32_t>(table+40);patch.original.resize(4);patch.replacement.resize(4);
        std::memcpy(patch.original.data(),slot,4);*slot=reinterpret_cast<void*>(+adapter);
        std::memcpy(patch.replacement.data(),slot,4);patches_.push_back(std::move(patch));
        DWORD ignored=0;VirtualProtect(slot,4,protection,&ignored);
    }
    remote_vehicles_[command.id]=vehicle;
    return true;
}

// The audited vehicle-pool deletion path is in net/vehiclepool.cpp.
void GameRuntime::remove_vehicle(std::uint16_t id) {
    const auto found=remote_vehicles_.find(id);
    if(found==remote_vehicles_.end()) return;
    auto& vehicle=found->second;
    auto* pool=*reinterpret_cast<void**>(0xb74494);
    auto* current=pool?reinterpret_cast<void*(__thiscall*)(void*,std::uint32_t)>(0x4048e0)(pool,vehicle.handle):nullptr;
    if(current && current==vehicle.entity) {
        // 1001e540 -> CVehicle destructor100b8420 -> 100b7a20:
        // warp the driver and seven passengers out before deleting the car.
        // GTA's delete-car opcode alone can kill an occupant still attached.
        auto* entity=static_cast<std::uint8_t*>(current);
        const auto* matrix=*reinterpret_cast<const PedMatrix* const*>(entity+0x14);
        auto* ped_pool=*reinterpret_cast<void**>(0xb74490);
        if(matrix && ped_pool) {
            const auto position=*matrix;
            for(unsigned offset=0x460;offset<0x480;offset+=4) {
                auto* occupant=*reinterpret_cast<void**>(entity+offset);
                if(!occupant) continue;
                const auto actor=reinterpret_cast<std::uint32_t(__thiscall*)(void*,void*)>(0x4442d0)(ped_pool,occupant);
                script_.command(0x0362,"ifff",actor,static_cast<double>(position[12]),
                    static_cast<double>(position[13]),static_cast<double>(position[14]+2.f));
            }
        }
        const auto model=*reinterpret_cast<std::uint16_t*>(static_cast<std::uint8_t*>(current)+0x22);
        script_.command(model==537 || model==538?0x07bd:0x00a6,"i",vehicle.handle);
    }
    remote_vehicles_.erase(found);
}

} // namespace samp::client
