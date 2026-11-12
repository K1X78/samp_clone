#include "pawn/float_natives.hpp"

#include "pawn/amx_host_api.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_string_api.hpp"

#include <bit>
#include <cmath>
#include <cstdlib>
#include <limits>

namespace samp::pawn::float_natives {

// Official: FUN_00405be0 @ 0x00405be0 (samp-server.exe)
cell from_integer(samp::amx::Amx*, std::span<const cell> args) {
    return std::bit_cast<cell>(static_cast<float>(args[0]));
}

// Official: FUN_00405bf0 @ 0x00405bf0 (samp-server.exe)
cell from_string(samp::amx::Amx* state, std::span<const cell> args) {
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &source);
    int length = 0;
    amx_string::length(source, length);
    if (length == 0 || static_cast<unsigned>(length) >= 60u) return 0;
    char text[60];
    amx_string::get_string(text, source, 0, 60);
    return std::bit_cast<cell>(static_cast<float>(std::atof(text)));
}

// Official: FUN_00405c60 @ 0x00405c60 (samp-server.exe)
cell multiply(samp::amx::Amx*, std::span<const cell> args) {
    return std::bit_cast<cell>(std::bit_cast<float>(args[1]) * std::bit_cast<float>(args[0]));
}

// Official: FUN_00405c80 @ 0x00405c80 (samp-server.exe)
cell divide(samp::amx::Amx*, std::span<const cell> args) {
    return std::bit_cast<cell>(std::bit_cast<float>(args[0]) / std::bit_cast<float>(args[1]));
}

// Official: FUN_00405ca0 @ 0x00405ca0 (samp-server.exe)
cell add(samp::amx::Amx*, std::span<const cell> args) {
    return std::bit_cast<cell>(std::bit_cast<float>(args[1]) + std::bit_cast<float>(args[0]));
}

// Official: FUN_00405cc0 @ 0x00405cc0 (samp-server.exe)
cell subtract(samp::amx::Amx*, std::span<const cell> args) {
    return std::bit_cast<cell>(std::bit_cast<float>(args[0]) - std::bit_cast<float>(args[1]));
}

// Official: FUN_00405ce0 @ 0x00405ce0 (samp-server.exe)
cell fraction(samp::amx::Amx*, std::span<const cell> args) {
    const double value = std::bit_cast<float>(args[0]);
    return std::bit_cast<cell>(static_cast<float>(value - std::floor(value)));
}

// Modes are FLOOR, CEIL, truncation toward zero, or floor(value + 0.5).
// The x87 integer conversion returns integer-indefinite for overflow/NaN.
// Official: FUN_00405d10 @ 0x00405d10 (samp-server.exe)
cell round(samp::amx::Amx*, std::span<const cell> args) {
    const double value = std::bit_cast<float>(args[0]);
    double result;
    switch (args[1]) {
        case 1: result = std::floor(value); break;
        case 2: result = std::ceil(value); break;
        case 3: result = std::trunc(value); break;
        default: result = std::floor(value + 0.5); break;
    }
    if (!std::isfinite(result) || result < -2147483648.0 || result >= 2147483648.0)
        return std::numeric_limits<cell>::min();
    return static_cast<cell>(result);
}

// FUCOMPP's unordered branch falls through to -1, as does a lesser value.
// Official: FUN_00405d70 @ 0x00405d70 (samp-server.exe)
cell compare(samp::amx::Amx*, std::span<const cell> args) {
    const float left = std::bit_cast<float>(args[0]);
    const float right = std::bit_cast<float>(args[1]);
    if (left == right) return 0;
    return left > right ? 1 : -1;
}

// The original checks the square root, rather than the input, for negativity.
// A negative input therefore returns the FSQRT NaN without AMX error 26.
// Official: FUN_00405db0 @ 0x00405db0 (samp-server.exe)
cell square_root(samp::amx::Amx*, std::span<const cell> args) {
    return std::bit_cast<cell>(std::sqrt(std::bit_cast<float>(args[0])));
}

// Official: FUN_00405de0 @ 0x00405de0 (samp-server.exe)
cell power(samp::amx::Amx*, std::span<const cell> args) {
    return std::bit_cast<cell>(static_cast<float>(std::pow(
        static_cast<double>(std::bit_cast<float>(args[0])),
        static_cast<double>(std::bit_cast<float>(args[1])))));
}

