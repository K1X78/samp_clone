#include "samp/proto/samp_key.hpp"

#include <algorithm>
#include <array>
#include <cstdint>

namespace samp::proto::key {

namespace {

// The 0.3.DL Crypto++ SHA-1 object has five state words, a 64-byte block
// buffer and a message length. Its constructor is FUN_100635c0.
class Sha1 {
public:
    // Official Crypto++ SHA-1 input update used by the 0.3.DL key generator.
    // source adapter only; no established separate native entry
    void update(std::span<const std::uint8_t> data) noexcept {
        total_ += data.size();
        for (const std::uint8_t byte : data) {
            buffer_[buffered_++] = byte;
            if (buffered_ == buffer_.size()) {
                compress(buffer_.data());
                buffered_ = 0;
            }
        }
    }

    // The five state words of the digest, in the order SHA-1 keeps them.
    // FUN_10063ce0 finalizes the SHA-1 object and writes these five words.
    // source adapter only; no established separate native entry
    [[nodiscard]] std::array<std::uint32_t, 5> state() const noexcept {
        Sha1 copy = *this;
        const std::uint64_t bits = copy.total_ * 8u;
        copy.buffer_[copy.buffered_++] = 0x80u;
        if (copy.buffered_ > 56) {
            while (copy.buffered_ < copy.buffer_.size()) copy.buffer_[copy.buffered_++] = 0;
            copy.compress(copy.buffer_.data());
            copy.buffered_ = 0;
        }
        while (copy.buffered_ < 56) copy.buffer_[copy.buffered_++] = 0;
        for (int shift = 56; shift >= 0; shift -= 8)
            copy.buffer_[copy.buffered_++] = static_cast<std::uint8_t>((bits >> shift) & 0xFFu);
        copy.compress(copy.buffer_.data());
        copy.buffered_ = 0;
        return copy.state_;
    }

private:
    // Official SHA-1 compression transform called by FUN_10063c20.
    // source adapter only; no established separate native entry
    void compress(const std::uint8_t* block) noexcept {
        const auto rotate_left = [](std::uint32_t value, std::uint32_t bits) {
            return (value << bits) | (value >> (32u - bits));
        };
        std::array<std::uint32_t, 80> words{};
        for (std::size_t i = 0; i < 16; ++i) {
            words[i] = (static_cast<std::uint32_t>(block[i * 4]) << 24) |
                       (static_cast<std::uint32_t>(block[i * 4 + 1]) << 16) |
                       (static_cast<std::uint32_t>(block[i * 4 + 2]) << 8) |
                       static_cast<std::uint32_t>(block[i * 4 + 3]);
        }
        for (std::size_t i = 16; i < 80; ++i) {
            words[i] = rotate_left(words[i - 3] ^ words[i - 8] ^ words[i - 14] ^ words[i - 16], 1);
        }

        std::uint32_t a = state_[0];
        std::uint32_t b = state_[1];
        std::uint32_t c = state_[2];
        std::uint32_t d = state_[3];
        std::uint32_t e = state_[4];
        for (std::size_t i = 0; i < 80; ++i) {
            std::uint32_t mix = 0;
            std::uint32_t constant = 0;
            if (i < 20) {
                mix = (b & c) | (~b & d);
                constant = 0x5A827999u;
            } else if (i < 40) {
                mix = b ^ c ^ d;
                constant = 0x6ED9EBA1u;
            } else if (i < 60) {
                mix = (b & c) | (b & d) | (c & d);
                constant = 0x8F1BBCDCu;
            } else {
                mix = b ^ c ^ d;
                constant = 0xCA62C1D6u;
            }
            const std::uint32_t temp = rotate_left(a, 5) + mix + e + constant + words[i];
            e = d;
            d = c;
            c = rotate_left(b, 30);
            b = a;
            a = temp;
        }
        state_[0] += a;
        state_[1] += b;
        state_[2] += c;
        state_[3] += d;
        state_[4] += e;
    }

