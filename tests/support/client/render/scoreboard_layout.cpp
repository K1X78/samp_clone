#include "samp/client/render/scoreboard_layout.hpp"

#include <bit>
#include <cmath>

namespace samp::client::render {
// The official helper consumes the float in ST(0), truncates through a signed
// 64-bit integer and returns its low dword in EAX.
// Official: FUN_100f9324 @ 0x100f9324 (samp.dll)
std::int32_t truncate_coordinate(float value) {
    // The native x87 helper converts to an int64 and the caller consumes EAX.
    // An invalid conversion yields INT64_MIN, whose low 32 bits are zero.
    const auto wide = static_cast<double>(value);
    if (!std::isfinite(wide) || wide < -9223372036854775808.0 || wide >= 9223372036854775808.0)
        return 0;
    const auto integer = static_cast<std::int64_t>(wide);
    return std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(integer));
}
} // namespace samp::client::render
