// Run only isolated arithmetic helpers from the original PE. Loading with
// DONT_RESOLVE_DLL_REFERENCES does not invoke DllMain or start GTA/networking.
#include <windows.h>
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <cmath>
#include "samp/proto/reliability_frame.hpp"

int main() {
    HMODULE module = LoadLibraryExA(SAMP_OFFICIAL_CLIENT_PATH, nullptr, DONT_RESOLVE_DLL_REFERENCES);
    if (!module) { std::printf("reference PE load failed: %lu\n", GetLastError()); return 1; }
    auto* base = reinterpret_cast<std::uint8_t*>(module);
    using Older = bool(__thiscall*)(void*, std::uint16_t, std::uint16_t);
    using Retry = void(__thiscall*)(void*);
    using Ping = void(__thiscall*)(void*, std::uint32_t);
    using Header = std::uint32_t(__thiscall*)(void*, void*);
    const auto older = reinterpret_cast<Older>(base + 0x43ac0);
    const auto retry = reinterpret_cast<Retry>(base + 0x43b30);
    const auto ping = reinterpret_cast<Ping>(base + 0x456c0);
    const auto header = reinterpret_cast<Header>(base + 0x43980);
    using Update = void(__thiscall*)(void*, std::uint32_t, std::uint32_t, std::uint32_t,
                                    std::uint32_t, std::uint64_t, void*);
    const auto update = reinterpret_cast<Update>(base + 0x495a0);
    int failures = 0;
    std::array<std::uint8_t, 0x800> object{};
    const auto put = [&](std::size_t offset, std::uint32_t value) { std::memcpy(object.data() + offset, &value, 4); };
    const auto get = [&](std::size_t offset) { std::uint32_t value; std::memcpy(&value, object.data() + offset, 4); return value; };
    const auto put_double = [&](std::size_t offset, double value) { std::memcpy(object.data() + offset, &value, 8); };
    const auto get_double = [&](std::size_t offset) { double value; std::memcpy(&value, object.data() + offset, 8); return value; };
    for (std::uint32_t reliability : {6u, 7u, 8u, 9u, 10u}) {
        for (std::uint32_t split : {0u, 1u}) {
            std::array<std::uint8_t, 0x40> packet{};
            std::memcpy(packet.data() + 0xa, &reliability, 4);
            std::memcpy(packet.data() + 0x17, &split, 4);
            put(0x403, 4);
            samp::proto::ReliabilityFrame frame;
            frame.reliability = static_cast<samp::proto::Reliability>(reliability);
            frame.is_split = split != 0;
            if (header(object.data(), packet.data()) != samp::proto::reliability_header_bits(frame)) ++failures;
        }
    }
    for (std::uint32_t expected : {0u, 1u, 32766u, 32767u, 32768u, 32769u, 65534u, 65535u}) {
        for (std::uint32_t incoming = 0; incoming < 65536; ++incoming) {
            const auto a = static_cast<std::uint16_t>(incoming), b = static_cast<std::uint16_t>(expected);
            if (older(object.data(), a, b) != samp::proto::reliability_sequence_older(a, b)) ++failures;
        }
    }
    for (bool limited : {false, true}) {
        for (std::uint32_t resend : {0u, 1u, 2u, 3u, 4u, 5u, 20u, 21u, 80u}) {
            for (double high : {0.0, 520000.0, 1000000.0}) {
                object.fill(0);
                put(0x403, 4); put(0x2cd, 30); put(0x2d3, 10000);
                put(0x41a, 1000); // prior update: one millisecond, native microseconds
                put_double(0x452, 512000.0); put_double(0x442, 300000.0);
                put_double(0x44a, high);
                object[0x462] = limited;
                put(0x43a, resend); put(0x43e, 100 - resend);
                // Use a sub-millisecond elapsed native update and matching
                // credit to select controller paths without queued packets.
                put_double(0x45a, limited ? -600000.0 : 50000.0);
                std::array<std::uint32_t, 2> plugins{};
                update(object.data(), 0, 0, 0, 1492, 1000000, plugins.data());
                samp::proto::ReliabilitySendState state;
                state.clock_initialized = true; state.last_update_ms = 1;
                state.ping_ms = 30;
                state.bandwidth_low = 300000.0; state.bandwidth_high = high;
                state.credit = limited ? -600000.0 : 50000.0;
                state.insufficient_credit = limited;
                state.epoch_resends = resend; state.epoch_acks = 100 - resend;
                samp::proto::update_reliability_sends(state, 1000);
                for (auto [offset, value] : {std::pair<std::size_t, double>{0x452, state.bandwidth},
                     {0x442, state.bandwidth_low}, {0x44a, state.bandwidth_high}, {0x45a, state.credit}}) {
                    if (std::fabs(get_double(offset) - value) > 0.00001) {
                        std::printf("controller mismatch limited=%d resend=%u high=%.0f offset=%zx native=%.9f source=%.9f\n",
                            limited, resend, high, offset, get_double(offset), value);
                        ++failures;
                    }
                }
            }
        }
    }
    for (std::uint32_t input : {0u, 1u, 9u, 10u, 29u, 30u, 100u, 500u, 10000u, 10001u, 0xffffffffu}) {
        put(0x2cd, input);
        retry(object.data());
        const auto native_us = std::uint64_t(get(0x6cd)) | (std::uint64_t(get(0x6d1)) << 32);
        if (native_us != samp::proto::reliability_retry_delay(input) * 1000) ++failures;
        for (std::uint32_t delay : {0u, 100u, 300u}) {
            put(0x2d3, 10000); put(0x6ea, delay); put(0x6ee, 50);
            samp::proto::ReliabilitySendState state;
            state.simulated_delay_ms = delay; state.simulated_variance_ms = 50;
            ping(object.data(), input);
            samp::proto::set_reliability_ping(state, input);
            const auto native_retry_us = std::uint64_t(get(0x6cd)) | (std::uint64_t(get(0x6d1)) << 32);
            if (state.ping_ms != get(0x2cd) || state.retry_ms * 1000 != native_retry_us) ++failures;
        }
    }
    FreeLibrary(module);
    std::printf("original PE arithmetic comparisons: %d failures\n", failures);
    return failures != 0;
}
