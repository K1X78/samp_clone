// The SA-MP 0.3.DL client key generator.
//
// In samp.dll FUN_1000aa60 calls FUN_1005fa60 with the seed at 0x00c9236c and
// multiplier 0x3e9. FUN_1005fa60 hashes the seed, permutes the 20 digest bytes
// inline at 0x1005fb00, multiplies the resulting integer and renders it in
// uppercase hexadecimal. The seed buffer is runtime data in the game process.

#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <string>
#include <string_view>

namespace samp::proto::key {

// The multiplier passed by the official 0.3.DL caller at samp.dll 0x1000ac22.
inline constexpr std::uint32_t kDefaultMultiplier = 1001;

// The size of the SHA-1 digest the key is derived from.
inline constexpr std::size_t kDigestSize = 20;

// The number of bytes the biggest possible key needs: 160 bits of digest
// plus a 32 bit multiplier.
inline constexpr std::size_t kMaxKeyBytes = 24;

// The official 0.3.DL key generator is samp.dll 0x1005fa60.
//
// The multiplier defaults to the official value 1001; the official client
// uses 1000 instead when the global network object DAT_1026eb94 is still
// null.
[[nodiscard]] std::string generate(std::string_view seed,
                                   std::uint32_t multiplier = kDefaultMultiplier);

}  // namespace samp::proto::key
