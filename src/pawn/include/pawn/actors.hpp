#pragma once

#include <array>
#include <cstdint>
#include <optional>
#include <string>

namespace samp::pawn {

inline constexpr std::uint16_t kActorPoolSize = 1000;
inline constexpr std::uint16_t kInvalidActorId = 0xffff;

class NativeHost;

struct ActorAnimation {
    std::string library;
    std::string name;
    float speed;
    bool loop;
    bool lock_x;
    bool lock_y;
    bool freeze;
    std::int32_t duration;
};

struct ActorNativeState {
    ActorNativeState(const NativeHost& host, std::int32_t model_id,
                     const std::array<float, 3>& position, float angle);

    void set_position(const std::array<float, 3>& new_position);
    void set_angle(float new_angle);
    [[nodiscard]] double squared_distance_xy(float x, float y) const;

    std::int32_t model;
    std::int32_t custom_model = 0;
    std::array<float, 3> position;
    float angle;
    float health = 100.0f;
    std::int32_t world = 0;
    std::optional<ActorAnimation> animation;
    bool invulnerable = true;
    bool destroying = false;
};

} // namespace samp::pawn
