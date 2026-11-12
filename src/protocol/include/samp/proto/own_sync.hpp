// The synchronisation the client sends for its own player.
//
// Provenance
//   samp.dll 0x10004db0  the on-foot sync of the local player.  It writes the
//                        packet id 207 (0xcf) with 8 bits and then the 0x44
//                        byte block with FUN_1001fb50(&block, 0x44), and sends
//                        the stream with (stream, priority 1, reliability 7,
//                        channel 1): the unreliable sequenced sync channel.
//   docs/re/recovered/samp-dll-dl.jsonl  the recovered body, one line per
//                        function.
//
// The official client does not memcpy a struct onto the wire: the recovered
// body fills a 0x44 byte stack block field by field and then writes the whole
// block.  The block is nevertheless a plain sequence of little endian fields,
// in the order below, which is the order of the local variables of the
// recovered body:
//
//   offset  size  field
//   0x00    2     left_right   the left/right keys of the game
//   0x02    2     up_down      the up/down keys of the game
//   0x04    2     keys         the third key word
//   0x06    12    x, y, z      the position of the ped
//   0x12    16    qw, qx, qy, qz  the rotation of the ped as a quaternion
//   0x22    1     health
//   0x23    1     armour
//   0x24    1     weapon       the weapon and the flag bits of the ped
//   0x25    1     special_action
//   0x26    12    vx, vy, vz   the velocity
//   0x32    12    sx, sy, sz   the offset of the surfing ped
//   0x3e    2     surfing_id   the object or the vehicle the ped rides on
//   0x40    4     animation_id the animation the ped plays
//
// The server identifies the sender of the packet by the key of the RakNet
// connection, so the block carries no player id: samp-server.exe FUN_00497750
// resolves the player from the six byte key of the message, not from a field.

#pragma once

#include <cstddef>
#include <cstdint>

namespace samp::proto::own {

// The game packet the client sends its own on-foot state with.
inline constexpr std::uint8_t kFootSyncId = 207;  // 0xcf

// The size of the state block the packet carries, in bytes.
inline constexpr std::size_t kFootSyncBlockSize = 0x44;

// The state of the local player, one member per field of the block.
struct FootSync {
    std::uint16_t left_right = 0;
    std::uint16_t up_down = 0;
    std::uint16_t keys = 0;
    float x = 0.0F;
    float y = 0.0F;
    float z = 0.0F;
    float qw = 1.0F;
    float qx = 0.0F;
    float qy = 0.0F;
    float qz = 0.0F;
    std::uint8_t health = 0;
    std::uint8_t armour = 0;
    std::uint8_t weapon = 0;
    std::uint8_t special_action = 0;
    float vx = 0.0F;
    float vy = 0.0F;
    float vz = 0.0F;
    float sx = 0.0F;
    float sy = 0.0F;
    float sz = 0.0F;
    std::uint16_t surfing_id = 0;
    std::uint32_t animation_id = 0;
};

}  // namespace samp::proto::own
