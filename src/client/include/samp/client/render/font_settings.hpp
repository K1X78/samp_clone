#pragma once

#include <cstdint>

namespace samp::client::render {

// The values read by the 0.3.DL font-setting routines. The injected client
// currently uses the binary defaults because it has no font config source.
struct FontSettingsHost {
    std::int32_t size_adjustment = 0;
    std::int32_t weight_mode = 0;
    bool configuration_available = false;
    const char* configured_face = nullptr;
};

}  // namespace samp::client::render
