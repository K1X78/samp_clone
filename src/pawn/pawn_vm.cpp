#include "pawn/pawn_vm.hpp"

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <limits>
#include <tuple>
#include <utility>

namespace samp::pawn {

namespace {

using samp::amx::cell;

constexpr cell kCellSize = 4;

// The AMX error codes (Pawn 3.2 amx.h).
constexpr int kErrNone = 0;
constexpr int kErrExit = 1;
constexpr int kErrAssert = 2;
constexpr int kErrStackerr = 3;
constexpr int kErrBounds = 4;
constexpr int kErrMemaccess = 5;
constexpr int kErrInvInstr = 6;
constexpr int kErrStacklow = 7;
constexpr int kErrHeaplow = 8;
constexpr int kErrCallback = 9;
constexpr int kErrNative = 10;
constexpr int kErrDivide = 11;
constexpr int kErrSleep = 12;
constexpr int kErrInvState = 13;

// The return address of a call from the host.  It is not a code offset, so
// the "ret" and "retn" handlers recognise it and end the run.
// The official host frame returns to code offset zero (the compiler's
// leading HALT 0), rather than using an out-of-code sentinel.
constexpr cell kHostReturnAddress = 0;

struct VmFault { int error; };

}  // namespace

// ------------------------------------------------------------------ natives
// ------------------------------------------------------------- the memory

// ------------------------------------------------------------------ calling

// Execute a named/main/indexed entry, or continue saved registers for index
// -2 (0x401D41). HALT owns the result write; faults leave it untouched.
// Official: FUN_00401c90 @ 0x00401c90 (samp-server.exe)
int PawnVm::execute(std::string_view public_name, std::span<const cell> args, cell& result,
                    std::optional<int> entry_index) {

    // Raw indexed calls retain the SDK's callback/bound/initialized checks,
    // in that order (0x401C99..0x401CCE). Named host calls bind closures below.
    if (entry_index.has_value()) {
        if (amx_.callback == nullptr) return last_error_ = kErrCallback;
        if ((amx_.flags & 0x1000) == 0) return last_error_ = 19;
        if ((amx_.flags & 0x8000) == 0) return last_error_ = 22;
    }
    if (!ok_) {
        last_error_ = kErrInvState;
        return last_error_;
    }
    const auto* image = static_cast<const std::uint8_t*>(amx_.base);
    const auto& header = *reinterpret_cast<const samp::amx::AmxHeader*>(image);
    auto* code = const_cast<std::uint8_t*>(image) + header.cod;
    const auto code_bytes = header.dat - header.cod;
    const auto data_bytes = header.stp - header.dat;
    const bool continuing = entry_index == -2;
    std::int32_t address = -1;
    if (continuing) {
        address = amx_.cip;
    } else if (entry_index.has_value() && *entry_index >= 0) {
        // Indexed execution reads the live definition table, including the
        // legacy 24-byte form, rather than the host's cached name inventory.
        const auto count = (header.natives - header.publics) / header.defsize;
        if (*entry_index < count)
            std::memcpy(&address, image + header.publics + *entry_index * header.defsize, sizeof(address));
    } else if (entry_index == -1 || (!entry_index.has_value() && public_name.empty())) {
        address = header.cip;
    } else if (!entry_index.has_value()) {
        for (const samp::amx::AmxPublic& entry : publics_) {
            if (entry.name == public_name) {
                address = entry.address;
                break;
            }
        }
    }
    if (address < 0) {
        last_error_ = 20;
        return last_error_;
    }
    if (amx_.callback == nullptr) {
        for (const auto& native : natives_) {
            if (!native_functions_.contains(native.name)) return last_error_ = 19;
        }
    }
    amx_.flags |= 0x1000;
    stk_ = amx_.stk;
    hea_ = amx_.hea;
    hlw_ = amx_.hlw;
    const std::int32_t code_offset = address;
    const int arg_bytes = static_cast<int>(args.size() * kCellSize) + amx_.paramcount * kCellSize;
    bool restore_on_exit = true;
    bool direct_sleep_status = false;
    int dispatch_status;
    auto* data = amx_.data != nullptr ? static_cast<std::uint8_t*>(amx_.data)
                                    : const_cast<std::uint8_t*>(image) + header.dat;
    const auto execute_bytecode = [&]() -> int {

    const auto data_cell = [&, this](std::int32_t byte_offset) -> cell& {
        if (byte_offset < 0 || static_cast<std::int64_t>(byte_offset) + 4 > data_bytes)
            throw VmFault{kErrMemaccess};
        return *reinterpret_cast<cell*>(data + byte_offset);
    };
    const auto push = [&](cell value) {
        stk_ -= kCellSize;
        data_cell(stk_) = value;
    };
    if (stk_ > amx_.stp) return last_error_ = kErrStacklow;
    if (hea_ < hlw_) return last_error_ = kErrHeaplow;
    if (!continuing) {
    for (std::size_t i = args.size(); i > 0; --i) push(args[i - 1]);
    // The frame the callee's "proc" builds is
    //
    //     FRM+0   the previous frame pointer
    //     FRM+4   the return address
    //     FRM+8   the argument byte count
    //     FRM+12  the first argument
    //
    // so the caller pushes the argument byte count and then the return
    // address.  The return address of a call that comes from the host is the
    // sentinel the "retn" handler returns to.
    reset_stk_ = stk_ + arg_bytes;
    reset_hea_ = hea_;
    push(arg_bytes);
    push(kHostReturnAddress);
    amx_.paramcount = 0;
    cip_ = code_offset;
    frm_ = 0;
    pri_ = 0;
    alt_ = 0;
    } else {
        // The CONT path restores these fields and skips host-frame creation.
        cip_ = amx_.cip;
        frm_ = amx_.frm;
        pri_ = amx_.pri;
        alt_ = amx_.alt;
        reset_stk_ = amx_.reset_stk;
        reset_hea_ = amx_.reset_hea;
    }
    if (static_cast<std::int64_t>(stk_) < static_cast<std::int64_t>(hea_) + 64)
        return last_error_ = kErrStackerr;
    halted_ = false;
    sleeping_ = false;
    host_call_ = true;
    const auto run = [&, this]() -> int {
    // ----------------------------------------------------------- dispatch loop
    const auto data_cell = [&, this](std::int32_t byte_offset) -> cell& {
        if (byte_offset < 0 || static_cast<std::int64_t>(byte_offset) + 4 > data_bytes)
            throw VmFault{kErrMemaccess};
        return *reinterpret_cast<cell*>(data + byte_offset);
    };
    const auto push = [&](cell value) {
        stk_ -= kCellSize;
        data_cell(stk_) = value;
    };
    const auto pop = [&]() {
        const cell value = data_cell(stk_);
        stk_ += kCellSize;
        return value;
    };
    const auto code_cell = [&](std::int32_t byte_offset) -> cell& {
        if (byte_offset < 0 || static_cast<std::int64_t>(byte_offset) + 4 > code_bytes)
            throw VmFault{kErrMemaccess};
        return *reinterpret_cast<cell*>(code + byte_offset);
    };
    const auto code_value = [&](std::int32_t byte_offset) -> cell { return code_cell(byte_offset); };
    const auto next_operand = [&]() -> std::int32_t {
        const cell value = code_cell(cip_);
        cip_ += kCellSize;
        return value;
    };
    const auto next_code_offset = [&]() -> std::int32_t { return next_operand(); };
    const auto data_in_range = [this](std::int32_t byte_offset) {
        return static_cast<std::uint32_t>(byte_offset) < static_cast<std::uint32_t>(amx_.stp) &&
               !(byte_offset >= hea_ && byte_offset < stk_);
    };
    const auto add_cell = [](cell left, cell right) {
        return static_cast<cell>(static_cast<std::uint32_t>(left) +
                                 static_cast<std::uint32_t>(right));
    };
    const auto call_native = [&](std::int32_t index) {
        amx_.cip = cip_;
        amx_.frm = frm_;
        amx_.hea = hea_;
        amx_.stk = stk_;
        const auto suspended = std::tuple{alt_, frm_, stk_, hea_, hlw_, cip_,
                                          reset_stk_, reset_hea_, host_call_, sleeping_, halted_};
        int error;
        if (amx_.callback != nullptr) {
            using Callback = int (*)(samp::amx::Amx*, cell, cell*, const cell*);
            const auto callback = reinterpret_cast<Callback>(amx_.callback);
            error = callback(&amx_, index, &pri_, &data_cell(stk_));
        } else {
            if (index < 0 || static_cast<std::size_t>(index) >= natives_.size()) return kErrNative;
            const auto native = native_functions_.find(natives_[static_cast<std::size_t>(index)].name);
            if (native == native_functions_.end()) return 19;
            const std::int32_t bytes = data_cell(stk_);
            if (bytes < 0 || bytes % 4 != 0 ||
                static_cast<std::int64_t>(stk_) + 4 + bytes > amx_.stp) return kErrMemaccess;
            // SYSREQ passes DATA+STK itself; natives may edit argument cells.
            const auto* parameters = reinterpret_cast<const cell*>(data + stk_ + kCellSize);
            const std::span<const cell> native_args(parameters, static_cast<std::size_t>(bytes / kCellSize));
            amx_.error = 0;
            pri_ = native->second(native_args);
            error = amx_.error;
        }
        std::tie(alt_, frm_, stk_, hea_, hlw_, cip_, reset_stk_, reset_hea_,
                 host_call_, sleeping_, halted_) = suspended;
        return error;
    };
    for (;;) {
        if (cip_ < 0 || static_cast<std::int64_t>(cip_) + 4 > code_bytes) {
            return kErrMemaccess;
        }
        const cell opcode_cell = code_cell(cip_);
        cip_ += kCellSize;
        const cell opcode = opcode_cell;

        switch (opcode) {
            // ------------------------------------------------------------ load
            case 0x01:  // load.pri
                pri_ = data_cell(next_operand());
                break;
            case 0x02:  // load.alt
                alt_ = data_cell(next_operand());
                break;
            case 0x03:  // load.s.pri
                pri_ = data_cell(frm_ + next_operand());
                break;
            case 0x04:  // load.s.alt
                alt_ = data_cell(frm_ + next_operand());
                break;
            case 0x05:  // lref.pri
                pri_ = data_cell(data_cell(next_operand()));
                break;
            case 0x06:  // lref.alt
                alt_ = data_cell(data_cell(next_operand()));
                break;
            case 0x07:  // lref.s.pri
                pri_ = data_cell(data_cell(frm_ + next_operand()));
                break;
            case 0x08:  // lref.s.alt
                alt_ = data_cell(data_cell(frm_ + next_operand()));
                break;
            case 0x09: {  // load.i
                const std::int32_t address = pri_;
                if (!data_in_range(address)) {
                    return kErrMemaccess;
                }
                pri_ = data_cell(address);
                break;
            }
            case 0x0A: {  // load.b / load.w / load
                const std::int32_t width = next_operand();
                const std::int32_t address = pri_;
                if (!data_in_range(address)) {
                    return kErrMemaccess;
                }
                if (width == 1) {
                    pri_ = data[address];
                } else if (width == 2) {
                    const std::uint8_t* bytes =
                        data + address;
                    pri_ = static_cast<std::uint16_t>(bytes[0] | (bytes[1] << 8));
                } else if (width == 4) {
                    pri_ = data_cell(address);
                }
                break;
            }
            case 0x0B:  // const.pri
                pri_ = next_operand();
                break;
            case 0x0C:  // const.alt
                alt_ = next_operand();
                break;
            case 0x0D:  // addr.pri
                pri_ = frm_ + next_operand();
                break;
            case 0x0E:  // addr.alt
                alt_ = frm_ + next_operand();
                break;

            // ------------------------------------------------------------ store
            case 0x0F:  // stor.pri
                data_cell(next_operand()) = pri_;
                break;
            case 0x10:  // stor.alt
                data_cell(next_operand()) = alt_;
                break;
            case 0x11:  // stor.s.pri
                data_cell(frm_ + next_operand()) = pri_;
                break;
            case 0x12:  // stor.s.alt
                data_cell(frm_ + next_operand()) = alt_;
                break;
            case 0x13:  // sref.pri
                data_cell(data_cell(next_operand())) = pri_;
                break;
            case 0x14:  // sref.alt
                data_cell(data_cell(next_operand())) = alt_;
                break;
            case 0x15:  // sref.s.pri
                data_cell(data_cell(frm_ + next_operand())) = pri_;
                break;
            case 0x16:  // sref.s.alt
                data_cell(data_cell(frm_ + next_operand())) = alt_;
                break;
            case 0x17: {  // stor.i
                const std::int32_t address = alt_;
                if (!data_in_range(address)) {
                    return kErrMemaccess;
                }
                data_cell(address) = pri_;
                break;
            }
            case 0x18: {  // stor.b / stor.w / stor
                const std::int32_t width = next_operand();
                const std::int32_t address = alt_;
                if (!data_in_range(address)) {
                    return kErrMemaccess;
                }
                std::uint8_t* bytes = data + address;
                if (width == 1) {
                    bytes[0] = static_cast<std::uint8_t>(pri_);
                } else if (width == 2) {
                    bytes[0] = static_cast<std::uint8_t>(pri_ & 0xFF);
                    bytes[1] = static_cast<std::uint8_t>((pri_ >> 8) & 0xFF);
                } else if (width == 4) {
                    data_cell(address) = pri_;
                }
                break;
            }

            // ------------------------------------------------------------ index
            case 0x19: {  // lidx
                const auto address = add_cell(alt_, static_cast<cell>(static_cast<std::uint32_t>(pri_) * 4u));
                if (!data_in_range(address)) {
                    return kErrMemaccess;
                }
                pri_ = data_cell(address);
                break;
            }
            case 0x1A: {  // lidx.b
                const std::int32_t shift = next_operand();
                const auto address = add_cell(alt_, static_cast<cell>(static_cast<std::uint32_t>(pri_) << (shift & 31)));
                if (!data_in_range(address)) {
                    return kErrMemaccess;
                }
                pri_ = data_cell(address);
                break;
            }
            case 0x1B:  // idxaddr
                pri_ = add_cell(alt_, static_cast<cell>(static_cast<std::uint32_t>(pri_) * 4u));
                break;
            case 0x1C: {  // idxaddr.b -- 0x402133, not align.pri
                const std::int32_t shift = next_operand() & 31;
                pri_ = add_cell(alt_, static_cast<cell>(static_cast<std::uint32_t>(pri_) << shift));
                break;
            }
            case 0x1D: {  // align.pri
                const std::int32_t value = next_operand();
                if (static_cast<std::uint32_t>(value) < 4) {
                    pri_ ^= (4 - value);
                }
                break;
            }
            case 0x1E: {  // align.alt
                const std::int32_t value = next_operand();
                if (static_cast<std::uint32_t>(value) < 4) {
                    alt_ ^= (4 - value);
                }
                break;
            }
            case 0x1F: {  // lctrl: the seven way sub dispatch (0x402188)
                const std::int32_t selector = next_operand();
                switch (selector) {
                    case 0: pri_ = header.cod; break;
                    case 1: pri_ = header.dat; break;
                    case 2: pri_ = hea_; break;
                    case 3: pri_ = amx_.stp; break;
                    case 4: pri_ = stk_; break;
                    case 5: pri_ = frm_; break;
                    case 6: pri_ = cip_; break;
                    default: break;
                }
                break;
            }
            case 0x20: {  // sctrl: the five way sub dispatch
                const std::int32_t selector = next_operand();
                switch (selector) {
                    case 2: hea_ = pri_; break;
                    case 4: stk_ = pri_; break;
                    case 5: frm_ = pri_; break;
                    case 6: cip_ = pri_; break;
                    default: break;
                }
                break;
            }

            // ------------------------------------------------------------ move
            case 0x21:  // move.pri
                pri_ = alt_;
                break;
            case 0x22:  // move.alt
                alt_ = pri_;
                break;
            case 0x23:  // xchg
                std::swap(pri_, alt_);
                break;

            // ------------------------------------------------------------ stack
            case 0x24:  // push.pri
                push(pri_);
                break;
            case 0x25:  // push.alt
                push(alt_);
                break;
            case 0x26: {  // push.n
                const std::int32_t count = next_operand();
                for (std::int32_t i = 0; i < count; ++i) {
                    push(pri_);
                }
                break;
            }
            case 0x27:  // push.c
                push(next_operand());
                break;
            case 0x28:  // push.r
                push(data_cell(next_operand()));
                break;
            case 0x29:  // push.s
                push(data_cell(frm_ + next_operand()));
                break;
            case 0x2A:  // pop.pri
                pri_ = pop();
                break;
            case 0x2B:  // pop.alt
                alt_ = pop();
                break;
            case 0x2C: {  // stack
                const std::int32_t bytes = next_operand();
                alt_ = stk_;
                stk_ = add_cell(stk_, bytes);
                if (static_cast<std::int64_t>(stk_) < static_cast<std::int64_t>(hea_) + 64) {
                    restore_on_exit = false;
                    return kErrStackerr;
                }
                if (stk_ > amx_.stp) { restore_on_exit = false; return kErrStacklow; }
                break;
            }
            case 0x2D: {  // heap
                const std::int32_t bytes = next_operand();
                alt_ = hea_;
                hea_ = add_cell(hea_, bytes);
                if (static_cast<std::int64_t>(stk_) < static_cast<std::int64_t>(hea_) + 64) {
                    restore_on_exit = false;
                    return kErrStackerr;
                }
                if (hea_ < amx_.hlw) { restore_on_exit = false; return kErrHeaplow; }
                break;
            }
            case 0x2E: {  // proc
                const std::int32_t saved = frm_;
                frm_ = stk_ - kCellSize;
                data_cell(frm_) = saved;  // the previous frame pointer
                stk_ = frm_;
                if (static_cast<std::int64_t>(stk_) < static_cast<std::int64_t>(hea_) + 64) {
                    restore_on_exit = false;
                    return kErrStackerr;
                }
                break;
            }
            case 0x2F: {  // ret
                const cell saved = data_cell(stk_);
                const cell address = data_cell(stk_ + 4);
                frm_ = saved;
                if (static_cast<std::uint32_t>(address) >= static_cast<std::uint32_t>(code_bytes))
                    return kErrMemaccess;
                cip_ = address;
                stk_ += 8;
                break;
            }
            case 0x30: {  // retn
                const cell saved = data_cell(stk_);
                const cell address = data_cell(stk_ + 4);
                const cell arg_bytes = data_cell(stk_ + 8);
                frm_ = saved;
                if (static_cast<std::uint32_t>(address) >= static_cast<std::uint32_t>(code_bytes))
                    return kErrMemaccess;
                cip_ = address;
                stk_ = stk_ + 8 + arg_bytes + 4;
                amx_.stk = stk_;
                break;
            }
            case 0x31: {  // call
                // samp-server.exe 0x00402442: the handler pushes
                //   (CIP - code base) + 4
                // where CIP already points at the operand cell, so the pushed
                // value is the code offset of the NEXT instruction, and then
                // it jumps to the absolute code offset in the operand.
                const std::int32_t target = next_code_offset();
                push(cip_);
                cip_ = target;
                break;
            }
            case 0x32:  // invalid
                return kErrInvInstr;

            // ------------------------------------------------------------ jumps
            case 0x33:  // jump
                cip_ = next_code_offset();
                break;
            case 0x34: {  // jrel
                const std::int32_t offset = next_operand();
                cip_ = add_cell(cip_, offset);
                break;
            }
            case 0x35: {  // jzer
                const std::int32_t target = next_code_offset();
                if (pri_ == 0) {
                    cip_ = target;
                }
                break;
            }
            case 0x36: {  // jnz
                const std::int32_t target = next_code_offset();
                if (pri_ != 0) {
                    cip_ = target;
                }
                break;
            }
            case 0x37: {  // jeq
                const std::int32_t target = next_code_offset();
                if (pri_ == alt_) {
                    cip_ = target;
                }
                break;
            }
            case 0x38: {  // jneq
                const std::int32_t target = next_code_offset();
                if (pri_ != alt_) {
                    cip_ = target;
                }
                break;
            }
            case 0x39: {  // jless
                const std::int32_t target = next_code_offset();
                if (static_cast<std::uint32_t>(pri_) < static_cast<std::uint32_t>(alt_)) {
                    cip_ = target;
                }
                break;
            }
            case 0x3A: {  // jleq
                const std::int32_t target = next_code_offset();
                if (static_cast<std::uint32_t>(pri_) <= static_cast<std::uint32_t>(alt_)) {
                    cip_ = target;
                }
                break;
            }
            case 0x3B: {  // jgrtr
                const std::int32_t target = next_code_offset();
                if (static_cast<std::uint32_t>(pri_) > static_cast<std::uint32_t>(alt_)) {
                    cip_ = target;
                }
                break;
            }
            case 0x3C: {  // jgeq
                const std::int32_t target = next_code_offset();
                if (static_cast<std::uint32_t>(pri_) >= static_cast<std::uint32_t>(alt_)) {
                    cip_ = target;
                }
                break;
            }
            case 0x3D: {  // jsless
                const std::int32_t target = next_code_offset();
                if (pri_ < alt_) {
                    cip_ = target;
                }
                break;
            }
            case 0x3E: {  // jsleq
                const std::int32_t target = next_code_offset();
                if (pri_ <= alt_) {
                    cip_ = target;
                }
                break;
            }
            case 0x3F: {  // jsgrtr
                const std::int32_t target = next_code_offset();
                if (pri_ > alt_) {
                    cip_ = target;
                }
                break;
            }
            case 0x40: {  // jsgeq
                const std::int32_t target = next_code_offset();
                if (pri_ >= alt_) {
                    cip_ = target;
                }
                break;
            }

            // ------------------------------------------------------------ shifts
            case 0x41:  // shl
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) <<
                                    (static_cast<std::uint32_t>(alt_) & 31));
                break;
            case 0x42:  // shr
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) >>
                                    (static_cast<std::uint32_t>(alt_) & 31));
                break;
            case 0x43:  // sshr
                pri_ = pri_ >> (static_cast<std::uint32_t>(alt_) & 31);
                break;
            case 0x44: {  // shl.c
                const std::int32_t count = next_operand() & 31;
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) << count);
                break;
            }
            case 0x45: {  // shl.c.alt
                const std::int32_t count = next_operand() & 31;
                alt_ = static_cast<cell>(static_cast<std::uint32_t>(alt_) << count);
                break;
            }
            case 0x46: {  // shr.c
                const std::int32_t count = next_operand() & 31;
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) >> count);
                break;
            }
            case 0x47: {  // shr.c.alt
                const std::int32_t count = next_operand() & 31;
                alt_ = static_cast<cell>(static_cast<std::uint32_t>(alt_) >> count);
                break;
            }

            // ------------------------------------------------------------ arithmetic
            case 0x48:  // smul
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) *
                                         static_cast<std::uint32_t>(alt_));
                break;
            case 0x49: {  // sdiv
                if (alt_ == 0) {
                    return kErrDivide;
                }
                // 0x4025C8 performs three IDIVs with wrapping ADD/SUB
                // between them. Large divisors expose that intermediate wrap.
                const cell remainder = add_cell(pri_ % alt_, alt_) % alt_;
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) -
                                         static_cast<std::uint32_t>(remainder)) / alt_;
                alt_ = remainder;
                break;
            }
            case 0x4A: {  // sdiv.alt
                if (pri_ == 0) {
                    return kErrDivide;
                }
                // The alternate form uses the same three-stage arithmetic
                // at 0x4025FA, with PRI as divisor and ALT as dividend.
                const cell remainder = add_cell(alt_ % pri_, pri_) % pri_;
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(alt_) -
                                         static_cast<std::uint32_t>(remainder)) / pri_;
                alt_ = remainder;
                break;
            }
            case 0x4B:  // umul
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) *
                                         static_cast<std::uint32_t>(alt_));
                break;
            case 0x4C: {  // udiv
                if (alt_ == 0) {
                    return kErrDivide;
                }
                const std::uint32_t a = static_cast<std::uint32_t>(pri_);
                const std::uint32_t b = static_cast<std::uint32_t>(alt_);
                pri_ = static_cast<cell>(a / b);
                alt_ = static_cast<cell>(a % b);
                break;
            }
            case 0x4D: {  // udiv.alt
                if (pri_ == 0) {
                    return kErrDivide;
                }
                const std::uint32_t a = static_cast<std::uint32_t>(alt_);
                const std::uint32_t b = static_cast<std::uint32_t>(pri_);
                pri_ = static_cast<cell>(a / b);
                alt_ = static_cast<cell>(a % b);
                break;
            }
            case 0x4E:  // add: PRI = PRI + ALT
                // samp-server.exe 0x0040213b: "add ebx, [esp + 0x14]" and
                // nothing else, so the opcode takes NO operand cell.  The
                // lane R08 table was wrong about this one, and the wrong
                // operand desynchronised the instruction stream.
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) +
                                         static_cast<std::uint32_t>(alt_));
                break;
            case 0x4F:  // sub
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) -
                                         static_cast<std::uint32_t>(alt_));
                break;
            case 0x50:  // sub.alt
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(alt_) -
                                         static_cast<std::uint32_t>(pri_));
                break;
            case 0x51:  // and
                pri_ = pri_ & alt_;
                break;
            case 0x52:  // or
                pri_ = pri_ | alt_;
                break;
            case 0x53:  // xor
                pri_ = pri_ ^ alt_;
                break;
            case 0x54:  // not
                pri_ = (pri_ == 0) ? 1 : 0;
                break;
            case 0x55:  // neg
                pri_ = static_cast<cell>(0 - static_cast<std::uint32_t>(pri_));
                break;
            case 0x56:  // invert
                pri_ = ~pri_;
                break;
            case 0x57:  // add.c
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) +
                                         static_cast<std::uint32_t>(next_operand()));
                break;
            case 0x58:  // smul.c
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) *
                                         static_cast<std::uint32_t>(next_operand()));
                break;

            // ------------------------------------------------------------ zero / sign
            case 0x59:  // zero.pri
                pri_ = 0;
                break;
            case 0x5A:  // zero.alt
                alt_ = 0;
                break;
            case 0x5B:  // zero.s (the absolute data offset)
                data_cell(next_operand()) = 0;
                break;
            case 0x5C:  // zero.s (the frame offset)
                data_cell(frm_ + next_operand()) = 0;
                break;
            case 0x5D:  // sign.pri
                if ((pri_ & 0xFF) >= 0x80) {
                    pri_ |= static_cast<cell>(0xFFFFFF00u);
                }
                break;
            case 0x5E:  // sign.alt
                if ((alt_ & 0xFF) >= 0x80) {
                    alt_ |= static_cast<cell>(0xFFFFFF00u);
                }
                break;

            // ------------------------------------------------------------ compare
            case 0x5F:  // eq
                pri_ = (pri_ == alt_) ? 1 : 0;
                break;
            case 0x60:  // neq
                pri_ = (pri_ != alt_) ? 1 : 0;
                break;
            case 0x61:  // less
                pri_ = (static_cast<std::uint32_t>(pri_) < static_cast<std::uint32_t>(alt_)) ? 1 : 0;
                break;
            case 0x62:  // leq
                pri_ = (static_cast<std::uint32_t>(pri_) <= static_cast<std::uint32_t>(alt_)) ? 1 : 0;
                break;
            case 0x63:  // grtr
                pri_ = (static_cast<std::uint32_t>(pri_) > static_cast<std::uint32_t>(alt_)) ? 1 : 0;
                break;
            case 0x64:  // geq
                pri_ = (static_cast<std::uint32_t>(pri_) >= static_cast<std::uint32_t>(alt_)) ? 1 : 0;
                break;
            case 0x65:  // sless
                pri_ = (pri_ < alt_) ? 1 : 0;
                break;
            case 0x66:  // sleq
                pri_ = (pri_ <= alt_) ? 1 : 0;
                break;
            case 0x67:  // sgrtr
                pri_ = (pri_ > alt_) ? 1 : 0;
                break;
            case 0x68:  // sgeq
                pri_ = (pri_ >= alt_) ? 1 : 0;
                break;
            case 0x69: {  // eq.c.pri
                const cell value = next_operand();
                pri_ = (pri_ == value) ? 1 : 0;
                break;
            }
            case 0x6A: {  // eq.c.alt
                const cell value = next_operand();
                pri_ = (alt_ == value) ? 1 : 0;
                break;
            }

            // ------------------------------------------------------------ inc / dec
            case 0x6B:  // inc.pri: PRI = PRI + 1
                // samp-server.exe 0x004027e1: "inc ebx", so the opcode
                // increments the primary register.  The lane R08 table said
                // it shared the tail of "geq"; it does not.
                pri_ = static_cast<cell>(static_cast<std::uint32_t>(pri_) + 1);
                break;
            case 0x6C:  // inc.alt
                alt_ = add_cell(alt_, 1);
                break;
            case 0x6D:  // inc.s.abs
                { auto& value = data_cell(next_operand()); value = add_cell(value, 1); }
                break;
            case 0x6E:  // inc.s
                { auto& value = data_cell(frm_ + next_operand()); value = add_cell(value, 1); }
                break;
            case 0x6F:  // inc.i
                { auto& value = data_cell(pri_); value = add_cell(value, 1); }
                break;
            case 0x70:  // dec.pri
                pri_ = add_cell(pri_, -1);
                break;
            case 0x71:  // dec.alt
                alt_ = add_cell(alt_, -1);
                break;
            case 0x72:  // dec.s.abs
                { auto& value = data_cell(next_operand()); value = add_cell(value, -1); }
                break;
            case 0x73:  // dec.s
                { auto& value = data_cell(frm_ + next_operand()); value = add_cell(value, -1); }
                break;
            case 0x74:  // dec.i
                { auto& value = data_cell(pri_); value = add_cell(value, -1); }
                break;

            // ------------------------------------------------------------ memory
            case 0x75: {  // memmove
                const std::int32_t bytes = next_operand();
                const std::int32_t from = pri_;
                const std::int32_t to = alt_;
                const auto valid_block = [&](std::int32_t address) {
                    const auto end = static_cast<std::int64_t>(address) + bytes;
                    return bytes >= 0 && data_in_range(address) && end <= amx_.stp &&
                           !(end > hea_ && end < stk_);
                };
                if (!valid_block(from) || !valid_block(to)) return kErrMemaccess;
                // The native x86 routine copies forwards in DWORD units and
                // then bytes. Overlap is observable; memmove changes it.
                for (std::int32_t offset = 0; offset + 4 <= bytes; offset += 4)
                    data_cell(to + offset) = data_cell(from + offset);
                for (std::int32_t offset = bytes & ~3; offset < bytes; ++offset)
                    data[to + offset] = data[from + offset];
                break;
            }
            case 0x76: {  // cmps
                const std::int32_t bytes = next_operand();
                const std::int32_t a = pri_;
                const std::int32_t b = alt_;
                const auto valid_block = [&](std::int32_t address) {
                    const auto end = static_cast<std::int64_t>(address) + bytes;
                    return bytes >= 0 && data_in_range(address) && end <= amx_.stp &&
                           !(end > hea_ && end < stk_);
                };
                if (!valid_block(a) || !valid_block(b)) return kErrMemaccess;
                // REPE CMPSB compares ALT against PRI and returns -1/0/+1.
                const int compare = std::memcmp(data + b, data + a, bytes);
                pri_ = compare < 0 ? -1 : compare > 0 ? 1 : 0;
                break;
            }
            case 0x77: {  // fill
                const std::int32_t count = next_operand();
                const std::int32_t address = alt_;
                const auto end = static_cast<std::int64_t>(address) + count;
                if (count < 0 || !data_in_range(address) || end > amx_.stp ||
                    (end > hea_ && end < stk_)) return kErrMemaccess;
                const std::int32_t cells = count / kCellSize;
                for (std::int32_t i = 0; i < cells; ++i) {
                    data_cell(address + i * kCellSize) = pri_;
                }
                break;
            }
            case 0x78: {  // halt
                const std::int32_t code = next_operand();
                halted_ = true;
                amx_.cip = cip_;
                amx_.frm = frm_;
                amx_.pri = pri_;
                amx_.alt = alt_;
                return code;
            }
            case 0x79: {  // bounds
                const std::int32_t limit = next_operand();
                if (static_cast<std::uint32_t>(pri_) > static_cast<std::uint32_t>(limit)) {
                    return kErrBounds;
                }
                break;
            }

            // ------------------------------------------------------------ natives
            case 0x7A: {  // sysreq.pri
                const std::int32_t index = pri_;
                const int error = call_native(index);
                dispatch_status = error;
                if (error != kErrNone) {
                    return error;
                }
                break;
            }
            case 0x7B: {  // sysreq.c
                const std::int32_t index = next_operand();
                const int error = call_native(index);
                dispatch_status = error;
                if (error != kErrNone) {
                    return error;
                }
                break;
            }
            case 0x7C:  // invalid
                return kErrInvInstr;

            // ------------------------------------------------------------ misc
            case 0x7D: {  // nop.2
                (void)next_operand();
                (void)next_operand();
                break;
            }
            case 0x7E: {  // jrel2
                const std::int32_t offset = next_operand();
                cip_ = add_cell(cip_, offset);
                break;
            }
            case 0x7F: {  // nop.2
                (void)next_operand();
                (void)next_operand();
                break;
            }
            case 0x80:  // invalid
                return kErrInvInstr;
            case 0x81: {  // switch
                const std::int32_t table = next_code_offset();
                const std::int32_t count = code_value(table + 4);
                dispatch_status = count;
                const std::int32_t default_target = code_value(table + 8);
                std::int32_t target = default_target;
                for (std::int32_t i = 0; i < count; ++i) {
                    const std::int32_t value = code_value(table + 12 + i * 8);
                    const std::int32_t destination = code_value(table + 12 + i * 8 + 4);
                    if (pri_ == value) {
                        target = destination;
                        dispatch_status = count - i;
                        break;
                    }
                    dispatch_status = count - i - 1;
                }
                cip_ = target;
                break;
            }
            case 0x82:  // casetbl (never executed)
                return kErrInvInstr;
            case 0x83: {  // swap.pri
                const cell top = data_cell(stk_);
                data_cell(stk_) = pri_;
                pri_ = top;
                break;
            }
            case 0x84: {  // swap.alt
                const cell top = data_cell(stk_);
                data_cell(stk_) = alt_;
                alt_ = top;
                break;
            }
            case 0x85:  // push.adr
                push(frm_ + next_operand());
                break;
            case 0x86:  // nop
                break;
            case 0x87: {  // sysreq.d: a host pointer, NOT a native-table index
                const auto address = static_cast<std::uintptr_t>(static_cast<std::uint32_t>(next_operand()));
                amx_.cip = cip_;
                amx_.frm = frm_;
                amx_.hea = hea_;
                amx_.stk = stk_;
                const auto function = reinterpret_cast<PawnNative>(address);
                if (!function) return kErrNative;
                const auto suspended = std::tuple{alt_, frm_, stk_, hea_, hlw_, cip_,
                                                  reset_stk_, reset_hea_, host_call_, sleeping_, halted_};
                const auto value = function(&amx_, &data_cell(stk_));
                std::tie(alt_, frm_, stk_, hea_, hlw_, cip_, reset_stk_, reset_hea_,
                         host_call_, sleeping_, halted_) = suspended;
                pri_ = value;
                if (amx_.error == kErrSleep) {
                    // 0x402C01 returns the previous dispatch-status scratch
                    // slot, rather than loading twelve into EAX. The slot is
                    // written by SYSREQ callbacks, SWITCH and BREAK; otherwise
                    // its stack-dependent value is unspecified in the binary.
                    direct_sleep_status = true;
                    return kErrSleep;
                }
                if (amx_.error != 0) return amx_.error;
                break;
            }
            case 0x88: {  // nop.1
                (void)next_operand();
                break;
            }
            case 0x89: {  // break (the debugger line marker).  The opcode has no
                          // operand cell: the shipped compiler emits it as a
                          // single cell (bare.amx: '89 27 00' = break, push.c 0).
                if (amx_.debug != nullptr) {
                    amx_.frm = frm_;
                    amx_.stk = stk_;
                    amx_.hea = hea_;
                    amx_.cip = cip_;
                    const auto suspended = std::tuple{pri_, alt_, frm_, stk_, hea_, hlw_, cip_,
                                                      reset_stk_, reset_hea_, host_call_, sleeping_, halted_};
                    const auto hook = reinterpret_cast<int (*)(samp::amx::Amx*)>(amx_.debug);
                    const auto error = hook(&amx_);
                    dispatch_status = error;
                    std::tie(pri_, alt_, frm_, stk_, hea_, hlw_, cip_, reset_stk_, reset_hea_,
                             host_call_, sleeping_, halted_) = suspended;
                    if (error != 0) return error;
                }
                break;
            }
            default:
                return kErrInvInstr;
        }
    }
    };

    int error = 0;
    try { error = run(); }
    catch (const VmFault& fault) { error = fault.error; }
    sleeping_ = sleeping_ || error == kErrSleep;
    if (sleeping_) {
        amx_.pri = pri_;
        amx_.alt = alt_;
        amx_.reset_stk = reset_stk_;
        amx_.reset_hea = reset_hea_;
    } else if (restore_on_exit) {
        stk_ = reset_stk_;
        hea_ = reset_hea_;
        amx_.stk = stk_;
        amx_.hea = hea_;
    } else {
        // STACK/HEAP/PROC guard exits return directly in the original;
        // AMX retains its fields from the last native/debug synchronization.
        stk_ = amx_.stk;
        hea_ = amx_.hea;
    }
    host_call_ = false;
    return last_error_ = error;
    };
    int error = execute_bytecode();
    if (direct_sleep_status) {
#if defined(_MSC_VER) && defined(_M_IX86)
        __asm {
            mov eax, dispatch_status
            mov error, eax
        }
#else
        error = dispatch_status;
#endif
        last_error_ = error;
    }
    if (halted_) result = pri_;
    return error;
}

}  // namespace samp::pawn
