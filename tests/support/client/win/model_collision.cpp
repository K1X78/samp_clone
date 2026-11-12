#include "game_runtime.hpp"
#include <cstring>
#include <vector>

namespace samp::client {
GameRuntime* GameRuntime::model_loader_=nullptr;

// Native wrappers b1da0/b1e00 temporarily unlock the plugin registry and use
// the GTA clump plugin constructors plus the recovered collision reader.
bool GameRuntime::install_custom_collision() {
    if(collision_plugin_installed_) return true;
    auto* enabled=reinterpret_cast<std::uint32_t*>(0xc97b20);const auto previous=*enabled;*enabled=0;
    const auto offset=reinterpret_cast<int(__cdecl*)(int,std::uint32_t,void*,void*,void*)>(0x74bdd0)(
        0,0x253f2ff,reinterpret_cast<void*>(0x41b1a0),reinterpret_cast<void*>(0x41b1c0),reinterpret_cast<void*>(0x41b1b0));
    const auto stream_offset=offset<0?-1:reinterpret_cast<int(__cdecl*)(std::uint32_t,void*,void*,void*)>(0x74be70)(
        0x253f2ff,reinterpret_cast<void*>(&read_custom_collision),reinterpret_cast<void*>(0x41b2f0),reinterpret_cast<void*>(0x41b300));
    *enabled=previous;collision_plugin_installed_=offset>=0 && stream_offset>=0;return collision_plugin_installed_;
}

// COL3 records have a32-byte header and declare bytes after the initial8.
// b6390 constructs GTA's30h CColModel; b63c0 calls537ce0 with its body;
// b4230 installs that model on the currently loading custom object definition.
std::uintptr_t __cdecl GameRuntime::read_custom_collision(void* stream,std::uint32_t size,void*,int,int) {
    auto* runtime=model_loader_;
    if(!runtime || !stream || size>0x40000 || size<32) return 0;
    const auto definition=runtime->models_.custom_definitions_.find(runtime->loading_model_id_);
    if(definition==runtime->models_.custom_definitions_.end() || definition->second.collision) return 0;
    std::vector<std::uint8_t> bytes(size);
    if(!reinterpret_cast<void*(__cdecl*)(void*,void*,std::uint32_t)>(0x7ec9d0)(stream,bytes.data(),size)) return 0;
    std::uint32_t magic=0,declared=0;std::memcpy(&magic,bytes.data(),4);std::memcpy(&declared,bytes.data()+4,4);
    if(magic!=0x334c4f43 || declared>size || declared<24 || std::uint64_t(declared)+8>size) return 0;
    auto* collision=reinterpret_cast<void*(__cdecl*)(std::size_t)>(0x40fc30)(0x30);if(!collision) return 0;
    reinterpret_cast<void(__thiscall*)(void*)>(0x40fb60)(collision);
    reinterpret_cast<void(__cdecl*)(const void*,std::uint32_t,void*,bool)>(0x537ce0)(bytes.data()+32,declared-24,collision,false);
    auto* info=runtime->models_.model_info(runtime->loading_model_id_);
    if(!info) {
        reinterpret_cast<void(__thiscall*)(void*)>(0x40f700)(collision);
        reinterpret_cast<void(__cdecl*)(void*)>(0x40fc40)(collision);return 0;
    }
    reinterpret_cast<void(__thiscall*)(void*,void*,bool)>(0x4c4bc0)(info,collision,false);
    definition->second.collision=collision;return 1;
}

} // namespace samp::client
