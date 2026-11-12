#pragma once
#include <cstdint>

namespace samp::client {
struct ConnectionWait {
    std::uint32_t last_attempt=0;
    std::uint32_t state=1;
};
}
