// The synchronisation packets the server sends to the client.
//
// Provenance
//   samp.dll 0x10009370  the DL compressed rotation
//   samp.dll 0x1000a0a0  the DL compressed velocity
//   samp.dll 0x1000a420  the DL on-foot sync of a remote player
//   samp.dll 0x1000aa10  the vehicle sync of a remote player
//   samp.dll 0x10009c40  the aim sync of a remote player
//   samp.dll 0x10009b40  the bullet sync of a remote player
//   reference/openmp/openmp/Shared/NetCode/core.hpp  the field names
//
// The server sends the on-foot and the vehicle sync bit packed and the aim
// and the bullet sync as a raw block, the same block the client sends back.

#pragma once

#include <cstdint>

#include "samp/proto/bitstream.hpp"
#include "samp/proto/sync_packets.hpp"

namespace samp::proto::remote {

// A rotation of the game, the four angles of a quaternion.
struct Quaternion {
    float w = 1.0F;
    float x = 0.0F;
    float y = 0.0F;
    float z = 0.0F;
};

// The compressed velocity of the DL client (samp.dll 0x1000a0a0): a float
// magnitude and three unsigned 16-bit normalized axes.
[[nodiscard]] bool read_compressed_velocity(BitStream& stream, sync::Vector3& out);

// The on-foot sync of a remote player (samp.dll 0x1000a420).
struct FootSync {
    std::uint16_t player_id = 0;
    std::uint16_t left_right = 0;
    std::uint16_t up_down = 0;
    std::uint16_t keys = 0;
    sync::Vector3 position{};
    Quaternion rotation{};
    float health = 0.0F;
    float armour = 0.0F;
    std::uint8_t weapon = 0;
    std::uint8_t special_action = 0;
    sync::Vector3 velocity{};
    // The surfing of the player: the id of the object, the vehicle or the
    // player object, and the offset of the player on it.
    bool surfing = false;
    std::uint16_t surfing_id = 0;
    sync::Vector3 surfing_offset{};
    // The animation of the player.
    bool animated = false;
    std::uint32_t animation_id = 0;
};

// The vehicle sync of a remote player (samp.dll 0x1000aa10).
struct VehicleSync {
    std::uint16_t player_id = 0;
    std::uint16_t vehicle_id = 0;
    std::uint16_t left_right = 0, up_down = 0;
    bool siren = false, landing_gear = false;
    std::uint32_t train_speed_bits = 0;
    std::uint16_t drive_by = 0;
    std::uint16_t keys = 0;
    std::uint16_t vehicle_health = 0;
    sync::Vector3 position{};
    Quaternion rotation{};
    sync::Vector3 velocity{};
    std::uint16_t player_health_raw = 0;
    float health = 0.0F;
    float armour = 0.0F;
    std::uint8_t weapon = 0;
    bool drive_by_player = false;
    bool has_trailer = false;
    std::uint32_t trailer_id = 0;
    bool passenger = false;
    std::uint16_t passenger_id = 0;
};

// The aim sync of a remote player (samp.dll 0x10009c40): the camera mode,
// the player id and the thirty one bytes of the block.

// The bullet sync of a remote player (samp.dll 0x10009b40): the kind of the
// hit, the id of the hit and the forty bytes of the block.

// The trailer sync of a vehicle (samp.dll 0x10009e20): the type, the player
// id and the fifty four bytes of the block, the same block the client sends.

// One marker of a remote player (samp.dll 0x10009f10).
struct Marker {
    std::uint16_t player_id = 0;
    // The bit of the packet says whether the player still carries the
    // marker; when it is clear the marker is taken away.
    bool present = false;
    std::uint16_t x = 0;
    std::uint16_t y = 0;
    std::uint16_t z = 0;
};

}  // namespace samp::proto::remote
