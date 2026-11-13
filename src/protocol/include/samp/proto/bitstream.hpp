// RakNet bitstream operations recovered from the shipped SA-MP 0.3.DL client.
//
// Wire properties that MUST NOT be "simplified" away:
//
//   * MSB-first bit order.  Bit k of the stream is bit 7-(k&7) of byte k>>3.
//     A multi-byte value is therefore written most-significant byte first.
//
//   * Write(const void*, n) / Read(void*, n) never auto-align.  When the
//     cursor happens to be byte aligned they are a raw memcpy (so a
//     multi-byte scalar keeps its host little-endian byte order on the
//     wire); otherwise they fall back to WriteBits/ReadBits with n*8 bits.
//
//   * There is no `bitWriteAlign` flag in the fork.  Do not add one.
//
//   * AlignWriteToByteBoundary() / AlignReadToByteBoundary() skip the
//     remaining bits of the current byte *without zeroing them*.
//
//   * WriteBits(input, n, rightAlignedBits) only left-aligns the *final*
//     partial byte when rightAlignedBits is true.  Whole-byte writes are
//     unaffected.
//
//   * WriteCompressed / ReadCompressed are RakNet's byte-run integer codec,
//     where the `size` argument is in BITS, not bytes.
//
// The SA-MP-specific encoders (vectors, quaternions, percent pairs, dynamic
// strings) live in samp/proto/encoders.hpp.

#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <array>
#include <bit>
#include <string>
#include <vector>

namespace samp::proto {

class BitStream {
public:
    static constexpr std::size_t kStackAllocationSize = 256;

    BitStream() = default;

    // Official: FUN_1001f220 @ 0x1001f220 (samp.dll)
    explicit BitStream(std::size_t capacityBytes) { data_.reserve(capacityBytes); }

    // ---------------------------------------------------------------- writing

    // Official: FUN_1001f9d0 @ 0x1001f9d0 (samp.dll)
    void write0() {
        addBitsAndReallocate(1);
        // A new byte has to start out zeroed.
        if ((numberOfBitsUsed_ & 7u) == 0u) {
            data_[numberOfBitsUsed_ >> 3] = 0;
        }
        ++numberOfBitsUsed_;
    }

    // Official: FUN_1001f9f0 @ 0x1001f9f0 (samp.dll)
    void write1() {
        addBitsAndReallocate(1);
        const std::size_t mod8 = numberOfBitsUsed_ & 7u;
        if (mod8 == 0) {
            // Assign, not OR: the byte is fresh.
            data_[numberOfBitsUsed_ >> 3] = 0x80;
        } else {
            data_[numberOfBitsUsed_ >> 3] |= static_cast<std::uint8_t>(0x80u >> mod8);
        }
        ++numberOfBitsUsed_;
    }

    // RakNet::BitStream::WriteBits.  `rightAlignedBits` only affects the
    // trailing partial byte: when true the value is shifted left so its bits
    // sit in the high bits of that byte and the low bits become zero.
    // Official: FUN_1001faa0 @ 0x1001faa0 (samp.dll)
    void writeBits(const std::uint8_t* input, int numberOfBitsToWrite, bool rightAlignedBits = false) {
        if (numberOfBitsToWrite <= 0) {
            return;
        }
        addBitsAndReallocate(numberOfBitsToWrite);
        int offset = 0;
        const int numberOfBitsUsedMod8 = static_cast<int>(numberOfBitsUsed_ & 7u);
        while (numberOfBitsToWrite > 0) {
            std::uint8_t dataByte = input[offset];
            if (numberOfBitsToWrite < 8 && rightAlignedBits) {
                dataByte = static_cast<std::uint8_t>(dataByte << (8 - numberOfBitsToWrite));
            }
            if (numberOfBitsUsedMod8 == 0) {
                data_[numberOfBitsUsed_ >> 3] = dataByte;
            } else {
                // First half.
                data_[numberOfBitsUsed_ >> 3] |=
                    static_cast<std::uint8_t>(dataByte >> numberOfBitsUsedMod8);
                if (8 - numberOfBitsUsedMod8 < 8 && 8 - numberOfBitsUsedMod8 < numberOfBitsToWrite) {
                    // Second half, overlapping the byte boundary.
                    data_[(numberOfBitsUsed_ >> 3) + 1] =
                        static_cast<std::uint8_t>(dataByte << (8 - numberOfBitsUsedMod8));
                }
            }
            if (numberOfBitsToWrite >= 8) {
                numberOfBitsUsed_ += 8;
            } else {
                numberOfBitsUsed_ += static_cast<std::size_t>(numberOfBitsToWrite);
            }
            numberOfBitsToWrite -= 8;
            ++offset;
        }
    }

