#include "samp/server/game_layer.hpp"
#include "samp/proto/wire.hpp"

#include <cstdio>
#include <cstdlib>
#include <new>
#include <stdexcept>

namespace {
bool watch_allocations = false;
std::size_t oversized_allocations = 0;

void require(bool value, const char* message) {
    if (!value) throw std::runtime_error(message);
}
}

// Test-only guard: reject a huge allocation without exhausting the machine.
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
}

int main(int, char**) {
    try {
        rpc_length_bounds();
        std::puts("Production RPC length checks passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
