#include "samp/client/game_model_pools.hpp"
#include <cstring>
#include <chrono>
#include <thread>
#include <span>
#include <utility>
#include <vector>
#if defined(_WIN32)
#include <windows.h>
#endif

namespace samp::client {

// source adapter only; no established separate native entry
bool expand_game_pools(std::vector<PatchRecord>& patches) {
    const auto read = [](std::uint32_t address, std::size_t size) {
        std::vector<std::uint8_t> bytes(size);
        if (address < kGtaSaImageBase || size > kGtaSaImageSize ||
            static_cast<std::uint64_t>(address) + size > kGtaSaImageEnd) {
            bytes.clear();
            return bytes;
        }
#if defined(_WIN32)
        SIZE_T count = 0;
        if (!ReadProcessMemory(GetCurrentProcess(), reinterpret_cast<const void*>(address),
                               bytes.data(), size, &count) || count != size) bytes.clear();
#else
        std::memcpy(bytes.data(), reinterpret_cast<const void*>(address), size);
#endif
        return bytes;
    };
    const auto patch_bytes = [&](std::uint32_t address, std::span<const std::uint8_t> replacement) {
        auto original = read(address, replacement.size());
        if (original.size() != replacement.size()) return false;
#if defined(_WIN32)
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
#else
        std::memcpy(reinterpret_cast<void*>(address), replacement.data(), replacement.size());
#endif
        patches.push_back({address, std::move(original),
                           std::vector<std::uint8_t>(replacement.begin(), replacement.end())});
        return true;
    };
    const auto patch_immediate = [&](std::uint32_t address, std::uint32_t value, std::size_t size) {
        if (size != 1 && size != 2 && size != 4) return false;
        std::uint8_t bytes[4]{};
        for (std::size_t i = 0; i < size; ++i) bytes[i] = static_cast<std::uint8_t>(value >> (8 * i));
        return patch_bytes(address, std::span<const std::uint8_t>(bytes, size));
    };
    // 0x100aa060 waits for the unpacked PUSH opcode before this patch.
    for(;;) {
        const auto ready=read(0x551024,1);
        if(ready.empty()) return false;
        if(ready[0]==0x68) break;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    // Bytes at official 0x101546b0 and 0x101546b8 replace the original
    // push sequences for the vehicle and collision-model constructors.
    constexpr std::uint8_t vehicle[]{0x6a,0x00,0x68,0xc6,0x02,0x00,0x00};
    constexpr std::uint8_t collision[]{0x68,0xff,0x7e,0x00,0x00};
    if(!patch_bytes(0x551024,vehicle) ||
       !patch_immediate(0x55105f,20000,4) ||
       !patch_immediate(0x5510cf,16000,4) ||
       !patch_immediate(0x550f46,300000,4) ||
       !patch_immediate(0x550f82,210000,4) ||
       !patch_immediate(0x550fba,50000,4) ||
       !patch_immediate(0x551097,3100,4) ||
       !patch_immediate(0x550ff2,0xf0,1) ||
       !patch_immediate(0x551283,0xf0,1) ||
       !patch_immediate(0x551140,5,1) ||
       !patch_immediate(0x551178,1,1) ||
       !patch_immediate(0x54f3a1,20000,4) ||
       !patch_bytes(0x551106,collision)) return false;
    return true;
}

// source adapter only; no established separate native entry
bool GameModelPools::install_pointer_lists(std::vector<PatchRecord>& patches) {
    const auto patch_bytes = [&](std::uint32_t address, std::span<const std::uint8_t> replacement) {
        if (address < kGtaSaImageBase || replacement.size() > kGtaSaImageSize ||
            static_cast<std::uint64_t>(address) + replacement.size() > kGtaSaImageEnd) return false;
        std::vector<std::uint8_t> original(replacement.size());
#if defined(_WIN32)
        SIZE_T count = 0;
        if (!ReadProcessMemory(GetCurrentProcess(), reinterpret_cast<const void*>(address),
                               original.data(), original.size(), &count) || count != original.size()) return false;
        if (!replacement.empty()) {
            auto* target = reinterpret_cast<void*>(address);
            DWORD previous = 0;
            if (!VirtualProtect(target, replacement.size(), PAGE_EXECUTE_READWRITE, &previous)) return false;
            count = 0;
            const bool written = WriteProcessMemory(GetCurrentProcess(), target, replacement.data(),
                                                    replacement.size(), &count) != 0 &&
                                 count == replacement.size();
            const bool flushed = FlushInstructionCache(GetCurrentProcess(), target, replacement.size()) != 0;
            DWORD ignored = 0;
            const bool restored = VirtualProtect(target, replacement.size(), previous, &ignored) != 0;
            if (!written || !flushed || !restored) return false;
        }
#else
        std::memcpy(original.data(), reinterpret_cast<const void*>(address), original.size());
        std::memcpy(reinterpret_cast<void*>(address), replacement.data(), replacement.size());
#endif
        patches.push_back({address, std::move(original),
                           std::vector<std::uint8_t>(replacement.begin(), replacement.end())});
        return true;
    };
    const auto patch_immediate = [&](std::uint32_t address, std::uint32_t value, std::size_t size) {
        if (size != 1 && size != 2 && size != 4) return false;
        std::uint8_t bytes[4]{};
        for (std::size_t i = 0; i < size; ++i) bytes[i] = static_cast<std::uint8_t>(value >> (8 * i));
        return patch_bytes(address, std::span<const std::uint8_t>(bytes, size));
    };
    constexpr std::uint32_t direct[]{
        0x005dc7aa,0x0041a85d,0x0041a864,0x00408259,0x00711b32,0x00699cf8,0x004092ec,
        0x0040914e,0x00408702,0x00564220,0x00564172,0x00563845,0x0084e9c2,0x0085652d};
    constexpr std::uint32_t indexed[]{
        0x0040d68c,0x005664d7,0x00566586,0x00408706,0x0056b3b1,0x0056ad91,0x0056a85f,
        0x005675fa,0x0056cd84,0x0056cc79,0x0056cb51,0x0056ca4a,0x0056c664,0x0056c569,
        0x0056c445,0x0056c341,0x0056bd46,0x0056bc53,0x0056be56,0x0056a940,0x00567735,
        0x00546738,0x0054bb23,0x006e31aa,0x0040dc29,0x00534a09,0x00534d6b,0x00564b59,
        0x00564da9,0x0067ff5d,0x00568cb9,0x00568efb,0x00569f57,0x00569537,0x00569127,
        0x0056b4b5,0x0056b594,0x0056b2c3,0x0056af74,0x0056ae95,0x0056bf4f,0x0056aca3,
        0x0056a766,0x0056a685,0x0070b9ba,0x0056479d,0x0070acb2,0x006063c7,0x00699cfe,
        0x0041a861,0x0040e061,0x0040df5e,0x0040ddce,0x0040db0e,0x0040d98c,0x01566855};
    constexpr std::uint32_t next[]{0x004091c5,0x00409367,0x0040d9c5,0x0040db47,
        0x0040dc61,0x0040de07,0x0040df97,0x0040e09a,0x00534a98,0x00534dfa,0x0071cdb0};
    pointer_lists_.fill(0);
    const auto base=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(pointer_lists_.data()));
    for(const auto site:direct) {
        auto field=site;
#if defined(_WIN32)
        // The reference table's40914e entry lands on MOV ESI,[EAX*8+disp32]
        // in the supplied GTA image. Preserve8b34c5 and relocate its operand.
        // All other direct entries already point at their displacement.
        std::uint32_t existing=0;SIZE_T count=0;
        if(!ReadProcessMemory(GetCurrentProcess(),reinterpret_cast<const void*>(site),&existing,4,&count) || count!=4) return false;
        if(existing!=0xb7d0b8) {
            std::array<std::uint8_t,7> instruction{};
            if(site!=0x40914e || !ReadProcessMemory(GetCurrentProcess(),reinterpret_cast<const void*>(site),instruction.data(),7,&count) || count!=7 ||
               instruction[0]!=0x8b || instruction[1]!=0x34 || instruction[2]!=0xc5) return false;
            std::memcpy(&existing,instruction.data()+3,4);if(existing!=0xb7d0b8) return false;
            field+=3;
        }
#endif
        if(!patch_immediate(field,base,4)) return false;
    }
    for(const auto site:indexed) if(!patch_immediate(site+3,base,4)) return false;
    for(const auto site:next) if(!patch_immediate(site+3,base+4,4)) return false;
    // 1015498c..1015499c references the end of the old sector array.
    // The original DLL's adjacent ped storage happens to share that address.
    constexpr std::uint32_t ends[]{0x5634a6,0x5638df,0x56420f,0x564283};
    for(const auto site:ends) if(!patch_immediate(site,base+static_cast<std::uint32_t>(pointer_lists_.size()*4),4)) return false;
    if(!patch_immediate(0x564dc7,base+28800*4,4) ||
       !patch_immediate(0x40936a,base+4,4)) return false;
    const std::vector<std::uint8_t> empty_records(0x7080*4,0);
    if(!patch_bytes(0xb7d0b8,empty_records)) return false;

    return true;
}

// source adapter only; no established separate native entry
bool GameModelPools::install_ped_pool(std::vector<PatchRecord>& patches) {
    const auto patch_immediate = [&](std::uint32_t address, std::uint32_t value, std::size_t size) {
        if (size != 1 && size != 2 && size != 4) return false;
        if (address < kGtaSaImageBase || size > kGtaSaImageSize ||
            static_cast<std::uint64_t>(address) + size > kGtaSaImageEnd) return false;
        std::vector<std::uint8_t> original(size);
#if defined(_WIN32)
        SIZE_T count = 0;
        if (!ReadProcessMemory(GetCurrentProcess(), reinterpret_cast<const void*>(address),
                               original.data(), size, &count) || count != size) return false;
#else
        std::memcpy(original.data(), reinterpret_cast<const void*>(address), size);
#endif
        std::uint8_t bytes[4]{};
        for (std::size_t i = 0; i < size; ++i) bytes[i] = static_cast<std::uint8_t>(value >> (8 * i));
#if defined(_WIN32)
        DWORD previous = 0;
        auto* target = reinterpret_cast<void*>(address);
        if (!VirtualProtect(target, size, PAGE_EXECUTE_READWRITE, &previous)) return false;
        count = 0;
        const bool written = WriteProcessMemory(GetCurrentProcess(), target, bytes, size, &count) != 0 && count == size;
        const bool flushed = FlushInstructionCache(GetCurrentProcess(), target, size) != 0;
        DWORD ignored = 0;
        const bool restored = VirtualProtect(target, size, previous, &ignored) != 0;
        if (!written || !flushed || !restored) return false;
#else
        std::memcpy(reinterpret_cast<void*>(address), bytes, size);
#endif
        patches.push_back({address, std::move(original), std::vector<std::uint8_t>(bytes, bytes + size)});
        return true;
    };
    // CPedModelInfo::Init is called virtually by AddPedModel. The original
    // GTA store has 278 records; the official client initializes 319.
    for(auto& ped:peds_) {ped.fill(0);ped[0]=0x85bdc0;}
    const auto base=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(peds_.data()));
    if(!patch_immediate(0x4c67ad,base,4)) return false;
    return true;
}

