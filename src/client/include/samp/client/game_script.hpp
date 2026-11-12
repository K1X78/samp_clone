#pragma once

// The 0.3.DL one-command GTA script bridge: 0x100b1f10 builds operands;
// 0x100b1ed0 dispatches them through CRunningScript::ProcessOneCommand.
#include <array>
#include <cstdint>

namespace samp::client {

class GameScript {
public:
    std::uint32_t command(std::uint16_t opcode, const char* format, ...);
    std::array<std::uint8_t, 0xe0> thread_{};
    std::array<std::uint8_t, 0x100> bytecode_{};
    std::array<std::uint32_t*, 18> output_{};
    std::uint32_t opcode_ = 0;
    bool executing_ = false;
};

}  // namespace samp::client
