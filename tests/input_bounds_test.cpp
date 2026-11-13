#include "samp/server/game_layer.hpp"
#include "samp/proto/sha1.hpp"
#include "samp/proto/wire.hpp"

#include <array>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <new>
#include <stdexcept>

namespace {
bool watch_allocations = false;
std::size_t oversized_allocations = 0;

void require(bool value, const char* message) {
    if (!value) throw std::runtime_error(message);
}
}

// Test-only allocation guard: the malformed length must be rejected without
// attempting its advertised allocation. No production allocator is replaced.
void* operator new(std::size_t size) {
    if (watch_allocations && size > 1024u * 1024u) {
        ++oversized_allocations;
        throw std::bad_alloc();
    }
    if (void* p = std::malloc(size ? size : 1)) return p;
    throw std::bad_alloc();
}
void* operator new[](std::size_t size) { return ::operator new(size); }
void operator delete(void* p) noexcept { std::free(p); }
void operator delete[](void* p) noexcept { std::free(p); }
void operator delete(void* p, std::size_t) noexcept { std::free(p); }
void operator delete[](void* p, std::size_t) noexcept { std::free(p); }

namespace samp::server {
struct RakNetTransportTestAccess {
    static RakNetPeer& authenticated(RakNetServer& network) {
        auto& peer = network.peers_[1234];
        peer.address_ = 0;
        peer.port_ = 1234;
        peer.stage_ = RakNetPeer::Stage::Authenticated;
        return peer;
    }
};
}

