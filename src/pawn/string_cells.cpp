#include "pawn/string_cells.hpp"

#include <bit>
#include <cctype>
#include <cstring>

#ifdef _WIN32
#include <windows.h>
#endif

namespace samp::pawn::string_cells {

// The packed-source path copies whole words, including the official partial
// append behavior. Unpacked input is consumed forward, with low-byte masking.
// Official: FUN_00405f60 @ 0x00405f60 (samp-server.exe)
int pack(cell* destination, const cell* source, cell offset, cell count) {
    const auto load = [](const void* pointer) {
        std::uint32_t value;
        std::memcpy(&value, pointer, 4);
        return value;
    };
    const auto store = [](void* pointer, std::uint32_t value) {
        std::memcpy(pointer, &value, 4);
    };
    auto* output = reinterpret_cast<std::uint8_t*>(destination);
    const auto* input = reinterpret_cast<const std::uint8_t*>(source);
    const auto position = static_cast<std::uint32_t>(offset);
    const auto characters = static_cast<std::uint32_t>(count);
    if (load(input) > 0x00ffffffu) {
        if ((position & 3u) == 0) {
            output += position;
            const auto bytes = ((characters + 3u) >> 2) << 2;
            std::memmove(output, input, bytes);
            const auto whole = (characters >> 2) << 2;
            std::memset(output + whole, 0, 4u - (characters - whole));
            return 0;
        }
        const auto shift = (position & 3u) * 8u;
        const auto low_mask = 0xffffffffu >> shift;
        const auto prefix_mask = ~low_mask;
        output += position & ~3u;
        auto carry = load(output) & prefix_mask;
        if (count > 0) {
            const auto words = ((characters - 1u) >> 2) + 1u;
            for (std::uint32_t index = 0; index < words; ++index) {
                const auto value = load(input);
                store(output, (value >> shift) | carry);
                carry = (value << (32u - shift)) & prefix_mask;
                input += 4;
                output += 4;
            }
        }
        if (output[-4] != 0) store(output, carry & 0xffffff00u);
        return 0;
    }

    std::uint32_t value = 0;
    auto index = position & 3u;
    if (position != 0) {
        output += position & ~3u;
        const auto mask = ~(0xffffffffu >> (index * 8u));
        const auto prefix = std::bit_cast<cell>(load(output) & mask);
        value = static_cast<std::uint32_t>(prefix >> (((4u - index) * 8u) & 31u));
    }
    const auto end = std::bit_cast<cell>(characters + index);
    while (std::bit_cast<cell>(index) < end) {
        value = (value << 8) | (load(input) & 0xffu);
        input += 4;
        if ((index & 3u) == 3u) {
            store(output, value);
            output += 4;
            value = 0;
        }
        ++index;
    }
    const auto remainder = index & 3u;
    store(output, remainder != 0 ? value << ((4u - remainder) * 8u) : 0u);
    return 0;
}

// Packed input expands backward so strunpack can expand in place. Unpacked
// input uses forward word copies, retaining the original overlap behavior.
// Official: FUN_00406100 @ 0x00406100 (samp-server.exe)
int unpack(cell* destination, const cell* source, cell count) {
    const auto load = [](const void* pointer) {
        std::uint32_t value;
        std::memcpy(&value, pointer, 4);
        return value;
    };
    const auto store = [](void* pointer, std::uint32_t value) {
        std::memcpy(pointer, &value, 4);
    };
    auto* output = reinterpret_cast<std::uint8_t*>(destination);
    const auto* input = reinterpret_cast<const std::uint8_t*>(source);
    if (load(input) > 0x00ffffffu) {
        auto index = std::bit_cast<cell>(static_cast<std::uint32_t>(count) - 1u);
        while (index >= 0) {
            const auto at = static_cast<std::uint32_t>(index);
            const auto value = load(input + (at >> 2) * 4u);
            store(output + at * 4u, (value >> ((3u - (at & 3u)) * 8u)) & 0xffu);
            --index;
        }
        store(output + static_cast<std::uint32_t>(count) * 4u, 0);
    } else {
        for (cell index = 0; index < count; ++index) {
            store(output, load(input));
            output += 4;
            input += 4;
        }
        store(output, 0);
    }
    return 0;
}

// Official: FUN_00406170 @ 0x00406170 (samp-server.exe)
const std::uint8_t* packed_byte(const cell* source, std::uint32_t index) {
    const auto offset = (index & ~3u) - (index & 3u) + 3u;
    return reinterpret_cast<const std::uint8_t*>(source) + offset;
}

// Case folding uses USER32!CharLowerA, as in the official core natives.
// Official: FUN_00406190 @ 0x00406190 (samp-server.exe)
cell character(const cell* source, cell index, bool ignore_case) {
    std::uint32_t first;
    std::memcpy(&first, source, 4);
    cell value;
    if (first > 0x00ffffffu) {
        value = *packed_byte(source, static_cast<std::uint32_t>(index));
    } else {
        const auto offset = static_cast<std::uint32_t>(index) * 4u;
        std::memcpy(&value, reinterpret_cast<const std::uint8_t*>(source) + offset, 4);
    }
    if (!ignore_case) return value;
#ifdef _WIN32
    return static_cast<cell>(reinterpret_cast<std::uintptr_t>(
        CharLowerA(reinterpret_cast<char*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(value))))));
