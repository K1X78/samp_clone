#include "pawn/core_natives.hpp"
#include "pawn/float_natives.hpp"
#include "pawn/natives.hpp"
#include "pawn/property_natives.hpp"
#include "pawn/string_natives.hpp"
#include "samp/server/game_layer.hpp"

#include <array>
#include <bit>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <initializer_list>
#include <limits>
#include <stdexcept>

using samp::amx::cell;

void require(bool condition, const char* description) {
    if (!condition) throw std::runtime_error(description);
}

#if defined(_MSC_VER) && defined(_M_IX86)
// Independent instruction oracle transcribed from 0x405E90 and the FSIN,
// FCOS and FPTAN owners. It retains the original x87 intermediate precision
// and range behavior, which the modern CRT can change.
cell reference_trig(float value, cell mode, int operation) {
    const double degrees = 0.017453292519943295;
    const double gradians = 0.015707963267948967;
    float result;
    __asm {
        fld value
        cmp mode, 1
        je use_degrees
        cmp mode, 2
        jne converted
        fmul gradians
        jmp converted
    use_degrees:
        fmul degrees
    converted:
        cmp operation, 0
        je use_sine
        cmp operation, 1
        je use_cosine
        fptan
        fstp st(0)
        jmp finished
    use_sine:
        fsin
        jmp finished
    use_cosine:
        fcos
    finished:
        fstp result
    }
    return std::bit_cast<cell>(result);
}
#endif

