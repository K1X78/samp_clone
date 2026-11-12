// Protocol field types and variable-length string codecs shared by the
// client and server.

#pragma once

#include <cstdint>

#include "samp/proto/bitstream.hpp"

namespace samp::proto {

struct Vec2 {
    float x = 0.0f;
    float y = 0.0f;
};

struct Vec3 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
};

struct Quat {
    float w = 0.0f;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
};

inline constexpr int kVehiclePoolSize = 2000;
inline constexpr int kObjectPoolSize = 2000;
inline constexpr int kMaxPlayerName = 24;

// ---------------------------------------------------------------- vectors

// openmp-network/bitstream.hpp:290-294.  Plain 3 x float32 (96 bits).
// openmp-network/bitstream.hpp:296-300.  Plain 3 x float32 plus range checks:
//   |x| < 20000, |y| < 20000, -1000 < z < 200000, all finite.
// openmp-network/bitstream.hpp:302-306.  Plain 3 x float32 plus
// dot(v, v) <= 10000 (i.e. |v| <= 100) and finiteness.
// openmp-network/bitstream.hpp:1410-1420.
//   float32 magnitude (32 bits)
//   then, only when magnitude > 1e-5, three WriteCompressed(float) (48 bits)
// => 80 bits, or 32 bits when the magnitude is below the epsilon.
// ------------------------------------------------------------- percent pair

}  // namespace samp::proto
