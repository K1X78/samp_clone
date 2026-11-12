#pragma once

#include <cstdint>

namespace samp::client::render {

// 0.3.DL 0x100b5ad0. Accept a UTF-16 code-unit buffer (char16_t or the 16-bit
// Windows wchar_t) containing {RRGGBB}; return RGB or 0xffffffff on failure.
std::uint32_t parse_colour_tag(const void* utf16_text);

}  // namespace samp::client::render
