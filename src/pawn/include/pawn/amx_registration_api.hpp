#pragma once

#include "samp/proto/amx.hpp"

namespace samp::pawn::amx_registration {
// Bind unresolved entries in an initialized image's native table. A negative
// maximum other than -1 searches no entries. Existing bindings are preserved.
// Missing names return 19 after all possible bindings have been applied.
int register_natives(samp::amx::Amx* state,
                     const samp::amx::AmxNativeInfo* functions,
                     int maximum) noexcept;
}
