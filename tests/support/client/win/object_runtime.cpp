#include "game_runtime.hpp"
#include "samp/client/asset_manager.hpp"
#include <windows.h>
#include <cmath>
#include <cstring>

namespace samp::client {

// Descriptor1011e68c is00c0/ii, in addition to the two native clock byte writes.
void GameRuntime::set_world_clock(std::uint8_t hour,std::uint8_t minute) {
    *reinterpret_cast<std::uint8_t*>(0xb70152)=minute;
    *reinterpret_cast<std::uint8_t*>(0xb70153)=hour;
    script_.command(0x00c0,"ii",static_cast<std::uint32_t>(hour),static_cast<std::uint32_t>(minute));
}

// Native byte1199 is enabled when either time byte is nonzero. Equal,
// nonzero hours yield an empty interval; overnight ranges wrap at midnight.
bool GameRuntime::custom_object_visible(std::uint8_t on,std::uint8_t off,std::uint8_t hour) {
    if(on==0 && off==0) return true;
    if(off>on) return hour>=on && hour<off;
    if(off<on) return hour>=on || hour<off;
    return false;
}

// Essential entity construction from100a8d00. Advanced materials and
// attachments retain their core records and are a later roadmap package.
bool GameRuntime::stream_object(const MapObject& source) {
    if(source.id>=2100 || !std::isfinite(source.x) || !std::isfinite(source.y) ||
       !std::isfinite(source.z) || !std::isfinite(source.rotation_x) ||
       !std::isfinite(source.rotation_y) || !std::isfinite(source.rotation_z) || !std::isfinite(source.radius)) return false;
    remove_runtime_object(source.id);
    RuntimeObject object;object.source=source;object.model=static_cast<std::int32_t>(source.model);
    if(object.model<0) {
        if(!assets_ || !assets_->ready_ || !assets_->load_texture(source.model,[&](bool,std::uint32_t base,std::uint32_t id,
            const auto& name,const auto& dff,const auto& txd) {return load_custom_object(base,static_cast<std::int32_t>(id),name,dff,txd);}))
            object.model=18631;
        else {
            object.time_on=static_cast<std::uint8_t>(assets_->flag_56(source.model));
            object.time_off=static_cast<std::uint8_t>(assets_->flag_57(source.model));
        }
    }
    auto* info=static_cast<std::uint8_t*>(models_.model_info(object.model));
    if(!info) {object.model=18631;info=static_cast<std::uint8_t*>(models_.model_info(object.model));}
    if(!info) return false;
    if(object.model>=0 && !script_.command(0x0248,"i",object.model)) {
        script_.command(0x0247,"i",object.model);script_.command(0x038b,"");
        if(!script_.command(0x0248,"i",object.model)) return false;
    }
    if(source.radius!=0) std::memcpy(info+0x18,&source.radius,4);
    auto* branch=reinterpret_cast<std::uint8_t*>(0x46977f);DWORD protection=0,ignored=0;
    const auto original=*branch;
    if(object.model<0) {
        if(original!=0x7d || !VirtualProtect(branch,1,PAGE_EXECUTE_READWRITE,&protection)) return false;
        *branch=0x75;FlushInstructionCache(GetCurrentProcess(),branch,1);
    }
    // Descriptor1011ede8: opcode0107, model / x / y / z / handle variable.
    script_.command(0x0107,"ifffv",object.model,static_cast<double>(source.x),
                    static_cast<double>(source.y),static_cast<double>(source.z),&object.handle);
    if(object.model<0) {
        *branch=original;FlushInstructionCache(GetCurrentProcess(),branch,1);
        VirtualProtect(branch,1,protection,&ignored);
    }
    auto* pool=*reinterpret_cast<void**>(0xb7449c);
    if(object.handle && pool) object.entity=reinterpret_cast<void*(__thiscall*)(void*,std::uint32_t)>(0x465040)(pool,object.handle);
    if(!object.entity) return false;
    *reinterpret_cast<std::uint32_t*>(static_cast<std::uint8_t*>(object.entity)+0x1c)|=0x80000000u;
    object.visible=true;
    runtime_objects_[source.id]=object;
    update_runtime_object(runtime_objects_.at(source.id),source);
    return true;
}

// Descriptor1011ee4c is opcode0108/i. Lookup is generation checked before
// destroying, so a recycled GTA handle cannot delete an unrelated object.
void GameRuntime::remove_runtime_object(std::uint16_t id) {
    const auto found=runtime_objects_.find(id);if(found==runtime_objects_.end()) return;
    const auto& object=found->second;auto* pool=*reinterpret_cast<void**>(0xb7449c);
    if(pool && object.handle && reinterpret_cast<void*(__thiscall*)(void*,std::uint32_t)>(0x465040)(pool,object.handle)==object.entity)
        script_.command(0x0108,"i",object.handle);
    runtime_objects_.erase(found);
}

// The100a9150 path deletes the entity's RW instance outside its time/distance
// window and recreates it when visible; the shared model prototype stays alive.
void GameRuntime::update_runtime_object(RuntimeObject& object,const MapObject& source) {
    auto* pool=*reinterpret_cast<void**>(0xb7449c);
    if(!pool || reinterpret_cast<void*(__thiscall*)(void*,std::uint32_t)>(0x465040)(pool,object.handle)!=object.entity) return;
    auto* entity=static_cast<std::uint8_t*>(object.entity);auto** table=*reinterpret_cast<void***>(entity);
    auto* info=static_cast<std::uint8_t*>(models_.model_info(object.model));
    const float distance=source.radius!=0?source.radius:info?*reinterpret_cast<float*>(info+0x18):200.f;
    const auto* local=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
    const auto* matrix=local?*reinterpret_cast<const std::uint8_t* const*>(local+0x14):nullptr;
    const auto* position=matrix?matrix+0x30:local?local+4:nullptr;
    float xyz[3]{};if(position) std::memcpy(xyz,position,12);
    const double dx=source.x-xyz[0],dy=source.y-xyz[1],dz=source.z-xyz[2];
    const bool visible=custom_object_visible(object.time_on,object.time_off,*reinterpret_cast<const std::uint8_t*>(0xb70153)) &&
        dx*dx+dy*dy+dz*dz<=double(distance)*distance;
    auto& flags=*reinterpret_cast<std::uint32_t*>(entity+0x1c);
    auto& instance=*reinterpret_cast<void**>(entity+0x18);
    if(!visible) {
        // CEntity::CreateRwObject(533d30) checks bit7 before touching its model.
        // Hidden custom objects must not enter automatic renderer recreation.
        flags&=~0x80u;object.visible=false;
        // 100a91ee..100a920a retains its instance for1000 out-of-window ticks.
        if(object.hidden_frames<1000) ++object.hidden_frames;
        if(object.hidden_frames==1000 && instance)
            reinterpret_cast<void(__thiscall*)(void*)>(table[8])(entity);
    } else {
        object.hidden_frames=0;
        if(!instance) {
            if(!info || !*reinterpret_cast<void**>(info+0x1c)) {
                if(object.model<0 && assets_ && assets_->ready_) assets_->load_texture(static_cast<std::uint32_t>(object.model),
                    [&](bool,std::uint32_t base,std::uint32_t id,const auto& name,const auto& dff,const auto& txd) {
                        return load_custom_object(base,static_cast<std::int32_t>(id),name,dff,txd);
                    });
                info=static_cast<std::uint8_t*>(models_.model_info(object.model));
            }
            if(!info || !*reinterpret_cast<void**>(info+0x1c)) {flags&=~0x80u;return;}
            flags|=0x80u;
            reinterpret_cast<void(__thiscall*)(void*,int)>(table[5])(entity,object.model);
        }
        object.visible=instance!=nullptr;
        if(object.visible) {
            flags|=0x80u;
            // 100a9150's visible branch calls100a8b90 on every active tick.
            if(info) *reinterpret_cast<std::uint32_t*>(info+0x12)&=~1u;
        } else flags&=~0x80u;
    }
    // Rotation descriptor1011edfc is0453/ifff.
    script_.command(0x0453,"ifff",object.handle,static_cast<double>(source.rotation_x),
                    static_cast<double>(source.rotation_y),static_cast<double>(source.rotation_z));
    reinterpret_cast<void(__thiscall*)(void*,float,float,float,int)>(table[14])(
        entity,source.x,source.y,source.z,0);
    object.source=source;
}

} // namespace samp::client
