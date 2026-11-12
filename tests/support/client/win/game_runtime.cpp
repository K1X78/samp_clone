#include "game_runtime.hpp"
#include "samp/client/game_actor_lookup.hpp"
#include "samp/client/remote_motion.hpp"
#include "samp/client/asset_manager.hpp"

#include <windows.h>
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <bit>
#include <type_traits>
#include <utility>
#include <vector>

namespace samp::client {
namespace {
GameRuntime* active_control_runtime = nullptr;
constexpr float pi = 3.14159265358979323846f;
void* __cdecl read_frame_name(void* stream,unsigned length,void* object) {
    if(length>23) {
        char message[256];
        std::snprintf(message,sizeof(message),"SA-MP: FrameNode name was too long (%u). SA-MP must exit.",length);
        ShowWindow(*reinterpret_cast<HWND*>(0xc97c1c),SW_MINIMIZE);
        MessageBoxA(nullptr,message,"SA-MP",MB_ICONWARNING);
        DebugBreak();
        return nullptr;
    }
    return reinterpret_cast<void*(__cdecl*)(void*,unsigned,void*,int)>(0x72fa50)(stream,length,object,0);
}
}

bool GameRuntime::prepare_boot() {
    const auto read_bytes = [](std::uint32_t address, std::size_t size) {
        std::vector<std::uint8_t> bytes(size);
        if (address < kGtaSaImageBase || size > kGtaSaImageSize ||
            static_cast<std::uint64_t>(address) + size > kGtaSaImageEnd) {
            bytes.clear();
            return bytes;
        }
        SIZE_T count = 0;
        if (!ReadProcessMemory(GetCurrentProcess(), reinterpret_cast<const void*>(address),
                               bytes.data(), size, &count) || count != size) bytes.clear();
        return bytes;
    };
    const auto patch_bytes = [&](std::uint32_t address, std::span<const std::uint8_t> replacement) {
        auto original = read_bytes(address, replacement.size());
        if (original.size() != replacement.size()) return false;
        if (!replacement.empty()) {
            auto* target = reinterpret_cast<void*>(address);
            DWORD previous = 0;
            if (!VirtualProtect(target, replacement.size(), PAGE_EXECUTE_READWRITE, &previous)) return false;
            SIZE_T count = 0;
            const bool written = WriteProcessMemory(GetCurrentProcess(), target, replacement.data(),
                                                    replacement.size(), &count) != 0 &&
                                 count == replacement.size();
            const bool flushed = FlushInstructionCache(GetCurrentProcess(), target, replacement.size()) != 0;
            DWORD ignored = 0;
            const bool restored = VirtualProtect(target, replacement.size(), previous, &ignored) != 0;
            if (!written || !flushed || !restored) return false;
        }
        patches_.push_back({address, std::move(original),
                            std::vector<std::uint8_t>(replacement.begin(), replacement.end())});
        return true;
    };
    const auto patch_immediate = [&](std::uint32_t address, std::uint32_t value, std::size_t size) {
        if (size != 1 && size != 2 && size != 4) return false;
        std::uint8_t bytes[4]{};
        for (std::size_t i = 0; i < size; ++i) bytes[i] = static_cast<std::uint8_t>(value >> (8 * i));
        return patch_bytes(address, std::span<const std::uint8_t>(bytes, size));
    };
    MEMORYSTATUSEX memory{};memory.dwLength=sizeof(memory);
    if(!GlobalMemoryStatusEx(&memory)) return false;
    std::uint32_t version=0;
    for(unsigned attempt=0;attempt<=6000;++attempt) {
        const auto marker=read_bytes(0x747483,1);
        if(!marker.empty() && (marker[0]==0x89 || marker[0]==0xc8)) {
            version=marker[0]==0x89?1u:2u;
            break;
        }
        if(*reinterpret_cast<std::uint8_t*>(0xba6831)==1) return false;
        Sleep(10);
    }
    if(version==0) return false;
    version_=version;

    // Official FUN_100aa300's version-specific patch block.
    constexpr std::array<std::uint8_t,6> version_nops{0x90,0x90,0x90,0x90,0x90,0x90};
    constexpr std::array<std::uint8_t,6> title{'t','i','t','l','e',0};
    std::array<std::uint8_t,0x44> remove_spawn_limit{};
    remove_spawn_limit.fill(0x90);
    constexpr std::array<std::uint8_t,2> nop_pair{0x90,0x90};
    if(!patch_immediate(0xc8d4c0,5,1) ||
       !patch_bytes(version==1?0x747483:0x7474d3,version_nops) ||
       !patch_bytes(0x866cd8,title) || !patch_bytes(0x866ccc,title) ||
       !patch_bytes(0x745b87,remove_spawn_limit) ||
       !patch_bytes(0x7459e1,nop_pair)) return false;

    std::array<std::uint8_t,29> check{};
    check.fill(0x90);check[0]=0x33;check[1]=0xc0;
    for(;;) {
        const auto bytes=read_bytes(0x561872,1);
        if(bytes.empty()) return false;
        if(bytes[0]==0x85) break;
        Sleep(1);
    }
    if(!patch_bytes(0x561872,check)) return false;

    const auto megabytes=static_cast<std::uint32_t>(memory.ullTotalPhys>>20);
    const auto streaming=megabytes>4000?0x40000000u:megabytes>2000?0x20000000u:
                         megabytes>1000?0x10000000u:megabytes>500?0x08000000u:0x06000000u;
    for(;;) {
        const auto bytes=read_bytes(0x4083c0,1);
        if(bytes.empty()) return false;
        if(bytes[0]==0xb8) break;
        Sleep(1);
    }
    constexpr std::array<std::uint8_t,5> nops5{0x90,0x90,0x90,0x90,0x90};
    if(!patch_immediate(0x5b8e6a,streaming,4) ||
       !patch_immediate(0x4083c0,0xc3,1) ||
       !patch_bytes(0x590099,nops5) ||
       !patch_immediate(0x53e94c,2,1) ||
       !patch_immediate(0x731f60,20000,4) ||
       !patch_immediate(0x72fad6,
           static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(&read_frame_name)),4) ||
       !patch_immediate(0x6fa996,0x006f9fd0,4)) return false;
    logger_("early GTA boot prepared before installing the SAA resource redirects");
    return true;
}

