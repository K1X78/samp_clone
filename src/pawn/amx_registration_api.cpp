#include "pawn/amx_registration_api.hpp"

#include <cstring>

namespace samp::pawn::amx_registration {
// samp-server.exe 0x401b20 searches one native name and returns its function
// address, with the original sentinel and maximum-count order.
// Official: FUN_00401b20 @ 0x00401b20 (samp-server.exe)
std::uint32_t find_function(const char* name,
                            const samp::amx::AmxNativeInfo* functions,
                            int maximum) noexcept {
    // 0x401b20 checks the first sentinel even when maximum disallows a search.
    if (functions[0].name == nullptr) return 0;
    int index = 0;
    for (;;) {
        if (index >= maximum && maximum != -1) return 0;
        const auto* required = reinterpret_cast<const unsigned char*>(name);
        const auto* candidate = reinterpret_cast<const unsigned char*>(functions[index].name);
        while (*required == *candidate && *required != 0) {
            ++required;
            ++candidate;
        }
        if (*required == *candidate)
            return static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(functions[index].func));
        ++index;
        if (functions[index].name == nullptr) return 0;
    }
}

// samp-server.exe 0x401ba0 and its internal name search at 0x401b20.
// Official: FUN_00401ba0 @ 0x00401ba0 (samp-server.exe)
int register_natives(samp::amx::Amx* state,
                     const samp::amx::AmxNativeInfo* functions,
                     int maximum) noexcept {
    const auto read_i16 = [](const void* address) {
        std::int16_t value = 0;
        std::memcpy(&value, address, sizeof(value));
        return value;
    };
    const auto read_i32 = [](const void* address) {
        std::int32_t value = 0;
        std::memcpy(&value, address, sizeof(value));
        return value;
    };
    const auto read_u32 = [](const void* address) {
        std::uint32_t value = 0;
        std::memcpy(&value, address, sizeof(value));
        return value;
    };
    auto* image = static_cast<std::uint8_t*>(state->base);
    const auto stride = read_i16(image + 0x0a);
    const auto start = read_i32(image + 0x24);
    const auto end = read_i32(image + 0x28);
    const auto distance = static_cast<std::int32_t>(static_cast<std::uint32_t>(end) -
                                                   static_cast<std::uint32_t>(start));
    const auto count = distance / stride;
    auto entry = reinterpret_cast<std::uintptr_t>(image) + static_cast<std::uint32_t>(start);
    int status = 0;
    for (int index = 0; index < count; ++index) {
        auto* bytes = reinterpret_cast<std::uint8_t*>(entry);
        if (read_u32(bytes) == 0) {
            std::uint32_t function = 0;
            if (functions != nullptr) {
                const auto current_stride = read_i16(image + 0x0a);
                const auto* name = current_stride == 8
                    ? reinterpret_cast<const char*>(reinterpret_cast<std::uintptr_t>(image) +
                                                     read_u32(bytes + 4))
                    : reinterpret_cast<const char*>(bytes + 4);
                function = find_function(name, functions, maximum);
            }
            if (function != 0) std::memcpy(bytes, &function, sizeof(function));
            else status = 19;
        }
        entry += static_cast<std::uint32_t>(read_i16(image + 0x0a));
    }
    if (status == 0) state->flags |= 0x1000;
    return status;
}
}
