#include "samp/client/game_script.hpp"

#include <cstdarg>
#include <cstring>

namespace samp::client {

// The audited native script bridge is in game/scripting.cpp.
// source adapter only; no established separate native entry
std::uint32_t GameScript::command(std::uint16_t opcode, const char* format, ...) {
    std::memcpy(bytecode_.data(), &opcode, 2);
    opcode_ = opcode;
    std::memset(thread_.data() + 0x3c, 0, 0x48);
    std::size_t cursor = 2;
    std::uint16_t outputs = 0;
    va_list args;
    va_start(args, format);
    bool valid = true;
    for (const char* type = format; *type != '\0' && valid; ++type) {
        // The official signatures fit these fixed buffers. Refuse malformed
        // signatures instead of writing beyond the script's storage.
        if (cursor + 5 > bytecode_.size()) { valid = false; break; }
        switch (*type) {
            case 'i': {
                bytecode_[cursor++] = 1;
                const auto value = va_arg(args, std::uint32_t);
                std::memcpy(bytecode_.data() + cursor, &value, 4);
                cursor += 4;
                break;
            }
            case 'f': {
                bytecode_[cursor++] = 6;
                const auto value = static_cast<float>(va_arg(args, double));
                std::memcpy(bytecode_.data() + cursor, &value, 4);
                cursor += 4;
                break;
            }
            case 'v': {
                if (outputs >= output_.size()) { valid = false; break; }
                auto* value = va_arg(args, std::uint32_t*);
                output_[outputs] = value;
                std::memcpy(thread_.data() + 0x3c + outputs * 4, value, 4);
                bytecode_[cursor++] = 3;
                std::memcpy(bytecode_.data() + cursor, &outputs, 2);
                cursor += 2;
                ++outputs;
                break;
            }
            case 's': {
                const char* value = va_arg(args, const char*);
                // Deliberately wrap to a byte, as in the shipped encoder.
                const auto length = static_cast<std::uint8_t>(std::strlen(value));
                if (cursor + 2 + length > bytecode_.size()) { valid = false; break; }
                bytecode_[cursor++] = 14;
                bytecode_[cursor++] = length;
                std::memcpy(bytecode_.data() + cursor, value, length);
                cursor += length;
                break;
            }
            case 'z': bytecode_[cursor++] = 0; break;
            default: valid = false; break;
        }
    }
    va_end(args);
    if (!valid) return 0;

    const auto instruction = static_cast<std::uint32_t>(
        reinterpret_cast<std::uintptr_t>(bytecode_.data()));
    std::memcpy(thread_.data() + 0x14, &instruction, 4);
    executing_ = true;
    // FUN_100b1f10 calls GTA's CRunningScript::ProcessOneCommand through the
    // official pointer at 0x10155390.
    reinterpret_cast<void(__thiscall*)(void*)>(0x00469eb0)(thread_.data());
    executing_ = false;
    for (std::size_t i = 0; i < outputs; ++i) {
        std::memcpy(output_[i], thread_.data() + 0x3c + i * 4, 4);
    }
    // This is a DWORD at an unaligned address, not a normalized bool.
    std::uint32_t result;
    std::memcpy(&result, thread_.data() + 0xc5, 4);
    return result;
}

}  // namespace samp::client
