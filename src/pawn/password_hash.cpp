#include "pawn/password_hash.hpp"

#include <algorithm>
#include <bit>
#include <cstddef>
#include <cstdint>

namespace samp::pawn {
namespace {

struct Sha256State {
    std::array<std::uint8_t, 64> block{};
    std::size_t used = 0;
    std::uint64_t full_block_bits = 0;
    std::array<std::uint32_t, 8> words{};
};

// Official: FUN_004695c0 @ 0x004695c0 (samp-server.exe)
Sha256State sha256_init() {
    Sha256State state;
    state.words = {
        0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
        0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19,
    };
    return state;
}

// Official: FUN_00469140 @ 0x00469140 (samp-server.exe)
void sha256_transform(Sha256State& state) {
    static constexpr std::uint32_t constants[64]{
        0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
        0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
        0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
        0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
        0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
        0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
        0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
        0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2,
    };
    std::array<std::uint32_t, 64> schedule{};
    for (std::size_t i = 0; i < 16; ++i) {
        const auto* bytes = state.block.data() + i * 4;
        schedule[i] = (std::uint32_t(bytes[0]) << 24) | (std::uint32_t(bytes[1]) << 16) |
                      (std::uint32_t(bytes[2]) << 8) | bytes[3];
    }
    for (std::size_t i = 16; i < schedule.size(); ++i) {
        const auto x = schedule[i - 15];
        const auto y = schedule[i - 2];
        const auto s0 = std::rotr(x, 7) ^ std::rotr(x, 18) ^ (x >> 3);
        const auto s1 = std::rotr(y, 17) ^ std::rotr(y, 19) ^ (y >> 10);
        schedule[i] = schedule[i - 16] + s0 + schedule[i - 7] + s1;
    }

    auto [a, b, c, d, e, f, g, h] = state.words;
    for (std::size_t i = 0; i < schedule.size(); ++i) {
        const auto sum1 = std::rotr(e, 6) ^ std::rotr(e, 11) ^ std::rotr(e, 25);
        const auto choose = (e & f) ^ (~e & g);
        const auto temp1 = h + sum1 + choose + constants[i] + schedule[i];
        const auto sum0 = std::rotr(a, 2) ^ std::rotr(a, 13) ^ std::rotr(a, 22);
        const auto majority = (a & b) ^ (a & c) ^ (b & c);
        const auto temp2 = sum0 + majority;
        h = g;
        g = f;
        f = e;
        e = d + temp1;
        d = c;
        c = b;
        b = a;
        a = temp1 + temp2;
    }
    const std::array result{a, b, c, d, e, f, g, h};
    for (std::size_t i = 0; i < result.size(); ++i)
        state.words[i] += result[i];
}

// Official: FUN_00469610 @ 0x00469610 (samp-server.exe)
void sha256_update(Sha256State& state, std::string_view input) {
    for (const char byte : input) {
        state.block[state.used++] = static_cast<std::uint8_t>(byte);
        if (state.used == state.block.size()) {
            sha256_transform(state);
            state.full_block_bits += state.block.size() * 8;
            state.used = 0;
        }
    }
}

// Official: FUN_00469670 @ 0x00469670 (samp-server.exe)
std::array<std::uint8_t, 32> sha256_finish(Sha256State& state) {
    const std::uint64_t bit_length = state.full_block_bits + state.used * 8;
    state.block[state.used++] = 0x80;
    std::fill(state.block.begin() + state.used, state.block.end(), std::uint8_t{0});
    if (state.used > 56) {
        sha256_transform(state);
        state.block.fill(0);
    }
    for (std::size_t i = 0; i < 8; ++i)
        state.block[63 - i] = static_cast<std::uint8_t>(bit_length >> (i * 8));
    sha256_transform(state);

    std::array<std::uint8_t, 32> digest{};
    for (std::size_t i = 0; i < state.words.size(); ++i)
        for (std::size_t byte = 0; byte < 4; ++byte)
            digest[i * 4 + byte] = static_cast<std::uint8_t>(state.words[i] >> (24 - byte * 8));
    return digest;
}

// Official: FUN_004697a0 @ 0x004697a0 (samp-server.exe)
char uppercase_hex_digit(unsigned digit) {
    return static_cast<char>(digit < 10 ? '0' + digit : 'A' + digit - 10);
}

// Official: FUN_004697b0 @ 0x004697b0 (samp-server.exe)
std::array<char, 64> encode_digest(const std::array<std::uint8_t, 32>& digest) {
    std::array<char, 64> text{};
    for (std::size_t i = 0; i < digest.size(); ++i) {
        text[i * 2] = uppercase_hex_digit(digest[i] >> 4);
        text[i * 2 + 1] = uppercase_hex_digit(digest[i] & 0x0f);
    }
    return text;
}

} // namespace

// Official: FUN_004697f0 @ 0x004697f0 (samp-server.exe)
std::array<char, 64> sha256_password_hash(std::string_view password, std::string_view salt) {
    auto state = sha256_init();
    sha256_update(state, password);
    sha256_update(state, salt);
    return encode_digest(sha256_finish(state));
}

} // namespace samp::pawn
