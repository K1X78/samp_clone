// The SA-MP datagram obfuscation transform.
//
// The shipped 0.3.DL client computes the masked checksum at FUN_1001f0f0,
// applies the substitution transform at FUN_1001f120, and composes them at
// FUN_1001f170. This file keeps the transform in C++ for the socket client.
//
// Direction
//   The transform is applied to the *client to server* direction only.  The
//   server never obfuscates what it sends.  The query/RCON dialect is not
//   obfuscated in either direction (verified live against the official
//   server: the "SAMP" magic is readable on the wire).
//
// Algorithm (client -> server)
//   1. checksum  = XOR over every plaintext byte of (byte & 0xAA)
//   2. mask      = (port & 0xFF) ^ 0xCC
//   3. out[0]    = checksum
//   4. out[i+1]  = SBOX[plain[i]] ^ (mask when i is odd, else 0)
//
// The server-side inverse is the same algorithm with the inverse table.

#pragma once

#include <cstdint>
#include <optional>
#include <span>
#include <vector>

#include "samp/proto/sbox.hpp"

namespace samp::proto {

inline constexpr std::uint8_t kMaskXor = 0xCC;
inline constexpr std::uint8_t kChecksumMask = 0xAA;

// XOR of every plaintext byte masked with 0xAA.
// Official: FUN_1001f0f0 @ 0x1001f0f0 (samp.dll)
[[nodiscard]] inline std::uint8_t obfuscation_checksum(std::span<const std::uint8_t> plain) noexcept {
    std::uint8_t c = 0;
    for (const std::uint8_t b : plain) {
        c = static_cast<std::uint8_t>(c ^ (b & kChecksumMask));
    }
    return c;
}

// The client datagram transform: the checksum, then the transformed plaintext.
// Official: FUN_1001f170 @ 0x1001f170 (samp.dll)
[[nodiscard]] inline std::vector<std::uint8_t> obfuscate(std::span<const std::uint8_t> plain,
                                                         std::uint16_t port) {
    const std::uint8_t mask = static_cast<std::uint8_t>((port & 0xFFu) ^ kMaskXor);
    std::vector<std::uint8_t> out;
    out.reserve(plain.size() + 1);
    out.push_back(obfuscation_checksum(plain));
    for (std::size_t i = 0; i < plain.size(); ++i) {
        const auto value = sbox::kForward[plain[i]];
        out.push_back((i & 1u) != 0u ? static_cast<std::uint8_t>(value ^ mask) : value);
    }
    return out;
}

// Server-side de-obfuscation uses the port-derived byte mask.
// Official: FUN_0046a910 @ 0x0046a910 (samp-server.exe)
[[nodiscard]] inline std::optional<std::vector<std::uint8_t>> deobfuscate(
    std::span<const std::uint8_t> datagram, std::uint16_t port) {
    if (datagram.empty()) {
        return std::nullopt;
    }
    const auto mask = static_cast<std::uint8_t>((port & 0xFFu) ^ kMaskXor);
    const auto body = datagram.subspan(1);
    std::vector<std::uint8_t> out;
    out.reserve(body.size());
    for (std::size_t i = 0; i < body.size(); ++i) {
        std::uint8_t v = body[i];
        if ((i & 1u) != 0u) {
            v = static_cast<std::uint8_t>(v ^ mask);
        }
        out.push_back(sbox::kInverse[v]);
    }
    if (obfuscation_checksum(out) != datagram[0]) {
        return std::nullopt;
    }
    return out;
}

}  // namespace samp::proto