bool GameRuntime::begin_loading() {
    const auto read_bytes = [](std::uint32_t address, std::size_t size) {
        std::vector<std::uint8_t> bytes(size);
        if (address < kGtaSaImageBase || size > kGtaSaImageSize ||
            static_cast<std::uint64_t>(address) + size > kGtaSaImageEnd) {
            bytes.clear();
            return bytes;
        }
        SIZE_T count = 0;
        if (!ReadProcessMemory(GetCurrentProcess(), reinterpret_cast<const void*>(address),
                               bytes.data(), size, &count) || count != size) bytes.clear();
        return bytes;
    };
    const auto patch_bytes = [&](std::uint32_t address, std::span<const std::uint8_t> replacement) {
        auto original = read_bytes(address, replacement.size());
        if (original.size() != replacement.size()) return false;
        if (!replacement.empty()) {
            auto* target = reinterpret_cast<void*>(address);
            DWORD previous = 0;
            if (!VirtualProtect(target, replacement.size(), PAGE_EXECUTE_READWRITE, &previous)) return false;
            SIZE_T count = 0;
            const bool written = WriteProcessMemory(GetCurrentProcess(), target, replacement.data(),
                                                    replacement.size(), &count) != 0 &&
                                 count == replacement.size();
            const bool flushed = FlushInstructionCache(GetCurrentProcess(), target, replacement.size()) != 0;
            DWORD ignored = 0;
            const bool restored = VirtualProtect(target, replacement.size(), previous, &ignored) != 0;
            if (!written || !flushed || !restored) return false;
        }
        patches_.push_back({address, std::move(original),
                            std::vector<std::uint8_t>(replacement.begin(), replacement.end())});
        return true;
    };
    const auto patch_immediate = [&](std::uint32_t address, std::uint32_t value, std::size_t size) {
        if (size != 1 && size != 2 && size != 4) return false;
        std::uint8_t bytes[4]{};
        for (std::size_t i = 0; i < size; ++i) bytes[i] = static_cast<std::uint8_t>(value >> (8 * i));
        return patch_bytes(address, std::span<const std::uint8_t>(bytes, size));
    };
    const auto patch_vtable_slot = [&](std::uint32_t vtable, std::uint32_t index, std::uint32_t target) {
        std::uint8_t bytes[4] = {static_cast<std::uint8_t>(target),
            static_cast<std::uint8_t>(target >> 8), static_cast<std::uint8_t>(target >> 16),
            static_cast<std::uint8_t>(target >> 24)};
        return patch_bytes(vtable + index * 4u, std::span<const std::uint8_t>(bytes, 4));
    };
    // These four flag writes are the tail of 0x100a0720. The patches here
    // are the startup subset of 0x100aaad0 which prevents the story scripts,
    // traffic and pedestrian population from running in the network world.
    // The complete patch pack and hook graph are not yet reconstructed.
    constexpr std::array<std::uint8_t, 5> nop{0x90,0x90,0x90,0x90,0x90};
    constexpr std::array<std::pair<std::uint32_t, std::uint32_t>, 4> calls{{
        {0x53c090, 0x460500}, {0x53c06a, 0x6f3f40},
        {0x53c136, 0x6fc5a0}, {0x53c159, 0x5dcfa0}}};
    // Check every call before changing any bytes; support the installed
    // GTA 1.0 executable whose original targets the official DLL patches.
    for (const auto [site, target] : calls) {
        const auto* bytes = reinterpret_cast<const std::uint8_t*>(site);
        std::int32_t displacement;
        std::memcpy(&displacement, bytes + 1, 4);
        if (bytes[0] != 0xe8 || site + 5 + displacement != target) {
            logger_("unsupported GTA startup code; game initialization refused");
            refused_ = true;
            return false;
        }
    }
    static_assert(sizeof(void*)==4);
    if(version_!=1 || !models_.install_pointer_lists(patches_) ||
       !models_.install_ped_pool(patches_) || !models_.install_atomic_pool() ||
       !expand_game_pools(patches_)) {
        logger_("the 0.3.DL model pools could not be installed");
        refused_ = true;
        return false;
    }
    // 0x100aaad0 flips this CPlayerPed constructor branch for remote player
    // creation; otherwise GTA initializes a remote slot as a local player.
    constexpr std::array<std::uint8_t, 1> remote_constructor{0x84};
    if (!patch_bytes(0x60d64e, remote_constructor)) return false;
    const auto original_player_control=read_bytes(0x86d190,4);
    const auto process_bytes=read_bytes(0x5e92f4,5);
    constexpr std::array<std::uint8_t,5> expected_process_bytes{0xe8,0x17,0x88,0xff,0xff};
    if(original_player_control.size()!=4 || process_bytes.size()!=5 ||
       std::memcmp(original_player_control.data(),"\x90\xea\x60\x00",4)!=0 ||
       !std::equal(process_bytes.begin(),process_bytes.end(),expected_process_bytes.begin())) {
        logger_("unsupported GTA CPlayerPed::ProcessControl bytes; remote control was not installed");
        refused_=true;
        return false;
    }
    std::copy(process_bytes.begin(),process_bytes.end(),process_control_call_bytes_.begin());
    active_control_runtime=this;
    if(!patch_vtable_slot(0x86d168,10,
          static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(&GameRuntime::process_ped_control)))) {
        active_control_runtime=nullptr;
        logger_("could not install the CPlayerPed::ProcessControl adapter");
        refused_=true;
        return false;
    }
    process_control_hook_installed_=true;
    // Native installer 100a6dfe/100a6e30/100a6e66 replaces these three
    // weapon line-of-sight calls. Keep the original GTA query and capture it.
    const auto shot_query=+[](const float* from,const float* to,void* collision,void** entity,
        bool buildings,bool vehicles,bool peds,bool objects,bool dummies,
        bool see_through,bool camera_ignore,bool shoot_through) -> bool {
        using Query=bool(__cdecl*)(const float*,const float*,void*,void**,bool,bool,bool,bool,bool,bool,bool,bool);
        auto* runtime=active_control_runtime;
        const auto* target=runtime && runtime->replaying_shot_?runtime->replay_target_.data():to;
        const bool hit=reinterpret_cast<Query>(0x56ba00)(from,target,collision,entity,buildings,vehicles,peds,
            objects,dummies,see_through,camera_ignore,shoot_through);
        if(runtime && runtime->connected_ && runtime->playing_ && !runtime->replaying_shot_ &&
            *reinterpret_cast<const std::uint8_t*>(0xb7cd74)==0) {
            const auto* local=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
            if(local && local[0x718]<13) {
                const auto weapon=static_cast<std::uint8_t>(*reinterpret_cast<const std::uint32_t*>(local+0x5a0+local[0x718]*28));
                runtime->capture_shot(from,hit?static_cast<const float*>(collision):to,hit && entity?*entity:nullptr,weapon);
            }
        }
        return hit;
    };
    constexpr std::uint32_t shot_calls[]{0x740721,0x740b69,0x736247};
    for(const auto site:shot_calls) {
        const auto bytes=read_bytes(site,5);std::int32_t displacement=0;
        if(bytes.size()!=5 || bytes[0]!=0xe8) return false;
        std::memcpy(&displacement,bytes.data()+1,4);
        if(site+5+displacement!=0x56ba00) return false;
    }
    for(const auto site:shot_calls) {
        std::array<std::uint8_t,5> call{0xe8};
        const auto displacement=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(shot_query))-site-5;
        std::memcpy(call.data()+1,&displacement,4);if(!patch_bytes(site,call)) return false;
    }
    // Official frame call installer100a5efc replaces53e981 ->53bee0 with
    // callback100a23d0, whose first operation is100a1a30's frame timing.
    frame_timing_host_.milliseconds=[] {
        static LARGE_INTEGER frequency{};LARGE_INTEGER counter{};
        if(!frequency.QuadPart) QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&counter);
        return static_cast<std::uint32_t>((static_cast<std::uint64_t>(counter.QuadPart)*1000u)/static_cast<std::uint64_t>(frequency.QuadPart));
    };
    frame_timing_host_.sleep=[](std::uint32_t milliseconds) {Sleep(milliseconds);};
    frame_timing_host_.frame_limiter=[] {return *reinterpret_cast<const std::uint8_t*>(0xba6794)!=0;};
    frame_timing_host_.special_task_268=[] {
        const auto* ped=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
        if(!ped || (*reinterpret_cast<const std::uint32_t*>(ped+0x46c)&0x100)) return false;
        const auto* intelligence=*reinterpret_cast<const std::uint8_t* const*>(ped+0x47c);
        auto* task=intelligence?*reinterpret_cast<void* const*>(intelligence+0xc):nullptr;
        if(!task) return false;
        auto** table=*static_cast<void***>(task);const auto address=reinterpret_cast<std::uintptr_t>(table);
        if(address<0x800000 || address>0x900000) return false;
        return reinterpret_cast<int(__thiscall*)(void*)>(table[4])(task)==0x10c;
    };
    frame_timing_host_.apply=[](float step,float,std::uint8_t rotation,bool update_step) {
        if(update_step) *reinterpret_cast<float*>(0xb7cb5c)=*reinterpret_cast<float*>(0xb7cb58)=step;
        if(rotation!=0xff) *reinterpret_cast<std::uint8_t*>(0xb7356e)=rotation;
    };
    const auto frame_call=read_bytes(0x53e981,5);std::int32_t frame_target=0;
    if(frame_call.size()!=5 || frame_call[0]!=0xe8) return false;
    std::memcpy(&frame_target,frame_call.data()+1,4);
    if(0x53e986+frame_target!=0x53bee0) return false;
    const auto frame_process=+[] {
        if(auto* runtime=active_control_runtime) process_frame_timing(runtime->frame_timing_,runtime->frame_timing_host_);
        reinterpret_cast<void(__cdecl*)()>(0x53bee0)();
    };
    std::array<std::uint8_t,5> frame_patch{0xe8};
    const auto frame_displacement=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(frame_process))-0x53e986;
    std::memcpy(frame_patch.data()+1,&frame_displacement,4);
    if(!patch_bytes(0x53e981,frame_patch)) return false;
    // Active official HUD installer100a5e6f: apply2220, draw58a330,
    // restore22a0. Width/height are signed integers in GTA, not floats.
    const auto hud_call=read_bytes(0x58fc53,5);std::int32_t hud_target=0;
    if(hud_call.size()!=5 || hud_call[0]!=0xe8) return false;
    std::memcpy(&hud_target,hud_call.data()+1,4);
    if(0x58fc58+hud_target!=0x58a330) return false;
    const auto hud_process=+[] {
        auto* horizontal=reinterpret_cast<float*>(0x859520);
        auto* vertical=reinterpret_cast<float*>(0x859524);
        const float old_x=*horizontal,old_y=*vertical;
        const float aspect=static_cast<float>(*reinterpret_cast<const int*>(0xc17044))/
                           static_cast<float>(*reinterpret_cast<const int*>(0xc17048));
        if(active_control_runtime && active_control_runtime->hud_scale_fix_ && aspect>=1.6f) {
            *horizontal=0.00222f/aspect;
            *vertical=std::bit_cast<float>(0x3b1e98ddu);
        }
        reinterpret_cast<void(__cdecl*)()>(0x58a330)();
        *horizontal=old_x;*vertical=old_y;
    };
    // These constants reside in the executable's read-only data section.
    DWORD hud_protection=0;
    if(!VirtualProtect(reinterpret_cast<void*>(0x859520),8,PAGE_READWRITE,&hud_protection)) return false;
    std::array<std::uint8_t,5> hud_patch{0xe8};
    const auto hud_displacement=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(hud_process))-0x58fc58;
    std::memcpy(hud_patch.data()+1,&hud_displacement,4);
    if(!patch_bytes(0x58fc53,hud_patch)) return false;
    // 100a64bc installs the pickup hook at4579c6, replaying 8a461c3c06.
    // A small adapter preserves every register and the original AL/flags.
    const auto pickup_bytes=read_bytes(0x4579c6,5);
    constexpr std::uint8_t expected_pickup[]{0x8a,0x46,0x1c,0x3c,0x06};
    if(pickup_bytes.size()!=5 || std::memcmp(pickup_bytes.data(),expected_pickup,5)!=0) return false;
    const auto pickup_notice=+[](const std::uint8_t* pickup) {
        auto* runtime=active_control_runtime;if(!runtime || !runtime->connected_) return;
        const auto game_id=static_cast<std::uint32_t>((reinterpret_cast<std::uintptr_t>(pickup)-0x9788c0u)>>5);
        for(auto& [id,entry]:runtime->runtime_pickups_) if(static_cast<std::uint32_t>(entry.game_id)==game_id) {
            if(entry.handle && !entry.cooldown) {runtime->pickup_notices_.emplace_back(id,false);entry.cooldown=15;}
            break;
        }
    };
    // pushad; push esi; call cdecl; add esp,4; popad; replay; jmp4579cb.
    auto* adapter=static_cast<std::uint8_t*>(VirtualAlloc(nullptr,32,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE));
    if(!adapter) return false;
    constexpr std::uint8_t pickup_adapter[]{0x60,0x56,0xe8,0,0,0,0,0x83,0xc4,0x04,0x61,0x8a,0x46,0x1c,0x3c,0x06,0xe9,0,0,0,0};
    std::memcpy(adapter,pickup_adapter,sizeof(pickup_adapter));
    const auto notice_relative=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(pickup_notice)-reinterpret_cast<std::uintptr_t>(adapter)-7);
    const auto return_relative=static_cast<std::uint32_t>(0x4579cbu-reinterpret_cast<std::uintptr_t>(adapter)-21);
    std::memcpy(adapter+3,&notice_relative,4);std::memcpy(adapter+17,&return_relative,4);
    DWORD adapter_protection=0;
    if(!VirtualProtect(adapter,32,PAGE_EXECUTE_READ,&adapter_protection) || !FlushInstructionCache(GetCurrentProcess(),adapter,32)) return false;
    std::array<std::uint8_t,5> pickup_patch{0xe9};
    const auto pickup_relative=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(adapter))-0x4579cb;
    std::memcpy(pickup_patch.data()+1,&pickup_relative,4);
    if(!patch_bytes(0x4579c6,pickup_patch)) return false;

    logger_("native remote CPlayerPed::ProcessControl adapter installed");
    for (const auto [site, target] : calls) {
        if (!patch_bytes(site, nop)) {
            const auto applied = patches_;
            for (auto it = applied.rbegin(); it != applied.rend(); ++it) {
                patch_bytes(it->address, it->original);
            }
            refused_ = true;
            logger_("could not apply the network-world startup patches");
            return false;
        }
    }
    *reinterpret_cast<std::uint32_t*>(0x00c8d4c0) = 8;
    *reinterpret_cast<std::uint8_t*>(0x00ba6831) = 1;
    *reinterpret_cast<std::uint8_t*>(0x00ba67a4) = 0;
    *reinterpret_cast<std::uint8_t*>(0x00ba677b) = 0;
    logger_("multiplayer startup requested; loading GTA's world");
    return true;
}

