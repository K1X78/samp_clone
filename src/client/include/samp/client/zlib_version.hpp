// The embedded zlib error table.
//
// samp.dll 0x100dfc40 indexes the table at 0x10125bf0 as base[-code], with no
// bounds check. The entries in the shipped image are, by zlib code:
//
//    0  ""                      1  "stream end"
//    2  "need dictionary"      -1  "file error"
//   -2  "stream error"        -3  "data error"
//   -4  "insufficient memory" -5  "buffer error"
//   -6  "incompatible version"

#pragma once

#include <cstdint>

namespace samp::client {

// Laid out in official address order, ascending from base[-6] to base[2].
inline constexpr const char* kZlibErrors[] = {
    "incompatible version",  // base[-6], code -6
    "buffer error",          // base[-5], code -5
    "insufficient memory",   // base[-4], code -4
    "data error",            // base[-3], code -3
    "stream error",          // base[-2], code -2
    "file error",            // base[-1], code -1
    "",                      // base[ 0], code  0
    "stream end",            // base[ 1], code  1
    "need dictionary",       // base[ 2], code  2
};

// 0x100dfc40: the official lookup is base[-code] and performs no range check.
// Official: FUN_100dfc40 @ 0x100dfc40 (samp.dll)
inline const char* zlib_error_message(int code) noexcept {
    return kZlibErrors[6 + code];
}

}  // namespace samp::client
