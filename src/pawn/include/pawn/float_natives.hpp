#pragma once

#include "pawn/pawn_vm.hpp"

#include <utility>

namespace samp::pawn::float_natives {
using samp::amx::cell;
using Native = cell (*)(samp::amx::Amx*, std::span<const cell>);

cell from_integer(samp::amx::Amx*, std::span<const cell>);
cell from_string(samp::amx::Amx*, std::span<const cell>);
cell multiply(samp::amx::Amx*, std::span<const cell>);
cell divide(samp::amx::Amx*, std::span<const cell>);
cell add(samp::amx::Amx*, std::span<const cell>);
cell subtract(samp::amx::Amx*, std::span<const cell>);
cell fraction(samp::amx::Amx*, std::span<const cell>);
cell round(samp::amx::Amx*, std::span<const cell>);
cell compare(samp::amx::Amx*, std::span<const cell>);
cell square_root(samp::amx::Amx*, std::span<const cell>);
cell power(samp::amx::Amx*, std::span<const cell>);
cell logarithm(samp::amx::Amx*, std::span<const cell>);
double radians(float value, cell mode);
cell sine(samp::amx::Amx*, std::span<const cell>);
cell cosine(samp::amx::Amx*, std::span<const cell>);
cell tangent(samp::amx::Amx*, std::span<const cell>);
cell absolute(samp::amx::Amx*, std::span<const cell>);

// The sixteen names and callback order of the official table at 0x4B25A8.
inline constexpr std::pair<std::string_view, Native> kNatives[] = {
    {"float", from_integer}, {"floatstr", from_string},
    {"floatmul", multiply}, {"floatdiv", divide},
    {"floatadd", add}, {"floatsub", subtract},
    {"floatfract", fraction}, {"floatround", round},
    {"floatcmp", compare}, {"floatsqroot", square_root},
    {"floatpower", power}, {"floatlog", logarithm},
    {"floatsin", sine}, {"floatcos", cosine},
    {"floattan", tangent}, {"floatabs", absolute},
};
}