    // RakNet::BitStream::Write(const char*, int).  Byte aligned -> memcpy,
    // otherwise -> WriteBits(n*8, true).  Never swaps byte order.
    // Official: FUN_1001fb50 @ 0x1001fb50 (samp.dll)
    void write(const void* input, std::size_t numberOfBytes) {
        if (numberOfBytes == 0) {
            return;
        }
        if ((numberOfBitsUsed_ & 7u) == 0u) {
            addBitsAndReallocate(static_cast<int>(numberOfBytes * 8u));
            std::memcpy(data_.data() + (numberOfBitsUsed_ >> 3), input, numberOfBytes);
            numberOfBitsUsed_ += numberOfBytes * 8u;
        } else {
            writeBits(static_cast<const std::uint8_t*>(input), static_cast<int>(numberOfBytes * 8u),
                      true);
        }
    }

    // Official: FUN_1001fbe0 @ 0x1001fbe0 (samp.dll)
    void writeAlignedBytes(const std::uint8_t* input, std::size_t numberOfBytes) {
        alignWriteToByteBoundary();
        write(input, numberOfBytes);
    }

    // RakNet::BitStream::Write(BitStream*, int) -- BitStream.cpp:187-224.
    //
    // Copies the source's bits ONE AT A TIME into this stream, preserving
    // their exact positions.  This is NOT the same as writeBits(): the fork's
    // writeBits hoists the byte offset out of its loop, so copying a byte
    // buffer through it shifts every byte and drops its low bits.  The ack
    // range list is copied this way (DS_RangeList.h:78), so the difference
    // is observable on the wire.
    // Official: FUN_1001f880 @ 0x1001f880 (samp.dll)
    void writeBitStream(const BitStream& source) {
        const std::size_t bits = source.numberOfBitsUsed_;
        for (std::size_t i = 0; i < bits; ++i) {
            const bool bit = (source.data_[i >> 3] & (0x80u >> (i & 7u))) != 0;
            if (bit) write1();
            else write0();
        }
    }

    // RakNet's byte-run integer codec.  `sizeBits` is in BITS.
    // Official: FUN_1001fbf0 @ 0x1001fbf0 (samp.dll)
    void writeCompressed(const std::uint8_t* input, int sizeBits, bool unsignedData) {
        int currentByte = (sizeBits >> 3) - 1;
        const std::uint8_t byteMatch = unsignedData ? 0x00 : 0xFF;

        // From the high byte downwards: a 1 bit means "this byte is
        // byteMatch", a 0 bit means "the rest of the value follows raw".
        while (currentByte > 0) {
            if (input[currentByte] == byteMatch) {
                write1();
            } else {
                write0();
                writeBits(input, (currentByte + 1) << 3, true);
                return;
            }
            --currentByte;
        }

        // The low byte: a 1 bit means the top nibble is byteMatch's top
        // nibble and only four bits follow.
        const std::uint8_t low = input[currentByte];
        if ((unsignedData && (low & 0xF0u) == 0x00u) ||
            (!unsignedData && (low & 0xF0u) == 0xF0u)) {
            write1();
            writeBits(input + currentByte, 4, true);
        } else {
            write0();
            writeBits(input + currentByte, 8, true);
        }
    }

    // ---------------------------------------------------------------- reading

    // samp.dll 0x1001f3e0 reads the bit and advances the cursor with no bounds
    // check; it never fails.
    // Official: FUN_1001f3e0 @ 0x1001f3e0 (samp.dll)
    bool readBit() {
        const bool res = (data_[readOffset_ >> 3] & (0x80u >> (readOffset_ & 7u))) != 0;
        ++readOffset_;
        return res;
    }

    // The reference spelling used by the clone's decoders: the official
    // ReadBit returns the bit directly and never fails, so the call sites
    // assign the returned bit instead of checking a status flag.

    // Official: FUN_1001f470 @ 0x1001f470 (samp.dll)
    bool readBits(std::uint8_t* output, int numberOfBitsToRead, bool alignBitsToRight = true) {
        if (numberOfBitsToRead <= 0) {
            return false;
        }
        if ((numberOfBitsUsed_ > readOffset_ ? numberOfBitsUsed_ - readOffset_ : 0) <
            static_cast<std::size_t>(numberOfBitsToRead)) {
            return false;
        }
        std::memset(output, 0, static_cast<std::size_t>((numberOfBitsToRead + 7) >> 3));
        const int readOffsetMod8 = static_cast<int>(readOffset_ & 7u);
        int offset = 0;
        while (numberOfBitsToRead > 0) {
            // First half.
            output[offset] |= static_cast<std::uint8_t>(data_[readOffset_ >> 3] << readOffsetMod8);
            if (readOffsetMod8 > 0 && numberOfBitsToRead > 8 - readOffsetMod8) {
                // Second half, overlapping the byte boundary.
                output[offset] |=
                    static_cast<std::uint8_t>(data_[(readOffset_ >> 3) + 1] >> (8 - readOffsetMod8));
            }
            numberOfBitsToRead -= 8;
            if (numberOfBitsToRead < 0) {
                if (alignBitsToRight) {
                    output[offset] = static_cast<std::uint8_t>(output[offset] >> (-numberOfBitsToRead));
                }
                readOffset_ += static_cast<std::size_t>(8 + numberOfBitsToRead);
            } else {
                readOffset_ += 8;
            }
            ++offset;
        }
        return true;
    }

