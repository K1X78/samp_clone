#include "selection_dialog.hpp"
#include "samp/client/render/font_draw.hpp"
#include <algorithm>
#include <filesystem>
#include <span>

namespace samp::client {
namespace {
using SetTransform=HRESULT(WINAPI*)(void*,const D3DMATRIX*);
using DrawSprite=HRESULT(WINAPI*)(void*,IDirect3DTexture9*,const RECT*,const void*,const void*,DWORD);
}

bool SelectionDialog::mouse_mode(bool enabled,bool immediate_restore,bool scoreboard) {
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
        if (address < kGtaSaImageBase || replacement.size() > kGtaSaImageSize ||
            static_cast<std::uint64_t>(address) + replacement.size() > kGtaSaImageEnd) return false;
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
        return true;
    };
    // 0x100a0530: class selection uses mode 2, scoreboard uses mode 3.
    // Both suppress GTA mouse processing, but mode 3 leaves 0x541df5 intact.
    // Keep the official mode-2 input patches and clearing on every tick.
    // Original mode2 enables the cursor. This host's device cursor remained
    // invisible in the live test, so Present draws the original mouse.png
    // at the same client coordinates used for the GUI hit tests.
    if(!enabled && !mouse_enabled_) return true;
    if(enabled) {
        if(original_541df5_.empty()) {
            original_541df5_=read_bytes(0x541df5,5);
            original_53f417_=read_bytes(0x53f417,5);
        }
        if(original_541df5_.size()!=5 || original_53f417_.size()!=5) return false;
        constexpr std::array<std::uint8_t,5> nops{0x90,0x90,0x90,0x90,0x90};
        constexpr std::array<std::uint8_t,4> branch{0x33,0xc0,0x0f,0x84};
        // Reassert the official bytes without accumulating identical patch
        // history records on every frame of an already active dialog.
        const auto patch=[&](std::uint32_t address,std::span<const std::uint8_t> bytes) {
            const auto current=read_bytes(address,bytes.size());
            return (current.size()==bytes.size() && std::equal(current.begin(),current.end(),bytes.begin())) ||
                   patch_bytes(address,bytes);
        };
        constexpr std::array<std::uint8_t,1> ret{0xc3};
        if(!patch(0x541df5,scoreboard?std::span<const std::uint8_t>(original_541df5_):
                                     std::span<const std::uint8_t>(nops)) ||
           !patch(0x53f417,nops) ||
           !patch(0x53f41f,branch) || !patch(0x6194a0,ret)) return false;
        *reinterpret_cast<std::uint32_t*>(0xb73424)=0;
        *reinterpret_cast<std::uint32_t*>(0xb73428)=0;
        reinterpret_cast<void(__cdecl*)()>(0x541bd0)();
        reinterpret_cast<void(__cdecl*)()>(0x541dd0)();
        device_->ShowCursor(FALSE); // The visible pointer is drawn by Present.
        restore_frames_=-1;
    } else {
        device_->ShowCursor(FALSE);
        restore_frames_=immediate_restore?0:10;
    }
    mouse_enabled_=enabled;
    return true;
}

void SelectionDialog::restore_mouse() {
    const auto patch_bytes = [](std::uint32_t address, std::span<const std::uint8_t> replacement) {
        if (address < kGtaSaImageBase || replacement.size() > kGtaSaImageSize ||
            static_cast<std::uint64_t>(address) + replacement.size() > kGtaSaImageEnd) return false;
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
        return true;
    };
    const auto patch_immediate = [&](std::uint32_t address, std::uint32_t value, std::size_t size) {
        if (size != 1 && size != 2 && size != 4) return false;
        std::uint8_t bytes[4]{};
        for (std::size_t i = 0; i < size; ++i) bytes[i] = static_cast<std::uint8_t>(value >> (8 * i));
        return patch_bytes(address, std::span<const std::uint8_t>(bytes, size));
    };
    // 0x100a0410: delay restoration for ten processing ticks after hiding UI.
    if(restore_frames_<0) return;
    if(restore_frames_--!=0) return;
    patch_bytes(0x541df5,original_541df5_);
    patch_bytes(0x53f417,original_53f417_);
    patch_immediate(0x53f47a,0xb73410,4);
    patch_immediate(0x53f49a,0xb73414,4);
    patch_immediate(0x53f4b3,0xb7340c,4);
    constexpr std::array<std::uint8_t,4> branch{0x85,0xc0,0x0f,0x8c};
    patch_bytes(0x53f41f,branch);
    *reinterpret_cast<std::uint32_t*>(0xb73424)=0;
    *reinterpret_cast<std::uint32_t*>(0xb73428)=0;
    reinterpret_cast<void(__cdecl*)()>(0x541bd0)();
    reinterpret_cast<void(__cdecl*)()>(0x541dd0)();
    *reinterpret_cast<std::uint32_t*>(0xb73424)=0;
    *reinterpret_cast<std::uint32_t*>(0xb73428)=0;
    reinterpret_cast<void(__cdecl*)()>(0x541bd0)();
    patch_immediate(0x6194a0,0xe9,1);
    device_->ShowCursor(FALSE);
}

}
