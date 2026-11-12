#pragma once
#include <windows.h>
#include <d3d9.h>
#include "samp/client/chat_input.hpp"
#include "samp/client/chat_ui.hpp"

namespace samp::client {
class ChatDialog {
public:
    ChatInputLayout layout_{};
    HMODULE library_=nullptr;
    void* font_=nullptr;
    void* sprite_=nullptr;
    IDirect3DTexture9* texture_=nullptr;
    std::size_t first_visible_=0;
};
}
