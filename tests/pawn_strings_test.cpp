#include "pawn/amx_set_string_api.hpp"
#include "pawn/amx_string_api.hpp"
#include "pawn/natives.hpp"
#include "pawn/string_cells.hpp"
#include "samp/server/game_layer.hpp"

#include <array>
#include <bit>
#include <cstdio>
#include <cstring>
#include <initializer_list>
#include <limits>
#include <stdexcept>

using samp::amx::cell;

void require(bool condition, const char* description) {
    if (!condition) throw std::runtime_error(description);
}

int main(int, char**) {
    try {
        samp::pawn::PawnVm vm;
        samp::server::GameLayer host;
        samp::pawn::register_server_natives(vm, host);
        std::array<cell, 4096> data{};
        samp::amx::AmxHeader header;
        vm.amx_.base = &header;
        vm.amx_.data = data.data();
        vm.amx_.hea = 12288;
        vm.amx_.stk = 14336;
        vm.amx_.stp = 16384;
        const auto call = [&](const char* name, std::initializer_list<cell> args) {
            vm.amx_.error = 0;
            std::vector<cell> parameters(args);
            return vm.native_functions_.at(name)(parameters);
        };
        const auto put = [&](cell address, const char* text, bool packed) {
            samp::pawn::amx_string::set_string(data.data() + address / 4, text, packed, 0, 128);
        };
        const auto text = [&](cell address) {
            std::array<char, 1024> output{};
            samp::pawn::amx_string::get_string(output.data(), data.data() + address / 4, 0,
                                             static_cast<std::uint32_t>(output.size()));
            return std::string(output.data());
        };
        constexpr cell destination = 512;
        constexpr cell source = 0;
        constexpr cell maximum = std::numeric_limits<cell>::max();

        put(source, "ABCDEFGH", false);
        data[131] = 0x12345678;
        require(call("strpack", {destination, source, 3}) == 8, "strpack character count");
        require(static_cast<std::uint32_t>(data[128]) == 0x41424344u &&
                static_cast<std::uint32_t>(data[129]) == 0x45464748u && data[130] == 0 &&
                data[131] == 0x12345678, "packed words and full terminal cell");
        require(call("strpack", {destination, source, 1}) == 3 && text(destination) == "ABC",
                "strpack truncates unpacked input to cell capacity");
        put(source, "ABCDEFGH", true);
        require(call("strpack", {destination, source, 1}) == 3 && text(destination) == "ABC",
                "strpack truncates packed input and clears low-order bytes");
        require(call("strpack", {destination, source, 0}) == 8 && text(destination) == "ABCDEFGH",
                "strpack zero capacity preserves official unsigned arithmetic");
        put(source, "", false);
        require(call("strpack", {destination, source, 0}) == 0 && data[128] == 0,
                "empty strpack writes terminal word even with zero capacity");
        data[0] = 0x10041; data[1] = 0x20042; data[2] = 0;
        require(call("strpack", {destination, source, 2}) == 2 && text(destination) == "AB",
                "strpack keeps only each unpacked cell's low byte");
        put(source, "ABCD", false);
        require(call("strpack", {source, source, 4}) == 4 && text(source) == "ABCD",
                "strpack supports in-place compression");
        require(call("strunpack", {source, source, 16}) == 4 && data[0] == 'A' &&
                data[1] == 'B' && data[2] == 'C' && data[3] == 'D' && data[4] == 0,
                "strunpack expands in place backward");
        put(source, "ABCDEFGH", true);
        require(call("strunpack", {destination, source, 3}) == 2 && text(destination) == "AB" &&
                data[128] == 'A' && data[129] == 'B', "strunpack truncation uses unpacked cell capacity");
        put(source, "ABCD", false);
        require(call("strunpack", {4, source, 8}) == 4 && text(4) == "AAAA",
                "strunpack forward copies retain official overlapping-input behavior");
        put(source, "ABCD", true);
        require(call("strunpack", {0, source, 0}) == 0 && vm.amx_.error == 10,
                "strunpack invalid wrapped endpoint raises native error ten");
        data[3075] = 0x11223344;
        require(call("strpack", {12300, source, 2}) == 0 && vm.amx_.error == 10 &&
                data[3075] == 0x11223344, "strpack validates output before writing");

        for (const bool destination_packed : {false, true}) {
            for (const bool source_packed : {false, true}) {
                put(destination, "AB", destination_packed);
                put(source, "CDEF", source_packed);
                require(call("strcat", {destination, source, 32}) == 4 && text(destination) == "ABCDEF",
                        "strcat handles every source/destination representation pair");
                require((static_cast<std::uint32_t>(data[128]) > 0x00ffffffu) == destination_packed,
                        "nonempty strcat destination retains its representation");
            }
        }
        put(destination, "", false);
        put(source, "Packed", true);
        require(call("strcat", {destination, source, 32}) == 6 &&
                static_cast<std::uint32_t>(data[128]) == 0x5061636bu,
                "empty strcat destination inherits packed representation");
        put(destination, "AB", false);
        put(source, "CDEFGH", false);
        require(call("strcat", {destination, source, 5}) == 2 && text(destination) == "ABCD",
                "unpacked strcat returns appended count after truncation");
        put(destination, "AB", true);
        require(call("strcat", {destination, source, 2}) == 5 && text(destination) == "ABCDEFG",
                "packed strcat truncates unpacked input exactly");
        put(destination, "AB", true);
        put(source, "CDEFGH", true);
        require(call("strcat", {destination, source, 2}) == 5 && text(destination) == "ABCDEFGH",
                "packed-source partial append preserves official whole-word copy quirk");
        put(destination, "ABCDEFG", true);
        require(call("strcat", {destination, source, 2}) == 0 && text(destination) == "ABCDEFG",
                "packed strcat preserves a full destination");

        put(source, "Alpha", true);
        put(destination, "alpha", false);
        require(call("strcmp", {source, destination, 0, maximum}) == -1, "case-sensitive mixed representation compare");
        require(call("strcmp", {source, destination, 1, maximum}) == 0, "CharLowerA case folding");
        require(call("strcmp", {source, destination, 0, 0}) == 0, "zero comparison limit");
        require(call("strcmp", {source, destination, 0, -1}) == 0, "negative comparison limit");
        put(source, "ab", false);
        put(destination, "abcd", true);
        require(call("strcmp", {source, destination, 0, maximum}) == -2, "equal prefix returns length difference");
        require(call("strcmp", {source, destination, 0, 2}) == 0, "bounded equal prefix compares equal");
        put(source, "", false);
        require(call("strcmp", {source, destination, 0, maximum}) == 0,
                "official empty-string comparison branch returns zero");
        data[0] = std::bit_cast<cell>(0xff000000u);
        data[128] = 255; data[129] = 0;
        require(call("strcmp", {source, destination, 0, maximum}) == 0,
                "character helper detects packed words with high-bit characters as unsigned");

        for (const bool source_packed : {false, true}) {
            for (const bool needle_packed : {false, true}) {
                put(source, "One two ONE", source_packed);
                put(destination, "ONE", needle_packed);
                require(call("strfind", {source, destination, 1, 0}) == 0, "case-folded mixed representation search");
                require(call("strfind", {source, destination, 0, 0}) == 8, "case-sensitive search");
                require(call("strfind", {source, destination, 1, 1}) == 8, "search starts at requested offset");
                require(call("strfind", {source, destination, 1, 9}) == -1, "search respects remaining source length");
            }
        }
        put(destination, "", false);
        require(call("strfind", {source, destination, 0, 0}) == -1, "empty needle is not found");

        put(source, "ABCDEFGH", false);
        std::array<cell, 5> slice{destination, source, -3, 99, 32};
        require(vm.native_functions_.at("strmid")(slice) == 8 && slice[2] == 0 && slice[3] == 8 &&
                text(destination) == "ABCDEFGH", "strmid clamps and mutates the actual argument block");
        require(call("strmid", {destination, source, 2, 8, 3}) == 2 && text(destination) == "CD",
                "unpacked strmid truncates to destination capacity");
        require(call("strmid", {destination, source, 99, -1, 32}) == 0 && text(destination).empty(),
                "strmid clamps a reversed out-of-range interval");
        put(source, "ABCDEFGH", true);
        require(call("strmid", {destination, source, 4, 6, 32}) == 2 && text(destination) == "EF",
                "aligned packed strmid");
        require(call("strmid", {destination, source, 1, 6, 32}) == 2 && text(destination) == "BCDEFGH",
                "unaligned strmid preserves prefix count decrement and packed tail copy");
        require(call("strmid", {destination, source, 1, 3, 32}) == 1 && text(destination) == "BABCD",
                "short packed strmid preserves the original unaligned source-word selection");
        require(call("strmid", {destination, source, 7, 8, 32}) == 1 && text(destination) == "E",
                "one-character packed strmid uses its original aligned word");
        require(call("strmid", {12300, source, 0, 4, 32}) == 0 && vm.amx_.error == 10,
                "strmid checks the destination endpoint");

        for (const bool packed : {false, true}) {
            put(destination, "ABCDEFGH", packed);
            require(call("strdel", {destination, 2, 6}) == 1 && text(destination) == "ABGH", "delete a middle range");
            require(call("strdel", {destination, 3, 99}) == 1 && text(destination) == "ABG", "delete clamps the end");
            require(call("strdel", {destination, 3, 99}) == 0, "delete at terminator returns zero");
            require(call("strdel", {destination, 2, 1}) == 0 && text(destination) == "ABG", "reversed delete is unchanged");
            require(call("strdel", {destination, 0, 99}) == 1 && data[128] == 0, "whole-string delete clears first cell");
        }
        for (const bool destination_packed : {false, true}) {
            for (const bool source_packed : {false, true}) {
                put(destination, "ABGH", destination_packed);
                put(source, "CDEF", source_packed);
                require(call("strins", {destination, source, 2, 1}) == 1 && text(destination) == "ABCDEFGH",
                        "strins handles representations and preserves ignored MAXLENGTH argument");
            }
            put(destination, "AB", destination_packed);
            require(call("strins", {destination, destination, 1, 32}) == 1 && text(destination) == "AAAB",
                    "strins keeps source/destination alias effects");
        }
        put(destination, "", false);
        put(source, "Packed", true);
        require(call("strins", {destination, source, 0, 1}) == 1 && text(destination) == "Packed" &&
                static_cast<std::uint32_t>(data[128]) == 0x5061636bu, "empty insertion inherits source representation");
        require(call("strins", {destination, source, 7, 32}) == 0 && vm.amx_.error == 10,
                "insertion beyond the terminator raises native error ten");

        require(call("valstr", {destination, 0, 0}) == 1 && text(destination) == "0", "valstr zero");
        require(call("valstr", {destination, -12345, 0}) == 6 && text(destination) == "-12345" &&
                data[128] == '-', "valstr unpacked negative integer");
        require(call("valstr", {destination, -12345, 1}) == 6 && text(destination) == "-12345" &&
                static_cast<std::uint32_t>(data[128]) == 0x2d313233u, "valstr packed negative integer");
        require(call("valstr", {destination, 1000000000, 0}) == 10 && text(destination) == "1000000000",
                "valstr decimal digit count");
        require(call("valstr", {destination, std::numeric_limits<cell>::min(), 0}) == 2 &&
                text(destination) == "-(", "valstr preserves official signed-negation overflow behavior");

        for (cell count = 0; count <= 63; ++count) {
            std::array<std::uint8_t, 63> input{};
            for (std::size_t index = 0; index < input.size(); ++index)
                input[index] = static_cast<std::uint8_t>(index * 71u + static_cast<unsigned>(count));
            std::array<char, 88> encoded{};
            std::array<std::uint8_t, 68> decoded;
            decoded.fill(0xa5);
            require(samp::pawn::string_cells::uu_encode(encoded.data(), input.data(), count) == 1,
                    "UU helper accepts every size through 63 bytes");
            require(samp::pawn::string_cells::uu_decode(decoded.data(), encoded.data()) == count &&
                    std::memcmp(decoded.data(), input.data(), static_cast<std::size_t>(count)) == 0 &&
                    decoded[static_cast<std::size_t>(count)] == 0xa5,
                    "UU helpers preserve binary input and omit the decoded terminator");
        }
        for (const auto& [input, expected] : std::array<std::pair<const char*, const char*>, 4>{
                 {{"Man", "#36%N"}, {"M", "!30"}, {"Ma", "\"36$"}, {"", "`"}}}) {
            std::array<char, 88> encoded{};
            require(samp::pawn::string_cells::uu_encode(encoded.data(),
                        reinterpret_cast<const std::uint8_t*>(input), static_cast<cell>(std::strlen(input))) == 1 &&
                    std::string(encoded.data()) == expected,
                    "UU helper known vectors retain unpadded final groups");
        }
        std::array<char, 88> rejected;
        rejected.fill('X');
        const std::array<std::uint8_t, 3> zeros{};
        require(samp::pawn::string_cells::uu_encode(rejected.data(), zeros.data(), 64) == 0 &&
                rejected.front() == 'X' && rejected.back() == 'X',
                "UU helper rejects oversized input without touching output");
        require(samp::pawn::string_cells::uu_encode(rejected.data(), zeros.data(), 3) == 1 &&
                std::string(rejected.data()) == "#````", "UU helper represents zero tokens with backticks");
        for (bool packed : {false, true}) {
            put(source, "#36%N", packed);
            std::memset(data.data() + destination / 4, 0xa5, 12);
            require(call("uudecode", {destination, source, 3}) == 3 &&
                    std::memcmp(data.data() + destination / 4, "Man", 3) == 0 &&
                    reinterpret_cast<std::uint8_t*>(data.data())[destination + 3] == 0xa5,
                    "uudecode reads both representations and writes raw bytes without NUL");
            data[destination / 4] = 0x12345678;
            require(call("uudecode", {destination, source, 0}) == 3 && data[destination / 4] == 0x12345678,
                    "uudecode returns complete size even with zero output capacity");
        }
        std::array<char, 88> six_bytes{};
        const std::array<std::uint8_t, 6> binary{0, 255, 128, 42, 1, 2};
        samp::pawn::string_cells::uu_encode(six_bytes.data(), binary.data(), 6);
        put(source, six_bytes.data(), true);
        std::memset(data.data() + destination / 4, 0xa5, 12);
        require(call("uudecode", {destination, source, 1}) == 6 &&
                std::memcmp(data.data() + destination / 4, binary.data(), 4) == 0 &&
                reinterpret_cast<std::uint8_t*>(data.data())[destination + 4] == 0xa5,
                "uudecode truncates at MAXLENGTH cells but returns original byte count");
        for (cell count : {-1, 0, 1, 3, 63}) {
            data[destination / 4] = 0x12345678;
            data[destination / 4 + 1] = 0x23456789;
            require(call("uuencode", {destination, source, count, 4}) == 0 &&
                    data[destination / 4] == 0 && data[destination / 4 + 1] == 0x23456789,
                    "uuencode preserves the official inverted success branch and first-cell clear");
            data[destination / 4] = 0x12345678;
            require(call("uuencode", {destination, source, count, 0}) == 0 &&
                    data[destination / 4] == 0x12345678,
                    "uuencode zero capacity skips the destination clear");
        }

        // Read clamped START and END from the actual SYSREQ argument cells
        // after the native returns. A detached native-argument copy fails this.
        for (cell argument_index : {2, 3}) {
            std::vector<cell> code{0x78, 0, 0x2e};
            for (cell value : {16, 99, -3, 0, 128}) code.insert(code.end(), {0x27, value});
            code.insert(code.end(), {0x27, 20, 0x7b, 0, 0x2c, (argument_index + 1) * 4,
                                     0x2a, 0x2c, (4 - argument_index) * 4, 0x30});
            vm.header_ = samp::amx::AmxHeader{};
            vm.header_.cod = 56;
            vm.header_.dat = 56 + static_cast<cell>(code.size() * 4);
            vm.header_.hea = vm.header_.dat + 512;
            vm.header_.stp = vm.header_.dat + 2048;
            vm.header_.cip = 8;
            vm.image_.assign(static_cast<std::size_t>(vm.header_.stp), 0);
            std::memcpy(vm.image_.data(), &vm.header_, sizeof(vm.header_));
            std::memcpy(vm.image_.data() + vm.header_.cod, code.data(), code.size() * 4);
            const std::array<cell, 5> input{'A', 'B', 'C', 'D', 0};
            std::memcpy(vm.image_.data() + vm.header_.dat, input.data(), sizeof(input));
            vm.natives_ = {samp::pawn::RequiredNative{"strmid", 0}};
            vm.publics_.clear();
            vm.ok_ = true;
            vm.hea_ = vm.hlw_ = 512;
            vm.stk_ = 2044;
            vm.amx_ = samp::amx::Amx{};
            vm.amx_.base = vm.image_.data();
            vm.amx_.hea = vm.amx_.hlw = 512;
            vm.amx_.stp = vm.amx_.stk = 2044;
            cell result = -1;
            require(vm.execute({}, {}, result) == 0 && result == (argument_index == 2 ? 0 : 4),
                    "interpreter preserves native argument-block mutation");
        }

        std::puts("Pawn string representation, overlap, limits and native binding passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
