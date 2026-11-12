#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

namespace samp::client::render {
struct GuiScrollRect {
    std::int32_t left{},top{},right{},bottom{};
    bool operator==(const GuiScrollRect&) const = default;
};
#pragma pack(push,1)
struct GuiScrollbar {
    std::array<std::byte,0x4d> control_prefix{};
    std::uint8_t thumb_visible{};
    GuiScrollRect up{},down{},track{},thumb{};
    std::int32_t position{},page_size{},minimum{},maximum{};
};
#pragma pack(pop)
static_assert(offsetof(GuiScrollbar,track)==0x6e);
static_assert(offsetof(GuiScrollbar,position)==0x8e);
static_assert(sizeof(GuiScrollbar)==0x9e);

// Normal GUI preconditions: nonnegative page size, ordered range, and no
// native signed-IDIV trap in thumb arithmetic. Intermediate integers retain
// x86 wrapping; a zero/short range simply hides the thumb.
void update_gui_scrollbar_thumb(GuiScrollbar&); // 0x10084da0
void show_gui_scrollbar_item(GuiScrollbar&,std::int32_t item); // 0x10084e30
void clamp_gui_scrollbar_position(GuiScrollbar&); // 0x10084e80
} // namespace samp::client::render
