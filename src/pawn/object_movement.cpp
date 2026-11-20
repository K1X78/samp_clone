#include "pawn/natives.hpp"

#include <cmath>

namespace samp::pawn {

// Official: FUN_0049d8d0 @ 0x0049d8d0 (samp-server.exe)
double ObjectNativeState::remaining_move_distance() const {
    const double dx = static_cast<double>(position[0]) - move_target[0];
    const double dy = static_cast<double>(position[1]) - move_target[1];
    const double dz = static_cast<double>(position[2]) - move_target[2];
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

// Official: FUN_0049d910 @ 0x0049d910 (samp-server.exe)
float ObjectNativeState::start_move(const std::array<float, 3>& target, float speed,
                                    const std::array<float, 3>& target_rotation) {
    move_target = target;
    move_speed = speed;
    if (target_rotation[0] > -999.0f && target_rotation[1] > -999.0f && target_rotation[2] > -999.0f)
        rotation = target_rotation;

    moving = true;
    const double dx = static_cast<double>(target[0]) - position[0];
    const double dy = static_cast<double>(target[1]) - position[1];
    const double dz = static_cast<double>(target[2]) - position[2];
    return static_cast<float>(std::sqrt(dz * dz + dy * dy + dx * dx) / speed);
}

// Official: FUN_0049dcc0 @ 0x0049dcc0 (samp-server.exe)
bool ObjectNativeState::advance_move(float elapsed_seconds) {
    if (!moving) return false;

    const float distance_this_tick = elapsed_seconds * move_speed;
    const double remaining = remaining_move_distance();
    if (remaining <= distance_this_tick) {
        moving = false;
        position = move_target;
        return true;
    }

    const double fraction = 1.0 / (remaining / distance_this_tick);
    for (std::size_t axis = 0; axis < position.size(); ++axis) {
        const double start = position[axis];
        position[axis] = static_cast<float>(start + (move_target[axis] - start) * fraction);
    }
    return false;
}

} // namespace samp::pawn
