#pragma once

#include "samp/client/render/gui_list_selection.hpp"
#include <functional>

namespace samp::client::render {
struct GuiListHitRectangle {
    std::int32_t left{},top{},right{},bottom{};
};
// Additional semantic fields used by the list mouse handler. Native offsets
// and complete-prefix comparison are kept in the independent x86 fixture.
struct GuiListMouse : GuiListSelection {
    std::uint8_t focused{},dragging{};
    GuiListHitRectangle hit_rectangle;
    std::int32_t text_top{},row_height{};
};
struct GuiListMouseHost {
    std::function<void(void*,GuiListMouse&)> focus;
    std::function<bool(GuiListMouse&,std::uint32_t,std::int32_t,std::int32_t,std::uint32_t,std::uint32_t)> scrollbar_mouse;
    std::function<void*()> main_window;
    std::function<void(void*)> capture;
    std::function<void()> release_capture;
    std::function<void(std::uint32_t&)> wheel_scroll_lines;
    std::function<void(GuiListMouse&,std::int32_t)> scroll_by;
    std::function<void(void*,std::uint32_t,bool,GuiListMouse&)> event;
};

// Official: FUN_1008a6e0 @ 0x1008a6e0 (samp.dll)
// Identified by the official list vtable and manually recovered
// because the cached Ghidra corpus does not define a function at this entry.
// Item pointers/selection anchors must be valid whenever a branch uses them;
// row-height division must not raise the native INT_MIN/-1 overflow trap.
bool gui_list_mouse(GuiListMouse&,std::uint32_t message,std::int32_t x,std::int32_t y,
                    std::uint32_t buttons,std::uint32_t parameter,GuiListMouseHost&);
} // namespace samp::client::render
