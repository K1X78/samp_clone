#pragma once
#include "samp/proto/amx.hpp"
#include <span>
#include <string>

namespace samp::pawn {
// SA-MP's formatter consumes Pawn varargs as references to cells, not values.
std::string format_cells(samp::amx::Amx* state, const samp::amx::cell* format,
                         std::span<const samp::amx::cell> arguments);
}
