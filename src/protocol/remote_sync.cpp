#include "samp/proto/remote_sync.hpp"

namespace samp::proto::remote {

namespace {

// samp.dll 0x1000a0a0: unsigned u16 / 32767.5 - 1.
constexpr float kVelocityScale = 1.0F / 32767.5F;

// A magnitude of at most this is the zero vector.
constexpr float kZeroMagnitude = 1.0e-5F;

}  // namespace

// source adapter only; no established separate native entry
bool read_compressed_velocity(BitStream& stream, sync::Vector3& out) {
    float magnitude = 0;
    if (!stream.read(&(magnitude),4)) {
        return false;
    }
    if (magnitude <= kZeroMagnitude) {
        out = {};
        return true;
    }
    std::uint16_t x = 0;
    std::uint16_t y = 0;
    std::uint16_t z = 0;
    if (!stream.read(&(x),2) || !stream.read(&(y),2) || !stream.read(&(z),2)) {
        return false;
    }
    const float scale = magnitude;
    out.x = (static_cast<float>(x) * kVelocityScale - 1.0F) * scale;
    out.y = (static_cast<float>(y) * kVelocityScale - 1.0F) * scale;
    out.z = (static_cast<float>(z) * kVelocityScale - 1.0F) * scale;
    return true;
}

}  // namespace samp::proto::remote