    // samp.dll 0x1001f960: an aligned read is a raw memcpy.  A zero-byte read
    // is only successful when the cursor is already aligned, because the
    // unaligned path delegates to ReadBits and that rejects a zero bit count.
    // Official: FUN_1001f960 @ 0x1001f960 (samp.dll)
    bool read(void* output, std::size_t numberOfBytes) {
        if ((readOffset_ & 7u) == 0u) {
            if ((numberOfBitsUsed_ > readOffset_ ? numberOfBitsUsed_ - readOffset_ : 0) <
                numberOfBytes * 8u) {
                return false;
            }
            std::memcpy(output, data_.data() + (readOffset_ >> 3), numberOfBytes);
            readOffset_ += numberOfBytes * 8u;
            return true;
        }
        return readBits(static_cast<std::uint8_t*>(output), static_cast<int>(numberOfBytes * 8u), true);
    }

    // Official: FUN_1001fa30 @ 0x1001fa30 (samp.dll)
    bool readAlignedBytes(std::uint8_t* output, std::size_t numberOfBytes) {
        if (numberOfBytes == 0) {
            return false;
        }
        alignReadToByteBoundary();
        if ((numberOfBitsUsed_ > readOffset_ ? numberOfBitsUsed_ - readOffset_ : 0) <
            (numberOfBytes << 3)) {
            return false;
        }
        std::memcpy(output, data_.data() + (readOffset_ >> 3), numberOfBytes);
        readOffset_ += numberOfBytes << 3;
        return true;
    }

    // RakNet's byte-run integer codec.  `sizeBits` is in BITS.
    // The official codec checks availability before reading each prefix bit.
    // Official: FUN_1001f530 @ 0x1001f530 (samp.dll)
    bool readCompressed(std::uint8_t* output, int sizeBits, bool unsignedData) {
        int currentByte = (sizeBits >> 3) - 1;
        const std::uint8_t byteMatch = unsignedData ? 0x00 : 0xFF;

        while (currentByte > 0) {
            if (readOffset_ >= numberOfBitsUsed_) return false;
            if (readBit()) {
                output[currentByte] = byteMatch;
                --currentByte;
            } else {
                return readBits(output, (currentByte + 1) << 3, true);
            }
        }

        if (readOffset_ >= numberOfBitsUsed_) return false;
        if (readBit()) {
            if (!readBits(output + currentByte, 4, true)) {
                return false;
            }
            output[currentByte] =
                static_cast<std::uint8_t>(output[currentByte] | (byteMatch & 0xF0u));
        } else {
            if (!readBits(output + currentByte, 8, true)) {
                return false;
            }
        }
        return true;
    }

    // -------------------------------------------------------------- alignment

    // Skips the rest of the current byte.  Does NOT zero the skipped bits.
    // Official: FUN_1001f420 @ 0x1001f420 (samp.dll)
    void alignWriteToByteBoundary() {
        if (numberOfBitsUsed_) {
            numberOfBitsUsed_ += 8 - (((numberOfBitsUsed_ - 1) & 7u) + 1u);
        }
    }

    // Official: FUN_1001f440 @ 0x1001f440 (samp.dll)
    void alignReadToByteBoundary() {
        if (readOffset_) {
            readOffset_ += 8 - (((readOffset_ - 1) & 7u) + 1u);
        }
    }

    // ------------------------------------------------------------------ state

    // samp.dll 0x1001f3b0 only rewinds the two counters; the allocated buffer
    // is kept.  The vector therefore keeps its capacity and stale bytes.
    // Official: FUN_1001f3b0 @ 0x1001f3b0 (samp.dll)
    void reset() {
        numberOfBitsUsed_ = 0;
        readOffset_ = 0;
    }

private:
    // Official: FUN_1001f630 @ 0x1001f630 (samp.dll)
    void addBitsAndReallocate(int bits) {
        if (bits <= 0) {
            return;
        }
        const std::size_t needed = (numberOfBitsUsed_ + static_cast<std::size_t>(bits) + 7u) >> 3;
        if (needed > data_.size()) {
            data_.resize(needed, 0);
        }
    }

public:
    std::size_t numberOfBitsUsed_ = 0;
    std::size_t readOffset_ = 0;
    std::vector<std::uint8_t> data_;
};

}  // namespace samp::proto
