#pragma once
#include "samp/client/selection_ui.hpp"

namespace samp::client {
struct ChatInputLayout {
    UiRect bounds, text;
    std::array<UiRect,9> patches;
};
// Edit-control atlas rectangles registered for type 7 by 0x1008d200.
inline constexpr std::array<UiRect,9> kChatInputSources{{
    {14,90,241,113},{8,82,14,90},{14,82,241,90},{241,82,246,90},
    {8,90,14,113},{241,90,246,113},{8,113,14,121},
    {14,113,241,121},{241,113,246,121}}};
inline constexpr std::uint32_t kChatInputBackground=0xf0050505;
inline constexpr std::uint32_t kChatInputText=0xffffffff;
inline constexpr std::uint32_t kChatInputCaret=0xff969696;
inline constexpr std::uint32_t kChatInputSelection=0xffb92228;
inline constexpr std::uint32_t kChatInputSelectedText=0xff0a0a0f;
}