#else
    return value >= 0 && value <= 255 ? std::tolower(value) : value;
#endif
}

// Official: FUN_004064e0 @ 0x004064e0 (samp-server.exe)
cell compare(const cell* left, const cell* right, cell count,
              cell left_offset, bool ignore_case) {
    for (cell index = 0; index < count; ++index) {
        const auto at = std::bit_cast<cell>(static_cast<std::uint32_t>(left_offset) +
                                            static_cast<std::uint32_t>(index));
        const auto a = character(left, at, ignore_case);
        const auto b = character(right, index, ignore_case);
        if (a < b) return -1;
        if (a > b) return 1;
    }
    return 0;
}

// Decode only the byte count in the six-bit prefix, without adding NUL.
// Official: FUN_00406c90 @ 0x00406c90 (samp-server.exe)
cell uu_decode(std::uint8_t* destination, const char* source) {
    const auto* input = reinterpret_cast<const std::uint8_t*>(source);
    const cell count = (static_cast<int>(*input++) - 32) & 63;
    auto remaining = count;
    while (remaining > 0) {
        const auto a = (static_cast<int>(input[0]) - 32) & 63;
        const auto b = (static_cast<int>(input[1]) - 32) & 63;
        *destination++ = static_cast<std::uint8_t>((a << 2) | (b >> 4));
        if (--remaining > 0) {
            const auto c = (static_cast<int>(input[2]) - 32) & 63;
            *destination++ = static_cast<std::uint8_t>((b << 4) | (c >> 2));
            if (--remaining > 0) {
                const auto d = (static_cast<int>(input[3]) - 32) & 63;
                *destination++ = static_cast<std::uint8_t>((c << 6) | d);
                --remaining;
            }
        }
        input += 4;
    }
    return count;
}

// The last group is not padded: one input byte emits two six-bit tokens,
// two emit three. Zero tokens use a backtick, and success is returned as one.
// Official: FUN_00406d10 @ 0x00406d10 (samp-server.exe)
int uu_encode(char* destination, const std::uint8_t* source, cell bytes) {
    if (bytes > 63) return 0;
    const auto token = [](std::uint32_t value) {
        value &= 63u;
        return static_cast<char>(value != 0 ? value + 32u : 96u);
    };
    *destination++ = token(static_cast<std::uint32_t>(bytes));
    for (auto remaining = bytes; remaining > 0; remaining -= 3, source += 3) {
        std::uint32_t a;
        std::uint32_t b = 0;
        std::uint32_t c = 0;
#if defined(_MSC_VER) && defined(_M_IX86)
        // The native wrapper passes untouched scratch storage as input.
        // Read its actual x86 bytes without adding a separate helper body.
        __asm {
            mov eax, source
            movzx ecx, byte ptr [eax]
            mov a, ecx
            cmp remaining, 1
            jle read_done
            movzx ecx, byte ptr [eax + 1]
            mov b, ecx
            cmp remaining, 2
            jle read_done
            movzx ecx, byte ptr [eax + 2]
            mov c, ecx
        read_done:
        }
#else
        a = source[0];
        if (remaining > 1) b = source[1];
        if (remaining > 2) c = source[2];
#endif
        *destination++ = token(a >> 2);
        *destination++ = token((a << 4) | (b >> 4));
        if (remaining > 1) *destination++ = token((b << 2) | (c >> 6));
        if (remaining > 2) *destination++ = token(c);
    }
    *destination = '\0';
    return 1;
}

}
