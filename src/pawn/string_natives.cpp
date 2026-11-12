#include "pawn/string_natives.hpp"

#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_host_api.hpp"
#include "pawn/amx_string_api.hpp"
#include "pawn/amx_set_string_api.hpp"
#include "pawn/string_cells.hpp"

#include <bit>
#include <cstring>

namespace samp::pawn::string_natives {

// Invalid addresses return zero without raising an AMX native error.
// Official: FUN_004061f0 @ 0x004061f0 (samp-server.exe)
cell length(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    int characters = 0;
    if (amx_memory::get_address(state, args[0], &source) == 0)
        amx_string::length(source, characters);
    return characters;
}

// The 0.3.DL native rejects strings of 50 or more characters, treats signed
// bytes <= space as leading whitespace, and wraps decimal arithmetic at 32 bits.
// Official: FUN_00406b00 @ 0x00406b00 (samp-server.exe)
cell number(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &source);
    int characters = 0;
    amx_string::length(source, characters);
    if (characters >= 50) return 0;
    char text[50];
    amx_string::get_string(text, source, 0, 50);
    const char* cursor = text;
    while (*cursor != '\0' && static_cast<std::int8_t>(*cursor) <= 32) ++cursor;
    const bool negative = *cursor == '-';
    if (negative || *cursor == '+') ++cursor;
    std::uint32_t value = 0;
    while (*cursor >= '0' && *cursor <= '9') {
        value = value * 10u + static_cast<unsigned>(*cursor - '0');
        ++cursor;
    }
    return std::bit_cast<cell>(negative ? 0u - value : value);
}

// Preserve SETGE's signed, inclusive threshold, even though it differs from
// the unsigned packed-string test used by the AMX string accessors.
// Official: FUN_00406c60 @ 0x00406c60 (samp-server.exe)
cell is_packed(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &source);
    cell first;
    std::memcpy(&first, source, sizeof(first));
    return first >= 0x00ffffff ? 1 : 0;
}

// OFFSET and LENGTH are bytes, MAXLENGTH is cells. The actual callee at
// 0x4A0850 is memmove, so overlapping script arrays are supported.
// Official: FUN_00406f70 @ 0x00406f70 (samp-server.exe)
cell copy_memory(samp::amx::Amx* state, std::span<const cell> args) {
    if (args[2] < 0 || args[3] < 0) return 0;
    const auto end = std::bit_cast<cell>(static_cast<std::uint32_t>(args[2]) +
                                        static_cast<std::uint32_t>(args[3]));
    const auto capacity = std::bit_cast<cell>(static_cast<std::uint32_t>(args[4]) << 2);
    if (end > capacity) return 0;
    cell* destination = nullptr;
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &destination);
    amx_memory::get_address(state, args[1], &source);
    std::memmove(reinterpret_cast<std::uint8_t*>(destination) + args[2], source,
                 static_cast<std::uint32_t>(args[3]));
    return 1;
}

// MAXLENGTH counts cells; the rounded output's final byte is validated.
// Official: FUN_00406230 @ 0x00406230 (samp-server.exe)
cell pack(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    amx_memory::get_address(state, args[1], &source);
    int length = 0;
    amx_string::length(source, length);
    auto count = static_cast<std::uint32_t>(length);
    const auto capacity = static_cast<std::uint32_t>(args[2]) * 4u;
    if (count > capacity - 1u) count = capacity - 1u;
    const auto bytes = ((count + 4u) >> 2) * 4u;
    const auto last = std::bit_cast<cell>(static_cast<std::uint32_t>(args[0]) + bytes - 1u);
    if (amx_memory::validate(state, last) != 0) return amx_host::raise_error(*state, 10);
    cell* destination = nullptr;
    amx_memory::get_address(state, args[0], &destination);
    const auto status = string_cells::pack(destination, source, 0, std::bit_cast<cell>(count));
    return status != 0 ? amx_host::raise_error(*state, status) : std::bit_cast<cell>(count);
}

