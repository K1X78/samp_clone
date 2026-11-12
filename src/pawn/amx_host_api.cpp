#include "pawn/amx_host_api.hpp"

#include <cstring>

namespace samp::pawn::amx_host {

// samp-server.exe 0x401a80. Tag zero is not rejected: it matches the first
// unused slot, which is observable even if that slot's pointer is non-null.
// Official: FUN_00401a80 @ 0x00401a80 (samp-server.exe)
int get_user_data(const samp::amx::Amx& state, std::int32_t tag, void*& value) noexcept {
    for (int slot = 0; slot < 4; ++slot) {
        if (state.usertags[slot] == tag) {
            value = state.userdata[slot];
            return 0;
        }
    }
    return 23;
}

// samp-server.exe 0x401ac0. A matching tag takes precedence over an earlier
// empty slot; collapsing these two searches changes replacement behavior.
// Official: FUN_00401ac0 @ 0x00401ac0 (samp-server.exe)
int set_user_data(samp::amx::Amx& state, std::int32_t tag, void* value) noexcept {
    int selected = -1;
    for (int slot = 0; slot < 4; ++slot) {
        if (state.usertags[slot] == tag) {
            selected = slot;
            break;
        }
    }
    if (selected < 0) {
        for (int slot = 0; slot < 4; ++slot) {
            if (state.usertags[slot] == 0) {
                selected = slot;
                break;
            }
        }
    }
    if (selected < 0) return 20;
    state.usertags[selected] = tag;
    state.userdata[selected] = value;
    return 0;
}

// samp-server.exe 0x4030f0. This stores every 32-bit value, including zero and
// non-enumerated error numbers, and always returns success.
// Official: FUN_004030f0 @ 0x004030f0 (samp-server.exe)
int raise_error(samp::amx::Amx& state, int error) noexcept {
    state.error = error;
    return 0;
}

// samp-server.exe 0x401570.
// Official: FUN_00401570 @ 0x00401570 (samp-server.exe)
int native_count(const samp::amx::Amx& state, int& count) noexcept {
    samp::amx::AmxHeader header{};
    std::memcpy(&header, state.base, sizeof(header));
    const auto extent = static_cast<std::int32_t>(static_cast<std::uint32_t>(header.libraries) -
                                                  static_cast<std::uint32_t>(header.natives));
    count = extent / header.defsize;
    return 0;
}

// samp-server.exe 0x401690.
// Official: FUN_00401690 @ 0x00401690 (samp-server.exe)
int public_count(const samp::amx::Amx& state, int& count) noexcept {
    samp::amx::AmxHeader header{};
    std::memcpy(&header, state.base, sizeof(header));
    const auto extent = static_cast<std::int32_t>(static_cast<std::uint32_t>(header.natives) -
                                                  static_cast<std::uint32_t>(header.publics));
    count = extent / header.defsize;
    return 0;
}

// samp-server.exe 0x4017d0.
// Official: FUN_004017d0 @ 0x004017d0 (samp-server.exe)
int public_variable_count(const samp::amx::Amx& state, int& count) noexcept {
    samp::amx::AmxHeader header{};
    std::memcpy(&header, state.base, sizeof(header));
    const auto extent = static_cast<std::int32_t>(static_cast<std::uint32_t>(header.tags) -
                                                  static_cast<std::uint32_t>(header.pubvars));
    count = extent / header.defsize;
    return 0;
}

// samp-server.exe 0x401920. Versions 5/6 end the tag table at COD; version 7
// introduced a separate name table. Below version 5, count is zeroed and the
// native returns AMX_ERR_VERSION (18), not success.
// Official: FUN_00401920 @ 0x00401920 (samp-server.exe)
int tag_count(const samp::amx::Amx& state, int& count) noexcept {
    samp::amx::AmxHeader header{};
    std::memcpy(&header, state.base, sizeof(header));
    const auto version = static_cast<std::int8_t>(header.file_version);
    if (version < 5) {
        count = 0;
        return 18;
    }
    const auto table_end = version < 7 ? header.cod : header.nametable;
    const auto extent = static_cast<std::int32_t>(static_cast<std::uint32_t>(table_end) -
                                                  static_cast<std::uint32_t>(header.tags));
    count = extent / header.defsize;
    return 0;
}
}
