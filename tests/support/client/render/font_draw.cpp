#include "samp/client/render/font_draw.hpp"
#include "runutil.h"

#include <bit>
#include <cstring>

namespace samp::client::render {
// 0.3.DL 0x1006af20; see the evidence bundle for the exact call order.
// source adapter only; no established separate native entry
void draw_text(FontDrawState& state, FontDrawHost& host, void* sprite, const char* text,
               TextRect rect, std::uint32_t flags, std::uint32_t colour, bool outline) {
    if (text == nullptr || *text == '\0') return;
    const bool owned_batch = sprite == nullptr;
    if (owned_batch) {
        sprite = state.sprite;
        host.begin(sprite, 0x10);
    }
    if (outline) {
        const std::size_t length = std::strlen(text);
        if (length > 100000) return;
        std::memcpy(state.scratch, text, length + 1);
        ChatStripColorTags(state.scratch);
        const int count = static_cast<int>(std::strlen(state.scratch));
        rect.top = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.top) - 1u);
        host.draw(state.fonts[3], sprite, state.scratch, count, rect, flags, 0xff000000);
        rect.top = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.top) + 2u);
        host.draw(state.fonts[3], sprite, state.scratch, count, rect, flags, 0xff000000);
        rect.top = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.top) - 1u);
        rect.left = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.left) - 1u);
        host.draw(state.fonts[3], sprite, state.scratch, count, rect, flags, 0xff000000);
        rect.left = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.left) + 2u);
        host.draw(state.fonts[3], sprite, state.scratch, count, rect, flags, 0xff000000);
        rect.left = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.left) - 1u);
    }
    host.draw(state.fonts[1], sprite, text, -1, rect, flags, colour);
    if (owned_batch) host.end(sprite);
}

// 0.3.DL 0x1006ada0; fresh Ghidra assembly ev_7be4ab90917237e0e5098b0e118d7551e5a4824cafa0061b8f164d7b6cefab06.
// source adapter only; no established separate native entry
void draw_primary_text(FontDrawState& state, FontDrawHost& host, void* sprite, const char* text,
                       TextRect rect, std::uint32_t colour, bool outline) {
    if (text == nullptr || *text == '\0') return;
    const bool owned_batch = sprite == nullptr;
    if (owned_batch) {
        sprite = state.sprite;
        host.begin(sprite, 0x10);
    }
    if (outline) {
        const std::size_t length = std::strlen(text);
        if (length > 100000) return;
        std::memcpy(state.scratch, text, length + 1);
        ChatStripColorTags(state.scratch);
        const int count = static_cast<int>(std::strlen(state.scratch));
        rect.top = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.top) - 1u);
        host.draw(state.fonts[2], sprite, state.scratch, count, rect, 0x100, 0xff000000);
        rect.top = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.top) + 2u);
        host.draw(state.fonts[2], sprite, state.scratch, count, rect, 0x100, 0xff000000);
        rect.top = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.top) - 1u);
        rect.left = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.left) - 1u);
        host.draw(state.fonts[2], sprite, state.scratch, count, rect, 0x100, 0xff000000);
        rect.left = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.left) + 2u);
        host.draw(state.fonts[2], sprite, state.scratch, count, rect, 0x100, 0xff000000);
        rect.left = std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.left) - 1u);
    }
    host.draw(state.fonts[0], sprite, text, -1, rect, 0x100, colour);
    if (owned_batch) host.end(sprite);
}

// 0.3.DL 0x1006ab40; REA ev_4d2a2e1ec946520278dfca6048c516d5b850cce6c1f426ca359859ff9ff8c5d8.
// source adapter only; no established separate native entry
void release_font_resources(FontDrawState& state, FontDrawHost& host) {
    for (std::size_t i = 0; i < 4; ++i) {
        if (state.fonts[i] != nullptr) {
            host.release(state.fonts[i]);
            state.fonts[i] = nullptr;
        }
    }
    if (state.sprite != nullptr) {
        host.release(state.sprite);
        state.sprite = nullptr;
    }
    if (state.fonts[4] != nullptr) {
        host.release(state.fonts[4]);
        state.fonts[4] = nullptr;
    }
}

// 0.3.DL 0x1006ac40 / 0x1006acf0; fresh instruction evidence is saved in
// docs/re/verification/font-resources-rea.json (Ghidra's stack types are wrong).
// source adapter only; no established separate native entry
TextExtent* measure_primary_text(FontDrawState& state, FontDrawHost& host, TextExtent* result,
                                 const char* text, std::uint32_t flags) {
    const auto length=std::strlen(text);
    if(length>100000) {result->width=result->height=0;return result;}
    std::memcpy(state.scratch,text,length+1);
    ChatStripColorTags(state.scratch);
    TextRect rect;
    host.draw(state.fonts[0],nullptr,state.scratch,-1,rect,flags|0x400,0xff000000);
    result->width=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.right)-
                                             static_cast<std::uint32_t>(rect.left));
    result->height=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.bottom)-
                                              static_cast<std::uint32_t>(rect.top));
    return result;
}

// source adapter only; no established separate native entry
TextExtent* measure_small_text(FontDrawState& state, FontDrawHost& host, TextExtent* result,
                               const char* text, std::uint32_t flags) {
    const auto length=std::strlen(text);
    if(length>100000) {result->width=result->height=0;return result;}
    std::memcpy(state.scratch,text,length+1);
    ChatStripColorTags(state.scratch);
    TextRect rect;
    host.draw(state.fonts[1],nullptr,state.scratch,-1,rect,flags|0x400,0xff000000);
    result->width=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.right)-
                                             static_cast<std::uint32_t>(rect.left));
    result->height=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(rect.bottom)-
                                              static_cast<std::uint32_t>(rect.top));
    return result;
}

}  // namespace samp::client::render
