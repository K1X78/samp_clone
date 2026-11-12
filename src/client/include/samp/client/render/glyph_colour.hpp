#pragma once

#include <cstdint>

namespace samp::client::render {

// The four globals read by the colour sprite's glyph callback. Both strings
// must remain readable through the cursor and a terminating zero. The wide
// string is UTF-16, independent of the platform's wchar_t width.
struct GlyphColourState {
    const char* original = nullptr;
    const char16_t* wide = nullptr;
    std::uint32_t cursor = 0;
    std::uint32_t colour = 0;
};

// Compatibility adapter for FontIsWideHexDigit/FontParseWideColorTag behavior;
// the native glyph callback owner at 0x10073580 is already in ID3DXFontHook.cpp.
// It skips whitespace and tags and preserves the original cross-buffer check.
void advance_glyph_colour(GlyphColourState& state);

}  // namespace samp::client::render