// samp.dll 0x1009ed90: request and load the model through CStreaming, delete
// the old Rw object, assign the model index and invoke SetModelIndex on the
// entity. The caller 0x100afb50 neuters GTA 0x5a82c0 before getting here.
bool GameRuntime::set_ped_model(std::uint8_t* ped, std::uint32_t model) {
    if(!ped || model>30000) return false;
    const int index=static_cast<int>(model);
    // The official wrappers dispatch these exact script descriptors through
    // 0x100b1f10: 0x1011e6a0=0248/i, 0x1011e664=0247/i,
    // 0x1011e678=038b/empty. Official DLL addresses are not clone entrypoints.
    // 0x100b41a0 -> 0x100a7630 reads the model's RW object at +0x1c.
    const auto* info=static_cast<const std::uint8_t*>(models_.model_info(static_cast<std::int32_t>(model)));
    if(!info || *reinterpret_cast<const std::uint32_t*>(info)!=0x85bdc0) return false;
    if(model>20000 && *reinterpret_cast<void* const*>(info+0x1c)==nullptr) return false;
    if(*reinterpret_cast<void* const*>(info+0x1c)==nullptr && !script_.command(0x0248,"i",model)) {
        script_.command(0x0247,"i",model);
        script_.command(0x038b,"");
        int attempt=0;
        while(!script_.command(0x0248,"i",model)) {
            Sleep(1);
            if(++attempt>0xc8) return false;
        }
    }
    auto** vtable=*reinterpret_cast<void***>(ped);
    reinterpret_cast<void(__thiscall*)(void*)>(vtable[8])(ped);
    *reinterpret_cast<std::uint16_t*>(reinterpret_cast<std::uintptr_t>(ped)+0x22)=
        static_cast<std::uint16_t>(model);
    reinterpret_cast<void(__thiscall*)(void*,int)>(vtable[5])(ped,index);
    return true;
}

void* GameRuntime::resolve_actor(std::uint32_t actor) {
    // samp.dll 0x100b3770 -> GTA's generation-checked ped-pool lookup.
    // Native 0x100b3770 loads ECX from 0xb74490 before calling 0x404910.
    // This is CPool::GetAtRef (__thiscall, callee pops the handle), not a
    // static cdecl function. The wrong ABI corrupts the stack on stream-in.
    auto* pool = *reinterpret_cast<void**>(0xb74490);
    if (!pool) return nullptr;
    auto* ped = reinterpret_cast<GameActorLookup>(0x404910)(pool,actor);
    return ped == *reinterpret_cast<void**>(0xb7cd98) ? nullptr : ped;
}

// The audited remote-player spawn is in net/remoteplayer.cpp.
bool GameRuntime::stream_remote_player(const RemotePlayerStream& command) {
    if(command.player_id<0 || command.player_id>=1004) return false;
    if(const auto old=remote_peds_.peds_.find(command.player_id);
       old!=remote_peds_.peds_.end()) {
        auto& previous=old->second;
        if(resolve_actor(previous.actor)==previous.ped) {
            auto* ped=static_cast<std::uint8_t*>(previous.ped);
            if(ped!=*reinterpret_cast<void**>(0xb7cd98) &&
               *reinterpret_cast<std::uintptr_t*>(ped)!=0x863c40) {
                if(auto* player_data=*reinterpret_cast<std::uint8_t**>(ped+0x480))
                    *reinterpret_cast<std::uint32_t*>(player_data+0x4c)=0;
                auto** vtable=*reinterpret_cast<void***>(ped);
                reinterpret_cast<void(__thiscall*)(void*,unsigned)>(vtable[0])(ped,1u);
            }
        }
        remote_peds_.slots_[previous.slot]=false;
        remote_peds_.peds_.erase(old);
    }
    if(command.model>30000 || !std::isfinite(command.x) || !std::isfinite(command.y) ||
       !std::isfinite(command.z) || !std::isfinite(command.angle)) return false;
    std::uint32_t slot=2;
    while(slot<remote_peds_.slots_.size() && remote_peds_.slots_[slot]) ++slot;
    if(slot==remote_peds_.slots_.size()) return false;
    auto script_slot=slot;
    std::uint32_t player=0,actor=0;
    script_.command(0x0053,"vfffv",&script_slot,static_cast<double>(command.x),
                    static_cast<double>(command.y),static_cast<double>(command.z),&player);
    script_.command(0x01f5,"vv",&script_slot,&actor);
    RemotePed remote{slot,actor,actor?resolve_actor(actor):nullptr};
    if(!remote.ped) return false;
    char model_line[100];
    std::snprintf(model_line,sizeof(model_line),
        "remote model: slot=%u actor=%08x stock-skin=%u",remote.slot,remote.actor,command.model);
    logger_(model_line);
    auto model=command.model;
    if(command.custom_model>20000 && assets_ && assets_->ready_ &&
       assets_->load_model(command.custom_model,[&](bool,std::uint32_t base,std::uint32_t id,
          const auto& name,const auto& dff,const auto& txd) {return load_custom_ped(base,static_cast<std::int32_t>(id),name,dff,txd);}))
        model=command.custom_model;
    if(!apply_player_skin(static_cast<std::uint8_t*>(remote.ped),model)) {
        auto* ped=static_cast<std::uint8_t*>(remote.ped);
        if(ped!=*reinterpret_cast<void**>(0xb7cd98) &&
           *reinterpret_cast<std::uintptr_t*>(ped)!=0x863c40) {
            if(auto* player_data=*reinterpret_cast<std::uint8_t**>(ped+0x480))
                *reinterpret_cast<std::uint32_t*>(player_data+0x4c)=0;
            auto** vtable=*reinterpret_cast<void***>(ped);
            reinterpret_cast<void(__thiscall*)(void*,unsigned)>(vtable[0])(ped,1u);
        }
        return false;
    }
    // 0x100aef40 indexes the official per-player CPad block by this byte.
    *reinterpret_cast<std::uint8_t*>(reinterpret_cast<std::uintptr_t>(remote.ped)+0x2b0)=
        static_cast<std::uint8_t>(remote.slot);
    script_.command(0x087e,"ii",actor,1u);
    script_.command(0x02ab,"iiiiii",actor,1u,0u,0u,0u,0u);
    script_.command(0x0446,"ii",actor,0u);
    script_.command(0x03fe,"ii",actor,0u);
    char transform_line[200];
    std::snprintf(transform_line,sizeof(transform_line),
        "remote transform: player=%d pos=%.3f,%.3f,%.3f heading=%.2f health=100 armour=0",
        command.player_id,command.x,command.y,command.z+0.15f,command.angle);
    logger_(transform_line);
    auto* ped=static_cast<std::uint8_t*>(remote.ped);
    auto* matrix=*reinterpret_cast<PedMatrix**>(ped+0x14);
    if(matrix!=nullptr) {
        const auto address=reinterpret_cast<std::uintptr_t>(ped);
        (*matrix)[12]=command.x;(*matrix)[13]=command.y;(*matrix)[14]=command.z+0.15f;
        *reinterpret_cast<float*>(address+0x558)=
            *reinterpret_cast<float*>(address+0x55c)=command.angle*pi/180.0f;
        *reinterpret_cast<float*>(address+0x540)=100.0f;
        *reinterpret_cast<float*>(address+0x548)=0.0f;
        *reinterpret_cast<float*>(address+0x44)=0.0f;
        *reinterpret_cast<float*>(address+0x48)=0.0f;
        *reinterpret_cast<float*>(address+0x4c)=0.0f;
    }
    remote_peds_.slots_[slot]=true;
    remote_peds_.peds_.emplace(command.player_id,remote);
    return true;
}

