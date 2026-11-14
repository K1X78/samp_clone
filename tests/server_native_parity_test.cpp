#include "samp/server/game_layer.hpp"

#include <array>
#include <bit>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <stdexcept>

#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
#include <windows.h>
#endif

namespace samp::pawn {
struct PawnNativeTestAccess {
    static samp::amx::cell call(PawnVm& vm, const char* name, std::initializer_list<samp::amx::cell> args) {
        return vm.native_functions_.at(name)({args.begin(), args.size()});
    }
};
}

namespace samp::server {
struct RakNetTransportTestAccess {
    static std::vector<samp::proto::BitStream> messages(RakNetPeer& peer) {
        std::vector<samp::proto::BitStream> result;
        for (const auto& queue : peer.send_state_.unsent)
            for (const auto& frame : queue) result.push_back(frame.data);
        peer.send_state_ = {};
        return result;
    }
};
}

namespace {
using samp::amx::cell;
using samp::proto::BitStream;
using samp::server::RakNetTransportTestAccess;

void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

cell call(samp::pawn::PawnVm& vm, const char* name, std::initializer_list<cell> args) {
    return samp::pawn::PawnNativeTestAccess::call(vm, name, args);
}

BitStream take_rpc(samp::server::RakNetPeer& peer, std::uint8_t expected_id) {
    auto messages = RakNetTransportTestAccess::messages(peer);
    require(messages.size() == 1, "expected exactly one production RPC");
    auto frame = messages.front();
    std::uint8_t marker = 0, id = 0;
    std::uint32_t bits = 0;
    require(frame.read(&marker, 1) && marker == 20 && frame.read(&id, 1) && id == expected_id &&
        frame.readCompressed(reinterpret_cast<std::uint8_t*>(&bits), 32, true), "production RPC header differs");
    BitStream payload;
    if (bits) {
        std::vector<std::uint8_t> bytes((bits + 7u) / 8u);
        require(frame.readBits(bytes.data(), static_cast<int>(bits), false), "production RPC payload truncated");
        payload.writeBits(bytes.data(), static_cast<int>(bits), false);
    }
    return payload;
}

#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
// 0x4943d0..0x494413 is a complete self-contained __thiscall owner: no
// external calls or absolute data. Copy only those bytes, never run a PE.
class OfficialClassPool {
    void* code_ = nullptr;
    std::array<std::uint8_t, 0x8a + 319 * 50> state_{};
public:
    OfficialClassPool() {
        std::ifstream file(SAMP_OFFICIAL_SERVER_PATH, std::ios::binary);
        const std::vector<std::uint8_t> bytes{std::istreambuf_iterator<char>(file), {}};
        require(bytes.size() >= sizeof(IMAGE_DOS_HEADER), "official PE unavailable");
        const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(bytes.data());
        require(dos->e_magic == IMAGE_DOS_SIGNATURE && dos->e_lfanew > 0 &&
            std::size_t(dos->e_lfanew) + sizeof(IMAGE_NT_HEADERS32) <= bytes.size(), "invalid official DOS header");
        const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS32*>(bytes.data() + dos->e_lfanew);
        require(nt->Signature == IMAGE_NT_SIGNATURE && nt->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR32_MAGIC &&
            nt->OptionalHeader.ImageBase == 0x400000, "reference must be official PE32");
        const auto* sections = IMAGE_FIRST_SECTION(nt);
        constexpr std::uint32_t rva = 0x4943d0 - 0x400000;
        constexpr std::size_t extent = 0x44;
        std::size_t offset = bytes.size();
        for (unsigned i = 0; i < nt->FileHeader.NumberOfSections; ++i)
            if (rva >= sections[i].VirtualAddress && rva - sections[i].VirtualAddress + extent <= sections[i].SizeOfRawData)
                offset = sections[i].PointerToRawData + rva - sections[i].VirtualAddress;
        require(offset + extent <= bytes.size() && bytes[offset] == 0x8b && bytes[offset + 1] == 0xd1 &&
            bytes[offset + 0x41] == 0xc2 && bytes[offset + 0x42] == 4 && bytes[offset + 0x43] == 0,
            "official class allocation owner missing");
        code_ = VirtualAlloc(nullptr, extent, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
        require(code_ != nullptr, "cannot allocate class oracle");
        std::memcpy(code_, bytes.data() + offset, extent);
        DWORD previous = 0;
        if (!VirtualProtect(code_, extent, PAGE_EXECUTE_READ, &previous)) {
            VirtualFree(code_, 0, MEM_RELEASE);
            throw std::runtime_error("cannot protect class oracle");
        }
        FlushInstructionCache(GetCurrentProcess(), code_, extent);
    }
    ~OfficialClassPool() { VirtualFree(code_, 0, MEM_RELEASE); }
    int add(const std::array<std::uint8_t, 50>& entry) {
        using Add = int(__thiscall*)(void*, const void*);
        return reinterpret_cast<Add>(code_)(state_.data(), entry.data());
    }
};
#endif

void class_registration() {
    samp::server::GameLayer game;
    samp::pawn::register_server_natives(game.vm_, game);
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
    OfficialClassPool official;
#endif
    for (int i = 0; i < 323; ++i) {
        const auto bits = [](float value) { return std::bit_cast<cell>(value); };
        const auto actual = i % 2 == 0
            ? call(game.vm_, "AddPlayerClass", {265 + i, bits(1.25f), bits(-2.5f), bits(3.75f), bits(90), 22, 30, 24, 40, -1, -1})
            : call(game.vm_, "AddPlayerClassEx", {257, 265 + i, bits(1.25f), bits(-2.5f), bits(3.75f), bits(90), 22, 30, 24, 40, -1, -1});
        int expected = i < 319 ? i : 319;
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
        std::array<std::uint8_t, 50> entry{};
        entry[0] = i % 2 == 0 ? 255 : 1;
        const std::array<cell, 12> fields{265 + i, 0, bits(1.25f), bits(-2.5f), bits(3.75f), bits(90), 22, 24, -1, 30, 40, -1};
        std::memcpy(entry.data() + 1, fields.data(), 8);
        std::memcpy(entry.data() + 10, fields.data() + 2, 40);
        expected = official.add(entry);
#endif
        require(actual == expected, "class native return differs from official allocation");
    }
    samp::server::RakNetPeer peer;
    game.players_.resize(1);
    auto& player = game.players_[0];
    player.in_use = true; player.peer = &peer;
    for (const std::uint32_t id : {0u, 1u, 318u, 319u}) {
        BitStream frame;
        const std::uint8_t header[]{20, 128};
        const std::uint32_t count = 32;
        frame.write(header, 2);
        frame.writeCompressed(reinterpret_cast<const std::uint8_t*>(&count), 32, true);
        frame.write(&id, 4);
        game.on_user_message(peer, frame);
        if (id == 319) {
            require(RakNetTransportTestAccess::messages(peer).empty(), "full-pool return created a selectable class");
            require(player.spawn_info.model == 583, "full-pool request changed previous class");
            continue;
        }
        auto answer = take_rpc(peer, 128);
        require(answer.numberOfBitsUsed_ == 51u * 8u, "class selection wire extent differs");
        require(player.has_spawn_info && player.spawn_info.model == 265 + id &&
            player.spawn_info.team == (id % 2 == 0 ? 255 : 1) && player.spawn_info.custom_model == 0 &&
            player.spawn_info.x == 1.25f && player.spawn_info.y == -2.5f && player.spawn_info.z == 3.75f &&
            player.spawn_info.angle == 90 && player.spawn_info.weapon[0] == 22 && player.spawn_info.weapon[1] == 24 &&
            player.spawn_info.weapon[2] == -1 && player.spawn_info.ammunition[0] == 30 &&
            player.spawn_info.ammunition[1] == 40 && player.spawn_info.ammunition[2] == -1,
            "registered class fields did not reach real class selection");
    }
}

void gang_zone_broadcasts() {
    samp::server::GameLayer game;
    game.players_.resize(1001);
    std::array<samp::server::RakNetPeer, 4> peers;
    game.players_[0].in_use = true; game.players_[0].peer = &peers[0]; // initializing
    game.players_[999].in_use = game.players_[999].joined = true; game.players_[999].peer = &peers[1];
    game.players_[1].peer = &peers[2]; // empty slot
    game.players_[1000].in_use = game.players_[1000].joined = true; game.players_[1000].peer = &peers[3];
    game.players_[3].in_use = true; // occupied without transport
    samp::pawn::register_server_natives(game.vm_, game);
    for (int i = 0; i < 1024; ++i)
        require(call(game.vm_, "GangZoneCreate", {0x3f800000, 0x40000000, 0x40400000, 0x40800000}) == i,
            "gang zone allocation must use first free slot");
    require(call(game.vm_, "GangZoneCreate", {0, 0, 0, 0}) == -1, "full zone pool sentinel differs");
    const auto check = [&](std::uint8_t id, std::span<const std::uint8_t> expected) {
        for (int i = 0; i < 2; ++i) {
            const auto payload = take_rpc(peers[i], id);
            require(payload.numberOfBitsUsed_ == expected.size() * 8 &&
                std::memcmp(payload.data_.data(), expected.data(), expected.size()) == 0, "gang zone wire payload differs");
        }
        require(RakNetTransportTestAccess::messages(peers[2]).empty() && RakNetTransportTestAccess::messages(peers[3]).empty(),
            "zone broadcast reached empty or out-of-domain player slot");
    };
    const std::array<std::uint8_t, 22> show{7, 0, 0, 0, 0x80, 0x3f, 0, 0, 0, 0x40,
        0, 0, 0x40, 0x40, 0, 0, 0x80, 0x40, 0x11, 0x22, 0x33, 0x44};
    require(call(game.vm_, "GangZoneShowForAll", {65543, 0x11223344}) == 1, "wrapped zone ID rejected");
    check(108, show);
    const std::array<std::uint8_t, 2> hide{7, 0};
    require(call(game.vm_, "GangZoneHideForAll", {7}) == 1, "zone hide failed"); check(120, hide);
    const std::array<std::uint8_t, 6> flash{7, 0, 0x11, 0x22, 0x33, 0x44};
    require(call(game.vm_, "GangZoneFlashForAll", {7, 0x11223344}) == 1, "zone flash failed"); check(121, flash);
    require(call(game.vm_, "GangZoneStopFlashForAll", {7}) == 1, "zone stop flash failed"); check(85, hide);
    require(call(game.vm_, "GangZoneDestroy", {65543}) == 1, "zone destroy failed"); check(120, hide);
    require(call(game.vm_, "GangZoneDestroy", {7}) == 0 && call(game.vm_, "GangZoneHideForAll", {7}) == 0 &&
        call(game.vm_, "GangZoneFlashForAll", {1024, 0}) == 0 && call(game.vm_, "GangZoneStopFlashForAll", {-1}) == 0,
        "invalid zone native returned success");
    require(call(game.vm_, "GangZoneCreate", {0, 0, 0, 0}) == 7, "destroyed zone slot was not reused");
}
}

int main(int, char**) {
    try {
        class_registration();
        gang_zone_broadcasts();
        std::puts("Server native parity checks passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
