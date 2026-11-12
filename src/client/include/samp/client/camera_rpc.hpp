#pragma once
#include <array>
#include <cstdint>

namespace samp::client {

struct CameraCommand {
    enum class Kind { Position, LookAt } kind;
    // Keep the incoming IEEE-754 words intact, including NaNs and signed zero.
    std::array<std::uint32_t,3> coordinates{};
    std::uint32_t transition = 0;
};

}
