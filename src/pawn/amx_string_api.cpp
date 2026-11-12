#include "pawn/amx_string_api.hpp"

#include <cstring>

namespace samp::pawn::amx_string {
// samp-server.exe 0x4031d0. UNPACKEDMAX is 0x00ffffff in this binary.
// Official: FUN_004031d0 @ 0x004031d0 (samp-server.exe)
int length(const samp::amx::cell* source, int& characters) noexcept {
    const auto load_cell = [](const void* pointer) {
        std::uint32_t value = 0;
        std::memcpy(&value, pointer, sizeof(value));
        return value;
    };
    if (source == nullptr) {
        characters = 0;
        return 25;
    }
    const auto* bytes = reinterpret_cast<const std::uint8_t*>(source);
    if (load_cell(bytes) <= 0x00ffffffu) {
        int count = 0;
        while (load_cell(bytes + static_cast<std::size_t>(count) * 4) != 0) ++count;
        characters = count;
        return 0;
    }

    // The native locates the first cell containing a zero byte by scanning
    // little-endian memory, then counts that cell's leading packed bytes.
    std::uint32_t byte_offset = 0;
    while (bytes[byte_offset] != 0) ++byte_offset;
    const auto whole_cells = byte_offset & ~3u;
    auto last_cell = load_cell(bytes + whole_cells);
    auto count = whole_cells;
    while ((last_cell & 0xff000000u) != 0) {
        ++count;
        last_cell <<= 8;
    }
    characters = static_cast<int>(count);
    return 0;
}

// samp-server.exe 0x403350. Preserve the actual wide-output byte accesses;
// replacing them with a conventional wchar conversion changes this build.
// Official: FUN_00403350 @ 0x00403350 (samp-server.exe)
int get_string(void* destination, const samp::amx::cell* source,
               int use_wide_characters, std::uint32_t capacity) noexcept {
    const auto load_cell = [](const void* pointer) {
        std::uint32_t value = 0;
        std::memcpy(&value, pointer, sizeof(value));
        return value;
    };
    auto* output = static_cast<std::uint8_t*>(destination);
    const auto* input = reinterpret_cast<const std::uint8_t*>(source);
    std::uint32_t count = 0;
    auto value = load_cell(input);
    if (value <= 0x00ffffffu) {
        while (value != 0 && count < capacity) {
            if (use_wide_characters != 0) {
                const auto character = static_cast<std::uint16_t>(value);
                std::memcpy(output + static_cast<std::size_t>(count) * 2, &character, 2);
            } else {
                output[count] = static_cast<std::uint8_t>(value);
            }
            input += 4;
            ++count;
            value = load_cell(input);
        }
    } else {
        unsigned character_index = 3;
        while (count < capacity) {
            if (character_index == 3) {
                value = load_cell(input);
                input += 4;
            }
            const auto character = static_cast<std::uint8_t>(value >> (character_index * 8));
            if (use_wide_characters != 0) {
                // MOVSX sign-extends a packed byte to 16 bits.
                const auto wide = static_cast<std::uint16_t>(
                    static_cast<std::int16_t>(static_cast<std::int8_t>(character)));
                std::memcpy(output + static_cast<std::size_t>(count) * 2, &wide, 2);
            } else {
                output[count] = character;
            }
            // Even in wide mode, the original tests this byte index.
            const auto observed = output[count];
            ++count;
            if (observed == 0) break;
            character_index = (character_index - 1) & 3;
        }
    }
    if (count >= capacity) count = capacity - 1;
    if (static_cast<std::int32_t>(count) >= 0) output[count] = 0;
    return 0;
}
}
