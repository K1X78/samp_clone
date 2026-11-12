#include "pawn/amx_lookup_api.hpp"

#include "pawn/amx_host_api.hpp"

#include <array>
#include <cstring>
#include <limits>

namespace samp::pawn::amx_lookup {

// samp-server.exe 0x401590 / 0x4016b0. The byte copy is forward and includes
// the NUL; no output buffer length or negative-index validation is present.
// Official: FUN_00401590 @ 0x00401590 (samp-server.exe)
int get_native(const samp::amx::Amx* state, int index, char* name) noexcept {
    const auto image = reinterpret_cast<std::uintptr_t>(state->base);
    std::int32_t begin = 0, end = 0;
    std::int16_t stride = 0;
    std::memcpy(&begin, reinterpret_cast<const void*>(image + 0x24), sizeof(begin));
    std::memcpy(&end, reinterpret_cast<const void*>(image + 0x28), sizeof(end));
    std::memcpy(&stride, reinterpret_cast<const void*>(image + 0x0a), sizeof(stride));
    const int count = static_cast<std::int32_t>(static_cast<std::uint32_t>(end) -
                                                static_cast<std::uint32_t>(begin)) / stride;
    if (index >= count) return 20;
    const auto entry = image + static_cast<std::uint32_t>(begin) +
                       static_cast<std::uint32_t>(index) * static_cast<std::uint32_t>(stride);
    std::uint32_t name_offset = 0;
    std::memcpy(&name_offset, reinterpret_cast<const void*>(entry + 4), sizeof(name_offset));
    auto source = stride == 8 ? image + name_offset : entry + 4;
    char value;
    do {
        std::memcpy(&value, reinterpret_cast<const void*>(source++), sizeof(value));
        *name++ = value;
    } while (value != 0);
    return 0;
}
// Official: FUN_004016b0 @ 0x004016b0 (samp-server.exe)
int get_public(const samp::amx::Amx* state, int index, char* name) noexcept {
    const auto image = reinterpret_cast<std::uintptr_t>(state->base);
    std::int32_t begin = 0, end = 0;
    std::int16_t stride = 0;
    std::memcpy(&begin, reinterpret_cast<const void*>(image + 0x20), sizeof(begin));
    std::memcpy(&end, reinterpret_cast<const void*>(image + 0x24), sizeof(end));
    std::memcpy(&stride, reinterpret_cast<const void*>(image + 0x0a), sizeof(stride));
    const int count = static_cast<std::int32_t>(static_cast<std::uint32_t>(end) -
                                                static_cast<std::uint32_t>(begin)) / stride;
    if (index >= count) return 20;
    const auto entry = image + static_cast<std::uint32_t>(begin) +
                       static_cast<std::uint32_t>(index) * static_cast<std::uint32_t>(stride);
    std::uint32_t name_offset = 0;
    std::memcpy(&name_offset, reinterpret_cast<const void*>(entry + 4), sizeof(name_offset));
    auto source = stride == 8 ? image + name_offset : entry + 4;
    char value;
    do {
        std::memcpy(&value, reinterpret_cast<const void*>(source++), sizeof(value));
        *name++ = value;
    } while (value != 0);
    return 0;
}

// samp-server.exe 0x4017f0: the address is loaded AFTER the name copy, which
// can change that address when output name storage aliases the definition.
// Official: FUN_004017f0 @ 0x004017f0 (samp-server.exe)
int get_public_variable(const samp::amx::Amx* state, int index, char* name,
                        samp::amx::cell* address) noexcept {
    const auto image = reinterpret_cast<std::uintptr_t>(state->base);
    std::int32_t begin = 0, end = 0;
    std::int16_t stride = 0;
    std::memcpy(&begin, reinterpret_cast<const void*>(image + 0x2c), sizeof(begin));
    std::memcpy(&end, reinterpret_cast<const void*>(image + 0x30), sizeof(end));
    std::memcpy(&stride, reinterpret_cast<const void*>(image + 0x0a), sizeof(stride));
    const int count = static_cast<std::int32_t>(static_cast<std::uint32_t>(end) -
                                                static_cast<std::uint32_t>(begin)) / stride;
    if (index >= count) return 20;
    const auto entry = image + static_cast<std::uint32_t>(begin) +
                       static_cast<std::uint32_t>(index) * static_cast<std::uint32_t>(stride);
    std::uint32_t name_offset = 0;
    std::memcpy(&name_offset, reinterpret_cast<const void*>(entry + 4), sizeof(name_offset));
    auto source = stride == 8 ? image + name_offset : entry + 4;
    char value;
    do {
        std::memcpy(&value, reinterpret_cast<const void*>(source++), sizeof(value));
        *name++ = value;
    } while (value != 0);
    std::memcpy(address, reinterpret_cast<const void*>(entry), sizeof(*address));
    return 0;
}

// samp-server.exe 0x401970: version checks are signed bytes, below5 clears
// both outputs/error18, and versions5/6 end the table at COD rather than NT.
// Official: FUN_00401970 @ 0x00401970 (samp-server.exe)
int get_tag(const samp::amx::Amx* state, int index, char* name,
            samp::amx::cell* tag) noexcept {
    const auto image = reinterpret_cast<std::uintptr_t>(state->base);
    std::int8_t version = 0;
    std::int16_t stride = 0;
    std::int32_t begin = 0, end = 0;
    std::memcpy(&version, reinterpret_cast<const void*>(image + 6), sizeof(version));
    if (version < 5) {
        *name = 0;
        *tag = 0;
        return 18;
    }
    std::memcpy(&stride, reinterpret_cast<const void*>(image + 0x0a), sizeof(stride));
    std::memcpy(&begin, reinterpret_cast<const void*>(image + 0x30), sizeof(begin));
    const auto end_offset = version < 7 ? 0x0c : 0x34;
    std::memcpy(&end, reinterpret_cast<const void*>(image + end_offset), sizeof(end));
    const int count = static_cast<std::int32_t>(static_cast<std::uint32_t>(end) -
                                                static_cast<std::uint32_t>(begin)) / stride;
    if (index >= count) return 20;
    const auto entry = image + static_cast<std::uint32_t>(begin) +
                       static_cast<std::uint32_t>(index) * static_cast<std::uint32_t>(stride);
    std::uint32_t name_offset = 0;
    std::memcpy(&name_offset, reinterpret_cast<const void*>(entry + 4), sizeof(name_offset));
    auto source = stride == 8 ? image + name_offset : entry + 4;
    char value;
    do {
        std::memcpy(&value, reinterpret_cast<const void*>(source++), sizeof(value));
        *name++ = value;
    } while (value != 0);
    std::memcpy(tag, reinterpret_cast<const void*>(entry), sizeof(*tag));
    return 0;
}

// samp-server.exe 0x4015f0: only native-name lookup is a linear scan, so its
// first duplicate wins even when the definition table is not sorted.
// Official: FUN_004015f0 @ 0x004015f0 (samp-server.exe)
int find_native(const samp::amx::Amx* state, const char* name, int* index) noexcept {
    int count = 0;
    amx_host::native_count(*state, count);
    std::array<char, 32> candidate;
    for (int current = 0; current < count; ++current) {
        get_native(state, current, candidate.data());
        const auto* left = reinterpret_cast<const unsigned char*>(candidate.data());
        const auto* right = reinterpret_cast<const unsigned char*>(name);
        while (*left == *right && *left != 0) { ++left; ++right; }
        if (*left == *right) {
            *index = current;
            return 0;
        }
    }
    *index = std::numeric_limits<int>::max();
    return 19;
}

// samp-server.exe 0x401710: preserve binary search and its selected midpoint,
// including duplicate/unsorted input behavior, rather than a linear search.
// Official: FUN_00401710 @ 0x00401710 (samp-server.exe)
int find_public(const samp::amx::Amx* state, const char* name, int* index) noexcept {
    int count = 0;
    amx_host::public_count(*state, count);
    int first = 0, last = static_cast<int>(static_cast<std::uint32_t>(count) - 1u);
    std::array<char, 32> candidate;
    while (first <= last) {
        const int current = static_cast<std::int32_t>(static_cast<std::uint32_t>(first) +
                                                      static_cast<std::uint32_t>(last)) / 2;
        get_public(state, current, candidate.data());
        const auto* left = reinterpret_cast<const unsigned char*>(candidate.data());
        const auto* right = reinterpret_cast<const unsigned char*>(name);
        while (*left == *right && *left != 0) { ++left; ++right; }
        const int comparison = *left == *right ? 0 : (*left < *right ? -1 : 1);
        if (comparison > 0) last = static_cast<int>(static_cast<std::uint32_t>(current) - 1u);
        else if (comparison < 0) first = static_cast<int>(static_cast<std::uint32_t>(current) + 1u);
        else {
            *index = current;
            return 0;
        }
    }
    *index = std::numeric_limits<int>::max();
    return 19;
}

// samp-server.exe 0x401860 uses the same binary-search order but returns the
// selected definition's ADDRESS, with zero on failure.
// Official: FUN_00401860 @ 0x00401860 (samp-server.exe)
int find_public_variable(const samp::amx::Amx* state, const char* name,
                         samp::amx::cell* address) noexcept {
    int count = 0;
    amx_host::public_variable_count(*state, count);
    int first = 0, last = static_cast<int>(static_cast<std::uint32_t>(count) - 1u);
    std::array<char, 32> candidate;
    while (first <= last) {
        const int current = static_cast<std::int32_t>(static_cast<std::uint32_t>(first) +
                                                      static_cast<std::uint32_t>(last)) / 2;
        samp::amx::cell value = 0;
        get_public_variable(state, current, candidate.data(), &value);
        const auto* left = reinterpret_cast<const unsigned char*>(candidate.data());
        const auto* right = reinterpret_cast<const unsigned char*>(name);
        while (*left == *right && *left != 0) { ++left; ++right; }
        const int comparison = *left == *right ? 0 : (*left < *right ? -1 : 1);
        if (comparison > 0) last = static_cast<int>(static_cast<std::uint32_t>(current) - 1u);
        else if (comparison < 0) first = static_cast<int>(static_cast<std::uint32_t>(current) + 1u);
        else {
            *address = value;
            return 0;
        }
    }
    *address = 0;
    return 19;
}

// samp-server.exe 0x401a00 copies each visited name to caller storage. A
// missing ID clears only its FIRST byte, leaving the last visited name tail.
// Official: FUN_00401a00 @ 0x00401a00 (samp-server.exe)
int find_tag_id(const samp::amx::Amx* state, samp::amx::cell tag, char* name) noexcept {
    int count = 0;
    amx_host::tag_count(*state, count);
    int first = 0, last = static_cast<int>(static_cast<std::uint32_t>(count) - 1u);
    while (first <= last) {
        const int current = static_cast<std::int32_t>(static_cast<std::uint32_t>(first) +
                                                      static_cast<std::uint32_t>(last)) / 2;
        samp::amx::cell value = 0;
        get_tag(state, current, name, &value);
        if (tag < value) last = static_cast<int>(static_cast<std::uint32_t>(current) - 1u);
        else if (tag > value) first = static_cast<int>(static_cast<std::uint32_t>(current) + 1u);
        else return 0;
    }
    *name = 0;
    return 19;
}
}