// Official: FUN_004062f0 @ 0x004062f0 (samp-server.exe)
cell unpack(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    amx_memory::get_address(state, args[1], &source);
    int count = 0;
    amx_string::length(source, count);
    if (count >= args[2]) count = std::bit_cast<cell>(static_cast<std::uint32_t>(args[2]) - 1u);
    const auto last = std::bit_cast<cell>(static_cast<std::uint32_t>(args[0]) +
                                        static_cast<std::uint32_t>(count) * 4u + 3u);
    if (amx_memory::validate(state, last) != 0) return amx_host::raise_error(*state, 10);
    cell* destination = nullptr;
    amx_memory::get_address(state, args[0], &destination);
    const auto status = string_cells::unpack(destination, source, count);
    return status != 0 ? amx_host::raise_error(*state, status) : count;
}

// Empty destinations inherit the source representation. Other destinations
// keep their existing packed/unpacked form. Return only the appended count.
// Official: FUN_004063a0 @ 0x004063a0 (samp-server.exe)
cell concatenate(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    cell* destination = nullptr;
    amx_memory::get_address(state, args[1], &source);
    amx_memory::get_address(state, args[0], &destination);
    int before = 0;
    int count = 0;
    amx_string::length(destination, before);
    amx_string::length(source, count);
    std::uint32_t first;
    std::memcpy(&first, destination, 4);
    if (first == 0) std::memcpy(&first, source, 4);
    const bool packed = first > 0x00ffffffu;
    const auto total = static_cast<std::uint32_t>(before) + static_cast<std::uint32_t>(count);
    std::uint32_t bytes;
    if (packed) {
        const auto capacity = static_cast<std::uint32_t>(args[2]) * 4u;
        if (total > capacity - 1u)
            count = std::bit_cast<cell>(capacity - static_cast<std::uint32_t>(before) - 1u);
        bytes = ((static_cast<std::uint32_t>(before) + static_cast<std::uint32_t>(count) + 4u) >> 2) * 4u - 1u;
    } else {
        const auto capacity = std::bit_cast<cell>(static_cast<std::uint32_t>(args[2]) - 1u);
        if (std::bit_cast<cell>(total) > capacity)
            count = std::bit_cast<cell>(static_cast<std::uint32_t>(args[2]) - static_cast<std::uint32_t>(before) - 1u);
        bytes = (static_cast<std::uint32_t>(before) + static_cast<std::uint32_t>(count)) * 4u + 3u;
    }
    const auto last = std::bit_cast<cell>(static_cast<std::uint32_t>(args[0]) + bytes);
    if (amx_memory::validate(state, last) != 0) return amx_host::raise_error(*state, 10);
    const auto status = packed
        ? string_cells::pack(destination, source, before, count)
        : string_cells::unpack(reinterpret_cast<cell*>(reinterpret_cast<std::uint8_t*>(destination) +
                                static_cast<std::uint32_t>(before) * 4u), source, count);
    return status != 0 ? amx_host::raise_error(*state, status) : count;
}

// The official zero-common-length branch returns zero even when just one
// string is empty. Otherwise an equal prefix falls back to the length delta.
// Official: FUN_00406540 @ 0x00406540 (samp-server.exe)
cell compare(samp::amx::Amx* state, std::span<const cell> args) {
    cell* left = nullptr;
    cell* right = nullptr;
    amx_memory::get_address(state, args[0], &left);
    amx_memory::get_address(state, args[1], &right);
    int left_length = 0;
    int right_length = 0;
    amx_string::length(left, left_length);
    amx_string::length(right, right_length);
    cell count = left_length < right_length ? left_length : right_length;
    if (count > args[3]) count = args[3];
    if (count == 0) return 0;
    const auto result = string_cells::compare(left, right, count, 0, args[2] != 0);
    if (result != 0 || count == args[3]) return result;
    return std::bit_cast<cell>(static_cast<std::uint32_t>(left_length) - static_cast<std::uint32_t>(right_length));
}

