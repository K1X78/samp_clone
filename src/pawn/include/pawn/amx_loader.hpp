// The Pawn 3.2 .amx image loader.
//
// Provenance
//   docs/re/spec/amx-format.json              (lane R09: the file and image
//                                               layouts, verified against the
//                                               reference compiler and runtime)
//   docs/re/spec/server-natives.json          (lane R10: the native table)
//   docs/re/adversary-3-server-natives.md     (findings A3-01, A3-02, A3-03)
//
// The file layout of a stock SA-MP .amx (Pawn 3.2.3664, AMX_FLAG_COMPACT):
//
//   0x00  AMX_HEADER (56 bytes)
//   [publics, natives)    the public function table
//   [natives, libraries)  the native function table
//   [libraries, pubvars)  the library table
//   [pubvars, tags)       the public variable table
//   [tags, nametable)     the public tag table
//   [nametable, cod)      the name table
//   [cod, size)           the packed varint cell stream (CODE + DATA)
//
// Every table is a list of 8 byte records {u32 value, u32 nameofs}.  The
// table extent is delimited by the FOLLOWING header field, not by a
// terminator record, and the value means:
//
//   publics    the byte offset of the function's 'proc' opcode FROM THE
//              START OF THE CODE SECTION
//   natives    the function pointer slot (zero in the file)
//   libraries  zero
//   pubvars    the byte offset of the variable inside the DATA section
//   tags       the tag id
//
// The loader expands the packed cell stream in place: the image is at least
// 'stp' bytes long, [cod, size) becomes the cells at [cod, hea) and
// image[stp-4] is zeroed.
//
// The 6 stock gamemodes and the 15 stock filterscripts of the shipped server
// are the reference corpus for the tests.

#pragma once

#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

#include "samp/proto/amx.hpp"

int main(int argc, char** argv);
namespace samp::server { class GameLayer; }

namespace samp::pawn {

// A native the script requires.  `index` is the index of the record in the
// .amx native table, which is the operand of the 'sysreq.c <n>' instruction.
struct RequiredNative {
    std::string name;
    std::uint32_t nameofs = 0;
    std::uint32_t index = 0;
};

// A record of one of the .amx tables.
struct AmxTableEntry {
    std::uint32_t value = 0;
    std::uint32_t nameofs = 0;
    std::string name;
};

class PawnVm;

// A loaded .amx image.
class AmxImage {
public:
    // Loads an .amx image from memory.  The bytes are copied.
    [[nodiscard]] static bool load_from_memory(const std::uint8_t* data, std::size_t size,
                                               AmxImage& out);

private:
    friend class PawnVm;
    friend class ::samp::server::GameLayer;
    friend int ::main(int argc, char** argv);

    bool ok_ = false;
    std::string error_;
    samp::amx::AmxHeader header_{};
    std::vector<std::uint8_t> data_;
    std::vector<samp::amx::AmxPublic> publics_;
    std::vector<RequiredNative> natives_;
    std::vector<AmxTableEntry> libraries_;
    std::vector<AmxTableEntry> pubvars_;
    std::vector<AmxTableEntry> tags_;
};

}  // namespace samp::pawn
