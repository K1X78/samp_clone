#include "samp/server/game_layer.hpp"
#include "samp/proto/wire.hpp"

#include <cstdio>
#include <cstdlib>
#include <array>
#include <bit>
#include <cstring>
#include <fstream>
#include <iterator>
#include <new>
#include <stdexcept>
#if defined(_WIN32)
#include <windows.h>
#endif

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
    static std::vector<samp::proto::BitStream> messages(RakNetPeer& peer) {
        std::vector<samp::proto::BitStream> result;
        for (const auto& queue : peer.send_state_.unsent)
            for (const auto& frame : queue) result.push_back(frame.data);
        peer.send_state_ = {};
        return result;
    }
    static RakNetPeer& authenticated(RakNetServer& network) {
        auto& peer = network.peers_[1234];
        peer.address_ = 0;
        peer.port_ = 1234;
        peer.stage_ = RakNetPeer::Stage::Authenticated;
        return peer;
    }
};
}

namespace samp::pawn {
struct PawnNativeTestAccess {
    static samp::amx::cell call(PawnVm& vm, const char* name, std::initializer_list<samp::amx::cell> args) {
        return vm.native_functions_.at(name)({args.begin(), args.size()});
    }
    static samp::amx::cell weather(PawnVm& vm, samp::amx::cell value) {
        return vm.native_functions_.at("SetWeather")({&value, 1});
    }
};
}

