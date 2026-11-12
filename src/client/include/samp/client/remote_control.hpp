#pragma once

#include "samp/client/game_command.hpp"
#include <array>
#include <cstdint>

namespace samp::client {

inline constexpr std::size_t kRemoteControlPadBytes = 0x134;
using RemoteControlPad = std::array<std::uint8_t, kRemoteControlPadBytes>;

// Updates the compatibility backend's saved pad before it swaps that data
// around GTA's ProcessControl call. The native CPed::SetKeys owner at
// 0x100aef40 is already implemented in game/playerped.cpp.
void update_remote_control_pad(RemoteControlPad& pad, const RemotePlayerUpdate& update,
                               bool in_vehicle, bool jump_task_blocked) noexcept;

}  // namespace samp::client
