#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <functional>

namespace samp::client::render {

struct DeathRect {
    std::int32_t left{}, top{}, right{}, bottom{};
    bool operator==(const DeathRect&) const = default;
};

#pragma pack(push, 1)
struct DeathEntry {
    char killer[25]{};
    char victim[25]{};
    std::uint32_t killer_colour{}, victim_colour{};
    std::uint8_t reason{};
};

// samp.dll 0.3.DL uses five packed 59-byte rows. The unaligned pointer fields
// intentionally retain their native offsets in the Win32 build.
struct DeathWindow {
    std::int32_t visible{};
    std::array<DeathEntry, 5> entries{};
    std::int32_t longest_name_width{}, icon_width{}, icon_height{};
    void* name_font{};
    void* weapon_font{};
    void* outline_font{};
    void* sprite{};
    void* device{};
    std::int32_t auxiliary_created{};
    void* auxiliary_font{};
    void* auxiliary_outline_font{};
};
#pragma pack(pop)
static_assert(sizeof(DeathEntry) == 59);
static_assert(offsetof(DeathWindow, longest_name_width) == 0x12b);
static_assert(offsetof(DeathWindow, name_font) == 0x137);
static_assert(sizeof(void*) != 4 || sizeof(DeathWindow) == 0x157);

struct DeathFont {
    std::int32_t height{};
    std::uint32_t width{}, weight{}, mip_levels{};
    std::int32_t italic{};
    std::uint32_t charset{}, output_precision{}, quality{}, pitch_and_family{};
    const char* face{};
};

struct DeathWindowHost {
    std::function<void(void*)> release;
    std::function<void(void*,std::uint32_t)> begin;
    std::function<void(void*)> end;
    std::function<void(void*,void*,const char*,std::int32_t,DeathRect&,
                       std::uint32_t,std::uint32_t)> draw;
    std::function<std::int32_t()> configured_height;  // 0x100c69a0
    std::function<std::uint32_t()> configured_weight; // 0x100c6a00
    std::function<const char*()> configured_face;     // 0x100c6a30
    std::function<void(void*,const DeathFont&,void*&)> create_font;
    std::function<void(void*,void*&)> create_sprite;
};

void render_death_window(DeathWindow&, DeathWindowHost&, std::int32_t screen_width,
                         std::int32_t screen_height);
void initialize_death_window(DeathWindow&, DeathWindowHost&, void* device);
} // namespace samp::client::render
