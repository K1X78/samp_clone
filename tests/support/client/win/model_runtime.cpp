#include "game_runtime.hpp"
#include "samp/client/asset_manager.hpp"
#include <algorithm>
#include <cstring>
#include <windows.h>

namespace samp::client {

// Player-specific caller of the generic model setter: validate the ped model,
// suppress GTA's skin limit, release the active task, and refresh animation data.
bool GameRuntime::apply_player_skin(std::uint8_t* ped,std::uint32_t model) {
    if(!ped) return false;
    const auto* info=model<=30000?static_cast<const std::uint8_t*>(models_.model_info(static_cast<std::int32_t>(model))):nullptr;
    if(!info || *reinterpret_cast<const std::uint32_t*>(info)!=0x85bdc0) model=0;
    auto* guard=reinterpret_cast<std::uint8_t*>(0x5a82c0);
    if(*guard!=0xc3) {
        if(*guard!=0x56) return false;
        DWORD protection=0,ignored=0;if(!VirtualProtect(guard,1,PAGE_EXECUTE_READWRITE,&protection)) return false;
        const auto original=*guard;*guard=0xc3;FlushInstructionCache(GetCurrentProcess(),guard,1);
        VirtualProtect(guard,1,protection,&ignored);patches_.push_back({0x5a82c0,{original},{0xc3}});
    }
    // 100adc20 removes the primary task before changing its skeleton.
    if(auto* intelligence=*reinterpret_cast<std::uint8_t**>(ped+0x47c)) {
        if(auto* task=*reinterpret_cast<void**>(intelligence+0x2c)) {
            reinterpret_cast<void(__thiscall*)(void*,int)>(0x639330)(task,1);
            *reinterpret_cast<void**>(intelligence+0x2c)=nullptr;
        }
    }
    if(!set_ped_model(ped,model)) return false;
    reinterpret_cast<void(__thiscall*)(void*,void*)>(0x4e68d0)(ped+0x294,ped);
    return true;
}

// The original resolves or creates a TXD slot, loads the validated cache file,
// assigns the model's slot, then pushes/sets the active dictionary for DFF IO.
bool GameRuntime::load_custom_texture(std::int32_t id,const std::string& name,const std::string& path) {
    auto* info=static_cast<std::uint8_t*>(models_.model_info(id));if(!info) return false;
    int slot=reinterpret_cast<int(__cdecl*)(const char*)>(0x731850)(name.c_str());
    if(slot==-1) {
        slot=reinterpret_cast<int(__cdecl*)(const char*)>(0x731c80)(name.c_str());
        if(slot<0) return false;
        if(!reinterpret_cast<bool(__cdecl*)(int,const char*)>(0x7320b0)(slot,path.c_str())) {
            reinterpret_cast<void(__cdecl*)(int)>(0x731cd0)(slot);return false;
        }
        owned_custom_textures_[name]=slot;
    }
    *reinterpret_cast<std::uint16_t*>(info+0xa)=static_cast<std::uint16_t>(slot);
    reinterpret_cast<void(__cdecl*)()>(0x7316a0)();
    reinterpret_cast<void(__cdecl*)(int)>(0x7319c0)(slot);return true;
}

// 100a7670 clones the stock CPedModelInfo (44h); 100b1b10 reads its clump;
// 100b41d0 installs the object and calls the model-info vtable at byte40h.
bool GameRuntime::load_custom_ped(std::uint32_t base,std::int32_t id,const std::string& texture_name,
                                 const std::string& model_path,const std::string& texture_path) {
    if(id<=20000 || id>30000 || base>30000 || !models_.install_custom_model_table(patches_)) return false;
    auto existing=models_.custom_definitions_.find(id);
    if(existing!=models_.custom_definitions_.end()) {
        if(existing->second.rw && *reinterpret_cast<void* const*>(existing->second.info.data()+0x1c)==existing->second.rw &&
           existing->second.model_path==model_path && existing->second.texture_path==texture_path) return true;
        if(existing->second.rw) {
            auto* info=existing->second.info.data();auto** table=*reinterpret_cast<void***>(info);
            // CPedModelInfo DeleteRwObject also frees +34's hit collision.
            // A cloned, preloaded base may share that pointer; it is not ours.
            if(!existing->second.object && existing->second.shared_hit_collision) *reinterpret_cast<void**>(info+0x34)=nullptr;
            reinterpret_cast<void(__thiscall*)(void*)>(table[8])(info);
        }
        if(existing->second.collision) {
            reinterpret_cast<void(__thiscall*)(void*)>(0x40f700)(existing->second.collision);
            reinterpret_cast<void(__cdecl*)(void*)>(0x40fc40)(existing->second.collision);
        }
        models_.release_custom_model(id);
    }
    if(!AssetManager::validate_model_file(model_path) || !AssetManager::validate_texture_file(texture_path)) return false;
    const auto* stock=static_cast<const std::uint8_t*>(models_.model_info(static_cast<std::int32_t>(base)));
    if(!stock || *reinterpret_cast<const std::uint32_t*>(stock)!=0x85bdc0) return false;
    auto& definition=models_.custom_definitions_[id];definition.info.resize(0x44);
    std::memcpy(definition.info.data(),stock,0x44);
    definition.shared_hit_collision=*reinterpret_cast<void* const*>(stock+0x34);
    definition.base=static_cast<std::int32_t>(base);definition.model_path=model_path;definition.texture_path=texture_path;
    auto* info=definition.info.data();*reinterpret_cast<void**>(info+0x1c)=nullptr;
    models_.model_infos_[32767+id]=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(info));
    if(!load_custom_texture(id,texture_name,texture_path)) {models_.release_custom_model(id);return false;}
    auto* stream=reinterpret_cast<void*(__cdecl*)(int,int,const void*)>(0x7ecef0)(2,1,model_path.c_str());
    void* clump=nullptr;
    if(stream) {
        auto* guard=reinterpret_cast<std::uint8_t*>(0x41b1d0);const auto original=*guard;
        DWORD protection=0,ignored=0;
        if((original==0x64 || original==0xc3) && VirtualProtect(guard,1,PAGE_EXECUTE_READWRITE,&protection)) {
            *guard=0xc3;FlushInstructionCache(GetCurrentProcess(),guard,1);
            if(reinterpret_cast<bool(__cdecl*)(void*,std::uint32_t,void*,void*)>(0x7ed2d0)(stream,0x10,nullptr,nullptr))
                clump=reinterpret_cast<void*(__cdecl*)(void*)>(0x74b420)(stream);
            *guard=original;FlushInstructionCache(GetCurrentProcess(),guard,1);VirtualProtect(guard,1,protection,&ignored);
        }
        reinterpret_cast<bool(__cdecl*)(void*,void*)>(0x7ece20)(stream,nullptr);
    }
    reinterpret_cast<void(__cdecl*)()>(0x7316b0)();
    if(!clump) {models_.release_custom_model(id);return false;}
    definition.rw=clump;*reinterpret_cast<void**>(info+0x1c)=clump;
    auto** table=*reinterpret_cast<void***>(info);
    reinterpret_cast<void(__thiscall*)(void*,void*)>(table[16])(info,clump);return true;
}

