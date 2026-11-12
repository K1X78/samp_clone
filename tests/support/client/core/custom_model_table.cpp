#include "samp/client/game_model_pools.hpp"
#include "samp/client/model_info_operands.hpp"
#include <cstring>
#include <algorithm>
#include <span>
#ifdef _WIN32
#include <windows.h>
#endif

namespace samp::client {

#if defined(_MSC_VER) && defined(_M_IX86)
// Installed by original100a6d30 at4087ea. Negative custom object IDs have
// no CStreaming record to remove; positive IDs retain the displaced prologue.
// source adapter only; no established separate native entry
__declspec(naked) void custom_remove_model_hook() {
    __asm {
        cmp ebp,0
        jl negative_model
        push esi
        push edi
        lea edi,[ebp+ebp*4]
        mov eax,004087f0h
        jmp eax
    negative_model:
        pop ebp
        pop ebx
        ret
    }
}
#endif

// 100a7560's exact five-byte operand records are retained in the header.
// This table is distinct from100aa6a0's streaming pointer-list expansion.
// source adapter only; no established separate native entry
bool GameModelPools::install_custom_model_table(std::vector<PatchRecord>& patches) {
    if(custom_table_installed_) return true;
#if defined(_WIN32) && defined(_M_IX86)
    static_assert(sizeof(void*)==4);
    std::fill(model_infos_.begin(),model_infos_.end(),0);SIZE_T copied=0;
    if(!ReadProcessMemory(GetCurrentProcess(),reinterpret_cast<const void*>(0xa9b0c8),
        model_infos_.data()+32767,20000*4,&copied) || copied!=20000*4) return false;
    const auto mark=patches.size();
    const auto rollback=[&] {
        while(patches.size()>mark) {
            auto& patch=patches.back();DWORD old=0,ignored=0;
            auto* target=reinterpret_cast<void*>(static_cast<std::uintptr_t>(patch.address));
            if(VirtualProtect(target,patch.original.size(),PAGE_EXECUTE_READWRITE,&old)) {
                std::memcpy(target,patch.original.data(),patch.original.size());
                FlushInstructionCache(GetCurrentProcess(),target,patch.original.size());
                VirtualProtect(target,patch.original.size(),old,&ignored);
            }
            patches.pop_back();
        }
    };
    const auto apply=[&](std::uint32_t address,std::span<const std::uint8_t> bytes) {
        if(address<kGtaSaImageBase || std::uint64_t(address)+bytes.size()>kGtaSaImageEnd) return false;
        PatchRecord patch;patch.address=address;patch.original.resize(bytes.size());
        auto* target=reinterpret_cast<void*>(static_cast<std::uintptr_t>(address));SIZE_T count=0;
        if(!ReadProcessMemory(GetCurrentProcess(),target,patch.original.data(),bytes.size(),&count) || count!=bytes.size()) return false;
        DWORD protection=0,ignored=0;if(!VirtualProtect(target,bytes.size(),PAGE_EXECUTE_READWRITE,&protection)) return false;
        std::memcpy(target,bytes.data(),bytes.size());FlushInstructionCache(GetCurrentProcess(),target,bytes.size());
        VirtualProtect(target,bytes.size(),protection,&ignored);patch.replacement.assign(bytes.begin(),bytes.end());
        patches.push_back(std::move(patch));return true;
    };
    const auto base=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(model_infos_.data()+32767));
    std::array<std::uint8_t,4> pointer{};std::memcpy(pointer.data(),&base,4);
    std::size_t replaced=0;
    for(const auto& operand:kModelInfoOperands) {
        std::uint8_t opcode=0;SIZE_T count=0;
        if(!ReadProcessMemory(GetCurrentProcess(),reinterpret_cast<const void*>(operand.address),&opcode,1,&count) ||
           count!=1 || opcode!=operand.opcode) continue; // The original also skips unmatched opcodes.
        const auto offset=(opcode==0xbe || opcode==0xbf)?1u:3u;
        if(!apply(operand.address+offset,pointer)) {rollback();return false;}
        ++replaced;
    }
    constexpr std::array<std::uint8_t,6> displaced{0x56,0x57,0x8d,0x7c,0xad,0x00};
    std::array<std::uint8_t,6> actual{};SIZE_T count=0;
    if(!replaced || !ReadProcessMemory(GetCurrentProcess(),reinterpret_cast<const void*>(0x4087ea),actual.data(),6,&count) ||
       count!=6 || actual!=displaced) {rollback();return false;}
    std::array<std::uint8_t,6> jump{0xe9,0,0,0,0,0x90};
    const auto displacement=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(&custom_remove_model_hook))-0x4087ef;
    std::memcpy(jump.data()+1,&displacement,4);
    if(!apply(0x4087ea,jump)) {rollback();return false;}
    custom_table_installed_=true;return true;
#else
    (void)patches;return false;
#endif
}

// source adapter only; no established separate native entry
void* GameModelPools::model_info(std::int32_t id) const {
    if(custom_table_installed_) {
        if(id<-32767 || id>32767) return nullptr;
        return reinterpret_cast<void*>(static_cast<std::uintptr_t>(model_infos_[32767+id]));
    }
    if(id<0 || id>20000) return nullptr;
#ifdef _WIN32
    return *reinterpret_cast<void**>(0xa9b0c8+id*4);
#else
    return nullptr;
#endif
}

// Only definitions owned by this reconstruction reach the native FREE/clear
// operation; callers release their GTA RW objects before freeing the metadata.
// source adapter only; no established separate native entry
void GameModelPools::release_custom_model(std::int32_t id) {
    const auto found=custom_definitions_.find(id);if(found==custom_definitions_.end()) return;
    if(id>=-32767 && id<=32767) model_infos_[32767+id]=0;
    custom_definitions_.erase(found);
}

} // namespace samp::client
