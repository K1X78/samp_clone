#include "samp/proto/sha1.hpp"

#include <algorithm>
#include <bit>
#include <cstring>

namespace samp::proto {

// Official: FUN_100511b0 @ 0x100511b0 (samp.dll)
void Sha1::reset() noexcept {
    state_[0] = 0x67452301u;
    state_[1] = 0xEFCDAB89u;
    state_[2] = 0x98BADCFEu;
    state_[3] = 0x10325476u;
    state_[4] = 0xC3D2E1F0u;
    bit_count_ = 0;
}

// Official: FUN_100511e0 @ 0x100511e0 (samp.dll)
void Sha1::compress(const std::uint8_t* block) noexcept {
    std::uint32_t words[80];
    for (std::size_t i = 0; i < 16; ++i) {
        words[i] = (static_cast<std::uint32_t>(block[i * 4]) << 24) |
                   (static_cast<std::uint32_t>(block[i * 4 + 1]) << 16) |
                   (static_cast<std::uint32_t>(block[i * 4 + 2]) << 8) |
                   static_cast<std::uint32_t>(block[i * 4 + 3]);
    }
    for (std::size_t i = 16; i < 80; ++i) {
        words[i] = std::rotl(words[i - 3] ^ words[i - 8] ^ words[i - 14] ^ words[i - 16], 1);
    }

    std::uint32_t a = state_[0];
    std::uint32_t b = state_[1];
    std::uint32_t c = state_[2];
    std::uint32_t d = state_[3];
    std::uint32_t e = state_[4];

    for (std::size_t i = 0; i < 80; ++i) {
        std::uint32_t f = 0;
        std::uint32_t k = 0;
        if (i < 20) {
            f = (b & c) | ((~b) & d);
            k = 0x5A827999u;
        } else if (i < 40) {
            f = b ^ c ^ d;
            k = 0x6ED9EBA1u;
        } else if (i < 60) {
            f = (b & c) | (b & d) | (c & d);
            k = 0x8F1BBCDCu;
        } else {
            f = b ^ c ^ d;
            k = 0xCA62C1D6u;
        }
        const std::uint32_t temp = std::rotl(a, 5) + f + e + k + words[i];
        e = d;
        d = c;
        c = std::rotl(b, 30);
        b = a;
        a = temp;
    }

    state_[0] += a;
    state_[1] += b;
    state_[2] += c;
    state_[3] += d;
    state_[4] += e;
}

// Official: FUN_10052e00 @ 0x10052e00 (samp.dll)
void Sha1::update(const std::uint8_t* data, std::size_t length) noexcept {
    while (length > 0) {
        const std::size_t position = static_cast<std::size_t>((bit_count_ >> 3) & 63u);
        const std::size_t chunk = std::min(length, 64u - position);
        std::memcpy(block_ + position, data, chunk);
        data += chunk;
        length -= chunk;
        bit_count_ += static_cast<std::uint64_t>(chunk) * 8u;
        if (((bit_count_ >> 3) & 63u) == 0u) {
            compress(block_);
        }
    }
}

// Official: FUN_10052fb0 @ 0x10052fb0 (samp.dll)
void Sha1::finalize() noexcept {
    const std::uint64_t bits = bit_count_;
    const std::size_t position = static_cast<std::size_t>((bits >> 3) & 63u);
    block_[position] = 0x80u;
    std::memset(block_ + position + 1u, 0, 64u - position - 1u);
    if (position + 1u > 56u) {
        compress(block_);
        std::memset(block_, 0, 64u);
    }
    for (std::size_t i = 0; i < 8; ++i) {
        block_[56u + i] = static_cast<std::uint8_t>(bits >> (56u - 8u * i));
    }
    compress(block_);

    for (std::size_t i = 0; i < 5; ++i) {
        digest_[i * 4] = static_cast<std::uint8_t>(state_[i] >> 24);
        digest_[i * 4 + 1] = static_cast<std::uint8_t>(state_[i] >> 16);
        digest_[i * 4 + 2] = static_cast<std::uint8_t>(state_[i] >> 8);
        digest_[i * 4 + 3] = static_cast<std::uint8_t>(state_[i]);
    }
}

}  // namespace samp::proto
