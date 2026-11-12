#include "samp/client/remote_control.hpp"
#include <cstring>

namespace samp::client {
// source adapter only; no established separate native entry
void update_remote_control_pad(RemoteControlPad& pad, const RemotePlayerUpdate& update,
                               bool in_vehicle, bool jump_task_blocked) noexcept {
    std::int16_t old = 0;
    std::memcpy(&old, pad.data(), sizeof(old));
    const auto left_right = static_cast<std::int16_t>(update.left_right);
    std::int16_t previous = old != 0 && left_right != 0 ? left_right : 0;
    std::memcpy(pad.data() + 0x30, &previous, sizeof(previous));
    std::memcpy(pad.data(), &left_right, sizeof(left_right));

    std::memcpy(&old, pad.data() + 2, sizeof(old));
    const auto up_down = static_cast<std::int16_t>(update.up_down);
    previous = old != 0 && up_down != 0 ? up_down : 0;
    std::memcpy(pad.data() + 0x32, &previous, sizeof(previous));
    std::memcpy(pad.data() + 2, &up_down, sizeof(up_down));

    bool pressed = (update.keys & (1u << 0)) != 0;
    std::memcpy(&old, pad.data() + 8, sizeof(old));
    const std::int16_t button = pressed ? 0xff : 0;
    previous = pressed && old != 0 ? 0xff : 0;
    std::memcpy(pad.data() + 8, &button, sizeof(button));
    std::memcpy(pad.data() + 0x38, &previous, sizeof(previous));

    pressed = in_vehicle && (update.keys & (1u << 1)) != 0;
    std::memcpy(&old, pad.data() + 0x24, sizeof(old));
    const std::int16_t vehicle_button = pressed ? 0xff : 0;
    previous = pressed && old != 0 ? 0xff : 0;
    std::memcpy(pad.data() + 0x24, &vehicle_button, sizeof(vehicle_button));
    std::memcpy(pad.data() + 0x54, &previous, sizeof(previous));

    pressed = (update.keys & (1u << 2)) != 0;
    std::memcpy(&old, pad.data() + 0x22, sizeof(old));
    const std::int16_t button_11 = pressed ? 0xff : 0;
    previous = pressed && old != 0 ? 0xff : 0;
    std::memcpy(pad.data() + 0x22, &button_11, sizeof(button_11));
    std::memcpy(pad.data() + 0x52, &previous, sizeof(previous));

    pressed = (update.keys & (1u << 3)) != 0;
    std::memcpy(&old, pad.data() + 0x20, sizeof(old));
    const std::int16_t button_10 = pressed ? 0xff : 0;
    previous = pressed && old != 0 ? 0xff : 0;
    std::memcpy(pad.data() + 0x20, &button_10, sizeof(button_10));
    std::memcpy(pad.data() + 0x50, &previous, sizeof(previous));

    pressed = !jump_task_blocked && (update.keys & (1u << 4)) != 0;
    std::memcpy(&old, pad.data() + 0x1e, sizeof(old));
    const std::int16_t button_0f = pressed ? 0xff : 0;
    previous = pressed && old != 0 ? 0xff : 0;
    std::memcpy(pad.data() + 0x1e, &button_0f, sizeof(button_0f));
    std::memcpy(pad.data() + 0x4e, &previous, sizeof(previous));

    pressed = (update.keys & (1u << 5)) != 0;
    std::memcpy(&old, pad.data() + 0x1c, sizeof(old));
    const std::int16_t button_0e = pressed ? 0xff : 0;
    previous = pressed && old != 0 ? 0xff : 0;
    std::memcpy(pad.data() + 0x1c, &button_0e, sizeof(button_0e));
    std::memcpy(pad.data() + 0x4c, &previous, sizeof(previous));

    pressed = (update.keys & (1u << 6)) != 0;
    std::memcpy(&old, pad.data() + 0x0e, sizeof(old));
    const std::int16_t button_07 = pressed ? 0xff : 0;
    previous = pressed && old != 0 ? 0xff : 0;
    std::memcpy(pad.data() + 0x0e, &button_07, sizeof(button_07));
    std::memcpy(pad.data() + 0x3e, &previous, sizeof(previous));

    pressed = (update.keys & (1u << 7)) != 0;
    std::memcpy(&old, pad.data() + 0x0c, sizeof(old));
    const std::int16_t button_06 = pressed ? 0xff : 0;
    previous = pressed && old != 0 ? 0xff : 0;
    std::memcpy(pad.data() + 0x0c, &button_06, sizeof(button_06));
    std::memcpy(pad.data() + 0x3c, &previous, sizeof(previous));

    pressed = (update.keys & (1u << 8)) != 0;
    std::memcpy(&old, pad.data() + 0x0a, sizeof(old));
    const std::int16_t button_05 = pressed ? 0xff : 0;
    previous = pressed && old != 0 ? 0xff : 0;
    std::memcpy(pad.data() + 0x0a, &button_05, sizeof(button_05));
    std::memcpy(pad.data() + 0x3a, &previous, sizeof(previous));

    pressed = (update.keys & (1u << 9)) != 0;
    std::memcpy(&old, pad.data() + 0x26, sizeof(old));
    const std::int16_t button_13 = pressed ? 0xff : 0;
    previous = pressed && old == 0xff ? 0xff : 0;
    std::memcpy(pad.data() + 0x26, &button_13, sizeof(button_13));
    std::memcpy(pad.data() + 0x56, &previous, sizeof(previous));

    pressed = (update.keys & (1u << 10)) != 0;
    std::memcpy(&old, pad.data() + 0x2a, sizeof(old));
    const std::int16_t button_15 = pressed ? 0xff : 0;
    previous = pressed && old == 0xff ? 0xff : 0;
    std::memcpy(pad.data() + 0x2a, &button_15, sizeof(button_15));
    std::memcpy(pad.data() + 0x5a, &previous, sizeof(previous));

    std::int16_t right_stick = 0;
    switch ((update.keys >> 11) & 3u) {
        case 2: right_stick = 0x80; break;
        case 1: right_stick = -0x80; break;
        default: break;
    }
    std::memcpy(pad.data() + 6, &right_stick, sizeof(right_stick));
    std::memcpy(pad.data() + 0x36, &right_stick, sizeof(right_stick));

    std::int16_t left_stick = 0;
    switch ((update.keys >> 13) & 3u) {
        case 2: left_stick = 0x80; break;
        case 1: left_stick = -0x80; break;
        default: break;
    }
    std::memcpy(pad.data() + 4, &left_stick, sizeof(left_stick));
    std::memcpy(pad.data() + 0x34, &left_stick, sizeof(left_stick));
}

}  // namespace samp::client
