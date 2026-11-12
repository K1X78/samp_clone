// The Pawn 3.2 abstract machine of the official SA-MP 0.3.DL server.
//
// Provenance
//   docs/re/verification/pawn-framework-rea.json: fresh analysis of the shipped
//   0.3.DL amx_Init (0x401320), amx_Exec (0x401c90), amx_GetAddr
//   (0x403100), amx_Allot (0x403150), amx_GetString (0x403350) and helpers.
//   reference/server-win32/pawno/pawncc.exe the reference compiler, used to
//                                               verify the calling convention
//                                               cell by cell
//
// The memory model
//
//   The image is ONE array: the header and the tables at the front, the CODE
//   section at [cod, dat), the DATA section at [dat, hea) and the stack at
//   [hea, stp).  The code and the data are arrays of 32 bit cells.
//
//   The register set:
//
//     PRI     the primary register
//     ALT     the secondary register
//     FRM     the frame pointer, a BYTE offset inside the data segment
//     STK     the stack pointer, a BYTE offset inside the data segment
//     HEA     the heap lower bound, a byte offset inside the data segment
//     CIP     the instruction pointer, a BYTE offset inside the code section
//
//   The stack grows DOWNWARD.  A function's local variables live BELOW its
//   frame: the compiler pushes their initial values, so the local at the
//   frame offset -4 is the first cell below the frame pointer.
//
//   The frame of a function:
//
//     FRM+0   the saved frame pointer
//     FRM+4   the return address (a code offset)
//     FRM+8   the argument byte count
//     FRM+12  the first argument (the arguments are pushed in reverse order)
//
//   which the reference compiler confirms cell by cell: a call with three
//   arguments pushes them in reverse, then the argument byte count, then the
//   return address, and "proc" moves the frame pointer one cell below the
//   stack pointer.

#pragma once

#include <cstdint>
#include <functional>
#include <map>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

#include "samp/proto/amx.hpp"
#include "pawn/amx_loader.hpp"

int main(int argc, char** argv);

namespace samp::server { class GameLayer; class Console; }

namespace samp::pawn {

class PawnVm;
class NativeHost;
void register_server_natives(PawnVm& vm, NativeHost& host);
void register_db_natives(PawnVm& vm);

// The native calling convention: params[0] is the byte size of the argument
// block, the arguments are at &params[1] and the result is returned.
using PawnNative = samp::amx::cell (*)(samp::amx::Amx* amx, const samp::amx::cell* params);

// A native that is implemented in a closure.
using PawnNativeFn = std::function<samp::amx::cell(std::span<const samp::amx::cell> args)>;

// The virtual machine.
class PawnVm {
    friend struct PawnNativeTestAccess;
    friend class ::samp::server::GameLayer;
    friend class ::samp::server::Console;
    friend int ::main(int argc, char** argv);
    friend void register_server_natives(PawnVm& vm, NativeHost& host);
    friend void register_db_natives(PawnVm& vm);
public:
    PawnVm() = default;
    PawnVm(const PawnVm&) = delete;
    PawnVm& operator=(const PawnVm&) = delete;
    PawnVm(PawnVm&&) = delete;
    PawnVm& operator=(PawnVm&&) = delete;

    // Resolves and executes a public function through the AMX execution path.
    // Returns the AMX error code (0 = success).
    int execute(std::string_view public_name, std::span<const samp::amx::cell> args,
                samp::amx::cell& result, std::optional<int> entry_index = std::nullopt);

    // Whether the script defines the public.  The official server treats a
    // callback that the script does not have as "not handled", and the caller
    // supplies the default answer (e.g. OnPlayerRequestSpawn allows the
    // spawn).
    // ---------------------------------------------- the native data access
    //
    // A string or array argument of a native arrives as a CELL whose value is
    // a byte offset inside the script's DATA segment: the reference compiler
    // emits "push.c 0" for a string that starts at the first data cell (see
    // the compact-expanded probe in the test suite).  The natives therefore
    // cannot cast the cell to a pointer; they must translate it through the
    // image.
    //
    // `data_pointer` returns the host address of a data-segment offset, or
    // nullptr for the heap/stack gap or an offset outside [0, stp-dat-4).

private:
    // The interpreter.
    // The CODE-relative offset of a public function.

    // The memory accessors.

    // Checks that a data access stays inside the data segment.
    [[nodiscard]] bool data_in_range(std::int32_t byte_offset) const;

    std::vector<std::uint8_t> image_;
    std::string path_;
    std::vector<samp::amx::AmxPublic> publics_;
    std::vector<RequiredNative> natives_;
    std::map<std::string, PawnNativeFn> native_functions_;
    mutable std::map<std::int32_t, std::string> string_buffers_;

    samp::amx::AmxHeader header_{};
    samp::amx::Amx amx_{};

    samp::amx::cell pri_ = 0;
    samp::amx::cell alt_ = 0;
    std::int32_t frm_ = 0;
    std::int32_t stk_ = 0;
    std::int32_t hea_ = 0;
    std::int32_t hlw_ = 0;
    std::int32_t cip_ = 0;

    bool ok_ = false;
    std::string error_;
    int last_error_ = 0;
    bool host_call_ = false;
    bool sleeping_ = false;
    bool halted_ = false;
    std::int32_t reset_stk_ = 0;
    std::int32_t reset_hea_ = 0;
};

}  // namespace samp::pawn