// Official: FUN_004065e0 @ 0x004065e0 (samp-server.exe)
cell find(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    cell* needle = nullptr;
    amx_memory::get_address(state, args[0], &source);
    amx_memory::get_address(state, args[1], &needle);
    int source_length = 0;
    int needle_length = 0;
    amx_string::length(source, source_length);
    amx_string::length(needle, needle_length);
    if (needle_length == 0) return -1;
    const bool ignore_case = args[2] != 0;
    const auto first = string_cells::character(needle, 0, ignore_case);
    auto position = args[3];
    while (std::bit_cast<cell>(static_cast<std::uint32_t>(position) +
                               static_cast<std::uint32_t>(needle_length)) <= source_length) {
        // The binary re-reads the needle's first character in this precheck.
        if (string_cells::character(needle, 0, ignore_case) == first &&
            string_cells::compare(source, needle, needle_length, position, ignore_case) == 0)
            return position;
        position = std::bit_cast<cell>(static_cast<std::uint32_t>(position) + 1u);
    }
    return -1;
}

// START/END are clamped in the actual native argument block. Packed input's
// unaligned prefix decrements the returned count before calling the packer.
// Official: FUN_004066c0 @ 0x004066c0 (samp-server.exe)
cell middle(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    cell* destination = nullptr;
    amx_memory::get_address(state, args[1], &source);
    amx_memory::get_address(state, args[0], &destination);
    int length = 0;
    amx_string::length(source, length);
    auto* parameters = const_cast<cell*>(args.data());
    if (parameters[2] < 0) parameters[2] = 0;
    else if (parameters[2] > length) parameters[2] = length;
    if (parameters[3] < parameters[2]) parameters[3] = parameters[2];
    else if (parameters[3] > length) parameters[3] = length;
    else if (parameters[2] > parameters[3]) parameters[2] = parameters[3];
    auto start = parameters[2];
    auto count = parameters[3] - start;
    std::uint32_t first;
    std::memcpy(&first, source, 4);
    const bool packed = first > 0x00ffffffu;
    std::uint32_t bytes;
    if (packed) {
        const auto capacity = static_cast<std::uint32_t>(parameters[4]) * 4u - 1u;
        if (static_cast<std::uint32_t>(count) > capacity) count = std::bit_cast<cell>(capacity);
        bytes = ((static_cast<std::uint32_t>(count) + 4u) >> 2) * 4u - 1u;
    } else {
        const auto capacity = std::bit_cast<cell>(static_cast<std::uint32_t>(parameters[4]) - 1u);
        if (count > capacity) count = capacity;
        bytes = static_cast<std::uint32_t>(count) * 4u + 3u;
    }
    const auto last = std::bit_cast<cell>(static_cast<std::uint32_t>(parameters[0]) + bytes);
    if (amx_memory::validate(state, last) != 0) return amx_host::raise_error(*state, 10);
    int status;
    if (packed) {
        cell written = 0;
        while ((start & 3) != 0 && count > 1) {
            const auto value = *string_cells::packed_byte(source, static_cast<std::uint32_t>(start));
            *const_cast<std::uint8_t*>(string_cells::packed_byte(destination, static_cast<std::uint32_t>(written))) = value;
            ++start;
            ++written;
            --count;
        }
        const auto* tail = reinterpret_cast<const cell*>(reinterpret_cast<const std::uint8_t*>(source) +
                                                        (static_cast<std::uint32_t>(start) >> 2) * 4u);
        status = string_cells::pack(destination, tail, written, count);
    } else {
        const auto* tail = reinterpret_cast<const cell*>(reinterpret_cast<const std::uint8_t*>(source) +
                                                        static_cast<std::uint32_t>(start) * 4u);
        status = string_cells::unpack(destination, tail, count);
    }
    return status != 0 ? amx_host::raise_error(*state, status) : count;
}

