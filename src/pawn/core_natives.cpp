#include "pawn/core_natives.hpp"

#include "pawn/amx_host_api.hpp"
#include "pawn/amx_lookup_api.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_string_api.hpp"

#include <bit>
#include <cctype>
#include <cstring>
#include <ctime>

#ifdef _WIN32
#include <windows.h>
#endif

namespace samp::pawn::core_natives {

// Official: FUN_004045b0 @ 0x004045b0 (samp-server.exe)
cell argument_count(samp::amx::Amx* state, std::span<const cell>) {
    auto* data = static_cast<std::uint8_t*>(state->data);
    if (data == nullptr) {
        std::uint32_t offset;
        std::memcpy(&offset, static_cast<std::uint8_t*>(state->base) + 0x10, 4);
        data = static_cast<std::uint8_t*>(state->base) + offset;
    }
    std::uint32_t bytes;
    std::memcpy(&bytes, data + static_cast<std::uint32_t>(state->frm) + 8u, 4);
    return static_cast<cell>(bytes >> 2);
}

// Frame arguments contain DATA-relative references, including scalar args.
// Official: FUN_004045d0 @ 0x004045d0 (samp-server.exe)
cell get_argument(samp::amx::Amx* state, std::span<const cell> args) {
    auto* data = static_cast<std::uint8_t*>(state->data);
    if (data == nullptr) {
        std::uint32_t offset;
        std::memcpy(&offset, static_cast<std::uint8_t*>(state->base) + 0x10, 4);
        data = static_cast<std::uint8_t*>(state->base) + offset;
    }
    const auto slot = static_cast<std::uint32_t>(state->frm) +
                      static_cast<std::uint32_t>(args[0]) * 4u + 12u;
    std::uint32_t reference;
    std::memcpy(&reference, data + slot, 4);
    cell result;
    std::memcpy(&result, data + reference + static_cast<std::uint32_t>(args[1]) * 4u, 4);
    return result;
}

// The original validates negativity and the free gap, without an STP check.
// Official: FUN_00404600 @ 0x00404600 (samp-server.exe)
cell set_argument(samp::amx::Amx* state, std::span<const cell> args) {
    auto* data = static_cast<std::uint8_t*>(state->data);
    if (data == nullptr) {
        std::uint32_t offset;
        std::memcpy(&offset, static_cast<std::uint8_t*>(state->base) + 0x10, 4);
        data = static_cast<std::uint8_t*>(state->base) + offset;
    }
    const auto slot = static_cast<std::uint32_t>(state->frm) +
                      static_cast<std::uint32_t>(args[0]) * 4u + 12u;
    std::uint32_t reference;
    std::memcpy(&reference, data + slot, 4);
    const auto address = std::bit_cast<cell>(reference + static_cast<std::uint32_t>(args[1]) * 4u);
    if (address < 0 || (address >= state->hea && address < state->stk)) return 0;
    std::memcpy(data + static_cast<std::uint32_t>(address), &args[2], 4);
    return 1;
}

// Official: FUN_00404650 @ 0x00404650 (samp-server.exe)
cell heap_space(samp::amx::Amx* state, std::span<const cell>) {
    return std::bit_cast<cell>(static_cast<std::uint32_t>(state->stk) -
                               static_cast<std::uint32_t>(state->hea));
}

// Official: FUN_00404660 @ 0x00404660 (samp-server.exe)
cell function_index(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &source);
    int length = 0;
    amx_string::length(source, length);
    if (length >= 64) return amx_host::raise_error(*state, 10);
    char name[64];
    amx_string::get_string(name, source, 0, 0x7fffffffu);
    int index = -1;
    return amx_lookup::find_public(state, name, &index) == 0 ? index : -1;
}

// Official: FUN_004046f0 @ 0x004046f0 (samp-server.exe)
cell swap_characters(samp::amx::Amx*, std::span<const cell> args) {
    const auto value = static_cast<std::uint32_t>(args[0]);
    return std::bit_cast<cell>((value << 24) | ((value & 0x0000ff00u) << 8) |
                               ((value & 0x00ff0000u) >> 8) | (value >> 24));
}

// This is USER32!CharLowerA, rather than the C locale's tolower.
// Official: FUN_00404730 @ 0x00404730 (samp-server.exe)
cell lower(samp::amx::Amx*, std::span<const cell> args) {
#ifdef _WIN32
    return static_cast<cell>(reinterpret_cast<std::uintptr_t>(
        CharLowerA(reinterpret_cast<char*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0]))))));
#else
    return args[0] >= 0 && args[0] <= 255 ? std::tolower(args[0]) : args[0];
#endif
}

// Official: FUN_00404740 @ 0x00404740 (samp-server.exe)
cell upper(samp::amx::Amx*, std::span<const cell> args) {
#ifdef _WIN32
    return static_cast<cell>(reinterpret_cast<std::uintptr_t>(
        CharUpperA(reinterpret_cast<char*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0]))))));
#else
    return args[0] >= 0 && args[0] <= 255 ? std::toupper(args[0]) : args[0];
#endif
}

// Official: FUN_00404750 @ 0x00404750 (samp-server.exe)
cell minimum(samp::amx::Amx*, std::span<const cell> args) {
    return args[0] <= args[1] ? args[0] : args[1];
}

// Official: FUN_00404770 @ 0x00404770 (samp-server.exe)
cell maximum(samp::amx::Amx*, std::span<const cell> args) {
    return args[0] >= args[1] ? args[0] : args[1];
}

// Even reversed bounds return a clamped value after raising native error 10.
// Official: FUN_00404790 @ 0x00404790 (samp-server.exe)
cell clamp(samp::amx::Amx* state, std::span<const cell> args) {
    if (args[1] > args[2]) amx_host::raise_error(*state, 10);
    if (args[0] < args[1]) return args[1];
    if (args[0] > args[2]) return args[2];
    return args[0];
}

// The core library shares this seed across VMs (official global 0x4CA084).
std::uint32_t random_state = 0xcaa938dbu;

// The full 31-bit generator and unsigned modulus differ from C rand().
// Official: FUN_00404ac0 @ 0x00404ac0 (samp-server.exe)
cell random(samp::amx::Amx*, std::span<const cell> args) {
    if (random_state == 0xcaa938dbu)
        random_state = static_cast<std::uint32_t>(std::time(nullptr));
    const auto previous = random_state;
    random_state = previous * 0x41c64e6du + 0x3039u;
    const auto low = previous & 0xffffu;
    auto value = (((low * 0x4e6du + 0x3039u) >> 16) -
                  (previous >> 16) * 0x3e39b193u + low * 0x41c6u) & 0x7fffffffu;
    const auto limit = static_cast<std::uint32_t>(args[0]);
    if (limit != 0) value %= limit;
    return static_cast<cell>(value);
}

}
