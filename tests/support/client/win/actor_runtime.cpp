#include "game_runtime.hpp"
#include "samp/client/asset_manager.hpp"
#include <windows.h>

namespace samp::client {
// The actor constructor uses ped type5, creates at z-1, then applies heading,
// event blocking0446 and task060b. This is not a remote player slot.
// Comparison adapter; the audited native owner is mapped in net/actorpool.cpp.
bool GameRuntime::create_actor(const ActorState& actor) {
    if(actor.id>=1000 || !models_.model_info(static_cast<std::int32_t>(actor.skin))) return false;
    if(!script_.command(0x0248,"i",actor.skin)) {
        script_.command(0x0247,"i",actor.skin);script_.command(0x038b,"");
        while(!script_.command(0x0248,"i",actor.skin)) Sleep(1);
    }
    RuntimeActor runtime;runtime.source=actor;
    script_.command(0x009a,"iifffv",5u,actor.skin,static_cast<double>(actor.x),static_cast<double>(actor.y),static_cast<double>(actor.z-1.f),&runtime.handle);
    if(!runtime.handle) return false;
    runtime.entity=resolve_actor(runtime.handle);if(!runtime.entity) return false;
    script_.command(0x0173,"if",runtime.handle,static_cast<double>(actor.angle));
    script_.command(0x0446,"ii",runtime.handle,0u);
    script_.command(0x060b,"ii",runtime.handle,0x10006u);
    auto* ped=static_cast<std::uint8_t*>(runtime.entity);
    *reinterpret_cast<float*>(ped+0x540)=actor.health;
    if(actor.health<=0.f) script_.command(0x0321,"i",runtime.handle);
    script_.command(0x02ab,"iiiiii",runtime.handle,actor.invulnerable?1u:0u,actor.invulnerable?1u:0u,actor.invulnerable?1u:0u,1u,actor.invulnerable?1u:0u);
    if(actor.custom_skin>20000 && assets_ && assets_->ready_ &&
       assets_->load_model(actor.custom_skin,[&](bool,std::uint32_t base,std::uint32_t id,const auto& name,const auto& dff,const auto& txd) {
           return load_custom_ped(base,static_cast<std::int32_t>(id),name,dff,txd);
       })) set_ped_model(ped,actor.custom_skin);
    runtime_actors_[actor.id]=std::move(runtime);return true;
}
void GameRuntime::remove_actor(std::uint16_t id) {
    const auto actor=runtime_actors_.find(id);if(actor==runtime_actors_.end()) return;
    auto* ped=static_cast<std::uint8_t*>(actor->second.entity);
    if(ped && resolve_actor(actor->second.handle)==ped && *reinterpret_cast<const std::uintptr_t*>(ped)!=0x863c40) {
        auto** table=*reinterpret_cast<void***>(ped);reinterpret_cast<void(__thiscall*)(void*,unsigned)>(table[0])(ped,1);
    }
    runtime_actors_.erase(actor);
}
}
