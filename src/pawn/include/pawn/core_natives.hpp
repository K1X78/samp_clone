#pragma once

#include "pawn/pawn_vm.hpp"

#include <utility>

namespace samp::pawn::core_natives {
using samp::amx::cell;
using Native = cell (*)(samp::amx::Amx*, std::span<const cell>);

cell argument_count(samp::amx::Amx*, std::span<const cell>);
cell get_argument(samp::amx::Amx*, std::span<const cell>);
cell set_argument(samp::amx::Amx*, std::span<const cell>);
cell heap_space(samp::amx::Amx*, std::span<const cell>);
cell function_index(samp::amx::Amx*, std::span<const cell>);
cell swap_characters(samp::amx::Amx*, std::span<const cell>);
cell lower(samp::amx::Amx*, std::span<const cell>);
cell upper(samp::amx::Amx*, std::span<const cell>);
cell minimum(samp::amx::Amx*, std::span<const cell>);
cell maximum(samp::amx::Amx*, std::span<const cell>);
cell clamp(samp::amx::Amx*, std::span<const cell>);
cell random(samp::amx::Amx*, std::span<const cell>);
extern std::uint32_t random_state;

inline constexpr std::pair<std::string_view, Native> kNatives[] = {
    {"numargs", argument_count}, {"getarg", get_argument},
    {"setarg", set_argument}, {"heapspace", heap_space},
    {"funcidx", function_index}, {"swapchars", swap_characters},
    {"tolower", lower}, {"toupper", upper},
    {"min", minimum}, {"max", maximum}, {"clamp", clamp},
    {"random", random},
};
}
