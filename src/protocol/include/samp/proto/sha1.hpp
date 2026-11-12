// The SHA-1 the SA-MP client hashes the game files with.
//
// Provenance (reverse-engineering evidence)
//   samp.dll 0x100511b0  the initialisation: the five SHA-1 initial values
//                         (0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476,
//                         0xC3D2E1F0) and the two 32 bit length counters
//   samp.dll 0x10052e00  the update: it buffers 64 byte blocks and keeps the
//                         message length in *bits*
//   samp.dll 0x10052fb0  the finalisation: the 0x80 marker, the zero padding
//                         up to 56 bytes modulo 64, the 64 bit big endian
//                         length and the big endian digest
//   samp.dll 0x10053250  the accessor: it returns "this + 0x60", the 20 byte
//                         digest of the object
// The official object has a vtable at offset zero; this implementation keeps
// its state members directly in the object.
//
// The object of the original is laid out as
//
//   +0x04  the five state words
//   +0x18  the message length in bits, the low dword first
//   +0x20  the 64 byte block buffer
//   +0x60  the 20 byte digest
//
// The replica keeps the same members and derives the position inside the
// block buffer from the bit counter, exactly like the original does.

#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

namespace samp::proto {

// The size of a SHA-1 digest.
inline constexpr std::size_t kSha1DigestSize = 20;

// The SHA-1 of the client.
class Sha1 {
public:
    Sha1() noexcept = default;

    // Official: FUN_100511b0 @ 0x100511b0 (samp.dll)
    void reset() noexcept;

    // Official: FUN_10052e00 @ 0x10052e00 (samp.dll)
    void update(const std::uint8_t* data, std::size_t length) noexcept;

    // Official: FUN_10052fb0 @ 0x10052fb0 (samp.dll)
    void finalize() noexcept;

    // Official: FUN_10053250 @ 0x10053250 (samp.dll)
    [[nodiscard]] const std::uint8_t* digest() const noexcept { return digest_; }

private:
    // Official: FUN_100511e0 @ 0x100511e0 (samp.dll)
    void compress(const std::uint8_t* block) noexcept;

    std::uint32_t state_[5] = {0x67452301u, 0xEFCDAB89u, 0x98BADCFEu,
                               0x10325476u, 0xC3D2E1F0u};
    std::uint64_t bit_count_ = 0;
    std::uint8_t block_[64];
    std::uint8_t digest_[kSha1DigestSize];
};

}  // namespace samp::proto