// Copy the tail forward including NUL; retain representation and trailing
// stale bytes, except that deleting a whole packed string clears its first cell.
// Official: FUN_00406850 @ 0x00406850 (samp-server.exe)
cell erase(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &source);
    int length = 0;
    amx_string::length(source, length);
    auto position = args[1];
    auto count = std::bit_cast<cell>(static_cast<std::uint32_t>(args[2]) - static_cast<std::uint32_t>(position));
    if (position >= length || count <= 0) return 0;
    if (std::bit_cast<cell>(static_cast<std::uint32_t>(position) + static_cast<std::uint32_t>(count)) > length)
        count = std::bit_cast<cell>(static_cast<std::uint32_t>(length) - static_cast<std::uint32_t>(position));
    std::uint32_t first;
    std::memcpy(&first, source, 4);
    if (first > 0x00ffffffu) {
        for (;;) {
            const auto input = static_cast<std::uint32_t>(position) + static_cast<std::uint32_t>(count);
            const auto value = *string_cells::packed_byte(source, input);
            *const_cast<std::uint8_t*>(string_cells::packed_byte(source, static_cast<std::uint32_t>(position))) = value;
            if (value == 0) break;
            position = std::bit_cast<cell>(static_cast<std::uint32_t>(position) + 1u);
        }
        if (position == 0) std::memset(source, 0, 4);
    } else {
        auto* bytes = reinterpret_cast<std::uint8_t*>(source);
        for (;;) {
            cell value;
            const auto input = (static_cast<std::uint32_t>(position) + static_cast<std::uint32_t>(count)) * 4u;
            std::memcpy(&value, bytes + input, 4);
            std::memcpy(bytes + static_cast<std::uint32_t>(position) * 4u, &value, 4);
            if (value == 0) break;
            position = std::bit_cast<cell>(static_cast<std::uint32_t>(position) + 1u);
        }
    }
    return 1;
}

// The native checks the AMX endpoint and insertion position but does not
// consult MAXLENGTH. Tail shifts and source reads remain observable in-place.
// Official: FUN_00406930 @ 0x00406930 (samp-server.exe)
cell insert(samp::amx::Amx* state, std::span<const cell> args) {
    cell* destination = nullptr;
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &destination);
    amx_memory::get_address(state, args[1], &source);
    int before = 0;
    int count = 0;
    amx_string::length(destination, before);
    amx_string::length(source, count);
    const auto position = args[2];
    if (position > before) return amx_host::raise_error(*state, 10);
    std::uint32_t first;
    std::memcpy(&first, destination, 4);
    const auto total = static_cast<std::uint32_t>(before) + static_cast<std::uint32_t>(count);
    const auto last_offset = first > 0x00ffffffu ? ((total + 4u) >> 2) * 4u - 1u : total * 4u + 3u;
    const auto last = std::bit_cast<cell>(static_cast<std::uint32_t>(args[0]) + last_offset);
    if (amx_memory::validate(state, last) != 0) return amx_host::raise_error(*state, 10);
    if (first == 0) {
        std::uint32_t source_first;
        std::memcpy(&source_first, source, 4);
        if (source_first > 0x00ffffffu) string_cells::pack(destination, source, 0, count);
        else string_cells::unpack(destination, source, count);
        return 1;
    }
    auto* bytes = reinterpret_cast<std::uint8_t*>(destination);
    const bool packed = first > 0x00ffffffu;
    for (auto cursor = std::bit_cast<cell>(total); cursor > position; --cursor) {
        const auto from = static_cast<std::uint32_t>(cursor) - static_cast<std::uint32_t>(count);
        if (packed) {
            const auto value = *string_cells::packed_byte(destination, from);
            *const_cast<std::uint8_t*>(string_cells::packed_byte(destination, static_cast<std::uint32_t>(cursor))) = value;
        } else {
            cell value;
            std::memcpy(&value, bytes + from * 4u, 4);
            std::memcpy(bytes + static_cast<std::uint32_t>(cursor) * 4u, &value, 4);
        }
    }
    for (cell index = 0; index < count; ++index) {
        const auto value = string_cells::character(source, index, false);
        const auto at = static_cast<std::uint32_t>(position) + static_cast<std::uint32_t>(index);
        if (packed) *const_cast<std::uint8_t*>(string_cells::packed_byte(destination, at)) = static_cast<std::uint8_t>(value);
        else std::memcpy(bytes + at * 4u, &value, 4);
    }
    return 1;
}

