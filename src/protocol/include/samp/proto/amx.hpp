// The Pawn abstract machine (AMX) ABI used by the official SA-MP 0.3.DL server.
//
// Provenance
//   Fresh 0.3.DL recovery in docs/re/verification/pawn-framework-rea.json:
//   amx_Init 0x401320, amx_Exec 0x401c90 and the supporting AMX APIs.
//
//   * The AMX_NATIVE calling convention is the stock Pawn 3.2 one.
//   * params[0] is the *byte count* of the argument block (argc * 4), the
//     arguments start at &params[1], and the result is returned in EAX.
//   * The AMX_HEADER is the stock 56 byte Pawn 3.2 header.
//   * The recovered AMX state through sysreq_d occupies 104 bytes.
//
// Everything in this header describes the *host* ABI, so it is 32 bit
// oriented: the original client and server are 32 bit PE images.

#pragma once

#include <cstddef>
#include <cstdint>
#include <string>

namespace samp::amx {

using cell = std::int32_t;

// Pawn 3.2 amx.h
inline constexpr std::uint16_t kAmxMagic = 0xF1E0;
inline constexpr std::size_t kAmxHeaderSize = 56;
inline constexpr std::size_t kAmxFuncstubNtSize = 8;   // two uint32
inline constexpr std::size_t kAmxNativeInfoSize = 8;   // char* + function pointer (32 bit)

// The 56 byte Pawn 3.2 file header.  The offsets are file offsets from the
// start of the .amx image.
struct AmxHeader {
    std::int32_t size = 0;           // 0x00  size of the whole "file"
    std::uint16_t magic = 0;         // 0x04  kAmxMagic
    std::uint8_t file_version = 0;   // 0x06
    std::uint8_t amx_version = 0;    // 0x07
    std::int16_t flags = 0;          // 0x08
    std::int16_t defsize = 0;        // 0x0A  size of a definition record
    std::int32_t cod = 0;            // 0x0C  offset of the code segment
    std::int32_t dat = 0;            // 0x10  offset of the data segment
    std::int32_t hea = 0;            // 0x14  offset of the heap
    std::int32_t stp = 0;            // 0x18  offset of the stack
    std::int32_t cip = 0;            // 0x1C  initial instruction pointer
    std::int32_t publics = 0;        // 0x20  offset of the public function table
    std::int32_t natives = 0;        // 0x24  offset of the native function table
    std::int32_t libraries = 0;      // 0x28  offset of the library table
    std::int32_t pubvars = 0;        // 0x2C  offset of the public variable table
    std::int32_t tags = 0;           // 0x30  offset of the public tag table
    std::int32_t nametable = 0;      // 0x34  offset of the name table
};
static_assert(sizeof(AmxHeader) == kAmxHeaderSize, "AMX_HEADER must be 56 bytes");

// A single entry of the public function table.
struct AmxFuncstubNt {
    std::uint32_t address = 0;  // code-relative offset (or a bound native pointer)
    std::uint32_t nameofs = 0;  // file offset of the name, relative to the
                                // start of the .amx image
};

// A native function declaration.  `func` is filled in by the host.
struct AmxNativeInfo {
    const char* name = nullptr;
    cell (*func)(void* amx, const cell* params) = nullptr;
};
static_assert(sizeof(AmxNativeInfo) == kAmxNativeInfoSize, "AMX_NATIVE_INFO must be 8 bytes");

// The runtime state through sysreq_d. Fresh 0.3.DL evidence:
// amx_Init 0x401320, amx_Exec 0x401c90, amx_Push 0x401c50 and
// amx_RaiseError 0x4030f0. Registers are byte offsets, never host pointers.
struct Amx {
    void* base = nullptr;     // 0x00
    void* data = nullptr;     // 0x04
    void* callback = nullptr; // 0x08
    void* debug = nullptr;    // 0x0C
    cell cip = 0;            // 0x10  code-relative instruction offset
    cell frm = 0;            // 0x14  data-relative frame offset
    cell hea = 0;            // 0x18  data-relative heap end
    cell hlw = 0;            // 0x1C  initial heap end
    cell stk = 0;            // 0x20  data-relative stack offset
    cell stp = 0;            // 0x24  stack top, excludes the terminal zero cell
    std::int32_t flags = 0;   // 0x28
    std::int32_t usertags[4]{}; // 0x2C
    void* userdata[4]{};       // 0x3C
    std::int32_t error = 0;    // 0x4C
    std::int32_t paramcount = 0; // 0x50
    cell pri = 0;              // 0x54
    cell alt = 0;              // 0x58
    cell reset_stk = 0;        // 0x5C
    cell reset_hea = 0;        // 0x60
    cell sysreq_d = 0;         // 0x64
};
static_assert(sizeof(Amx) == 0x68, "observed AMX state must be 104 bytes on a 32 bit target");

// The native calling convention.  params[0] is the byte size of the argument
// block, the arguments are at &params[1], the result comes back in EAX.
using AmxNative = cell (*)(Amx* amx, const cell* params);

// Pawn 3.2 amx.h error codes.
enum AmxError : int {
    kAmxErrNone = 0,
    kAmxErrExit = 1,
    kAmxErrAssert = 2,
    kAmxErrStackerr = 3,
    kAmxErrBounds = 4,
    kAmxErrMemaccess = 5,
    kAmxErrInvInstr = 6,
    kAmxErrStacklow = 7,
    kAmxErrHeaplow = 8,
    kAmxErrCallback = 9,
    kAmxErrNative = 10,
    kAmxErrDivide = 11,
    kAmxErrSleep = 12,
    kAmxErrInvState = 13,
};

// A public function entry copied out of the AMX image.
struct AmxPublic {
    std::string name;
    std::uint32_t address = 0;
};

// AMX_FLAG_COMPACT: the code and data sections are stored as a packed varint
// cell stream (lane R09).
inline constexpr std::int16_t kAmxFlagCompact = 0x04;

}  // namespace samp::amx
