#pragma once

#include "samp/proto/amx.hpp"

namespace samp::pawn::amx_string {
// Native AMX host APIs. Source strings are cell arrays, either unpacked or
// packed in big-endian character order. Buffers must satisfy the native API's
// pointer/capacity preconditions; these routines do not translate VM offsets.
int length(const samp::amx::cell* source, int& characters) noexcept;
int get_string(void* destination, const samp::amx::cell* source,
               int use_wide_characters, std::uint32_t capacity) noexcept;
}
