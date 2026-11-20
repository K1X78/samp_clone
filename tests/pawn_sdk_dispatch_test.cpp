#include "pawn/amx_host_api.hpp"
#include "pawn/amx_lookup_api.hpp"
#include "samp/server/game_layer.hpp"

#include <array>
#include <bit>
#include <cstdio>
#include <cstring>
#include <stdexcept>

namespace {

using samp::amx::Amx;
using samp::amx::AmxHeader;
using samp::amx::AmxNativeInfo;
using samp::amx::cell;
using namespace samp::pawn;

void require(bool condition, const char* description) {
    if (!condition) throw std::runtime_error(description);
}

template <class T>
void append(std::vector<std::uint8_t>& image, const T& value) {
    const auto* bytes = reinterpret_cast<const std::uint8_t*>(&value);
    image.insert(image.end(), bytes, bytes + sizeof(value));
}

template <class T>
T read_at(const void* image, std::size_t offset) {
    T value;
    std::memcpy(&value, static_cast<const std::uint8_t*>(image) + offset, sizeof(value));
    return value;
}

std::vector<std::uint8_t> make_program(std::int16_t stride) {
    constexpr std::array instructions{
        0x78, 0,                          // halt 0
        0x2e,                             // Mixed()
        0x27, 0, 0x27, std::bit_cast<cell>(2.625f), 0x27, 8,
        0x7b, 0, 0x2c, 12,               // floatround(2.625, 0)
        0x24, 0x27, 4, 0x7b, 1, 0x2c, 8, // HostProbe(result)
        0x24, 0x27, 4, 0x7b, 2, 0x2c, 8, // HostScale(result)
        0x30,                             // retn
        0x2e,                             // Probe(value)
        0x29, 12, 0x27, 4, 0x7b, 1, 0x2c, 8, 0x30,
    };
    AmxHeader header;
    header.magic = samp::amx::kAmxMagic;
    header.file_version = header.amx_version = 8;
    header.defsize = stride;
    header.publics = sizeof(header);
    header.natives = header.publics + 2 * stride;
    header.libraries = header.natives + 3 * stride;
    header.pubvars = header.tags = header.nametable = header.libraries;
    header.cip = 2 * sizeof(cell);

    std::vector<std::uint8_t> image(sizeof(header));
    std::vector<std::uint8_t> names;
    append(names, std::uint16_t{31});
    const auto record = [&](std::uint32_t value, std::string_view name) {
        append(image, value);
        if (stride == 8) {
            append(image, static_cast<std::uint32_t>(header.nametable + names.size()));
            names.insert(names.end(), name.begin(), name.end());
            names.push_back(0);
        } else {
            image.insert(image.end(), name.begin(), name.end());
            image.insert(image.end(), 20 - name.size(), 0);
        }
    };
    record(header.cip, "Mixed");
    record(28 * sizeof(cell), "Probe");
    record(0, "floatround");
    record(0x11223344, "HostProbe");  // On-disk slot contents do not establish a host binding.
    record(0, "HostScale");
    image.insert(image.end(), names.begin(), names.end());
    image.resize((image.size() + 3) & ~std::size_t{3}, 0);
    header.cod = static_cast<std::int32_t>(image.size());
    for (auto instruction : instructions) append(image, instruction);
    header.size = header.dat = header.hea = static_cast<std::int32_t>(image.size());
    header.stp = header.dat + 1024;
    std::memcpy(image.data(), &header, sizeof(header));
    return image;
}

cell host_probe(void* pointer, const cell* params) {
    auto& state = *static_cast<Amx*>(pointer);
    ++state.usertags[2];
    if (params[0] != sizeof(cell)) return -1000;
    if (params[1] < 0) amx_host::raise_error(state, samp::amx::kAmxErrNative);
    return params[1] + 40;
}

cell host_scale(void* pointer, const cell* params) {
    auto& state = *static_cast<Amx*>(pointer);
    ++state.usertags[3];
    return params[0] == sizeof(cell) ? 2 * params[1] : -1000;
}

int trace_callback(Amx* state, cell native, cell* result, const cell* params) {
    ++state->usertags[1];
    return amx_control::callback(state, native, result, params);
}

void exercise(std::int16_t stride) {
    samp::server::GameLayer game;
    auto& vm = game.vm_;
    const auto program = make_program(stride);
    require(vm.load(program, "test-sdk.amx"), "Cannot load mixed Pawn program");
    auto* state = vm.sdk_state();
    require(state != nullptr && state->callback != nullptr, "Owned state has no SDK callback");
    auto* default_callback = state->callback;
    register_server_natives(vm, game);

    const auto header = read_at<AmxHeader>(state->base, 0);
    constexpr std::array first{AmxNativeInfo{"HostProbe", host_probe},
                               AmxNativeInfo{"HostScale", host_scale}, AmxNativeInfo{}};
    constexpr std::array second{AmxNativeInfo{"HostProbe", host_scale},
                                AmxNativeInfo{"HostScale", host_scale},
                                AmxNativeInfo{"floatround", host_probe}, AmxNativeInfo{}};
    cell result = -88;
    require(amx_control::execute(state, &result, 0) == 19 && result == -88,
            "Unresolved plugin natives allowed entry");
    require(amx_registration::register_natives(state, first.data(), 1) == 19,
            "Registration did not stop at its exact count");
    require(read_at<std::uintptr_t>(state->base, header.natives + stride) ==
                reinterpret_cast<std::uintptr_t>(&host_probe),
            "First successful registration was lost when another native was unresolved");
    require(amx_registration::register_natives(state, second.data(), -2) == 19,
            "A negative count other than -1 searched registrations");
    require(amx_registration::register_natives(state, second.data(), -1) == 0 &&
                (state->flags & 0x1000),
            "Mixed builtins and SDK registrations do not resolve native table");

    require(vm.execute("Mixed", {}, result) == 0 && result == 86 &&
                state->usertags[2] == 1 && state->usertags[3] == 1,
            "Named public failed to mix builtins and SDK native bindings");
    require(read_at<cell>(state->base, header.cod + 9 * sizeof(cell)) == 0x7b &&
                read_at<cell>(state->base, header.cod + 16 * sizeof(cell)) == 0x87 &&
                read_at<cell>(state->base, header.cod + 23 * sizeof(cell)) == 0x87,
            "SDK quickening did not distinguish builtins and registered native targets");

    int index = -1;
    require(amx_lookup::find_public(state, "Mixed", &index) == 0 && index == 0,
            "SDK public lookup did not find the loaded table");
    amx_control::set_callback(state, reinterpret_cast<void*>(&trace_callback));
    require(amx_control::execute(state, &result, index) == 0 && result == 86 &&
                state->usertags[1] == 1 && state->usertags[2] == 2 && state->usertags[3] == 2,
            "Explicit callback or quickened native precedence changed");
    amx_control::set_callback(state, nullptr);
    require(amx_control::execute(state, &result, index) == samp::amx::kAmxErrCallback,
            "SDK execution accepted a null callback");
    amx_control::set_callback(state, default_callback);

    require(amx_lookup::find_public(state, "Probe", &index) == 0 && index == 1 &&
                amx_control::push(state, -5) == 0,
            "Unable to prepare SDK call with pushed argument");
    result = -88;
    require(amx_control::execute(state, &result, index) == samp::amx::kAmxErrNative && result == -88,
            "External native error or result preservation was lost");

    const std::array<cell, 2> params{4, 7};
    require(amx_control::callback(state, 1, &state->error, params.data()) == 47 && state->error == 47,
            "SDK callback result/error alias differs from native calling convention");
    require(amx_control::execute(state, nullptr, 0) == 0,
            "SDK execution with no result location failed");

    require(vm.load(program, "test-sdk-reloaded.amx") && vm.sdk_state() == state,
            "Reload did not preserve the VM's SDK state identity");
    register_server_natives(vm, game);
    require(amx_control::execute(state, &result, 0) == 19 && state->usertags[2] == 0,
            "Reload retained external bindings or their state");
    require(amx_registration::register_natives(state, first.data(), -1) == 0 &&
                game.start_gamemode() == 0 && state->usertags[2] == 1,
            "Re-registered SDK natives are unreachable from gamemode main");
}

}  // namespace

int main(int, char**) {
    try {
        exercise(8);
        exercise(24);
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
    std::puts("Mixed Pawn SDK native dispatch passed for both definition layouts");
}
