#pragma once

#include "samp/client/render/gui_scrollbar.hpp"
#include <cstdint>
#include <functional>
#include <span>

namespace samp::client::render {
struct GuiListSelectionItem {std::uint8_t selected{};};
// Semantic view of the fields used by the native selection/input routines.
// This is not a claim that its host layout is the native GUI control ABI.
struct GuiListSelection {
    std::uint8_t visible{1},enabled{1};
    void* parent{};
    GuiScrollbar scrollbar;
    std::uint32_t flags{};
    std::int32_t selected{-1},anchor{};
    std::span<GuiListSelectionItem* const> items;
};
struct GuiListSelectionHost {
    std::function<bool(GuiListSelection&,std::uint32_t,std::uint32_t,std::uint32_t)> scrollbar_keyboard;
    std::function<std::int16_t(std::int32_t)> key_state;
    std::function<void(void*,std::uint32_t,bool,GuiListSelection&)> event;
};

// Official: FUN_100888f0 @ 0x100888f0 (samp.dll)
// Multi-select scans require a start below INT32_MAX; item pointers and the
// anchor of an active Shift selection must be valid for the nonempty list.
std::int32_t gui_list_selected_index(const GuiListSelection&,std::int32_t start); // 0x100888f0
// Official: FUN_1008a470 @ 0x1008a470 (samp.dll)
void set_gui_list_selected_index(GuiListSelection&,std::int32_t index,GuiListSelectionHost&); // 0x1008a470
// Official: FUN_1008a500 @ 0x1008a500 (samp.dll)
bool gui_list_keyboard(GuiListSelection&,std::uint32_t message,std::uint32_t key,
                       std::uint32_t parameter,GuiListSelectionHost&); // 0x1008a500
} // namespace samp::client::render