namespace {
using samp::proto::BitStream;

#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
// The complete, self-contained official ReadBits owner has no external calls
// or absolute references. Execute its original bytes without starting a PE.
class OfficialReadBits {
public:
    OfficialReadBits() {
        std::ifstream file(SAMP_OFFICIAL_SERVER_PATH, std::ios::binary);
        const std::vector<std::uint8_t> image{std::istreambuf_iterator<char>(file), {}};
        require(image.size() >= sizeof(IMAGE_DOS_HEADER), "official PE unavailable");
        const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(image.data());
        require(dos->e_magic == IMAGE_DOS_SIGNATURE && dos->e_lfanew > 0 &&
            static_cast<std::size_t>(dos->e_lfanew) + sizeof(IMAGE_NT_HEADERS32) <= image.size(),
            "invalid official PE header");
        const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS32*>(image.data() + dos->e_lfanew);
        require(nt->Signature == IMAGE_NT_SIGNATURE && nt->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR32_MAGIC,
            "reference must be Win32 PE");
        constexpr std::uint32_t rva = 0x44da70 - 0x400000;
        const auto* section = IMAGE_FIRST_SECTION(nt);
        std::size_t offset = image.size();
        for (unsigned i = 0; i < nt->FileHeader.NumberOfSections; ++i)
            if (rva >= section[i].VirtualAddress && rva - section[i].VirtualAddress < section[i].SizeOfRawData)
                offset = section[i].PointerToRawData + rva - section[i].VirtualAddress;
        constexpr std::size_t extent = 0xb9;
        require(offset + extent <= image.size() && image[offset] == 0x8b &&
            image[offset + 0xb6] == 0xc2 && image[offset + 0xb7] == 0x0c,
            "official ReadBits owner missing");
        code_ = VirtualAlloc(nullptr, extent, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
        require(code_ != nullptr, "cannot allocate oracle");
        std::memcpy(code_, image.data() + offset, extent);
        DWORD previous = 0;
        if (!VirtualProtect(code_, extent, PAGE_EXECUTE_READ, &previous)) {
            VirtualFree(code_, 0, MEM_RELEASE);
            throw std::runtime_error("cannot protect oracle");
        }
        FlushInstructionCache(GetCurrentProcess(), code_, extent);
    }
    ~OfficialReadBits() { VirtualFree(code_, 0, MEM_RELEASE); }
    bool accepts(const BitStream& message) const {
        auto input = message;
        input.numberOfBitsUsed_ = ((message.numberOfBitsUsed_ + 7u) >> 3) * 8u;
        input.readOffset_ = message.data_[0] == 40 ? 48u : 8u;
        std::uint8_t id = 0;
        std::uint32_t count = 0;
        if (!input.read(&id, 1) || !input.readCompressed(reinterpret_cast<std::uint8_t*>(&count), 32, true))
            return false;
        if (count == 0) return true;
        const auto unread = input.numberOfBitsUsed_ - input.readOffset_;
        if (unread == 0) return false;
        std::vector<std::uint8_t> output((unread + 7u) >> 3);
        struct State { int used, capacity, offset; const std::uint8_t* data; };
        State state{static_cast<int>(input.numberOfBitsUsed_), static_cast<int>(input.numberOfBitsUsed_),
            static_cast<int>(input.readOffset_), input.data_.data()};
        using Read = bool(__thiscall*)(void*, std::uint8_t*, int, char);
        return reinterpret_cast<Read>(code_)(&state, output.data(), static_cast<int>(count), 0);
    }
private:
    void* code_ = nullptr;
};
#endif

void rpc_length_bounds() {
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
    OfficialReadBits official;
#endif
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
    const auto rpc = [](std::uint32_t declared_bits, int actual_bits, bool timestamp = false) {
        BitStream message;
        if (timestamp) {
            const std::uint8_t marker = 40;
            const std::uint32_t time = 123456;
            message.write(&marker, 1);
            message.write(&time, 4);
        }
        const std::uint8_t header[]{samp::proto::kRaknetIdRpc, samp::server::kRpcPlayerRequestSpawn};
        message.write(header, sizeof(header));
        const std::uint8_t count[]{static_cast<std::uint8_t>(declared_bits),
            static_cast<std::uint8_t>(declared_bits >> 8),
            static_cast<std::uint8_t>(declared_bits >> 16),
            static_cast<std::uint8_t>(declared_bits >> 24)};
        message.writeCompressed(count, 32, true);
        const std::uint8_t padding[]{0xff, 0xff};
        if (actual_bits) message.writeBits(padding, actual_bits, false);
        return message;
    };
    for (const auto bits : {1u, 7u, 8u, 9u, 0x3fffffffu, 0x40000000u,
                            0x7fffffffu, 0x80000000u, 0xfffffff9u, 0xffffffffu}) {
        player.spawn_authorized = false;
        deliver(rpc(bits, 0));
        require(!player.spawn_authorized, "truncated RPC reached spawn handler");
    }
    for (const bool timestamp : {false, true}) {
      for (const int actual : {0, 1, 7, 8, 9}) {
       for (const std::uint32_t declared : {0u, 1u, 2u, 7u, 8u, 9u, 16u, 0x40000000u, 0xffffffffu}) {
        const auto message = rpc(declared, actual, timestamp);
        player.spawn_authorized = false;
        deliver(message);
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
        require(player.spawn_authorized == official.accepts(message), "RPC acceptance differs from shipped ReadBits");
#endif
       }
      }
    }
    player.spawn_authorized = false;
    deliver(rpc(2, 1));
    require(player.spawn_authorized, "native byte-rounded RPC padding was rejected");
    for (const int bits : {0, 1, 7, 8}) {
        player.spawn_authorized = false;
        deliver(rpc(static_cast<std::uint32_t>(bits), bits));
        require(player.spawn_authorized, "valid RPC failed to reach production handler");
    }
    require(oversized_allocations == 0, "malformed RPC attempted an oversized allocation");
}

void weather_broadcast() {
    samp::server::Config config;
    samp::server::GameLayer game;
    game.config_ = &config;
    game.players_.resize(4);
    std::array<samp::server::RakNetPeer, 3> peers;
    for (int i = 0; i < 3; ++i) game.players_[i].peer = &peers[i];
    game.players_[0].in_use = true; // Occupied but still initializing.
    game.players_[1].in_use = game.players_[1].joined = true;
    game.players_[3].in_use = true; // Occupied slot with no transport.
    samp::pawn::register_server_natives(game.vm_, game);
    for (const int value : {7, 257, -1}) {
        require(samp::pawn::PawnNativeTestAccess::weather(game.vm_, value) == 1, "SetWeather native failed");
        require(config.values_.at("weather") == std::to_string(value & 255), "weather query value differs");
        for (int i = 0; i < 3; ++i) {
            auto messages = samp::server::RakNetTransportTestAccess::messages(peers[i]);
            require(messages.size() == (i < 2 ? 1u : 0u), "weather broadcast recipient mismatch");
            if (i == 2) continue;
            auto message = messages.front();
            std::uint8_t marker = 0, id = 0, weather = 0;
            std::uint32_t bits = 0;
            require(message.read(&marker, 1) && marker == 20 && message.read(&id, 1) && id == 152 &&
                message.readCompressed(reinterpret_cast<std::uint8_t*>(&bits), 32, true) && bits == 8 &&
                message.readBits(&weather, 8, false) && weather == static_cast<std::uint8_t>(value),
                "weather RPC does not match official one-byte wire format");
        }
    }
    game.set_gravity(0.0125f);
    require(config.values_.at("gravity") == "0.012500", "gravity query value differs");
    for (int i = 0; i < 3; ++i) {
        auto messages = samp::server::RakNetTransportTestAccess::messages(peers[i]);
        require(messages.size() == (i < 2 ? 1u : 0u), "gravity broadcast recipient mismatch");
        if (i == 2) continue;
        auto message = messages.front();
        std::uint8_t marker = 0, id = 0;
        std::uint32_t bits = 0;
        float gravity = 0;
        require(message.read(&marker, 1) && marker == 20 && message.read(&id, 1) && id == 146 &&
            message.readCompressed(reinterpret_cast<std::uint8_t*>(&bits), 32, true) && bits == 32 &&
            message.readBits(reinterpret_cast<std::uint8_t*>(&gravity), 32, false) && gravity == 0.0125f,
            "gravity RPC does not match official float wire format");
    }
}

void player_command_semantics() {
    using Access = samp::pawn::PawnNativeTestAccess;
    using samp::amx::cell;
    samp::server::GameLayer game;
    samp::server::RakNetPeer peer;
    game.players_.resize(1001);
    auto& player = game.players_[0];
    player.in_use = true; player.peer = &peer;
    player.x = 10; player.y = 20; player.z = 30; player.angle = 45;
    // A larger host container must not expand the native's 1000-slot bound.
    game.players_[1000].in_use = true; game.players_[1000].peer = &peer;
    samp::pawn::register_server_natives(game.vm_, game);
    const auto scalar = [](float value) { return std::bit_cast<cell>(value); };
    require(Access::call(game.vm_, "GetPlayerPoolSize", {}) == 0, "pool size returned capacity or slot1000");
    game.players_[999].in_use = true;
    require(Access::call(game.vm_, "GetPlayerPoolSize", {}) == 0, "pool native recalculated before lifecycle update");
    game.update_player_pool_size();
    require(Access::call(game.vm_, "GetPlayerPoolSize", {}) == 999, "highest occupied slot was missed");
    game.players_[999].in_use = false;
    game.players_[6].in_use = true;
    require(Access::call(game.vm_, "GetPlayerPoolSize", {}) == 999, "pool native bypassed the cached value");
    game.update_player_pool_size();
    require(Access::call(game.vm_, "GetPlayerPoolSize", {}) == 6, "pool size did not shrink after last-slot removal");
    game.disconnect_player(6, 1);
    require(Access::call(game.vm_, "GetPlayerPoolSize", {}) == 0, "disconnect did not refresh the native pool value");
    samp::server::RakNetTransportTestAccess::messages(peer);
    player.in_use = false;
    game.update_player_pool_size();
    require(Access::call(game.vm_, "GetPlayerPoolSize", {}) == 0, "native empty-pool sentinel differs");
    player.in_use = true;
    for (const int id : {0, 65536, -65536}) {
        require(Access::call(game.vm_, "SetPlayerPos", {id, scalar(100), scalar(200), scalar(300)}) == 1 &&
            Access::call(game.vm_, "SetPlayerFacingAngle", {id, scalar(90)}) == 1 &&
            Access::call(game.vm_, "SetPlayerInterior", {id, 259}) == 1 &&
            Access::call(game.vm_, "SetPlayerCameraPos", {id, scalar(100), scalar(200), scalar(300)}) == 1 &&
            Access::call(game.vm_, "SetPlayerCameraLookAt", {id, scalar(100), scalar(200), scalar(300)}) == 1 &&
            Access::call(game.vm_, "TogglePlayerClock", {id, 257}) == 1, "native WORD player ID rejected");
        const auto messages = samp::server::RakNetTransportTestAccess::messages(peer);
        require(messages.size() == 6, "player commands did not reach the real RPC queue");
        const std::array<std::uint8_t, 6> ids{12, 19, 156, 157, 158, 30};
        for (std::size_t i = 0; i < messages.size(); ++i) {
            auto message = messages[i];
            std::uint8_t marker = 0, rpc_id = 0;
            std::uint32_t bits = 0;
            require(message.read(&marker, 1) && marker == 20 && message.read(&rpc_id, 1) && rpc_id == ids[i] &&
                message.readCompressed(reinterpret_cast<std::uint8_t*>(&bits), 32, true), "incorrect command RPC");
            if (i == 0 || i == 3 || i == 4) {
                float requested[3]{};
                require(bits == (i == 4 ? 104u : 96u) && message.readBits(reinterpret_cast<std::uint8_t*>(requested), 96, false) &&
                    requested[0] == 100 && requested[1] == 200 && requested[2] == 300, "position payload mismatch");
                if (i == 4) {
                    std::uint8_t mode = 0;
                    require(message.readBits(&mode, 8, false) && mode == 2, "default camera mode differs");
                }
            } else if (i == 1) {
                float requested = 0;
                require(bits == 32 && message.readBits(reinterpret_cast<std::uint8_t*>(&requested), 32, false) &&
                    requested == 90, "angle payload mismatch");
            } else if (i == 2) {
                std::uint8_t interior = 0;
                require(bits == 8 && message.readBits(&interior, 8, false) && interior == 3, "interior BYTE mismatch");
            } else {
                std::uint8_t clock = 0;
                require(bits == 8 && message.readBits(&clock, 8, false) && clock == 1, "clock BYTE mismatch");
            }
        }
        require(player.x == 10 && player.y == 20 && player.z == 30 && player.angle == 45,
            "command fabricated client-reported position or angle");
    }
    for (const int id : {1, 999, 1000, -1}) {
        require(Access::call(game.vm_, "SetPlayerPos", {id, scalar(100), scalar(200), scalar(300)}) == 0 &&
            Access::call(game.vm_, "SetPlayerFacingAngle", {id, scalar(90)}) == 0 &&
            Access::call(game.vm_, "SetPlayerInterior", {id, 3}) == 0 &&
            Access::call(game.vm_, "SetPlayerCameraPos", {id, 0, 0, 0}) == 0 &&
            Access::call(game.vm_, "SetPlayerCameraLookAt", {id, 0, 0, 0}) == 0 &&
            Access::call(game.vm_, "TogglePlayerClock", {id, 1}) == 0, "invalid native player returned success");
        game.set_player_pos(id, 100, 200, 300);
        game.set_player_facing_angle(id, 90);
        game.set_player_interior(id, 3);
        game.set_camera_pos(id, 0, 0, 0);
        game.set_camera_look_at(id, 0, 0, 0, 2);
        game.toggle_player_clock(id, 1);
        require(samp::server::RakNetTransportTestAccess::messages(peer).empty(), "invalid player received command");
    }
    for (const auto [value, expected] : std::array<std::pair<int, int>, 8>{
            {{0, 2}, {1, 1}, {2, 2}, {3, 2}, {256, 2}, {257, 1}, {-255, 1}, {-1, 2}}}) {
        require(Access::call(game.vm_, "SetPlayerCameraLookAt", {0, 0, 0, 0, value}) == 1 &&
            Access::call(game.vm_, "TogglePlayerClock", {0, value}) == 1, "BYTE command failed");
        auto messages = samp::server::RakNetTransportTestAccess::messages(peer);
        require(messages.size() == 2, "BYTE command did not reach transport");
        for (std::size_t i = 0; i < messages.size(); ++i) {
            auto message = messages[i];
            message.readOffset_ = 16;
            std::uint32_t bits = 0;
            require(message.readCompressed(reinterpret_cast<std::uint8_t*>(&bits), 32, true), "BYTE RPC count missing");
            if (i == 0) message.readOffset_ += 96;
            std::uint8_t byte = 0;
            require(message.readBits(&byte, 8, false) && byte == (i == 0 ? expected : static_cast<std::uint8_t>(value)),
                "camera mode normalization or raw clock byte differs from official");
        }
        require(player.clock_enabled == static_cast<std::uint8_t>(value), "raw clock state was normalized");
    }
}
}

int main(int, char**) {
    try {
        rpc_length_bounds();
        weather_broadcast();
        player_command_semantics();
        std::puts("Production RPC length checks passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