void __fastcall GameRuntime::process_ped_control(void* object, void*) {
    auto original=reinterpret_cast<void(__thiscall*)(void*)>(0x60ea90);
    GameRuntime* const runtime = active_control_runtime;
    if(!object) return;
    if(!runtime || !runtime->process_control_hook_installed_) { original(object); return; }
    RemotePed* remote=nullptr;
    for(auto& entry:runtime->remote_peds_.peds_)
        if(entry.second.ped==object) { remote=&entry.second; break; }
    const auto local_index=*reinterpret_cast<std::uint8_t*>(0xb7cd74);
    if(!remote || local_index!=0 || object==*reinterpret_cast<void**>(0xb7cd98)) {
        original(object);
        return;
    }

    // 0x100a7000/0x100a7040 and 0x100a70a0 save, install and restore the
    // global GTA CPad block around CPlayerPed::ProcessControl.
    auto* game_pad=reinterpret_cast<std::uint8_t*>(0xb73458);
    std::array<std::uint8_t,kRemoteControlPadBytes> previous_pad{};
    std::memcpy(previous_pad.data(),game_pad,previous_pad.size());
    const auto previous_flag_a=*reinterpret_cast<std::uint8_t*>(0xb6f1a4);
    const auto previous_flag_b=*reinterpret_cast<std::uint8_t*>(0xb6f1a5);
    const auto previous_player=*reinterpret_cast<std::uint8_t*>(0xb7cd74);
    std::array<std::uint8_t,48> previous_aim{};
    std::memcpy(previous_aim.data(),reinterpret_cast<const void*>(0xb6f32c),48);
    const auto previous_mode=*reinterpret_cast<const std::uint8_t*>(0xb6f1a8);
    const auto previous_zoom=*reinterpret_cast<const float*>(0xb6f250);
    const auto previous_aspect=*reinterpret_cast<const float*>(0xc3efa4);
    if(remote->has_aim) {
        std::memcpy(reinterpret_cast<void*>(0xb6f32c),remote->aim.data()+1,24);
        *reinterpret_cast<std::uint8_t*>(0xb6f1a8)=remote->aim[0];
        *reinterpret_cast<float*>(0xb6f250)=(remote->aim[29]&0x3f)/63.f*35.f+35.f;
        *reinterpret_cast<float*>(0xc3efa4)=remote->aim[30]/255.f+1.f;
        auto* player_data=*reinterpret_cast<std::uint8_t**>(static_cast<std::uint8_t*>(object)+0x480);
        if(player_data) std::memcpy(player_data+0x54,remote->aim.data()+25,4);
    }
    const auto restore_aim=[&] {
        std::memcpy(reinterpret_cast<void*>(0xb6f32c),previous_aim.data(),48);
        *reinterpret_cast<std::uint8_t*>(0xb6f1a8)=previous_mode;
        *reinterpret_cast<float*>(0xb6f250)=previous_zoom;
        *reinterpret_cast<float*>(0xc3efa4)=previous_aspect;
    };
    std::memcpy(game_pad,remote->control_pad.data(),remote->control_pad.size());
    std::int16_t attack=0,duck=0;
    std::memcpy(&attack,remote->control_pad.data()+0x0a,sizeof(attack));
    std::memcpy(&duck,remote->control_pad.data()+0x0e,sizeof(duck));
    *reinterpret_cast<std::uint8_t*>(0xb6f1a4)=attack!=0;
    *reinterpret_cast<std::uint8_t*>(0xb6f1a5)=duck!=0;
    *reinterpret_cast<std::uint8_t*>(0xb7cd74)=static_cast<std::uint8_t>(remote->slot);
    static bool logged_control=false;
    if(!logged_control) {
        logged_control=true;
        char line[128];
        std::snprintf(line,sizeof(line),"remote native ProcessControl active; slot=%u input-index=%u",
                      remote->slot,*reinterpret_cast<std::uint8_t*>(reinterpret_cast<std::uintptr_t>(object)+0x2b0));
        runtime->logger_(line);
    }

    // 0x100a26d0 briefly suppresses the recursive ProcessControl call at
    // GTA 0x5e92f4 while the original 0x60ea90 method is executing.
    auto* callsite=reinterpret_cast<std::uint8_t*>(0x5e92f4);
    DWORD old_protection=0;
    bool patched=VirtualProtect(callsite,runtime->process_control_call_bytes_.size(),
                                PAGE_EXECUTE_READWRITE,&old_protection)!=0;
    if(!patched) {
        restore_aim();
        std::memcpy(game_pad,previous_pad.data(),previous_pad.size());
        *reinterpret_cast<std::uint8_t*>(0xb6f1a4)=previous_flag_a;
        *reinterpret_cast<std::uint8_t*>(0xb6f1a5)=previous_flag_b;
        *reinterpret_cast<std::uint8_t*>(0xb7cd74)=previous_player;
        static bool logged=false;
        if(!logged) {logged=true;runtime->logger_("remote ProcessControl skipped: GTA callsite could not be protected");}
        return;
    }
    if(patched) {
        constexpr std::array<std::uint8_t,5> nops{0x90,0x90,0x90,0x90,0x90};
        std::memcpy(callsite,nops.data(),nops.size());
        FlushInstructionCache(GetCurrentProcess(),callsite,nops.size());
    }
    original(object);
    {
        std::memcpy(callsite,runtime->process_control_call_bytes_.data(),runtime->process_control_call_bytes_.size());
        FlushInstructionCache(GetCurrentProcess(),callsite,runtime->process_control_call_bytes_.size());
        DWORD ignored=0;
        VirtualProtect(callsite,runtime->process_control_call_bytes_.size(),old_protection,&ignored);
    }
    restore_aim();
    std::memcpy(game_pad,previous_pad.data(),previous_pad.size());
    *reinterpret_cast<std::uint8_t*>(0xb6f1a4)=previous_flag_a;
    *reinterpret_cast<std::uint8_t*>(0xb6f1a5)=previous_flag_b;
    *reinterpret_cast<std::uint8_t*>(0xb7cd74)=previous_player;
}

// The 0.3.DL beach camera before class selection; it is distinct from the
// server-controlled camera configured by the class-selection RPCs.
void GameRuntime::process_connection_scene() {
    const auto* current_ped=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
    const bool in_vehicle=(*reinterpret_cast<const std::uint32_t*>(current_ped+0x46c)&0x100)!=0;
    if(in_vehicle) {
        script_.command(0x0362,"ifff",1u,static_cast<double>(std::bit_cast<float>(0x4488accdu)),
                        static_cast<double>(std::bit_cast<float>(0xc4fe9000u)),
                        static_cast<double>(std::bit_cast<float>(0x42a56bd4u)));
    } else {
        auto** vtable=*reinterpret_cast<void***>(const_cast<std::uint8_t*>(current_ped));
        reinterpret_cast<void(__thiscall*)(void*,float,float,float,int)>(vtable[14])(
            const_cast<std::uint8_t*>(current_ped),
            std::bit_cast<float>(0x448da19du),std::bit_cast<float>(0xc4fecce9u),
            std::bit_cast<float>(0x428a3333u),0);
    }
    script_.command(0x015f,"ffffff",static_cast<double>(std::bit_cast<float>(0x4488a000u)),
                    static_cast<double>(std::bit_cast<float>(0xc4fe8000u)),
                    static_cast<double>(std::bit_cast<float>(0x42b40000u)),0.0,0.0,0.0);
    script_.command(0x0160,"fffi",static_cast<double>(std::bit_cast<float>(0x43c00000u)),
                    static_cast<double>(std::bit_cast<float>(0xc4c2a000u)),
                    static_cast<double>(std::bit_cast<float>(0x41a00000u)),2u);
    *reinterpret_cast<std::uint32_t*>(0xc81318)=1;
    *reinterpret_cast<std::uint32_t*>(0xc8131c)=1;
    *reinterpret_cast<std::uint32_t*>(0xc81320)=1;
    *reinterpret_cast<std::uint8_t*>(0xba6769)=0;
    *reinterpret_cast<std::uint8_t*>(0xbaa3fb)=1;
}



bool GameRuntime::spawn_player(const WorldClass& spawn) {
    const auto read_bytes = [](std::uint32_t address, std::size_t size) {
        std::vector<std::uint8_t> bytes(size);
        if (address < kGtaSaImageBase || size > kGtaSaImageSize ||
            static_cast<std::uint64_t>(address) + size > kGtaSaImageEnd) {
            bytes.clear();
            return bytes;
        }
        SIZE_T count = 0;
        if (!ReadProcessMemory(GetCurrentProcess(), reinterpret_cast<const void*>(address),
                               bytes.data(), size, &count) || count != size) bytes.clear();
        return bytes;
    };
    const auto patch_bytes = [&](std::uint32_t address, std::span<const std::uint8_t> replacement) {
        auto original = read_bytes(address, replacement.size());
        if (original.size() != replacement.size()) return false;
        if (!replacement.empty()) {
            auto* target = reinterpret_cast<void*>(address);
            DWORD previous = 0;
            if (!VirtualProtect(target, replacement.size(), PAGE_EXECUTE_READWRITE, &previous)) return false;
            SIZE_T count = 0;
            const bool written = WriteProcessMemory(GetCurrentProcess(), target, replacement.data(),
                                                    replacement.size(), &count) != 0 &&
                                 count == replacement.size();
            const bool flushed = FlushInstructionCache(GetCurrentProcess(), target, replacement.size()) != 0;
            DWORD ignored = 0;
            const bool restored = VirtualProtect(target, replacement.size(), previous, &ignored) != 0;
            if (!written || !flushed || !restored) return false;
        }
        patches_.push_back({address, std::move(original),
                            std::vector<std::uint8_t>(replacement.begin(), replacement.end())});
        return true;
    };
    auto* ped = *reinterpret_cast<std::uint8_t**>(0x00b7cd98); // 0x100b3860
    if (ped == nullptr) return false;
    auto model=spawn.model;
    if(spawn.custom_model>20000 && assets_ && assets_->ready_) {
        const bool loaded=assets_->load_model(spawn.custom_model,[&](bool,std::uint32_t base,std::uint32_t id,
          const auto& name,const auto& dff,const auto& txd) {return load_custom_ped(base,static_cast<std::int32_t>(id),name,dff,txd);});
        // 10003c59 chooses skin0 when a requested custom clump cannot load.
        model=loaded?spawn.custom_model:0;
    }
    const auto* model_info=static_cast<const std::uint8_t*>(models_.model_info(static_cast<std::int32_t>(model)));
    if (model_info == nullptr) {
        logger_("the server skin has no model definition; spawn refused");
        refused_ = true;
        return false;
    }
    char input[240];
    std::snprintf(input, sizeof(input), "applying spawn: skin %u at %.2f %.2f %.2f; model-info=%08x",
                  spawn.model, spawn.x, spawn.y, spawn.z,
                  static_cast<unsigned>(reinterpret_cast<std::uintptr_t>(model_info)));
    logger_(input);
    // 0x1009d670 then 0x1009d580: release the scripted camera before
    // resurrection. Restoring only the jump cut leaves its behind-player
    // state and interpolation flag from the initial beach view intact.
    script_.command(0x02eb, "");
    script_.command(0x0930, "i", 0u);
    script_.command(0x0925, "");
    script_.command(0x0373, "");
    script_.command(0x02eb, "");
    // 0x100ab7f0, followed by 0x100ac370 in the official spawn path.
    reinterpret_cast<void(__thiscall*)(void*, int)>(0x60cd20)(ped, 0);
    logger_("the player state was reset");
    script_.command(0x016c, "ffffi", static_cast<double>(spawn.x),
                    static_cast<double>(spawn.y), static_cast<double>(spawn.z),
                    static_cast<double>(spawn.angle), 0u);
    logger_("restart coordinates were applied");

    // 0x1009ed90: request/load the skin, delete the old RW object, assign
    // the model index, and invoke SetModelIndex on the real entity.
    if(!apply_player_skin(ped,model)) return false;
    auto** vtable = *reinterpret_cast<void***>(ped);

    // Position and heading are applied AFTER resurrection, as in 0x10003b20.
    // The ordinary-ped branch in 0x1009ee80 uses vtable byte offset 0x38.
    reinterpret_cast<void(__thiscall*)(void*, float, float, float, int)>(vtable[14])(
        ped, spawn.x, spawn.y, spawn.z + 0.5f, 0);
    script_.command(0x0173, "if", 1u, static_cast<double>(spawn.angle));
    *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(ped) + 0x540) = 100.0f;
    *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(ped) + 0x548) = 0.0f;
    *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(ped) + 0x55c) = spawn.angle * pi / 180.0f;
    *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(ped) + 0x558) = spawn.angle * pi / 180.0f;
    script_.command(0x01b4, "ii", 0u, 1u);   // local input enabled
    script_.command(0x04d7, "ii", 1u, 0u);   // actor unlocked
    *reinterpret_cast<std::uint8_t*>(0x00ba6769) = 1;
    *reinterpret_cast<std::uint8_t*>(0x00baa3fb) = 0;
    // 0x100a0a50: return to the exterior before loading the spawn scene.
    script_.command(0x06d7, "i", 0u);
    // Collision/scene load at the server's coordinates: 0x100a0a60.
    script_.command(0x04e4, "ff", static_cast<double>(spawn.x), static_cast<double>(spawn.y));
    // Camera fade helper 0x1009d280 dispatches 016a with a 500ms duration.
    // With the story script disabled its initial opaque fade must be released
    // before disabling future scripted fades below.
    script_.command(0x016a, "ii", 500u, 1u);
    // The tail of official 0x10003b20 disables subsequent scripted fades.
    constexpr std::array<std::uint8_t,3> no_fade{0xc2,0x08,0x00};
    if(!patch_bytes(0x50ac20,no_fade)) return false;
    char line[200];
    std::snprintf(line, sizeof(line), "spawn applied: skin %u at %.2f %.2f %.2f",
                  spawn.model, spawn.x, spawn.y, spawn.z);
    logger_(line);
    return true;
}