// The native rejects nonpositive values and bases, but permits base one.
// Unordered comparisons pass validation and propagate NaNs.
// Official: FUN_00405e00 @ 0x00405e00 (samp-server.exe)
cell logarithm(samp::amx::Amx* state, std::span<const cell> args) {
    const double value = std::bit_cast<float>(args[0]);
    const double base = std::bit_cast<float>(args[1]);
    if (value <= 0.0 || base <= 0.0) return amx_host::raise_error(*state, 26);
    const double result = base == 10.0 ? std::log10(value) : std::log(value) / std::log(base);
    return std::bit_cast<cell>(static_cast<float>(result));
}

// Constants read from the shipped image at 0x4B2710 / 0x4B2718.
// MSVC's x86 double return convention leaves ST(0) unrounded for the caller.
#if defined(_MSC_VER) && defined(_M_IX86)
#pragma warning(push)
#pragma warning(disable: 4035)
#endif
// Official: FUN_00405e90 @ 0x00405e90 (samp-server.exe)
double radians(float value, cell mode) {
#if defined(_MSC_VER) && defined(_M_IX86)
    const double degrees = 0.017453292519943295;
    const double gradians = 0.015707963267948967;
    __asm {
        fld value
        cmp mode, 1
        je use_degrees
        cmp mode, 2
        jne converted
        fmul gradians
        jmp converted
    use_degrees:
        fmul degrees
    converted:
    }
#else
    if (mode == 1) return value * 0.017453292519943295;
    if (mode == 2) return value * 0.015707963267948967;
    return value;
#endif
}
#if defined(_MSC_VER) && defined(_M_IX86)
#pragma warning(pop)
#endif

// Official: FUN_00405eb0 @ 0x00405eb0 (samp-server.exe)
cell sine(samp::amx::Amx*, std::span<const cell> args) {
#if defined(_MSC_VER) && defined(_M_IX86)
    const float value = std::bit_cast<float>(args[0]);
    const cell mode = args[1];
    float result;
    __asm {
        push mode
        push value
        call radians
        add esp, 8
        fsin
        fstp result
    }
    return std::bit_cast<cell>(result);
#else
    return std::bit_cast<cell>(static_cast<float>(std::sin(radians(std::bit_cast<float>(args[0]), args[1]))));
#endif
}

// Official: FUN_00405ed0 @ 0x00405ed0 (samp-server.exe)
cell cosine(samp::amx::Amx*, std::span<const cell> args) {
#if defined(_MSC_VER) && defined(_M_IX86)
    const float value = std::bit_cast<float>(args[0]);
    const cell mode = args[1];
    float result;
    __asm {
        push mode
        push value
        call radians
        add esp, 8
        fcos
        fstp result
    }
    return std::bit_cast<cell>(result);
#else
    return std::bit_cast<cell>(static_cast<float>(std::cos(radians(std::bit_cast<float>(args[0]), args[1]))));
#endif
}

// Official: FUN_00405ef0 @ 0x00405ef0 (samp-server.exe)
cell tangent(samp::amx::Amx*, std::span<const cell> args) {
#if defined(_MSC_VER) && defined(_M_IX86)
    const float value = std::bit_cast<float>(args[0]);
    const cell mode = args[1];
    float result;
    __asm {
        push mode
        push value
        call radians
        add esp, 8
        fptan
        fstp st(0)
        fstp result
    }
    return std::bit_cast<cell>(result);
#else
    return std::bit_cast<cell>(static_cast<float>(std::tan(radians(std::bit_cast<float>(args[0]), args[1]))));
#endif
}

// Unlike FABS, FCOMP/FCHS preserves negative zero and flips a NaN's sign.
// Official: FUN_00405f10 @ 0x00405f10 (samp-server.exe)
cell absolute(samp::amx::Amx*, std::span<const cell> args) {
    const float value = std::bit_cast<float>(args[0]);
    if (std::isnan(value))
        return std::bit_cast<cell>((static_cast<std::uint32_t>(args[0]) ^ 0x80000000u) | 0x00400000u);
    return value < 0.0f
        ? std::bit_cast<cell>(static_cast<std::uint32_t>(args[0]) ^ 0x80000000u)
        : args[0];
}

}
