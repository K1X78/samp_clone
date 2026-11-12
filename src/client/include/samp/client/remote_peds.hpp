#pragma once

#include "samp/client/game_command.hpp"
#include "samp/client/remote_control.hpp"
#include <array>
#include <unordered_map>

namespace samp::client {

struct RemotePed {
    std::uint32_t slot = 0;
    std::uint32_t actor = 0;
    void* ped = nullptr;
    bool synced = false;
    bool has_target = false;
    RemotePlayerUpdate target{};
    std::uint32_t updated_at = 0;
    RemoteControlPad control_pad{};
    bool has_aim=false;
    std::array<std::uint8_t,31> aim{};
};

struct RemotePeds {
    std::unordered_map<int, RemotePed> peds_;
    std::array<bool, 0xd2> slots_{};
};

} // namespace samp::client