void GameRuntime::set_map_icon(const MapIcon& icon) {
    if(icon.id>=map_icon_handles_.size()) return;
    if(map_icon_handles_[icon.id]) remove_map_icon(icon.id);
    constexpr std::uint16_t opcodes[]{0x04ce,0x02a8,0x0570,0x02a7};
    auto& handle=map_icon_handles_[icon.id];
    script_.command(opcodes[icon.style<4?icon.style:0],"fffiv",
        static_cast<double>(icon.x),static_cast<double>(icon.y),static_cast<double>(icon.z),
        static_cast<std::uint32_t>(icon.type),&handle);
    if(icon.type==0) {
        script_.command(0x0165,"ii",handle,icon.colour);
        script_.command(0x0168,"ii",handle,icon.colour<1004?2u:3u);
    }
    map_icon_revisions_[icon.id]=icon.revision;
}

void GameRuntime::remove_map_icon(std::uint8_t id) {
    if(id>=map_icon_handles_.size()) return;
    script_.command(0x0164,"i",map_icon_handles_[id]);
    map_icon_handles_[id]=0;map_icon_revisions_[id]=0;
}

// The audited gang-zone draw is in net/gangzonepool.cpp.
void GameRuntime::draw_gang_zones(std::uint32_t now) {
    if(!world_ || !connected_ || !loading_) return;
    if(static_cast<std::int32_t>(now-gang_flash_tick_)>=500) {
        gang_flash_phase_=!gang_flash_phase_;gang_flash_tick_=now;
    }
    for(std::uint16_t id=0;id<1024;++id) {
        const auto found=world_->stream.gang_zones.find(id);
        if(found==world_->stream.gang_zones.end() || !found->second.shown) continue;
        const auto& zone=found->second;
        const float rectangle[]{zone.min_x,zone.max_y,zone.max_x,zone.min_y};
        const auto colour=zone.flashing && gang_flash_phase_?zone.colour:zone.base_colour;
        // 100a1260: CRadar::DrawAreaOnRadar(rect, CRGBA*, menu-map flag).
        reinterpret_cast<void(__cdecl*)(const float*,const std::uint32_t*,int)>(0x5853d0)(
            rectangle,&colour,*reinterpret_cast<const std::uint8_t*>(0xba67a4));
    }
}

bool GameRuntime::enforce_world_bounds(std::uint8_t* entity,const WorldBoundsState& bounds) {
    if(!entity) return false;
    auto* matrix=*reinterpret_cast<std::uint8_t**>(entity+0x14);
    auto* position=reinterpret_cast<float*>(matrix?matrix+0x30:entity+4);
    auto* velocity=reinterpret_cast<float*>(entity+0x44);
    // RPC17 preserves the official x_max,x_min,y_max,y_min wire order.
    const float x_max=bounds.set?bounds.min_x:20000.f,x_min=bounds.set?bounds.min_y:-20000.f;
    const float y_max=bounds.set?bounds.max_x:20000.f,y_min=bounds.set?bounds.max_y:-20000.f;
    unsigned axis=0;float force=0;
    if(position[0]>x_max) force=-0.2f;
    else if(position[0]<x_min) force=0.2f;
    else if(position[1]>y_max) {axis=1;force=-0.2f;}
    else if(position[1]<y_min) {axis=1;force=0.2f;}
    else return false;
    if(velocity[axis]!=0.f) {velocity[axis]=force;velocity[2]=0.1f;}
    position[2]+=0.04f;
    return true;
}