int main(int, char**) {
    try {
        samp::pawn::PawnVm vm;
        samp::server::GameLayer host;
        samp::pawn::register_server_natives(vm, host);
        std::array<cell, 256> data{};
        std::array<std::uint8_t, 256> image{};
        samp::amx::AmxHeader header;
        header.defsize = 8;
        header.publics = 56;
        header.natives = 64;
        header.dat = 128;
        std::memcpy(image.data(), &header, sizeof(header));
        const samp::amx::AmxFuncstubNt public_entry{8, 64};
        std::memcpy(image.data() + 56, &public_entry, sizeof(public_entry));
        std::memcpy(image.data() + 64, "OnTest", 7);
        vm.amx_.base = image.data();
        vm.amx_.data = data.data();
        vm.amx_.hea = 512;
        vm.amx_.stk = 768;
        vm.amx_.stp = 1024;
        const auto bits = [](float value) { return std::bit_cast<cell>(value); };
        const auto call = [&](const char* name, std::initializer_list<cell> args) {
            vm.amx_.error = 0;
            return vm.native_functions_.at(name)(std::span<const cell>(args.begin(), args.size()));
        };
        const auto floating = [&](const char* name, std::initializer_list<cell> args) {
            return std::bit_cast<float>(call(name, args));
        };
        // Official IsPlayerConnected 0x472DD0 reads occupancy, not the
        // configured player limit, and truncates the argument to WORD.
        samp::server::Config config;
        config.values_["maxplayers"] = "1";
        host.config_ = &config;
        require(call("IsPlayerConnected", {0}) == 0, "empty host has no connected slots");
        host.players_.resize(1001);
        require(call("IsPlayerConnected", {0}) == 0, "unoccupied in-range slot is disconnected");
        host.players_[0].in_use = true;
        host.players_[999].in_use = true;
        host.players_[1000].in_use = true;
        require(call("IsPlayerConnected", {0}) == 1, "occupied slot is connected before spawn");
        require(call("IsPlayerConnected", {999}) == 1, "fixed slot bound ignores configured maxplayers");
        require(call("IsPlayerConnected", {1000}) == 0, "slot 1000 exceeds official pool bound");
        require(call("IsPlayerConnected", {-1}) == 0, "negative ID truncates to rejected WORD");
        require(call("IsPlayerConnected", {65536}) == 1, "positive WORD wrap aliases slot zero");
        require(call("IsPlayerConnected", {-65536}) == 1, "negative WORD wrap aliases slot zero");
        require(call("IsPlayerConnected", {65536 + 999}) == 1, "WORD wrap retains occupied last slot");
        require(call("IsPlayerConnected", {1}) == 0, "unoccupied neighbour remains disconnected");
        samp::server::RakNetPeer leaving_peer;
        host.players_[0].peer = &leaving_peer;
        host.kick_player(0);
        require(call("IsPlayerConnected", {0}) == 0, "kick clears native-visible occupancy");
        require(call("IsPlayerConnected", {65536}) == 0, "wrapped ID observes disconnect too");
        require(host.players_[999].in_use, "occupancy queries and kick preserve other slots");

        for (const auto& [name, native] : samp::pawn::float_natives::kNatives) {
            require(vm.native_functions_.contains(std::string(name)), "float table not registered");
            require(native != nullptr, "float table has null callback");
        }
        for (const auto& [name, native] : samp::pawn::core_natives::kNatives) {
            require(vm.native_functions_.contains(std::string(name)), "core table not registered");
            require(native != nullptr, "core table has null callback");
        }
        for (const auto& [name, native] : samp::pawn::property_natives::kNatives) {
            require(vm.native_functions_.contains(std::string(name)), "property table not registered");
            require(native != nullptr, "property table has null callback");
        }
        for (const auto& [name, native] : samp::pawn::string_natives::kNatives) {
            require(vm.native_functions_.contains(std::string(name)), "string table not registered");
            require(native != nullptr, "string table has null callback");
        }

        require(floating("float", {-31}) == -31.0f, "integer conversion");
        require(floating("floatmul", {bits(-2), bits(3)}) == -6, "float multiply");
        require(floating("floatdiv", {bits(9), bits(2)}) == 4.5f, "float divide");
        require(std::isinf(floating("floatdiv", {bits(1), bits(0)})), "float division by zero");
        require(floating("floatadd", {bits(-2), bits(3)}) == 1, "float add");
        require(floating("floatsub", {bits(-2), bits(3)}) == -5, "float subtract");
        require(floating("floatfract", {bits(-1.25f)}) == 0.75f, "negative fractional part");
        require(call("floatround", {bits(-1.5f), 0}) == -1, "nearest rounds negative ties upward");
        require(call("floatround", {bits(-1.25f), 1}) == -2, "floor rounding");
        require(call("floatround", {bits(-1.25f), 2}) == -1, "ceiling rounding");
        require(call("floatround", {bits(-1.75f), 3}) == -1, "truncate rounding");
        require(call("floatround", {bits(2.5f), 99}) == 3, "unknown rounding mode uses nearest");
        require(call("floatround", {bits(std::numeric_limits<float>::infinity()), 0}) ==
                std::numeric_limits<cell>::min(), "x87 integer overflow result");
        const auto nan = std::bit_cast<cell>(0x7fc12345u);
        require(call("floatcmp", {nan, bits(1)}) == -1, "unordered comparison");
        require(call("floatcmp", {bits(0), bits(-0.0f)}) == 0, "signed zero comparison");
        require(call("floatcmp", {bits(2), bits(1)}) == 1, "greater comparison");
        require(floating("floatsqroot", {bits(9)}) == 3, "official square root name");
        require(std::isnan(floating("floatsqroot", {bits(-1)})) && vm.amx_.error == 0,
                "negative square root keeps official NaN behavior");
        require(floating("floatpower", {bits(2), bits(3)}) == 8, "float power");
        require(floating("floatlog", {bits(100), bits(10)}) == 2, "base ten log");
        require(floating("floatlog", {bits(8), bits(2)}) == 3, "base two log");
        require(call("floatlog", {bits(0), bits(10)}) == 0 && vm.amx_.error == 26,
                "log domain error propagates to AMX");
        require(std::isinf(floating("floatlog", {bits(2), bits(1)})) && vm.amx_.error == 0,
                "base one remains permitted");
        require(std::isnan(floating("floatlog", {nan, bits(10)})) && vm.amx_.error == 0,
                "NaN bypasses log domain rejection");
        require(std::fabs(floating("floatsin", {bits(90), 1}) - 1) < 0.000001f, "sine degrees");
        require(std::fabs(floating("floatcos", {bits(200), 2}) + 1) < 0.000001f, "cosine gradians");
        require(std::fabs(floating("floattan", {bits(45), 1}) - 1) < 0.000001f, "tangent degrees");
#if defined(_MSC_VER) && defined(_M_IX86)
        const char* trig_names[] = {"floatsin", "floatcos", "floattan"};
        for (int operation = 0; operation < 3; ++operation) {
            for (cell mode = 0; mode < 4; ++mode) {
                for (const float angle : {0.0f, -0.0f, 1.0f, 90.0f, 180.0f, 200.0f,
                                           1e20f, 1e-20f, std::numeric_limits<float>::max()}) {
                    const cell expected = reference_trig(angle, mode, operation);
                    const cell actual = call(trig_names[operation], {bits(angle), mode});
                    require(actual == expected, "trigonometry differs from official x87 instruction behavior");
                }
            }
        }
#endif
        require(call("floatabs", {bits(-0.0f)}) == bits(-0.0f), "absolute preserves negative zero");
        require(static_cast<std::uint32_t>(call("floatabs", {nan})) == 0xffc12345u,
                "absolute flips NaN sign and preserves payload");
        require(static_cast<std::uint32_t>(call("floatabs", {std::bit_cast<cell>(0x7f812345u)})) == 0xffc12345u,
                "absolute quiets signaling NaNs through the original x87 load");
        const char* decimal = "-12.5e1";
        for (std::size_t i = 0; i <= std::strlen(decimal); ++i) data[i] = decimal[i];
        require(floating("floatstr", {0}) == -125, "unpacked float string");
        data[0] = std::bit_cast<cell>(0x2d31322eu);
        data[1] = std::bit_cast<cell>(0x35653100u);
        require(floating("floatstr", {0}) == -125, "packed float string");
        for (int i = 0; i < 60; ++i) data[i] = '1';
        data[60] = 0;
        require(call("floatstr", {0}) == 0, "float strings of 60 characters are rejected");
        data[0] = 0;
        require(call("floatstr", {0}) == 0, "empty float string");

        data.fill(0);
        vm.amx_.frm = 0;
        data[2] = 12;
        data[3] = 64;
        data[16] = 111;
        data[17] = 222;
        require(call("numargs", {}) == 3, "frame argument count");
        require(call("getarg", {0, 1}) == 222, "array argument indexing");
        require(call("setarg", {0, 1, 333}) == 1 && data[17] == 333, "setarg writes DATA");
        data[3] = 600;
        require(call("setarg", {0, 0, 7}) == 0, "setarg rejects free heap/stack gap");
        data[3] = -4;
        require(call("setarg", {0, 0, 7}) == 0, "setarg rejects negative references");
        require(call("heapspace", {}) == 256, "heapspace reports bytes");
        for (std::size_t i = 0; i < 7; ++i) data[i] = "OnTest"[i];
        require(call("funcidx", {0}) == 0, "public function index");
        data[0] = 'X';
        require(call("funcidx", {0}) == -1, "missing public function index");
        for (int i = 0; i < 64; ++i) data[i] = 'X';
        data[64] = 0;
        require(call("funcidx", {0}) == 0 && vm.amx_.error == 10, "public name limit");
        require(static_cast<std::uint32_t>(call("swapchars", {0x12345678})) == 0x78563412u,
                "swapchars reverses all bytes");
        require(call("tolower", {'Z'}) == 'z', "CharLowerA conversion");
        require(call("toupper", {'z'}) == 'Z', "CharUpperA conversion");
        require(call("min", {-3, 2}) == -3, "signed minimum");
        require(call("max", {-3, 2}) == 2, "signed maximum");
        require(call("clamp", {7, 0, 5}) == 5, "upper clamp");
        require(call("clamp", {-2, 0, 5}) == 0, "lower clamp");
        require(call("clamp", {3, 0, 5}) == 3, "in-range clamp");
        require(call("clamp", {3, 5, 0}) == 5 && vm.amx_.error == 10,
                "reversed bounds return lower bound and raise error");

        samp::pawn::core_natives::random_state = 1;
        require(call("random", {0}) == 16838 &&
                samp::pawn::core_natives::random_state == 1103527590u, "official random sequence seed one");
        samp::pawn::core_natives::random_state = 1;
        require(call("random", {10}) == 8, "random uses exclusive modulus");
        require(call("random", {1}) == 0, "random bound one");
        samp::pawn::core_natives::random_state = 1;
        require(call("random", {-1}) == 16838, "random treats negative bounds as unsigned");

        data.fill(0);
        for (std::size_t i = 0; i < 8; ++i) data[i] = "Counter"[i];
        for (std::size_t i = 0; i < 6; ++i) data[40 + i] = "Hello"[i];
        require(call("setproperty", {7, 0, 12, 128}) == 0, "create named property");
        require(call("getproperty", {7, 0, 0, 256}) == 12, "read named property");
        data[0] = 'c';
        require(call("existproperty", {7, 0, 999}) == 1, "named property ignores value and case");
        require(call("setproperty", {7, 0, 24, 128}) == 12, "property update returns previous value");
        require(call("setproperty", {8, 0, 99, 128}) == 0, "property ids separate records");
        require(call("getproperty", {7, 0, 0, 256}) == 24, "property id isolation");
        require(call("setproperty", {7, 128, 321, 160}) == 0, "create anonymous string property");
        require(call("getproperty", {7, 128, 321, 256}) == 321 &&
                static_cast<std::uint32_t>(data[64]) == 0x48656c6cu &&
                static_cast<std::uint32_t>(data[65]) == 0x6f000000u, "packed string property output");
        require(call("setproperty", {7, 128, 321, 160}) == 321, "anonymous property matches id and value");
        data[150] = 0x11223344;
        require(call("getproperty", {7, 128, 321, 600}) == 0 && vm.amx_.error == 5 &&
                data[150] == 0x11223344, "property output rejects heap/stack gap before writing");
        samp::pawn::PawnVm second_vm;
        samp::pawn::register_server_natives(second_vm, host);
        second_vm.amx_ = vm.amx_;
        const std::array<cell, 4> shared_query{7, 0, 0, 256};
        require(second_vm.native_functions_.at("getproperty")(shared_query) == 24,
                "property library shares state between VMs");
        require(call("deleteproperty", {7, 0, 0}) == 24, "delete property from middle of list");
        require(call("existproperty", {7, 0, 0}) == 0, "deleted property absent");
        require(call("deleteproperty", {7, 128, 321}) == 321, "delete anonymous property");
        require(call("deleteproperty", {8, 0, 0}) == 99, "delete final property");
        require(call("deleteproperty", {8, 0, 0}) == 0, "missing property deletion returns zero");

        data.fill(0);
        const char* integer = " \t-2147483649tail";
        for (std::size_t i = 0; i <= std::strlen(integer); ++i) data[i] = integer[i];
        require(call("strval", {0}) == 2147483647, "strval wraps decimal overflow at 32 bits");
        require(call("strlen", {0}) == static_cast<cell>(std::strlen(integer)), "unpacked native strlen");
        data[0] = 0x20092b31; data[1] = 0x32337800;
        require(call("strval", {0}) == 123, "packed strval skips whitespace and optional plus");
        require(call("strlen", {0}) == 7, "packed native strlen");
        data[0] = 0x80; data[1] = '4'; data[2] = '2'; data[3] = 0;
        require(call("strval", {0}) == 42, "strval uses signed-byte whitespace comparison");
        for (int i = 0; i < 50; ++i) data[i] = '1';
        data[50] = 0;
        require(call("strval", {0}) == 0, "strval rejects 50-character inputs");
        require(call("strlen", {-4}) == 0 && vm.amx_.error == 0, "strlen invalid address returns zero");
        require(call("strlen", {600}) == 0 && vm.amx_.error == 0, "strlen rejects heap/stack gap silently");
        data[0] = 'A';
        require(call("ispacked", {0}) == 0, "ordinary unpacked detection");
        data[0] = 0x00ffffff;
        require(call("ispacked", {0}) == 1, "ispacked includes threshold boundary");
        data[0] = 0x01000000;
        require(call("ispacked", {0}) == 1, "ispacked positive packed word");
        data[0] = std::bit_cast<cell>(0xff000000u);
        require(call("ispacked", {0}) == 0, "ispacked preserves signed comparison quirk");
        data.fill(0);
        std::memcpy(data.data(), "abcdef", 7);
        require(call("memcpy", {0, 0, 2, 4, 4}) == 1 &&
                std::memcmp(data.data(), "ababcd", 6) == 0, "native memcpy supports overlapping arrays");
        require(call("memcpy", {0, 0, -1, 4, 4}) == 0, "native memcpy rejects negative byte offset");
        require(call("memcpy", {0, 0, 0, -1, 4}) == 0, "native memcpy rejects negative length");
        require(call("memcpy", {0, 0, 2, 15, 4}) == 0, "native memcpy capacity is measured in cells");
        require(call("memcpy", {0, 0, 16, 0, 4}) == 1, "native memcpy permits zero bytes at capacity");

        // Exercise actual SYSREQ.C binding, interpreter frames and AMX error
        // propagation, using an in-memory script without starting a server.
        const auto execute_native = [&](const char* name, std::initializer_list<cell> args,
                                        cell& result) {
            std::vector<cell> code{0x78, 0, 0x2e}; // HALT 0; PROC
            for (auto it = std::rbegin(args); it != std::rend(args); ++it) {
                code.push_back(0x27); code.push_back(*it);
            }
            code.insert(code.end(), {0x27, static_cast<cell>(args.size() * 4), 0x7b, 0,
                                     0x2c, static_cast<cell>(args.size() * 4 + 4), 0x30});
            vm.header_ = samp::amx::AmxHeader{};
            vm.header_.cod = 56;
            vm.header_.dat = 56 + static_cast<cell>(code.size() * 4);
            vm.header_.hea = vm.header_.dat + 64;
            vm.header_.stp = vm.header_.dat + 1024;
            vm.header_.cip = 8;
            vm.image_.assign(static_cast<std::size_t>(vm.header_.stp), 0);
            std::memcpy(vm.image_.data(), &vm.header_, sizeof(vm.header_));
            std::memcpy(vm.image_.data() + vm.header_.cod, code.data(), code.size() * 4);
            vm.natives_ = {samp::pawn::RequiredNative{name, 0}};
            vm.publics_.clear();
            vm.ok_ = true;
            vm.hea_ = vm.hlw_ = 64;
            vm.stk_ = 1020;
            vm.amx_ = samp::amx::Amx{};
            vm.amx_.base = vm.image_.data();
            vm.amx_.hea = vm.amx_.hlw = 64;
            vm.amx_.stp = vm.amx_.stk = 1020;
            return vm.execute({}, {}, result);
        };
        cell result = 0;
        require(execute_native("IsPlayerConnected", {999}, result) == 0 && result == 1,
                "interpreter queries live registered player occupancy");
        require(execute_native("IsPlayerConnected", {0}, result) == 0 && result == 0,
                "interpreter observes disconnected slot");
        require(execute_native("IsPlayerConnected", {65536 + 999}, result) == 0 && result == 1,
                "interpreter retains native WORD ID truncation");
        require(execute_native("floatmul", {bits(3), bits(7)}, result) == 0 && result == bits(21),
                "interpreter invokes registered float native");
        require(execute_native("floatlog", {bits(-1), bits(10)}, result) == 26,
                "interpreter propagates float native domain error");
        require(execute_native("clamp", {3, 5, 0}, result) == 10,
                "interpreter propagates core native error");
        std::puts("Pawn native registration, behavior and interpreter integration passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
