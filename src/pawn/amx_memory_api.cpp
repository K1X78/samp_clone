#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_host_api.hpp"

#include <cstring>

namespace samp::pawn::amx_memory {
// samp-server.exe 0x403100: the free HEA..STK gap, negative offsets and the
// logical stack top are rejected. Only the start offset is checked; imposing
// cell alignment or an extra four-byte extent check changes the native API.
// Official: FUN_00403100 @ 0x00403100 (samp-server.exe)
int get_address(samp::amx::Amx* state, samp::amx::cell address,
                samp::amx::cell** physical) noexcept {
    std::uint32_t data_offset = 0;
    if (state->data == nullptr)
        std::memcpy(&data_offset, static_cast<const std::uint8_t*>(state->base) + 0x10, sizeof(data_offset));
    const auto base = state->data != nullptr ? reinterpret_cast<std::uintptr_t>(state->data)
        : reinterpret_cast<std::uintptr_t>(state->base) + data_offset;
    if ((address < state->hea || address >= state->stk) && address >= 0 && address < state->stp) {
        *physical = reinterpret_cast<samp::amx::cell*>(base + static_cast<std::uint32_t>(address));
        return 0;
    }
    *physical = nullptr;
    return 5;
}

// samp-server.exe 0x403150: LEA/subtraction use wrapped 32-bit arithmetic.
// The comparison is unsigned, outputs stay untouched on error 16, and the
// routine accepts negative/wrapped requests that pass this exact margin test.
// Official: FUN_00403150 @ 0x00403150 (samp-server.exe)
int allot(samp::amx::Amx* state, int cells, samp::amx::cell* address,
          samp::amx::cell** physical) noexcept {
    std::uint32_t data_offset = 0;
    if (state->data == nullptr)
        std::memcpy(&data_offset, static_cast<const std::uint8_t*>(state->base) + 0x10, sizeof(data_offset));
    const auto base = state->data != nullptr ? reinterpret_cast<std::uintptr_t>(state->data)
        : reinterpret_cast<std::uintptr_t>(state->base) + data_offset;
    const auto bytes = static_cast<std::uint32_t>(cells) * 4u;
    const auto distance = static_cast<std::uint32_t>(state->stk) - bytes -
                          static_cast<std::uint32_t>(state->hea);
    if (distance < 64) return 16;
    *address = state->hea;
    *physical = reinterpret_cast<samp::amx::cell*>(base + static_cast<std::uint32_t>(state->hea));
    state->hea = static_cast<samp::amx::cell>(static_cast<std::uint32_t>(state->hea) + bytes);
    return 0;
}

// samp-server.exe 0x4031b0: this is a signed comparison, with no HLW check.
// Official: FUN_004031b0 @ 0x004031b0 (samp-server.exe)
int release(samp::amx::Amx* state, samp::amx::cell address) noexcept {
    if (address < state->hea) state->hea = address;
    return 0;
}

// Shared range-end check used by the official string/property natives.
// Official: FUN_004061c0 @ 0x004061c0 (samp-server.exe)
int validate(samp::amx::Amx* state, samp::amx::cell address) noexcept {
    samp::amx::cell* physical = nullptr;
    const int status = get_address(state, address, &physical);
    if (status != 0) amx_host::raise_error(*state, status);
    return status;
}
}
