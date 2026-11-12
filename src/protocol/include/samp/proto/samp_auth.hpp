// 0.3.DL authentication evidence:
// samp.dll: packet-12 handler 0x10009DF0; generator 0x100571B0.
// samp-server.exe: challenge sender 0x004558C0; 256 pairs at 0x004E4838,
// stride 96, challenge offset 0 and response offset 32.
// Every shipped pair matches SHA-1 with bytes reversed within each DWORD,
// XOR this mask, then uppercase hex. The original client generator also
// performs game/SAA checks; those side effects remain unverified in the clone.

#pragma once

#include <array>
#include <cstdint>

namespace samp::proto::auth {

// The mask: the XOR of the 100 bytes of the SAA record and the constant of
// samp.dll.
inline constexpr std::array<std::uint8_t, 20> kAnswerMask{
    0x73, 0xA9, 0xB8, 0xB5, 0xC1, 0x8C, 0x1C, 0x1C, 0x1C, 0x1C,
    0xDA, 0xDB, 0xDC, 0x07, 0xC8, 0xA8, 0x98, 0x01, 0x80, 0x0C,
};

}  // namespace samp::proto::auth