namespace {
using samp::proto::BitStream;

void byte_count_bounds() {
    constexpr auto limit = static_cast<std::size_t>((std::numeric_limits<int>::max)()) / 8u;
    const std::array<std::size_t, 4> counts{
        limit + 1u, limit + 2u, (std::numeric_limits<std::size_t>::max)() / 8u + 1u,
        (std::numeric_limits<std::size_t>::max)()};
    for (const bool unaligned : {false, true}) {
        BitStream stream;
        const std::uint8_t value = 0xa5;
        stream.write(&value, 1);
        if (unaligned) stream.write1();
        stream.readOffset_ = unaligned ? 1u : 0u;
        const auto used = stream.numberOfBitsUsed_;
        const auto offset = stream.readOffset_;
        const auto bytes = stream.data_;
        for (const auto count : counts) {
            bool rejected = false;
            try { stream.write(&value, count); }
            catch (const std::length_error&) { rejected = true; }
            require(rejected, "oversized byte write must throw length_error");
            require(stream.numberOfBitsUsed_ == used && stream.data_ == bytes,
                    "rejected byte write changed stream");
            std::uint8_t output = 0x5a;
            require(!stream.read(&output, count), "oversized byte read accepted");
            require(output == 0x5a && stream.readOffset_ == offset,
                    "rejected byte read changed output or cursor");
            require(!stream.readAlignedBytes(&output, count), "oversized aligned read accepted");
            require(output == 0x5a && stream.readOffset_ == offset,
                    "rejected aligned read changed output or cursor");
        }
    }
    // Ordinary aligned/unaligned values and native zero-length semantics.
    for (const bool unaligned : {false, true}) {
        BitStream stream;
        if (unaligned) stream.write1();
        const std::array<std::uint8_t, 3> input{0xa5, 0x00, 0xff};
        stream.write(input.data(), input.size());
        if (unaligned) require(stream.readBit(), "missing prefix bit");
        std::uint8_t sentinel = 0x5a;
        require(stream.read(&sentinel, 0) == !unaligned, "zero-length read semantics changed");
        std::array<std::uint8_t, 3> output{};
        require(stream.read(output.data(), output.size()) && output == input,
                "ordinary byte read/write changed");
        require(!stream.read(&sentinel, 1), "truncated read accepted");
        require(sentinel == 0x5a, "truncated read modified output");
    }
}

void rpc_length_bounds() {
    samp::server::GameLayer game;
    game.players_.resize(1);
    samp::server::RakNetServer network;
    network.handler_ = &game;
    network.port_ = 7777;
    auto& peer = samp::server::RakNetTransportTestAccess::authenticated(network);
    auto& player = game.players_[0];
    player.in_use = true;
    player.peer = &peer;
    player.has_spawn_info = true;
    std::uint16_t sequence = 0;
    const auto deliver = [&](const BitStream& message) {
        samp::proto::ReliabilityFrame frame;
        frame.message_number = sequence++;
        frame.reliability = samp::proto::Reliability::Reliable;
        frame.data = message;
        samp::proto::ConnectedDatagram datagram;
        datagram.frames.push_back(frame);
        const auto encoded = samp::proto::encode_connected_datagram(datagram);
        const auto wire = samp::proto::obfuscate(std::span<const std::uint8_t>(
            encoded.data_.data(), (encoded.numberOfBitsUsed_ + 7u) / 8u), network.port_);
        watch_allocations = true;
        try { network.handle_datagram(0, 1234, wire); }
        catch (...) { watch_allocations = false; throw; }
        watch_allocations = false;
    };
    const auto rpc = [](std::uint32_t declared_bits, int actual_bits) {
        BitStream message;
        const std::uint8_t header[]{samp::proto::kRaknetIdRpc, samp::server::kRpcPlayerRequestSpawn};
        message.write(header, sizeof(header));
        const std::uint8_t count[]{static_cast<std::uint8_t>(declared_bits),
            static_cast<std::uint8_t>(declared_bits >> 8),
            static_cast<std::uint8_t>(declared_bits >> 16),
            static_cast<std::uint8_t>(declared_bits >> 24)};
        message.writeCompressed(count, 32, true);
        const std::uint8_t padding = 0xff;
        if (actual_bits) message.writeBits(&padding, actual_bits, false);
        return message;
    };
    for (const auto bits : {1u, 7u, 8u, 9u, 0x3fffffffu, 0x40000000u,
                            0x7fffffffu, 0x80000000u, 0xfffffff9u, 0xffffffffu}) {
        player.spawn_authorized = false;
        deliver(rpc(bits, 0));
        require(!player.spawn_authorized, "truncated RPC reached spawn handler");
    }
    player.spawn_authorized = false;
    deliver(rpc(2, 1));
    require(!player.spawn_authorized, "partial-byte truncated RPC accepted");
    for (const int bits : {0, 1, 7, 8}) {
        player.spawn_authorized = false;
        deliver(rpc(static_cast<std::uint32_t>(bits), bits));
        require(player.spawn_authorized, "valid RPC failed to reach production handler");
    }
    require(oversized_allocations == 0, "malformed RPC attempted an oversized allocation");
}

void sha1_lifecycle() {
    samp::proto::Sha1 hash;
    const std::array<std::uint8_t, 20> abc{0xa9,0x99,0x3e,0x36,0x47,0x06,0x81,0x6a,
        0xba,0x3e,0x25,0x71,0x78,0x50,0xc2,0x6c,0x9c,0xd0,0xd8,0x9d};
    hash.update(reinterpret_cast<const std::uint8_t*>("abc"), 3);
    hash.finalize();
    require(std::memcmp(hash.digest(), abc.data(), abc.size()) == 0, "SHA-1 abc vector failed");
    const std::array<std::uint8_t, 20> empty{0xda,0x39,0xa3,0xee,0x5e,0x6b,0x4b,0x0d,
        0x32,0x55,0xbf,0xef,0x95,0x60,0x18,0x90,0xaf,0xd8,0x07,0x09};
    hash.reset();
    hash.finalize();
    require(std::memcmp(hash.digest(), empty.data(), empty.size()) == 0, "SHA-1 reset/empty vector failed");
}
}

int main(int, char**) {
    try {
        byte_count_bounds();
        rpc_length_bounds();
        sha1_lifecycle();
        std::puts("Input bounds and SHA-1 lifecycle checks passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
