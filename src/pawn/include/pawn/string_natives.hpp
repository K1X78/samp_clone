#pragma once

#include "pawn/pawn_vm.hpp"

#include <utility>

namespace samp::pawn::string_natives {
using samp::amx::cell;
using Native = cell (*)(samp::amx::Amx*, std::span<const cell>);
cell length(samp::amx::Amx*, std::span<const cell>);
cell number(samp::amx::Amx*, std::span<const cell>);
cell is_packed(samp::amx::Amx*, std::span<const cell>);
cell copy_memory(samp::amx::Amx*, std::span<const cell>);
cell pack(samp::amx::Amx*, std::span<const cell>);
cell unpack(samp::amx::Amx*, std::span<const cell>);
cell concatenate(samp::amx::Amx*, std::span<const cell>);
cell compare(samp::amx::Amx*, std::span<const cell>);
cell find(samp::amx::Amx*, std::span<const cell>);
cell middle(samp::amx::Amx*, std::span<const cell>);
cell erase(samp::amx::Amx*, std::span<const cell>);
cell insert(samp::amx::Amx*, std::span<const cell>);
cell value_string(samp::amx::Amx*, std::span<const cell>);
cell uu_decode(samp::amx::Amx*, std::span<const cell>);
cell uu_encode(samp::amx::Amx*, std::span<const cell>);
inline constexpr std::pair<std::string_view, Native> kNatives[] = {
    {"strlen", length}, {"strval", number},
    {"ispacked", is_packed}, {"memcpy", copy_memory},
    {"strpack", pack}, {"strunpack", unpack},
    {"strcat", concatenate}, {"strcmp", compare},
    {"strfind", find}, {"strmid", middle},
    {"strdel", erase}, {"strins", insert},
    {"valstr", value_string},
    {"uudecode", uu_decode}, {"uuencode", uu_encode},
};
}
