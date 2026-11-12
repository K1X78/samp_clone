#include "samp/client/render/glyph_colour.hpp"
#include "samp/client/render/colour_tags.hpp"

namespace samp::client::render {
// source adapter only; no established separate native entry
// 0.3.DL 0x10073580, manually recovered from fresh REA bytes and checked by
// native execution; docs/re/verification/glyph-colour-dl.md records the scope.
void advance_glyph_colour(GlyphColourState& state) {
    for (;;) {
        const char16_t value = state.wide[state.cursor];
        if (value != u' ' && value != u'\t' && value != u'\r' && value != u'\n') break;
        ++state.cursor;
    }
    for (std::uint32_t colour = parse_colour_tag(state.wide + state.cursor); colour != 0xffffffff;
         colour = parse_colour_tag(state.wide + state.cursor)) {
        state.colour = colour | 0xff000000;
        state.cursor += 8;
        for (;;) {
            const char16_t value = state.wide[state.cursor];
            if (value != u' ' && value != u'\t' && value != u'\r' && value != u'\n') break;
            ++state.cursor;
        }
    }
    // The original checks the narrow buffer here, not the UTF-16 buffer.
    if (state.original[state.cursor] != '\0') ++state.cursor;
}

}  // namespace samp::client::render
