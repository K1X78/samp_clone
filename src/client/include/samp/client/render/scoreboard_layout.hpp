#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <functional>

namespace samp::client::render {

struct ScoreboardRect {
    std::int32_t left{}, top{}, right{}, bottom{};
    bool operator==(const ScoreboardRect&) const = default;
};

// The native scoreboard prefix used by 0x1006e360/3c0/460. Fields whose
// downstream role is not established retain offset-based names.
struct ScoreboardLayout {
    std::int32_t visible{}, cached_player_count{};
    float x{}, y{}, scale{}, width{}, height{}, inset_1c{};
    std::array<float, 4> columns{};
    void* device{};
    void* dialog{};
    void* list{};
    std::uint32_t state_3c{};
    std::int32_t sort_mode{};
};
static_assert(offsetof(ScoreboardLayout, x) == 8);
static_assert(offsetof(ScoreboardLayout, columns) == 0x20);
static_assert(offsetof(ScoreboardLayout, device) == 0x30);
static_assert(sizeof(void*) != 4 || sizeof(ScoreboardLayout) == 0x44);

struct ScoreboardLayoutHost {
    // Mirrors GetClientRect: centering uses right/bottom, not left/top.
    std::function<void(ScoreboardRect&)> client_rectangle;
};

std::int32_t truncate_coordinate(float value); // 0x100f9324

} // namespace samp::client::render
