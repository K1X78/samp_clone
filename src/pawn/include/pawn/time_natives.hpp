#pragma once

#include "pawn/pawn_vm.hpp"

#include <ctime>
#include <utility>
#include <windows.h>
#include <mmsystem.h>

namespace samp::pawn::time_natives {
using samp::amx::cell;
using Native = cell (*)(samp::amx::Amx*, std::span<const cell>);

// The original uses these Win32 imports and the 32-bit CRT calendar APIs.
// Keep the import slots explicit so tests can exercise setters without
// changing the computer's clock or multimedia timer resolution.
namespace imports {
inline auto read_local = &GetLocalTime;
inline auto write_local = &SetLocalTime;
inline auto read_epoch = &_time32;
inline auto local_calendar = &_localtime32;
inline auto read_ticks = &timeGetTime;
inline auto begin_period = &timeBeginPeriod;
}

inline bool period_initialized = false;
cell get_time(samp::amx::Amx*, std::span<const cell>);
cell set_time(samp::amx::Amx*, std::span<const cell>);
cell get_date(samp::amx::Amx*, std::span<const cell>);
cell set_date(samp::amx::Amx*, std::span<const cell>);
cell ticks(samp::amx::Amx*, std::span<const cell>);

inline constexpr std::pair<std::string_view, Native> kNatives[] = {
    {"gettime", get_time}, {"settime", set_time},
    {"getdate", get_date}, {"setdate", set_date}, {"tickcount", ticks},
};
}
