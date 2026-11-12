#pragma once

#include "samp/proto/amx.hpp"

namespace samp::pawn::amx_control {
int flags(const samp::amx::Amx* state, std::int16_t* result) noexcept;
int initialize_jit(samp::amx::Amx* state, void* relocation_table, void* native_code) noexcept;
int push(samp::amx::Amx* state, samp::amx::cell value) noexcept;
int set_callback(samp::amx::Amx* state, void* callback) noexcept;
int set_debug_hook(samp::amx::Amx* state, void* debug_hook) noexcept;

// Invoke a bound native and apply the original code quickening rule. The
// initialized image, index, native pointer, code and result/parameter storage
// must be valid, as required by the original SDK routine.
int callback(samp::amx::Amx* state, samp::amx::cell index,
             samp::amx::cell* result, const samp::amx::cell* parameters) noexcept;
}
