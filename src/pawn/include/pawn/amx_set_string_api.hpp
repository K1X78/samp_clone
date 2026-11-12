#pragma once

#include "samp/proto/amx.hpp"

namespace samp::pawn::amx_string {
// Raw AMX host API at samp-server.exe 0x403250. The source is a terminated
// byte or 16-bit character string. Capacity is measured in destination cells.
// The caller supplies the readable/writable memory required by the native
// routine, including its unusual zero-capacity behavior.
int set_string(samp::amx::cell* destination, const void* source,
               int pack, int use_wide_characters, std::uint32_t capacity) noexcept;
}
