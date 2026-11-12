#include "pawn/amx_set_string_api.hpp"

#include <cstring>

namespace samp::pawn::amx_string {
// Fresh 0.3.DL evidence: pawn-framework-rea.json, 0x403250, plus original
// bytes of 0x401000 (byte swap) and 0x49f1be (16-bit character length).
// Official: FUN_00403250 @ 0x00403250 (samp-server.exe)
int set_string(samp::amx::cell* destination, const void* source,
               int pack, int use_wide_characters, std::uint32_t capacity) noexcept {
    const auto read_character = [](const std::uint8_t* bytes, std::uint32_t index, bool wide) {
        if (!wide) return static_cast<std::uint16_t>(bytes[index]);
        std::uint16_t character = 0;
        std::memcpy(&character, bytes + static_cast<std::size_t>(index) * 2, sizeof(character));
        return character;
    };
    const auto cell_pointer = [destination](std::uint32_t index) {
        const auto offset = static_cast<std::int32_t>(index * 4u);
        return reinterpret_cast<std::uint8_t*>(destination) + offset;
    };
    const auto write_cell = [&](std::uint32_t index, std::uint32_t value) {
        std::memcpy(cell_pointer(index), &value, sizeof(value));
    };
    const auto read_cell = [](const std::uint8_t* bytes) {
        std::uint32_t value = 0;
        std::memcpy(&value, bytes, sizeof(value));
        return value;
    };
    const auto swap_bytes = [](std::uint32_t value) {
        return (value >> 24) | ((value >> 8) & 0x0000ff00u) |
               ((value << 8) & 0x00ff0000u) | (value << 24);
    };
    auto* output = reinterpret_cast<std::uint8_t*>(destination);
    const auto* input = static_cast<const std::uint8_t*>(source);
    const bool wide = use_wide_characters != 0;
    std::uint32_t characters = 0;
    while (read_character(input, characters, wide) != 0) ++characters;

    if (pack != 0) {
        if (capacity < 0x1fffffffu && capacity * 4u <= characters)
            characters = capacity * 4u - 1u;
        const auto full_cells = characters >> 2;
        // The zero cell is written before any source bytes are copied.
        write_cell(full_cells, 0);
        if (wide) {
            for (std::int32_t index = 0; index < static_cast<std::int32_t>(characters); ++index)
                output[index] = static_cast<std::uint8_t>(read_character(input, static_cast<std::uint32_t>(index), true));
        } else {
            // REP MOVSD/MOVSB copy forward; memmove would change overlap.
            for (std::uint32_t index = 0; index < full_cells; ++index)
                write_cell(index, read_cell(input + static_cast<std::size_t>(index) * 4));
            for (std::uint32_t index = full_cells * 4; index < characters; ++index)
                output[index] = input[index];
        }
        // The original swaps the terminal cell first and proceeds backward.
        for (std::uint32_t index = full_cells + 1; index > 0; --index) {
            const auto at = index - 1;
            write_cell(at, swap_bytes(read_cell(cell_pointer(at))));
        }
        return 0;
    }

    if (capacity < 0x7fffffffu && capacity <= characters) characters = capacity - 1u;
    for (std::int32_t index = 0; index < static_cast<std::int32_t>(characters); ++index)
        write_cell(static_cast<std::uint32_t>(index), read_character(input, static_cast<std::uint32_t>(index), wide));
    write_cell(characters, 0);
    return 0;
}
}