// Per-frame class selection, menu state, and player state processing.
void GameRuntime::tick(bool connected,bool network_spawned,bool class_ready,const WorldClass& spawn,
                       std::vector<GameCommand>& pending_commands) {
    const auto release_models=[&] {
        while(!runtime_actors_.empty()) remove_actor(runtime_actors_.begin()->first);
        while(!runtime_objects_.empty()) remove_runtime_object(runtime_objects_.begin()->first);
        auto* local=*reinterpret_cast<std::uint8_t**>(0xb7cd98);
        if(local) {
            const auto id=*reinterpret_cast<const std::uint16_t*>(local+0x22);
            const auto found=models_.custom_definitions_.find(id);
            if(found!=models_.custom_definitions_.end() && !apply_player_skin(local,static_cast<std::uint32_t>(found->second.base))) return;
        }
        while(!models_.custom_definitions_.empty()) {
            auto found=models_.custom_definitions_.begin();auto& definition=found->second;
            auto* info=definition.info.data();
            if(definition.rw) {
                if(!definition.object && definition.shared_hit_collision) *reinterpret_cast<void**>(info+0x34)=nullptr;
                auto** table=*reinterpret_cast<void***>(info);
                reinterpret_cast<void(__thiscall*)(void*)>(table[8])(info);
            }
            if(definition.collision) {
                reinterpret_cast<void(__thiscall*)(void*)>(0x40f700)(definition.collision);
                reinterpret_cast<void(__cdecl*)(void*)>(0x40fc40)(definition.collision);
            }
            models_.release_custom_model(found->first);
        }
        while(!owned_custom_textures_.empty()) release_custom_texture(owned_custom_textures_.begin()->first);
        preview_model_=0xffffffff;
    };
    {
    connected_ = connected;
    if(connected && loading_ && *reinterpret_cast<std::uint32_t*>(0xc8d4c0)==9 &&
       *reinterpret_cast<void**>(0xb7cd98)!=nullptr) {
        const auto now=GetTickCount();
        for(auto& entry:remote_peds_.peds_) {
            auto& remote=entry.second;
            if(!remote.synced || resolve_actor(remote.actor)!=remote.ped) continue;
            auto* ped=static_cast<std::uint8_t*>(remote.ped);
            auto* matrix=*reinterpret_cast<PedMatrix**>(ped+0x14);
            if(!matrix) continue;
            const auto& target_sync=remote.target;
            const PedQuaternion target{target_sync.qw,target_sync.qx,target_sync.qy,target_sync.qz};
            ped_rotation(*matrix,blend_ped_rotation(target,ped_quaternion(*matrix)));
            float heading=static_cast<float>(std::atan2(-static_cast<double>((*matrix)[4]),
                static_cast<double>((*matrix)[5]))*57.2957763671875);
            if(heading<0.f) heading+=360.f;else if(heading>=360.f) heading-=360.f;
            const auto address=reinterpret_cast<std::uintptr_t>(ped);
            *reinterpret_cast<float*>(address+0x558)=
                *reinterpret_cast<float*>(address+0x55c)=heading*pi/180.f;
            PedVector velocity{
                *reinterpret_cast<float*>(address+0x44),
                *reinterpret_cast<float*>(address+0x48),
                *reinterpret_cast<float*>(address+0x4c)};
            if(now-remote.updated_at>3000) {
                (*matrix)[12]=target_sync.x;(*matrix)[13]=target_sync.y;(*matrix)[14]=target_sync.z;
                velocity={};
            } else if(target_sync.velocity_x==0.f && target_sync.velocity_y==0.f &&
                      target_sync.velocity_z==0.f) {
                velocity={};
            }
            *reinterpret_cast<float*>(address+0x44)=velocity.x;
            *reinterpret_cast<float*>(address+0x48)=velocity.y;
            *reinterpret_cast<float*>(address+0x4c)=velocity.z;
        }
    }
    if (!connected && !debug_mode_ && loading_ && *reinterpret_cast<std::uint32_t*>(0xc8d4c0)==9 &&
        *reinterpret_cast<void**>(0xb7cd98)!=nullptr) {
        while(!remote_vehicles_.empty()) remove_vehicle(remote_vehicles_.begin()->first);
        while(!remote_peds_.peds_.empty()) {
            auto found=remote_peds_.peds_.begin();
            auto& remote=found->second;
            if(resolve_actor(remote.actor)==remote.ped) {
                auto* ped=static_cast<std::uint8_t*>(remote.ped);
                if(ped!=*reinterpret_cast<void**>(0xb7cd98) &&
                   *reinterpret_cast<std::uintptr_t*>(ped)!=0x863c40) {
                    if(auto* player_data=*reinterpret_cast<std::uint8_t**>(ped+0x480))
                        *reinterpret_cast<std::uint32_t*>(player_data+0x4c)=0;
                    auto** vtable=*reinterpret_cast<void***>(ped);
                    reinterpret_cast<void(__thiscall*)(void*,unsigned)>(vtable[0])(ped,1u);
                }
            }
            remote_peds_.slots_[remote.slot]=false;
            remote_peds_.peds_.erase(found);
        }
    }
    if(!connected && !debug_mode_ && loading_ && *reinterpret_cast<std::uint32_t*>(0xc8d4c0)==9) release_models();
    if(refused_) goto tick_done;
    if(playing_ && connected && network_spawned) goto tick_done;
    if(playing_ && connected && !network_spawned) {
        playing_=false;awaiting_respawn_=true;
    }
    if(awaiting_respawn_ && connected && !network_spawned) {
        const auto* ped=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
        if(ped && (ped[0x530]==54 || ped[0x530]==55)) goto tick_done;
        awaiting_respawn_=false;
    }
    if(!connected) {
        playing_=false;selecting_=false;awaiting_respawn_=false;
        preview_model_=0xffffffff;connection_scene_started_=false;shots_.clear();
    }
    if (!loading_) {
        // Official worker 0x100c5150 waits for phase SEVEN before calling
        // 0x100a0720. The menu byte is already set during earlier startup
        // phases, while the initial splash/animation still uses model data.
        if (*reinterpret_cast<std::uint32_t*>(0x00c8d4c0) == 7) loading_ = begin_loading();
        goto tick_done;
    }
    if(!loading_ || *reinterpret_cast<std::uint32_t*>(0xc8d4c0)!=9 ||
       *reinterpret_cast<void**>(0xb7cd98)==nullptr) goto tick_done;
    if(debug_mode_) {playing_=true;selecting_=false;goto tick_done;}
    if(!connected) {
        selecting_=false;
        preview_model_=0xffffffff;
        if(!connection_scene_started_) {
            connection_scene_started_=true;
            script_.command(0x016a,"ii",500u,1u);
            logger_("waiting for connection: official beach camera, HUD hidden");
        }
        process_connection_scene();
        goto tick_done;
    }
    if(network_spawned) {
        playing_ = spawn_player(spawn);
        if(playing_) {selecting_=false;awaiting_respawn_=false;}
        goto tick_done;
    }
    if(!selecting_) {
        selecting_=true;
        selection_started_=GetTickCount();
        script_.command(0x01b4,"ii",0u,0u);
        script_.command(0x04d7,"ii",1u,1u);
        script_.command(0x016a,"ii",500u,1u);
        logger_("class selection started; waiting for arrows or Shift");
    }
    // 0x10005f40 calls 0x100a1bd0(0) during class selection.
    *reinterpret_cast<std::uint8_t*>(0xba6769)=0;
    *reinterpret_cast<std::uint8_t*>(0xbaa3fb)=1;
    auto* preview_ped=*reinterpret_cast<std::uint8_t**>(0xb7cd98);
    auto preview=spawn.model;
    if(class_ready && spawn.custom_model>20000 && assets_ && assets_->ready_ &&
       assets_->load_model(spawn.custom_model,[&](bool,std::uint32_t base,std::uint32_t id,
          const auto& name,const auto& dff,const auto& txd) {return load_custom_ped(base,static_cast<std::int32_t>(id),name,dff,txd);}))
        preview=spawn.custom_model;
    if(class_ready && preview_ped!=nullptr && preview_model_!=preview && apply_player_skin(preview_ped,preview)) {
        preview_model_=preview;
        logger_("the selected class skin was applied to the preview actor");
    }
    }
tick_done:
    if(loading_ && *reinterpret_cast<std::uint32_t*>(0xc8d4c0)==9 &&
       *reinterpret_cast<void**>(0xb7cd98)!=nullptr) {

    if(!loading_ || *reinterpret_cast<std::uint32_t*>(0xc8d4c0)!=9 ||
       *reinterpret_cast<void**>(0xb7cd98)==nullptr) return;
    if(connected && world_) {
        const auto& clock=world_->stream;
        if(last_weather_!=clock.weather) {
            // 100a0980 applies the weather immediately when it is not forced.
            *reinterpret_cast<std::uint32_t*>(0xc81318)=clock.weather;
            *reinterpret_cast<std::uint32_t*>(0xc8131c)=clock.weather;
            *reinterpret_cast<std::uint32_t*>(0xc81320)=clock.weather;
            last_weather_=clock.weather;
        }
        if(last_gravity_!=clock.gravity) {
            // InitGame ->100a1220, RPC146 ->052c/ii (raw float cell).
            DWORD protection=0,ignored=0;
            if(VirtualProtect(reinterpret_cast<void*>(0x863984),4,PAGE_EXECUTE_READWRITE,&protection)) {
                *reinterpret_cast<float*>(0x863984)=clock.gravity;
                VirtualProtect(reinterpret_cast<void*>(0x863984),4,protection,&ignored);
            }
            script_.command(0x052c,"ii",0u,std::bit_cast<std::uint32_t>(clock.gravity));
            last_gravity_=clock.gravity;
        }
        if(clock.interior_enter_exits_disabled && !enter_exits_applied_) {
            // 100a1380 walks CEntryExit's pool and clears each entry's flags.
            auto* pool=*reinterpret_cast<std::uint8_t**>(0x96a7d8);
            if(pool) {
                auto* entries=*reinterpret_cast<std::uint8_t**>(pool);
                const auto count=*reinterpret_cast<const int*>(pool+8);
                for(int i=0;entries && i<count;++i) *reinterpret_cast<std::uint16_t*>(entries+i*0x3c+0x30)=0;
            }
            enter_exits_applied_=true;
        }
        for(std::uint8_t id=0;id<100;++id) {
            const auto icon=world_->icons_.find(id);
            if(icon==world_->icons_.end()) {if(map_icon_handles_[id]) remove_map_icon(id);}
            else if(map_icon_revisions_[id]!=icon->second.revision || !map_icon_handles_[id]) set_map_icon(icon->second);
        }
        if(playing_ && *reinterpret_cast<const std::uint8_t*>(0xb72914)==0) {
            auto* local=*reinterpret_cast<std::uint8_t**>(0xb7cd98);
            auto* entity=local;
            if((*reinterpret_cast<std::uint32_t*>(local+0x46c)&0x100)!=0) entity=*reinterpret_cast<std::uint8_t**>(local+0x58c);
            if(enforce_world_bounds(entity,clock.world_bounds)) display_game_text({5,1000,"Stay within the ~r~world boundries"});
        }
        const auto key=static_cast<std::uint16_t>((clock.clock_hour<<8)|clock.clock_minute);
        if(last_clock_!=key || clock.clock_enabled) {set_world_clock(clock.clock_hour,clock.clock_minute);last_clock_=key;}
        const auto stunt=static_cast<std::uint32_t>(clock.stunt_bonus?1:0);
        if(*reinterpret_cast<const std::uint32_t*>(0xa4a474)!=stunt) {
            DWORD protection=0,ignored=0;auto* target=reinterpret_cast<void*>(0xa4a474);
            if(VirtualProtect(target,4,PAGE_EXECUTE_READWRITE,&protection)) {
                *reinterpret_cast<std::uint32_t*>(target)=stunt;VirtualProtect(target,4,protection,&ignored);
            }
        }
    }
    for(const auto& command:pending_commands) std::visit([&](const auto& value) {
        using T=std::decay_t<decltype(value)>;
        auto* ped=*reinterpret_cast<std::uint8_t**>(0xb7cd98);
        if(!ped) return;
        if constexpr(std::is_same_v<T,GameTextCommand>) {
            display_game_text(value);
        } else if constexpr(std::is_same_v<T,CameraCommand>) {
            const auto x=static_cast<double>(std::bit_cast<float>(value.coordinates[0]));
            const auto y=static_cast<double>(std::bit_cast<float>(value.coordinates[1]));
            const auto z=static_cast<double>(std::bit_cast<float>(value.coordinates[2]));
            script_.command(0x0925,"");
            if(value.kind==CameraCommand::Kind::Position)
                script_.command(0x015f,"ffffff",x,y,z,0.0,0.0,0.0);
            else script_.command(0x0160,"fffi",x,y,z,value.transition);
        } else if constexpr(std::is_same_v<T,PlayerPosition>) {
            auto x=std::bit_cast<float>(value.coordinates[0]);
            auto y=std::bit_cast<float>(value.coordinates[1]);
            auto z=std::bit_cast<float>(value.coordinates[2]);
            if(value.find_ground_z) {
                std::uint32_t ground_bits=0;
                script_.command(0x02ce,"fffv",static_cast<double>(x),static_cast<double>(y),
                                static_cast<double>(z),&ground_bits);
                z=std::bit_cast<float>(ground_bits)+1.5f;
            }
            auto** vtable=*reinterpret_cast<void***>(ped);
            reinterpret_cast<void(__thiscall*)(void*,float,float,float,int)>(vtable[14])(
                ped,x,y,z,0);
        } else if constexpr(std::is_same_v<T,PlayerHeading>) {
            const auto angle=std::bit_cast<float>(value.angle);
            *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(ped)+0x55c)=angle*pi/180.0f;
            *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(ped)+0x558)=angle*pi/180.0f;
            script_.command(0x0173,"if",1u,static_cast<double>(angle));
        } else if constexpr(std::is_same_v<T,PlayerAttribute>) {
            using K = PlayerAttribute::Kind;
            switch (value.kind) {
            case K::Health: std::memcpy(ped+0x540, &value.value, 4); break;
            case K::Armour: std::memcpy(ped+0x548, &value.value, 4); break;
            case K::GiveMoney: script_.command(0x0109,"ii",0u,value.value); break;
            case K::ResetMoney: {
                const auto current = *reinterpret_cast<const std::uint32_t*>(0xb7ce50);
                script_.command(0x0109,"ii",0u,0u-current);
                break;
            }
            case K::ResetWeapons:
                reinterpret_cast<void(__thiscall*)(void*)>(0x5e6320)(ped); break;
            case K::ArmedWeapon:
                script_.command(0x01b9,"ii",1u,value.value); break;
            case K::GiveWeapon: give_weapon(ped,value.value,value.amount);break;
            case K::Velocity: std::memcpy(ped+0x44,value.velocity.data(),12); break;
            }
        } else if constexpr(std::is_same_v<T,PlayerSkin>) {
            std::uint8_t* target=nullptr;
            if(value.player_id==local_player_id_) target=ped;
            else if(const auto found=remote_peds_.peds_.find(value.player_id);found!=remote_peds_.peds_.end() &&
                    resolve_actor(found->second.actor)==found->second.ped) target=static_cast<std::uint8_t*>(found->second.ped);
            auto model=value.base;
            if(target && value.custom>20000 && assets_ && assets_->ready_ &&
               assets_->load_model(value.custom,[&](bool,std::uint32_t base,std::uint32_t id,
                  const auto& name,const auto& dff,const auto& txd) {return load_custom_ped(base,static_cast<std::int32_t>(id),name,dff,txd);})) model=value.custom;
            if(target) apply_player_skin(target,model);
        } else if constexpr(std::is_same_v<T,PlayerInterior>) {
            // 0x100acf60, local-ped branch. Its 04e4 loads the current scene.
            script_.command(0x04bb,"i",static_cast<std::uint32_t>(value.interior));
            script_.command(0x0860,"ii",1u,static_cast<std::uint32_t>(value.interior));
            const auto* matrix=*reinterpret_cast<const std::uint8_t* const*>(ped+0x14);
            const auto* position=matrix?matrix+0x30:ped+4;
            float xy[2];std::memcpy(xy,position,sizeof(xy));
            script_.command(0x04e4,"ff",static_cast<double>(xy[0]),static_cast<double>(xy[1]));
        } else if constexpr(std::is_same_v<T,RemotePlayerDeath>) {
            const auto found=remote_peds_.peds_.find(value.player_id);
            if(found!=remote_peds_.peds_.end() && resolve_actor(found->second.actor)==found->second.ped) {
                found->second.synced=false;found->second.has_target=false;
                auto* remote=static_cast<std::uint8_t*>(found->second.ped);
                *reinterpret_cast<float*>(remote+0x540)=0;
                script_.command(0x0321,"i",found->second.actor);
            }
        } else if constexpr(std::is_same_v<T,RemoteAimCommand>) {
            const auto found=remote_peds_.peds_.find(value.player_id);
            if(found!=remote_peds_.peds_.end()) {found->second.aim=value.data;found->second.has_aim=true;}
        } else if constexpr(std::is_same_v<T,RemoteBulletCommand>) {
            if(connected_) replay_bullet(value);
        } else if constexpr(std::is_same_v<T,VehicleAttributeCommand>) {
            const auto found=remote_vehicles_.find(value.id);
            if(found==remote_vehicles_.end() || !found->second.entity) return;
            auto* vehicle=static_cast<std::uint8_t*>(found->second.entity);
            using K=VehicleAttributeCommand::Kind;
            if(value.kind==K::Health && std::isfinite(value.health)) std::memcpy(vehicle+0x4c0,&value.health,4);
            else if(value.kind==K::Interior) script_.command(0x0840,"ii",found->second.handle,static_cast<std::uint32_t>(value.interior));
            else if(value.kind==K::Position && std::all_of(value.position.begin(),value.position.end(),[](float x){return std::isfinite(x);})) {
                auto** vtable=*reinterpret_cast<void***>(vehicle);
                reinterpret_cast<void(__thiscall*)(void*,float,float,float,int)>(vtable[14])(
                    vehicle,value.position[0],value.position[1],value.position[2],0);
            }
        } else if constexpr(std::is_same_v<T,VehicleSpawnCommand>) {
            if(connected_) stream_vehicle(value);
        } else if constexpr(std::is_same_v<T,VehicleRemoveCommand>) {
            remove_vehicle(value.id);
        } else if constexpr(std::is_same_v<T,VehicleTransformCommand>) {
            const auto found=remote_vehicles_.find(value.id);
            if(found==remote_vehicles_.end() || !found->second.entity) return;
            auto* vehicle=static_cast<std::uint8_t*>(found->second.entity);
            auto* matrix=*reinterpret_cast<PedMatrix**>(vehicle+0x14);
            if(matrix && value.seat==0) {
                ped_rotation(*matrix,{value.rotation[0],value.rotation[1],value.rotation[2],value.rotation[3]});
                (*matrix)[12]=value.position[0];(*matrix)[13]=value.position[1];(*matrix)[14]=value.position[2];
                std::memcpy(vehicle+0x44,value.velocity.data(),12);std::memcpy(vehicle+0x4c0,&value.health,4);
            }
            const auto occupant=remote_peds_.peds_.find(value.player_id);
            if(occupant!=remote_peds_.peds_.end()) {
                auto* remote=static_cast<std::uint8_t*>(occupant->second.ped);
                const auto* current=*reinterpret_cast<void**>(remote+0x58c);
                if(current!=vehicle || (*reinterpret_cast<std::uint32_t*>(remote+0x46c)&0x100)==0) {
                    if(value.seat==0) script_.command(0x036a,"ii",occupant->second.actor,found->second.handle);
                    else script_.command(0x0430,"iii",occupant->second.actor,found->second.handle,static_cast<std::uint32_t>(value.seat-1));
                }
                RemotePlayerUpdate controls;controls.keys=value.keys;controls.left_right=value.left_right;controls.up_down=value.up_down;
                update_remote_control_pad(occupant->second.control_pad,controls,true,false);
                *reinterpret_cast<float*>(remote+0x540)=value.player_health;
                *reinterpret_cast<float*>(remote+0x548)=value.player_armour;
                if(value.seat==0) found->second.driver=value.player_id;
                occupant->second.synced=false;
            }
        } else if constexpr(std::is_same_v<T,PlayerVehicleCommand>) {
            if(value.remove) {
                // RPC71 -> 100ac100: task leave-car (descriptor 1011f008,
                // opcode05cd, actor/vehicle), excluding models570 and538.
                const auto* current=*reinterpret_cast<void**>(ped+0x58c);
                if((*reinterpret_cast<std::uint32_t*>(ped+0x46c)&0x100)!=0 && current) {
                    const auto model=*reinterpret_cast<const std::uint16_t*>(static_cast<const std::uint8_t*>(current)+0x22);
                    if(model!=570 && model!=538) for(const auto& [id,vehicle]:remote_vehicles_) {
                        (void)id;
                        if(vehicle.entity==current) {script_.command(0x05cd,"ii",1u,vehicle.handle);break;}
                    }
                }
            } else if(const auto found=remote_vehicles_.find(value.id);found!=remote_vehicles_.end()) {
                if(value.seat==0) script_.command(0x036a,"ii",1u,found->second.handle);
                else script_.command(0x0430,"iii",1u,found->second.handle,static_cast<std::uint32_t>(value.seat-1));
            }
        } else if constexpr(std::is_same_v<T,RemotePlayerStream>) {
            char line[200];
            std::snprintf(line, sizeof(line), "RPC32 adapter: player=%d skin=%u custom=%u pos=%.3f,%.3f,%.3f",
                          value.player_id, value.model, value.custom_model, value.x, value.y, value.z);
            logger_(line);
            if (connected_ && !stream_remote_player(value)) logger_("could not create remote player ped");
        } else if constexpr(std::is_same_v<T,RemotePlayerUpdate>) {
            if(connected_) {
                const auto found=remote_peds_.peds_.find(value.player_id);
                if(found==remote_peds_.peds_.end()) return;
                auto& remote=found->second;
                if(resolve_actor(remote.actor)!=remote.ped) {
                    remote_peds_.slots_[remote.slot]=false;
                    remote_peds_.peds_.erase(found);
                    return;
                }
                if(!std::isfinite(value.x) || !std::isfinite(value.y) ||
                   !std::isfinite(value.z) || !std::isfinite(value.angle) ||
                   !std::isfinite(value.velocity_x) || !std::isfinite(value.velocity_y) ||
                   !std::isfinite(value.velocity_z) || !std::isfinite(value.health) ||
                   !std::isfinite(value.armour)) return;
                auto* entity=static_cast<std::uint8_t*>(remote.ped);
                if((*reinterpret_cast<std::uint32_t*>(entity+0x46c)&0x100)!=0)
                    script_.command(0x0362,"ifff",remote.actor,static_cast<double>(value.x),static_cast<double>(value.y),static_cast<double>(value.z));
                const auto weapon_slot=entity[0x718];
                const auto current_weapon=weapon_slot<13?*reinterpret_cast<const std::uint32_t*>(entity+0x5a0+weapon_slot*28):0;
                if(current_weapon!=value.weapon) {
                    if(value.weapon==0) reinterpret_cast<void(__thiscall*)(void*,int)>(0x5e6280)(entity,0);
                    else give_weapon(entity,value.weapon,9999);
                }
                remote.target=value;
                remote.has_target=true;
                update_remote_control_pad(remote.control_pad,value,false,false);
                if(!remote.synced) {
                    char line[200];
                    std::snprintf(line,sizeof(line),
                        "remote transform: player=%d pos=%.3f,%.3f,%.3f heading=%.2f health=%.0f armour=%.0f",
                        value.player_id,value.x,value.y,value.z,value.angle,value.health,value.armour);
                    logger_(line);
                }
                auto* remote_ped=static_cast<std::uint8_t*>(remote.ped);
                auto* matrix=*reinterpret_cast<PedMatrix**>(remote_ped+0x14);
                if(matrix) {
                    const auto address=reinterpret_cast<std::uintptr_t>(remote_ped);
                    PedVector velocity{
                        *reinterpret_cast<float*>(address+0x44),
                        *reinterpret_cast<float*>(address+0x48),
                        *reinterpret_cast<float*>(address+0x4c)};
                    const bool added=*reinterpret_cast<std::uintptr_t*>(remote_ped)!=0x863c40 &&
                                     *reinterpret_cast<void**>(address+0xb4)!=nullptr;
                    velocity={value.velocity_x,value.velocity_y,value.velocity_z};
                    bool position_corrected=!added;
                    if(!added) {
                        (*matrix)[12]=value.x;(*matrix)[13]=value.y;(*matrix)[14]=value.z;
                    } else {
                        const float dx=std::fabs(value.x-(*matrix)[12]);
                        const float dy=std::fabs(value.y-(*matrix)[13]);
                        const float dz=std::fabs(value.z-(*matrix)[14]);
                        constexpr float epsilon=1e-5f;
                        if(dx>epsilon || dy>epsilon || dz>epsilon) {
                            if(dx<=2.f && dy<=2.f && dz<=1.f) {
                                if(dx>epsilon) velocity.x+=(value.x-(*matrix)[12])*.1f;
                                if(dy>epsilon) velocity.y+=(value.y-(*matrix)[13])*.1f;
                                if(dz>epsilon) velocity.z+=(value.z-(*matrix)[14])*.1f;
                            } else {
                                (*matrix)[12]=value.x;(*matrix)[13]=value.y;(*matrix)[14]=value.z;
                                position_corrected=true;
                            }
                        }
                    }
                    if(position_corrected)
                        logger_("remote motion: native large-error position correction");
                    remote.updated_at=GetTickCount();
                    *reinterpret_cast<float*>(address+0x540)=value.health;
                    *reinterpret_cast<float*>(address+0x548)=value.armour;
                    *reinterpret_cast<float*>(address+0x44)=velocity.x;
                    *reinterpret_cast<float*>(address+0x48)=velocity.y;
                    *reinterpret_cast<float*>(address+0x4c)=velocity.z;
                }
                remote.synced=true;
            }
        } else if constexpr(std::is_same_v<T,RemotePlayerDespawn>) {
            const auto found=remote_peds_.peds_.find(value.player_id);
            if(found!=remote_peds_.peds_.end()) {
                auto& remote=found->second;
                if(resolve_actor(remote.actor)==remote.ped) {
                    auto* ped=static_cast<std::uint8_t*>(remote.ped);
                    if(ped!=*reinterpret_cast<void**>(0xb7cd98) &&
                       *reinterpret_cast<std::uintptr_t*>(ped)!=0x863c40) {
                        if(auto* player_data=*reinterpret_cast<std::uint8_t**>(ped+0x480))
                            *reinterpret_cast<std::uint32_t*>(player_data+0x4c)=0;
                        auto** vtable=*reinterpret_cast<void***>(ped);
                        reinterpret_cast<void(__thiscall*)(void*,unsigned)>(vtable[0])(ped,1u);
                    }
                }
                remote_peds_.slots_[remote.slot]=false;
                remote_peds_.peds_.erase(found);
            }
        } else if constexpr(std::is_same_v<T,RemotePlayersReset>) {
            while(!remote_vehicles_.empty()) remove_vehicle(remote_vehicles_.begin()->first);
            while(!remote_peds_.peds_.empty()) {
                auto found=remote_peds_.peds_.begin();
                auto& remote=found->second;
                if(resolve_actor(remote.actor)==remote.ped) {
                    auto* ped=static_cast<std::uint8_t*>(remote.ped);
                    if(ped!=*reinterpret_cast<void**>(0xb7cd98) &&
                       *reinterpret_cast<std::uintptr_t*>(ped)!=0x863c40) {
                        if(auto* player_data=*reinterpret_cast<std::uint8_t**>(ped+0x480))
                            *reinterpret_cast<std::uint32_t*>(player_data+0x4c)=0;
                        auto** vtable=*reinterpret_cast<void***>(ped);
                        reinterpret_cast<void(__thiscall*)(void*,unsigned)>(vtable[0])(ped,1u);
                    }
                }
                remote_peds_.slots_[remote.slot]=false;
                remote_peds_.peds_.erase(found);
            }
            release_models();playing_=false;selecting_=false;
        }
    },command);
        if(connected && world_) {
            const auto next_world=static_cast<std::int32_t>(world_->stream.local.virtual_world);
            if(object_world_!=next_world) {
                while(!runtime_objects_.empty()) remove_runtime_object(runtime_objects_.begin()->first);
                object_world_=next_world;
            }
            if(!assets_ || assets_->ready_) {
            for(auto it=runtime_objects_.begin();it!=runtime_objects_.end();) {
                const auto id=it->first;++it;
                if(!world_->objects_.contains(id)) remove_runtime_object(id);
            }
            for(const auto& [id,object]:world_->objects_) {
                const auto found=runtime_objects_.find(id);
                if(found==runtime_objects_.end()) stream_object(object);
                else if(found->second.source.model!=object.model) stream_object(object);
                else update_runtime_object(found->second,object);
            }
            }
        }
        // The camera-target actor branch needs real RPC171 entities. Keep
        // their engine handles separate from the remote-player slot pool.
        for(auto actor=runtime_actors_.begin();actor!=runtime_actors_.end();) {
            const auto id=actor->first;++actor;
            if(!connected || !world_ || id>=world_->stream.actors.actors_.size() || !world_->stream.actors.actors_[id]) remove_actor(id);
        }
        if(connected && world_) for(std::uint16_t id=0;id<world_->stream.actors.actors_.size();++id) {
            const auto* source=static_cast<const ActorState*>(world_->stream.actors.actors_[id].get());
            if(!source) continue;
            auto found=runtime_actors_.find(id);
            if(found!=runtime_actors_.end() && (found->second.source.skin!=source->skin || found->second.source.custom_skin!=source->custom_skin)) {remove_actor(id);found=runtime_actors_.end();}
            if(found==runtime_actors_.end()) {create_actor(*source);found=runtime_actors_.find(id);}
            if(found==runtime_actors_.end() || resolve_actor(found->second.handle)!=found->second.entity) continue;
            auto& actor=found->second;auto* ped=static_cast<std::uint8_t*>(actor.entity);
            if(actor.source.x!=source->x || actor.source.y!=source->y || actor.source.z!=source->z)
                script_.command(0x00a1,"ifff",actor.handle,static_cast<double>(source->x),static_cast<double>(source->y),static_cast<double>(source->z));
            if(actor.source.angle!=source->angle) script_.command(0x0173,"if",actor.handle,static_cast<double>(source->angle));
            if(actor.source.health!=source->health) {*reinterpret_cast<float*>(ped+0x540)=source->health;if(source->health<=0.f) script_.command(0x0321,"i",actor.handle);}
            if(actor.source.invulnerable!=source->invulnerable) script_.command(0x02ab,"iiiiii",actor.handle,source->invulnerable?1u:0u,source->invulnerable?1u:0u,source->invulnerable?1u:0u,1u,source->invulnerable?1u:0u);
            actor.source=*source;
        }
        for(auto pickup=runtime_pickups_.begin();pickup!=runtime_pickups_.end();) {
            const PickupState* source=nullptr;
            if(connected && world_) {
                const auto found=world_->stream.pickups.find(pickup->first);
                if(found!=world_->stream.pickups.end()) source=&found->second;
            }
            if(!source || source->model!=pickup->second.source.model || source->type!=pickup->second.source.type ||
               source->x!=pickup->second.source.x || source->y!=pickup->second.source.y || source->z!=pickup->second.source.z) {
                if(pickup->second.handle) script_.command(0x0215,"i",pickup->second.handle);
                pickup=runtime_pickups_.erase(pickup);
            } else ++pickup;
        }
        if(connected && world_) for(const auto& [id,pickup]:world_->stream.pickups) {
            if(id>=4096 || runtime_pickups_.contains(id)) continue;
            RuntimePickup runtime;runtime.source=pickup;runtime.handle=create_engine_pickup(pickup,runtime.game_id);
            runtime_pickups_[id]=runtime;
        }
        // Original13420 polls type14; other static pickups use the GTA
        // collection hook and a fifteen-frame notification cooldown.
        for(auto& [id,pickup]:runtime_pickups_) if(pickup.handle) {
            if(pickup.source.type!=14) {if(pickup.cooldown) --pickup.cooldown;}
            else if(script_.command(0x0214,"i",pickup.handle)) pickup_notices_.emplace_back(id,true);
        }
        local_vehicle_id_=0xffff;local_vehicle_entity_=nullptr;local_vehicle_seat_=0;
        const auto* local_ped=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
        if(local_ped && (*reinterpret_cast<const std::uint32_t*>(local_ped+0x46c)&0x100)) {
            auto* vehicle=*reinterpret_cast<std::uint8_t* const*>(local_ped+0x58c);
            for(const auto& [id,known]:remote_vehicles_) if(known.entity==vehicle) {
                local_vehicle_id_=id;local_vehicle_entity_=vehicle;
                if(*reinterpret_cast<const void* const*>(vehicle+0x460)!=local_ped) {
                    local_vehicle_seat_=1;
                    for(unsigned seat=0;seat<8;++seat)
                        if(*reinterpret_cast<const void* const*>(vehicle+0x464+seat*4)==local_ped)
                            local_vehicle_seat_=static_cast<std::uint8_t>(seat+1);
                }
                break;
            }
        }
        pending_commands.clear();
        if(!connected) {
            for(std::uint8_t id=0;id<100;++id) if(map_icon_handles_[id]) remove_map_icon(id);
            last_weather_=-1;last_gravity_=-1.f;enter_exits_applied_=false;
        }
    }
}

}  // namespace samp::client
