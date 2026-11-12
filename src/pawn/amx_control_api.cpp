#include "pawn/amx_control_api.hpp"

#include <cstring>

namespace samp::pawn::amx_control {

// samp-server.exe 0x401030. This API's signed byte-version checks differ from
// amx_Init: file versions above 8 and AMX versions below 6 return error 18.
// Official: FUN_00401030 @ 0x00401030 (samp-server.exe)
int flags(const samp::amx::Amx* state, std::int16_t* result) noexcept {
    const auto read = []<typename Value>(std::uintptr_t address) {
        Value value;
        std::memcpy(&value, reinterpret_cast<const void*>(address), sizeof(value));
        return value;
    };
    *result = 0;
    if (state == nullptr) return 17;
    const auto image = reinterpret_cast<std::uintptr_t>(state->base);
    if (read.operator()<std::uint16_t>(image + 4) != 0xf1e0) return 17;
    if (read.operator()<std::int8_t>(image + 6) > 8 || read.operator()<std::int8_t>(image + 7) < 6) return 18;
    *result = read.operator()<std::int16_t>(image + 8);
    return 0;
}

// samp-server.exe 0x401400 is an unconditional return of error 24. None of
// the supplied state or JIT buffers is inspected or changed.
// Official: FUN_00401400 @ 0x00401400 (samp-server.exe)
int initialize_jit(samp::amx::Amx*, void*, void*) noexcept { return 24; }

// samp-server.exe 0x401c50 checks the signed, wrapped HEA+64 against the OLD
// STK. It then increments PARAMCOUNT, lowers STK by one cell, and writes it.
// Official: FUN_00401c50 @ 0x00401c50 (samp-server.exe)
int push(samp::amx::Amx* state, samp::amx::cell value) noexcept {
    const auto read = []<typename Value>(std::uintptr_t address) {
        Value value;
        std::memcpy(&value, reinterpret_cast<const void*>(address), sizeof(value));
        return value;
    };
    const auto write = []<typename Value>(std::uintptr_t address, Value value) {
        std::memcpy(reinterpret_cast<void*>(address), &value, sizeof(value));
    };
    const auto old_stack = state->stk;
    const auto margin = static_cast<samp::amx::cell>(static_cast<std::uint32_t>(state->hea) + 64u);
    if (margin > old_stack) return 3;
    const auto image = reinterpret_cast<std::uintptr_t>(state->base);
    const auto data = state->data != nullptr
        ? reinterpret_cast<std::uintptr_t>(state->data)
        : image + read.operator()<std::uint32_t>(image + 0x10);
    const auto stack = static_cast<std::uint32_t>(old_stack) - 4u;
    state->paramcount = static_cast<std::int32_t>(static_cast<std::uint32_t>(state->paramcount) + 1u);
    state->stk = static_cast<samp::amx::cell>(stack);
    write(data + stack, value);
    return 0;
}

// samp-server.exe 0x4030d0 / 0x4030e0: null pointers are valid assignments.
// Official: FUN_004030d0 @ 0x004030d0 (samp-server.exe)
int set_callback(samp::amx::Amx* state, void* function) noexcept {
    state->callback = function;
    return 0;
}
// Official: FUN_004030e0 @ 0x004030e0 (samp-server.exe)
int set_debug_hook(samp::amx::Amx* state, void* function) noexcept {
    state->debug = function;
    return 0;
}

// samp-server.exe 0x401070. Result storage occurs before the final error
// read, which matters when the caller's result aliases AMX.error.
// Official: FUN_00401070 @ 0x00401070 (samp-server.exe)
int callback(samp::amx::Amx* state, samp::amx::cell index,
             samp::amx::cell* result, const samp::amx::cell* parameters) noexcept {
    const auto read = []<typename Value>(std::uintptr_t address) {
        Value value;
        std::memcpy(&value, reinterpret_cast<const void*>(address), sizeof(value));
        return value;
    };
    const auto write = []<typename Value>(std::uintptr_t address, Value value) {
        std::memcpy(reinterpret_cast<void*>(address), &value, sizeof(value));
    };
    const auto image = reinterpret_cast<std::uintptr_t>(state->base);
    const auto stride = static_cast<std::uint32_t>(read.operator()<std::int16_t>(image + 0x0a));
    const auto offset = stride * static_cast<std::uint32_t>(index) + read.operator()<std::uint32_t>(image + 0x24);
    const auto native = read.operator()<std::uint32_t>(image + offset);
    const auto token = state->sysreq_d;
    if (token != 0) {
        const auto operand = image + read.operator()<std::uint32_t>(image + 0x0c) +
                             static_cast<std::uint32_t>(state->cip) - 4u;
        if (read.operator()<samp::amx::cell>(operand) != 0x7a) {
            write(operand - 4u, token);
            write(operand, native);
        }
    }
    state->error = 0;
    const auto value = reinterpret_cast<samp::amx::AmxNative>(native)(state, parameters);
    *result = value;
    return state->error;
}
}
