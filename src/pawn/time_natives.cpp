#include "pawn/time_natives.hpp"

#include "pawn/amx_memory_api.hpp"

namespace samp::pawn::time_natives {

// Return the 32-bit epoch value and independently write each valid output.
// Copy localtime's shared result before touching any script argument.
// Official: FUN_00407060 @ 0x00407060 (samp-server.exe)
cell get_time(samp::amx::Amx* state, std::span<const cell> args) {
    __time32_t epoch;
    imports::read_epoch(&epoch);
    const auto calendar = *imports::local_calendar(&epoch);
    cell* output;
    if (amx_memory::get_address(state, args[0], &output) == 0) *output = calendar.tm_hour;
    if (amx_memory::get_address(state, args[1], &output) == 0) *output = calendar.tm_min;
    if (amx_memory::get_address(state, args[2], &output) == 0) *output = calendar.tm_sec;
    return static_cast<cell>(epoch);
}

// Negative fields keep their current values; supplied fields truncate to
// WORD. SetLocalTime's success or failure does not change the zero return.
// Official: FUN_00407010 @ 0x00407010 (samp-server.exe)
cell set_time(samp::amx::Amx*, std::span<const cell> args) {
    SYSTEMTIME current;
    imports::read_local(&current);
    if (args[0] >= 0) current.wHour = static_cast<WORD>(args[0]);
    if (args[1] >= 0) current.wMinute = static_cast<WORD>(args[1]);
    if (args[2] >= 0) current.wSecond = static_cast<WORD>(args[2]);
    imports::write_local(&current);
    return 0;
}

// Invalid output addresses are skipped separately. The result is the
// one-based day of the year, not the epoch value returned by gettime.
// Official: FUN_00407150 @ 0x00407150 (samp-server.exe)
cell get_date(samp::amx::Amx* state, std::span<const cell> args) {
    __time32_t epoch;
    imports::read_epoch(&epoch);
    const auto calendar = *imports::local_calendar(&epoch);
    cell* output;
    if (amx_memory::get_address(state, args[0], &output) == 0) *output = calendar.tm_year + 1900;
    if (amx_memory::get_address(state, args[1], &output) == 0) *output = calendar.tm_mon + 1;
    if (amx_memory::get_address(state, args[2], &output) == 0) *output = calendar.tm_mday;
    return calendar.tm_yday + 1;
}

// Zero fields retain the existing date. Negative nonzero inputs are still
// truncated to WORD, and the system API result is ignored.
// Official: FUN_00407100 @ 0x00407100 (samp-server.exe)
cell set_date(samp::amx::Amx*, std::span<const cell> args) {
    SYSTEMTIME current;
    imports::read_local(&current);
    if (args[0] != 0) current.wYear = static_cast<WORD>(args[0]);
    if (args[1] != 0) current.wMonth = static_cast<WORD>(args[1]);
    if (args[2] != 0) current.wDay = static_cast<WORD>(args[2]);
    imports::write_local(&current);
    return 0;
}

// Request the one-millisecond period once, write the optional 1000 Hz
// frequency output, and retain only the low 31 bits of timeGetTime.
// Official: FUN_004071f0 @ 0x004071f0 (samp-server.exe)
cell ticks(samp::amx::Amx* state, std::span<const cell> args) {
    if (!period_initialized) {
        imports::begin_period(1);
        period_initialized = true;
    }
    cell* frequency;
    if (amx_memory::get_address(state, args[0], &frequency) == 0) *frequency = 1000;
    return static_cast<cell>(imports::read_ticks() & 0x7fffffffu);
}

}
