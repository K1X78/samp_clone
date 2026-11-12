#pragma once

#include "pawn/pawn_vm.hpp"

#include <utility>

namespace samp::pawn::property_natives {
using samp::amx::cell;
using Native = cell (*)(samp::amx::Amx*, std::span<const cell>);
cell get(samp::amx::Amx*, std::span<const cell>);
cell set(samp::amx::Amx*, std::span<const cell>);
cell remove(samp::amx::Amx*, std::span<const cell>);
cell exists(samp::amx::Amx*, std::span<const cell>);
inline constexpr std::pair<std::string_view, Native> kNatives[] = {
    {"getproperty", get}, {"setproperty", set},
    {"deleteproperty", remove}, {"existproperty", exists},
};
}