// Retain signed comparisons after wrapped NEG/multiply operations. In
// particular INT_MIN produces the official two-character "-(" result.
// Official: FUN_00406bc0 @ 0x00406bc0 (samp-server.exe)
cell value_string(samp::amx::Amx* state, std::span<const cell> args) {
    const bool negative = args[1] < 0;
    const auto magnitude = negative ? 0u - static_cast<std::uint32_t>(args[1]) : static_cast<std::uint32_t>(args[1]);
    auto value = std::bit_cast<cell>(magnitude);
    std::uint32_t length = negative ? 2u : 1u;
    std::uint32_t power = 10;
    if (value >= 10) {
        do {
            power *= 10u;
            ++length;
        } while (value >= std::bit_cast<cell>(power));
    }
    char buffer[52];
    buffer[length] = '\0';
    for (auto index = static_cast<cell>(length) - 1; index >= static_cast<cell>(negative); --index) {
        buffer[index] = static_cast<char>(value % 10 + '0');
        value /= 10;
    }
    if (negative) buffer[0] = '-';
    cell* destination = nullptr;
    amx_memory::get_address(state, args[0], &destination);
    amx_string::set_string(destination, buffer, args[2], 0, 0x7fffffffu);
    return static_cast<cell>(length);
}

// MAXLENGTH counts cells, but decoding writes raw bytes without a terminator.
// The return value is the complete decoded size even when the copy is truncated.
// Official: FUN_00406e10 @ 0x00406e10 (samp-server.exe)
cell uu_decode(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    amx_memory::get_address(state, args[1], &source);
    char encoded[86];
    std::uint8_t decoded[68];
    amx_string::get_string(encoded, source, 0, sizeof(encoded));
    const auto count = string_cells::uu_decode(decoded, encoded);
    cell* destination = nullptr;
    amx_memory::get_address(state, args[0], &destination);
    const auto capacity = static_cast<std::uint32_t>(args[2]) * 4u;
    const auto bytes = static_cast<std::uint32_t>(count) < capacity
        ? static_cast<std::uint32_t>(count) : capacity;
    std::memcpy(destination, decoded, bytes);
    return count;
}

// The original passes untouched local bytes instead of the resolved source,
// then takes its clear-and-return-zero branch when the encoder succeeds.
// Rejected sizes instead scan the untouched output buffer and append LF/NUL.
// Official: FUN_00406ea0 @ 0x00406ea0 (samp-server.exe)
cell uu_encode(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    amx_memory::get_address(state, args[1], &source);
    char encoded[88];
    std::uint8_t scratch[68];
    if (string_cells::uu_encode(encoded, scratch, args[2]) != 0) {
        if (args[3] > 0) {
            cell* destination = nullptr;
            amx_memory::get_address(state, args[0], &destination);
            std::memset(destination, 0, sizeof(cell));
        }
        return 0;
    }
#if defined(_MSC_VER) && defined(_M_IX86)
    // Preserve the native's actual x86 reads of untouched scratch memory;
    // there is no deterministic encoded string on this rejected-size path.
    __asm {
        lea ecx, encoded
    scan_output:
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        jne scan_output
        mov word ptr [ecx - 1], 0ah
    }
#else
    auto* end = encoded + std::strlen(encoded);
    end[0] = '\n';
    end[1] = '\0';
#endif
    cell* destination = nullptr;
    amx_memory::get_address(state, args[0], &destination);
    amx_string::set_string(destination, encoded, 1, 0, static_cast<std::uint32_t>(args[3]));
    const auto groups = std::bit_cast<cell>(static_cast<std::uint32_t>(args[2]) + 2u) / 3;
    return std::bit_cast<cell>(static_cast<std::uint32_t>(groups) * 4u + 2u);
}

}
