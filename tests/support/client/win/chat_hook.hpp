// The Win32 half of the chat input.
//
// The game window is subclassed so the chat sees the keys first.  While the
// line is open every key is swallowed (the official client blocks the game
// controls while the chat is up); T and F6 open it, Enter sends, Escape
// closes, the arrows walk the history and Backspace edits.
#pragma once

#include <windows.h>

#include <atomic>
#include <cstdint>
#include <mutex>
#include <string>
#include <vector>

#include "samp/client/chat_input.hpp"
#include "samp/client/chat_ui.hpp"

namespace samp::client {
class ScoreboardDialog;
class SelectionDialog;

class ChatHook {
public:
    ChatHook() = default;
    ChatHook(const ChatHook&) = delete;
    ChatHook& operator=(const ChatHook&) = delete;

    static ChatHook* current_;
    HWND window_ = nullptr;
    WNDPROC previous_ = nullptr;
    std::mutex* outbox_mutex_ = nullptr;
    std::vector<std::string>* outbox_ = nullptr;
    ScoreboardDialog* scoreboard_ = nullptr;
    SelectionDialog* selection_ = nullptr;
    std::atomic<bool>* scoreboard_available_ = nullptr;
    const volatile std::uint8_t* controls_disabled_ = nullptr;
    void* hit_test_font_ = nullptr;
    std::size_t hit_test_first_visible_ = 0;
    int hit_test_text_left_ = 0;
    bool enabled_ = false;
    UiRect bounds_{};
    bool dragging_=false;
    enum class SwallowChar { none, after_open, after_close };
    SwallowChar swallow_char_ = SwallowChar::none;
    ChatInput input_;
    static LRESULT CALLBACK window_proc(HWND window, UINT message, WPARAM wparam,
                                        LPARAM lparam);
};

}  // namespace samp::client