// 100a76c0 clones a supported atomic model-info record (20h). The original
// atomic-file wrapper100b1ba0 resolves to GTA5371f0(stream,signed model ID).
bool GameRuntime::load_custom_object(std::uint32_t base,std::int32_t id,const std::string& texture_name,
                                    const std::string& model_path,const std::string& texture_path) {
    if(id>=0 || id<-32767 || base>20000 || !models_.install_custom_model_table(patches_) || !install_custom_collision()) return false;
    auto existing=models_.custom_definitions_.find(id);
    if(existing!=models_.custom_definitions_.end()) {
        if(existing->second.rw && *reinterpret_cast<void* const*>(existing->second.info.data()+0x1c)==existing->second.rw &&
           existing->second.model_path==model_path && existing->second.texture_path==texture_path) return true;
        if(existing->second.rw) {
            auto* info=existing->second.info.data();auto** table=*reinterpret_cast<void***>(info);
            // CPedModelInfo DeleteRwObject also frees +34's hit collision.
            // A cloned, preloaded base may share that pointer; it is not ours.
            if(!existing->second.object && existing->second.shared_hit_collision) *reinterpret_cast<void**>(info+0x34)=nullptr;
            reinterpret_cast<void(__thiscall*)(void*)>(table[8])(info);
        }
        if(existing->second.collision) {
            reinterpret_cast<void(__thiscall*)(void*)>(0x40f700)(existing->second.collision);
            reinterpret_cast<void(__cdecl*)(void*)>(0x40fc40)(existing->second.collision);
        }
        models_.release_custom_model(id);
    }
    if(!AssetManager::validate_model_file(model_path) || !AssetManager::validate_texture_file(texture_path)) return false;
    const auto* stock=static_cast<const std::uint8_t*>(models_.model_info(static_cast<std::int32_t>(base)));
    if(!stock) return false;
    constexpr std::uint32_t allowed[]{0x85bbf0,0x85bc30,0x85bc70,0x85bcb0,0x85bcf0};
    const auto type=*reinterpret_cast<const std::uint32_t*>(stock);
    if(std::find(std::begin(allowed),std::end(allowed),type)==std::end(allowed)) return false;
    auto& definition=models_.custom_definitions_[id];definition.info.resize(0x20);
    std::memcpy(definition.info.data(),stock,0x20);definition.object=true;
    definition.base=static_cast<std::int32_t>(base);definition.model_path=model_path;definition.texture_path=texture_path;
    auto* info=definition.info.data();*reinterpret_cast<void**>(info+0x1c)=nullptr;
    models_.model_infos_[32767+id]=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(info));
    if(!load_custom_texture(id,texture_name,texture_path)) {models_.release_custom_model(id);return false;}
    auto* stream=reinterpret_cast<void*(__cdecl*)(int,int,const void*)>(0x7ecef0)(2,1,model_path.c_str());
    bool loaded=false;
    if(stream) {
        auto* guard=reinterpret_cast<std::uint8_t*>(0x41b1d0);const auto original=*guard;DWORD protection=0,ignored=0;
        if((original==0x64 || original==0xc3) && VirtualProtect(guard,1,PAGE_EXECUTE_READWRITE,&protection)) {
            *guard=0xc3;FlushInstructionCache(GetCurrentProcess(),guard,1);
            auto* previous_loader=model_loader_;const auto previous_id=loading_model_id_;
            model_loader_=this;loading_model_id_=id;
            loaded=reinterpret_cast<bool(__cdecl*)(void*,std::int32_t)>(0x5371f0)(stream,id);
            model_loader_=previous_loader;loading_model_id_=previous_id;
            *guard=original;FlushInstructionCache(GetCurrentProcess(),guard,1);VirtualProtect(guard,1,protection,&ignored);
        }
        reinterpret_cast<bool(__cdecl*)(void*,void*)>(0x7ece20)(stream,nullptr);
    }
    reinterpret_cast<void(__cdecl*)()>(0x7316b0)();
    definition.rw=*reinterpret_cast<void**>(info+0x1c);
    if(!loaded || !definition.rw) {
        if(definition.rw) {
            auto** table=*reinterpret_cast<void***>(info);
            reinterpret_cast<void(__thiscall*)(void*)>(table[8])(info);
        }
        if(definition.collision) {
            reinterpret_cast<void(__thiscall*)(void*)>(0x40f700)(definition.collision);
            reinterpret_cast<void(__cdecl*)(void*)>(0x40fc40)(definition.collision);
        }
        models_.release_custom_model(id);return false;
    }
    *reinterpret_cast<std::uint16_t*>(info+8)=0;return true;
}

// Original wrapper finds the named TXD and calls CTxdStore::RemoveTxdSlot.
// Ownership prevents removing an unrelated dictionary already present in GTA.
void GameRuntime::release_custom_texture(std::string_view name) {
    const auto found=owned_custom_textures_.find(std::string(name));if(found==owned_custom_textures_.end()) return;
    const auto slot=reinterpret_cast<int(__cdecl*)(const char*)>(0x731850)(found->first.c_str());
    if(slot>=0 && slot==found->second) reinterpret_cast<void(__cdecl*)(int)>(0x731cd0)(slot);
    owned_custom_textures_.erase(found);
}

} // namespace samp::client
