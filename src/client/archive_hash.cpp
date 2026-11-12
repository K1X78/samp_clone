#include "archive_hash.hpp"

#include <cstddef>
#include <cstring>

namespace samp::client {

const ArchiveHash g_archive_hash{};

// Official: FUN_10064300 @ 0x10064300 (samp.dll)
std::uint32_t ArchiveHash::HashString(const char* lowercase_name) const {
    const auto* data = reinterpret_cast<const std::uint8_t*>(lowercase_name);
    const std::size_t name_length = std::strlen(lowercase_name);
    constexpr std::uint32_t encoded_seed = 0x0ccf225cu;
    std::uint32_t a = ((encoded_seed ^ 0x3d3e7u) << 13) |
                      ((encoded_seed ^ 0xc107ffffu) >> 19);
    std::uint32_t b = a;
    std::uint32_t c = 0x12345678u;
    std::size_t left = name_length;

    while (left >= 12) {
        std::uint32_t word_a = 0, word_b = 0, word_c = 0;
        std::memcpy(&word_a, data, 4);
        std::memcpy(&word_b, data + 4, 4);
        std::memcpy(&word_c, data + 8, 4);
        a += word_a;
        b += word_b;
        c += word_c;
        a -= b; a -= c; a ^= c >> 13;
        b -= c; b -= a; b ^= a << 8;
        c -= a; c -= b; c ^= b >> 13;
        a -= b; a -= c; a ^= c >> 12;
        b -= c; b -= a; b ^= a << 16;
        c -= a; c -= b; c ^= b >> 5;
        a -= b; a -= c; a ^= c >> 3;
        b -= c; b -= a; b ^= a << 10;
        c -= a; c -= b; c ^= b >> 15;
        data += 12;
        left -= 12;
    }

    c += static_cast<std::uint32_t>(name_length);
    for (std::size_t i = 0; i < left; ++i) {
        if (i < 4) a += std::uint32_t{data[i]} << (i * 8);
        else if (i < 8) b += std::uint32_t{data[i]} << ((i - 4) * 8);
        else c += std::uint32_t{data[i]} << ((i - 7) * 8);
    }
    a -= b; a -= c; a ^= c >> 13;
    b -= c; b -= a; b ^= a << 8;
    c -= a; c -= b; c ^= b >> 13;
    a -= b; a -= c; a ^= c >> 12;
    b -= c; b -= a; b ^= a << 16;
    c -= a; c -= b; c ^= b >> 5;
    a -= b; a -= c; a ^= c >> 3;
    b -= c; b -= a; b ^= a << 10;
    c -= a; c -= b; c ^= b >> 15;
    return c;
}

}  // namespace samp::client