// source adapter only; no established separate native entry
bool GameModelPools::install_atomic_pool() {
    for(auto& atomic:atomics_) {atomic.fill(0);atomic[0]=0x85bbf0;}
    // Official 0x101546f8..0x10154730: all fourteen references must use
    // the initialized 20,000-entry store, including AddAtomicModel's base.
    constexpr std::uint32_t sites[]{0x4c63f2,0x4c662d,0x4c6822,0x4c6829,
        0x4c6877,0x4c6881,0x4c6890,0x4c68a5,0x4c68f3,0x4c6932,
        0x4c6971,0x4c69b0,0x4c69ef,0x4c6a2e};
    const auto base=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(atomics_.data()));
    for(const auto site:sites) {
#if defined(_WIN32)
        DWORD previous=0;
        auto* target=reinterpret_cast<void*>(static_cast<std::uintptr_t>(site));
        if(!VirtualProtect(target,4,PAGE_EXECUTE_READWRITE,&previous)) return false;
        std::memcpy(target,&base,4);
        const bool flushed=FlushInstructionCache(GetCurrentProcess(),target,4)!=0;
        DWORD ignored=0;
        const bool restored=VirtualProtect(target,4,previous,&ignored)!=0;
        if(!flushed || !restored) return false;
#else
        std::memcpy(reinterpret_cast<void*>(static_cast<std::uintptr_t>(site)),&base,4);
#endif
    }
    return true;
}
}
