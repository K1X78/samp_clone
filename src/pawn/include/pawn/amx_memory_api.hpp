#pragma once

#include "samp/proto/amx.hpp"

namespace samp::pawn::amx_memory {
// Raw 0.3.DL AMX host APIs; output pointers must be writable. The state uses
// byte offsets and may select an external DATA block through Amx::data.
int get_address(samp::amx::Amx* state, samp::amx::cell address,
                samp::amx::cell** physical) noexcept;
int allot(samp::amx::Amx* state, int cells, samp::amx::cell* address,
          samp::amx::cell** physical) noexcept;
int release(samp::amx::Amx* state, samp::amx::cell address) noexcept;
int validate(samp::amx::Amx* state, samp::amx::cell address) noexcept;
}
