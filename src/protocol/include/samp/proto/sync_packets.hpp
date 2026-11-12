// The synchronisation packets the client sends to the server.
//
// Provenance
//   samp.dll 0x10005210  the aim sync builder      (packet id 203)
//   samp.dll 0x10004f00  the on-foot sync builder  (packet id 207)
//   samp.dll 0x10006bc0  the bullet sync builder   (packet id 206)
//   samp.dll 0x10005590  the aim and shoot builder (packet id 211)
//   samp.dll 0x100053d0  the trailer sync builder  (packet id 210)
//   samp.dll 0x10004d30  the unoccupied sync       (packet id 209)
//   reference/openmp/openmp/Shared/NetCode/core.hpp    the field names
//
// The official client does not send these packets through the bit stream: it
// writes the packet id and then a block of raw bytes.  The layouts below are
// the ones the recovered builders write, byte for byte, and the comments give
// the offset of every field.
//
// The player id is not part of the blocks: the server adds the id of the peer
// the packet came from.

#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace samp::proto::sync {

// A point in the world.
struct Vector3 {
    float x = 0.0F;
    float y = 0.0F;
    float z = 0.0F;
};

// A rotation, the four angles of the game.
struct Vector4 {
    float x = 0.0F;
    float y = 0.0F;
    float z = 0.0F;
    float w = 0.0F;
};

// The aim sync, packet id 203 (samp.dll 0x10005210).  31 bytes.
//
//   0   1   the camera mode
//   1   12  the front vector of the camera
//   13  12  the position of the camera
//   25  4   the aim, the height the player looks at
//   29  1   the camera zoom (the low six bits) and the weapon state (the high
//             two bits)
//   30  1   the aspect ratio
struct AimSync {
    std::uint8_t camera_mode = 0;
    Vector3 camera_front_vector{};
    Vector3 camera_position{};
    float aim_height = 0.0F;
    std::uint8_t zoom_and_weapon_state = 0;
    std::uint8_t aspect_ratio = 0;
};

// The on-foot sync, packet id 207 (samp.dll 0x10004f00).  68 bytes.
//
//   0   2   the steering, left and right
//   2   2   the throttle and the brake
//   4   2   the state of the keys
//   6   12  the position of the player
//   18  16  the rotation of the player
//   34  1   the weapon
//   35  1   the additional key of the weapon
//   36  1   the weapon state (the low six bits) and the camera zoom (the high
//             two bits)
//   37  1   the special action
//   38  12  the velocity of the player
//   50  12  the state of the vehicle the player is in
//   62  2   the fourth value of the vehicle state
//   64  4   the animation
struct OnFootSync {
    std::uint16_t left_right = 0;
    std::uint16_t up_down = 0;
    std::uint16_t keys = 0;
    Vector3 position{};
    Vector4 rotation{};
    std::uint8_t weapon = 0;
    std::uint8_t additional_key = 0;
    std::uint8_t weapon_state_and_zoom = 0;
    std::uint8_t special_action = 0;
    Vector3 velocity{};
    Vector3 vehicle_state{};
    std::uint16_t vehicle_state_extra = 0;
    std::uint32_t animation = 0;
};

// The bullet sync, packet id 206 (samp.dll 0x10006bc0).  40 bytes.
//
//   0   1   the kind of the hit: 1 for a player, 2 for a vehicle, 3 for an
//             object
//   1   2   the id of the hit
//   3   12  the origin of the shot
//   15  12  the position of the hit
//   27  12  the offset of the hit
//   39  1   the weapon
struct BulletSync {
    std::uint8_t hit_type = 0;
    std::uint16_t hit_id = 0;
    Vector3 origin{};
    Vector3 hit_position{};
    Vector3 offset{};
    std::uint8_t weapon = 0;
};

// The aim and shoot packet, packet id 211 (samp.dll 0x10005590).  24 bytes.
//
//   0   2   the id of the target, 0xFFFF when the player aims at nothing
//   2   1   the weapon state (the low six bits) and the camera zoom (the high
//             two bits)
//   3   1   the weapon
//   4   2   the steering, left and right
//   6   1   the additional key of the weapon
//   7   1   the second weapon
//   8   2   the state of the keys
//   10  2   the throttle and the brake
//   12  12  the position of the player
struct AimShootSync {
    std::uint16_t target_id = 0xFFFF;
    std::uint8_t weapon_state_and_zoom = 0;
    std::uint8_t weapon = 0;
    std::uint16_t left_right = 0;
    std::uint8_t additional_key = 0;
    std::uint8_t second_weapon = 0;
    std::uint16_t keys = 0;
    std::uint16_t up_down = 0;
    Vector3 position{};
};

// The trailer sync, packet id 210 (samp.dll 0x100053d0).  54 bytes.
//
//   0   2   the id of the trailer
//   2   12  the position of the trailer
//   14  12  the rotation of the trailer
//   26  4   the fourth angle of the rotation
//   30  12  the velocity of the trailer
//   42  12  the state of the trailer
struct TrailerSync {
    std::uint16_t vehicle_id = 0;
    Vector3 position{};
    Vector3 rotation{};
    float rotation_extra = 0.0F;
    Vector3 velocity{};
    std::uint8_t trailer_state[12] = {};
};

// The unoccupied sync, packet id 209 (samp.dll 0x10004d30).
struct UnoccupiedSync {
    std::uint16_t vehicle_id = 0;
    Vector3 position{};
    Vector3 rotation{};
    Vector3 velocity{};
    std::uint8_t vehicle_state[12] = {};
    std::uint32_t animation = 0;
};

// The packet ids of the synchronisation packets.
inline constexpr std::uint8_t kIdAimSync = 203;
inline constexpr std::uint8_t kIdBulletSync = 206;
inline constexpr std::uint8_t kIdOnFootSync = 207;
inline constexpr std::uint8_t kIdUnoccupiedSync = 209;
inline constexpr std::uint8_t kIdTrailerSync = 210;
inline constexpr std::uint8_t kIdAimShootSync = 211;

// The encoders.  Every one of them returns the packet: the id and the raw
// block, exactly as the official client writes it.
}  // namespace samp::proto::sync
