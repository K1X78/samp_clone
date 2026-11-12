// The world-text table of the shipped samp.dll.
//
// The official table layout and function boundaries are recovered from the
// shipped binary; its address-indexed reference is under
// docs/asm/pseudocode/samp.dll/functions.
//
// The official module keeps a table of 2048 ("0x800") records of 29 ("0x1d")
// bytes each, followed by a parallel array of 2048 dwords that marks the
// occupied slots.  A record is
//
//   +0x00  char*   the heap copy of the label text
//   +0x04  dword   the 24 bit colour, stored byte swapped
//   +0x08  float   x
//   +0x0c  float   y
//   +0x10  float   z
//   +0x14  float   the draw radius
//   +0x18  byte    the label flag
//   +0x19  ushort  the first entity id (0xffff = none)
//   +0x1b  ushort  the second entity id (0xffff = none)
//
// The replica keeps the same record layout and the same slot semantics; the
// GTA:SA calls the render loop makes are collected behind WorldTextHost so
// that the table itself can be unit tested.

#pragma once

#include <cstddef>
#include <cstdint>
#include <memory>
#include <vector>

namespace samp::client {

// The number of slots of the official table.
inline constexpr std::size_t kWorldTextSlots = 0x800;
// The size of one official record, in bytes.
inline constexpr std::size_t kWorldTextRecordSize = 0x1d;
#pragma pack(push, 1)
struct WorldTextRecord {
    const char* name = nullptr;   // +0x00
    std::uint32_t colour = 0;     // +0x04
    float x = 0.0f;               // +0x08
    float y = 0.0f;               // +0x0c
    float z = 0.0f;               // +0x10
    float radius = 0.0f;          // +0x14
    std::uint8_t flag = 0;        // +0x18
    std::uint16_t id1 = 0;        // +0x19
    std::uint16_t id2 = 0;        // +0x1b
};
#pragma pack(pop)

static_assert(sizeof(WorldTextRecord) == kWorldTextRecordSize,
              "the official world-text record is 29 bytes");
static_assert(offsetof(WorldTextRecord, name) == 0x00, "the name pointer is the first field");
static_assert(offsetof(WorldTextRecord, colour) == 0x04, "the colour follows the name pointer");
static_assert(offsetof(WorldTextRecord, x) == 0x08, "x follows the colour");
static_assert(offsetof(WorldTextRecord, y) == 0x0c, "y follows x");
static_assert(offsetof(WorldTextRecord, z) == 0x10, "z follows y");
static_assert(offsetof(WorldTextRecord, radius) == 0x14, "the radius follows z");
static_assert(offsetof(WorldTextRecord, flag) == 0x18, "the flag follows the radius");
static_assert(offsetof(WorldTextRecord, id1) == 0x19, "the first id follows the flag");
static_assert(offsetof(WorldTextRecord, id2) == 0x1b, "the second id follows the first one");

// The world-text table of the injected module.
class WorldTextTable {
public:
    WorldTextTable() = default;
    ~WorldTextTable();
    WorldTextTable(WorldTextTable&&) noexcept = default;
    WorldTextTable& operator=(WorldTextTable&&) noexcept = default;

    WorldTextTable(const WorldTextTable&) = delete;
    WorldTextTable& operator=(const WorldTextTable&) = delete;

private:
    std::vector<WorldTextRecord> records_ = std::vector<WorldTextRecord>(kWorldTextSlots);
    std::vector<std::uint32_t> used_ = std::vector<std::uint32_t>(kWorldTextSlots,0);
    std::vector<std::unique_ptr<char[]>> names_ =
        std::vector<std::unique_ptr<char[]>>(kWorldTextSlots);
};

}  // namespace samp::client