    std::array<std::uint32_t, 5> state_{0x67452301u, 0xEFCDAB89u, 0x98BADCFEu, 0x10325476u,
                                         0xC3D2E1F0u};
    std::array<std::uint8_t, 64> buffer_{};
    std::size_t buffered_{0};
    std::uint64_t total_{0};
};

constexpr char kHexDigits[] = "0123456789ABCDEF";

// The official 0.3.DL generator multiplies the digest integer by its 32-bit
// factor through the big-number method FUN_10059380.
// Official: FUN_10059380 @ 0x10059380 (samp.dll)
void multiply(std::span<std::uint8_t> value, std::uint32_t factor) noexcept {
    std::uint64_t carry = 0;
    for (std::size_t i = value.size(); i-- > 0;) {
        const std::uint64_t product = static_cast<std::uint64_t>(value[i]) * factor + carry;
        value[i] = static_cast<std::uint8_t>(product & 0xFFu);
        carry = product >> 8;
    }
}

// The official generator asks the big-number object for its base-16 string.
// Official: FUN_1005a910 @ 0x1005a910 (samp.dll)
[[nodiscard]] std::string to_hex(std::span<const std::uint8_t> value) {
    std::size_t first = 0;
    while (first < value.size() && value[first] == 0) {
        ++first;
    }
    if (first == value.size()) {
        return "0";
    }
    std::string text;
    text.reserve((value.size() - first) * 2);
    for (std::size_t i = first; i < value.size(); ++i) {
        // The official renderer writes the number without any leading zero,
        // not even a zero nibble: a number that starts with the byte 0x03
        // comes out as "3", not as "03".
        if (i == first && value[i] < 0x10u) {
            text.push_back(kHexDigits[value[i]]);
            continue;
        }
        text.push_back(kHexDigits[value[i] >> 4]);
        text.push_back(kHexDigits[value[i] & 0x0Fu]);
    }
    return text;
}

}  // namespace

// Official samp.dll 0.3.DL FUN_1000aa60 calls the key generator with the
// runtime seed at 0x00c9236c and multiplier 0x3e9. The generator and its
// inline four-pair digest permutation are FUN_1005fa60 / 0x1005fb00.
// source adapter only; no established separate native entry
std::string generate(std::string_view seed, std::uint32_t multiplier) {
    Sha1 sha1;
    sha1.update(std::span<const std::uint8_t>(
        reinterpret_cast<const std::uint8_t*>(seed.data()), seed.size()));
    const std::array<std::uint32_t, 5> state = sha1.state();
    std::array<std::uint8_t, kDigestSize> bytes{};
    for (std::size_t word = 0; word < state.size(); ++word) {
        for (std::size_t index = 0; index < 4; ++index)
            bytes[word * 4 + index] = static_cast<std::uint8_t>((state[word] >> (8 * index)) & 0xFFu);
    }
    for (std::uint8_t& value : bytes) {
        const std::uint8_t a = value & 0x03u;
        const std::uint8_t b = static_cast<std::uint8_t>((value >> 2) & 0x03u);
        const std::uint8_t c = static_cast<std::uint8_t>((value >> 4) & 0x03u);
        const std::uint8_t d = static_cast<std::uint8_t>((value >> 6) & 0x03u);
        const std::uint8_t low = static_cast<std::uint8_t>((std::max(a, b) << 2) | std::min(a, b));
        const std::uint8_t high = static_cast<std::uint8_t>((std::max(c, d) << 2) | std::min(c, d));
        value = static_cast<std::uint8_t>((high << 4) | low);
    }

    // The twenty permuted bytes are the most significant bytes of the
    // number; the multiplication can add ten more bits.
    std::array<std::uint8_t, kMaxKeyBytes> value{};
    std::copy(bytes.begin(), bytes.end(), value.begin() + (value.size() - bytes.size()));
    multiply(value, multiplier);
    return to_hex(value);
}

}  // namespace samp::proto::key
