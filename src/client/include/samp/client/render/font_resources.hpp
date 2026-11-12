#pragma once

#include "samp/client/render/font_draw.hpp"

namespace samp::client::render {

struct FontSpecification {
    std::int32_t height = 0;
    std::uint32_t width = 0;
    std::uint32_t weight = 0;
    std::uint32_t mip_levels = 1;
    std::int32_t italic = 0;
    std::uint32_t character_set = 1;
    std::uint32_t output_precision = 0;
    std::uint32_t quality = 4;
    std::uint32_t pitch_and_family = 0;
    const char* face = nullptr;
};

struct FontResourceHost : FontDrawHost {
    std::function<void(void*)> font_lost;
    std::function<void(void*)> font_reset;
    std::function<void(void*)> sprite_lost;
    std::function<void(void*)> sprite_reset;
    std::function<std::int32_t()> configured_height;
    std::function<std::int32_t()> configured_small_height;
    std::function<std::uint32_t()> configured_weight;
    std::function<const char*()> configured_face;
    std::function<std::int32_t(void*,const FontSpecification&,void**)> create_font;
    std::function<std::int32_t(void*,void**)> create_sprite;
    std::function<void*(void*)> wrap_font;
    std::function<char*(std::size_t)> allocate_zeroed_scratch;
};

// Compatibility adapters for CFonts::OnLostDevice/OnResetDevice at
// 0x1006abc0 / 0x1006ac00 in fontrender.cpp. All six resources must be non-null. Calls fonts
// 0..3, sprite, font 4 without clearing pointers or inspecting HRESULTs.
void font_resources_lost(FontDrawState& state, FontResourceHost& host);
void font_resources_reset(FontDrawState& state, FontResourceHost& host);

// Compatibility adapter for CFonts::Reset at 0x1006b320 in fontrender.cpp.
// Requires successful writable wrapper allocations. D3DX error
// results are ignored by the native routine; no additional failure guards are
// introduced here. Existing scratch storage is not freed before replacement.
void recreate_font_resources(FontDrawState& state, FontResourceHost& host);

// Compatibility adapter for the native initialization owner at 0x1006b530 in
// fontrender.cpp. Clear the six resource pointers, set device, then recreate.
// With a null device, scratch and both cached line heights retain their bytes.
FontDrawState* initialize_font_resources(FontDrawState& state, FontResourceHost& host, void* device);

}  // namespace samp::client::render
