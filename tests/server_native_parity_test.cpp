#include "samp/server/game_layer.hpp"
#include "pawn/amx_set_string_api.hpp"
#include "BitStream.h"
#include "StringCompressor.h"

#include <array>
#include <bit>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <functional>
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
    static samp::amx::cell call_span(PawnVm& vm, const char* name, std::span<const samp::amx::cell> args) {
        return vm.native_functions_.at(name)(args);
    }
    static void text(PawnVm& vm, const std::string& text, bool packed=false) {
        vm.image_.assign(8192, 0);
        vm.header_.cod = vm.header_.dat = sizeof(samp::amx::AmxHeader);
        vm.header_.stp = static_cast<std::int32_t>(vm.image_.size());
        vm.amx_.base = vm.image_.data();
        vm.amx_.stp = vm.header_.stp - vm.header_.dat - 4;
        vm.amx_.hea = 6144;
        vm.amx_.stk = 7168;
        vm.ok_ = true;
        std::memcpy(vm.image_.data(), &vm.header_, sizeof(vm.header_));
        amx_string::set_string(reinterpret_cast<samp::amx::cell*>(vm.image_.data() + vm.header_.dat),
            text.c_str(), packed, 0, vm.amx_.stp / sizeof(samp::amx::cell));
    }
    static samp::amx::cell data_cell(const PawnVm& vm, std::size_t address) {
        samp::amx::cell value;
        std::memcpy(&value, vm.image_.data() + vm.header_.dat + address, sizeof(value));
        return value;
    }
    static void vehicle_callbacks(PawnVm& vm,
                                  const std::function<samp::amx::cell(std::string_view,
                                                                    std::span<const samp::amx::cell>)>& callback) {
        using samp::amx::cell;
        std::vector<cell> code{0x78, 0};
        for (const auto* name : {"OnVehicleMod", "OnVehiclePaintjob", "OnVehicleRespray", "OnEnterExitModShop",
                                 "OnVehicleDamageStatusUpdate", "OnVehicleSirenStateChange"}) {
            const auto native = static_cast<cell>(vm.natives_.size());
            vm.publics_.push_back({name, static_cast<std::uint32_t>(code.size() * sizeof(cell))});
            vm.natives_.push_back({name});
            vm.native_functions_[name] = [&vm, name, callback](auto) {
                const auto frame = static_cast<std::size_t>(vm.frm_);
                const auto count = static_cast<std::size_t>(data_cell(vm, frame + 8)) / sizeof(cell);
                std::array<cell, 4> values{};
                if (count > values.size()) throw std::runtime_error("unexpected vehicle public argument count");
                for (std::size_t i = 0; i < count; ++i) values[i] = data_cell(vm, frame + 12 + i * sizeof(cell));
                return callback(name, std::span(values).first(count));
            };
            const cell body[]{0x2e, 0x27, 0, 0x7b, native, 0x2c, 4, 0x30};
            code.insert(code.end(), std::begin(body), std::end(body));
        }
        vm.header_.cod = sizeof(samp::amx::AmxHeader);
        vm.header_.dat = vm.header_.cod + static_cast<std::int32_t>(code.size() * sizeof(cell));
        vm.header_.hea = vm.header_.dat + 128;
        vm.header_.stp = vm.header_.dat + 4096;
        vm.image_.assign(vm.header_.stp, 0);
        std::memcpy(vm.image_.data(), &vm.header_, sizeof(vm.header_));
        std::memcpy(vm.image_.data() + vm.header_.cod, code.data(), code.size() * sizeof(cell));
        vm.amx_.base = vm.image_.data();
        vm.amx_.flags = 0x8000;
        vm.stk_ = vm.amx_.stk = vm.amx_.stp = 4092;
        vm.hea_ = vm.hlw_ = vm.amx_.hea = vm.amx_.hlw = 128;
        vm.ok_ = true;
    }
    static void set_data_text(PawnVm& vm, std::size_t address, const std::string& text, bool packed) {
        amx_string::set_string(reinterpret_cast<samp::amx::cell*>(vm.image_.data() + vm.header_.dat + address),
            text.c_str(), packed, 0, (vm.amx_.stp - address) / sizeof(samp::amx::cell));
    }
};
}

namespace samp::server {
struct RakNetTransportTestAccess {
    static void authenticate(RakNetPeer& peer) {
        peer.stage_ = RakNetPeer::Stage::Authenticated;
    }
    static std::vector<samp::proto::BitStream> messages(RakNetPeer& peer) {
        std::vector<samp::proto::BitStream> result;
        for (const auto& queue : peer.send_state_.unsent)
            for (const auto& frame : queue) {
                if(frame.reliability!=samp::proto::Reliability::ReliableOrdered || frame.ordering_channel!=2)
                    throw std::runtime_error("player RPC reliability/channel differs");
                result.push_back(frame.data);
            }
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

BitStream read_rpc(BitStream frame, std::uint8_t expected_id) {
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

BitStream take_rpc(samp::server::RakNetPeer& peer, std::uint8_t expected_id) {
    auto messages = RakNetTransportTestAccess::messages(peer);
    require(messages.size() == 1, "expected exactly one production RPC");
    return read_rpc(std::move(messages.front()), expected_id);
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
        require(player.has_spawn_info && player.spawn_info.model == 265 + static_cast<int>(id) &&
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
    game.update_player_pool_size();
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

void vehicle_creation() {
    samp::server::GameLayer game;
    samp::pawn::register_server_natives(game.vm_, game);
    const std::array<std::pair<cell, cell>, 8> delays{{
        {120,120000}, {-1,-1}, {0,0}, {-2,-2000}, {2147483,2147483000},
        {2147484,-2147483296}, {4294968,704}, {INT32_MIN,0}}};
    for (const auto [seconds, milliseconds] : delays) {
        const auto id = call(game.vm_, "CreateVehicle", {411,0,0,0,0,1,2,seconds,1});
        require(id > 0 && id < 2000 && game.vehicles_[id].respawn_delay_ms == milliseconds &&
            game.vehicles_[id].siren, "vehicle native millisecond conversion differs from original IMUL");
        const auto extended = call(game.vm_, "AddStaticVehicleEx", {411,0,0,0,0,1,2,seconds});
        require(extended > 0 && extended < 2000 && game.vehicles_[extended].respawn_delay_ms == milliseconds &&
            !game.vehicles_[extended].siren, "extended static vehicle conversion/default siren differs");
    }
    const auto standard = call(game.vm_, "AddStaticVehicle", {411,0,0,0,0,1,2,5,1});
    require(game.vehicles_[standard].respawn_delay_ms == 120000 && !game.vehicles_[standard].siren,
        "standard static vehicle interpreted nonexistent delay/siren parameters");
    std::vector<std::string> warnings;
    game.log_message_ = [&](std::string_view text) { warnings.emplace_back(text); };
    for (const cell train : {537,538}) {
        require(call(game.vm_, "CreateVehicle", {train,0,0,0,0,1,2,120}) == 0, "dynamic train creation must fail");
        const auto id = call(game.vm_, "AddStaticVehicleEx", {train,0,0,0,0,1,2,120,1});
        require(game.vehicles_[id].model == static_cast<std::uint32_t>(train) && game.vehicles_[id].siren, "static locomotive creation differs");
        for (int i=1; i<=3; ++i)
            require(game.vehicles_[id+i].active && game.vehicles_[id+i].model == (train==537?569u:570u) &&
                game.vehicles_[id+i].respawn_delay_ms == -1 && !game.vehicles_[id+i].siren,
                "static train carriage creation differs");
    }
    require(warnings == std::vector<std::string>(2,"Only create trains with AddStaticVehicle/Ex"), "dynamic train warning differs");
    require(call(game.vm_, "CreateVehicle", {399,0,0,0,0,0,0,120}) == 65535 &&
        call(game.vm_, "AddStaticVehicle", {612,0,0,0,0,0,0}) == 65535, "invalid vehicle model sentinel differs");
    game.vehicles_.resize(2001);
    for (int i=1; i<2000; ++i) game.vehicles_[i].active=true;
    require(call(game.vm_, "CreateVehicle", {411,0,0,0,0,0,0,120}) == 65535 && !game.vehicles_[2000].active,
        "vehicle allocation exceeded the official 1999-slot domain");
}

void vehicle_appearance() {
    samp::server::GameLayer game;
    samp::pawn::register_server_natives(game.vm_, game);
    const auto id = call(game.vm_, "CreateVehicle", {411, 0, 0, 0, 0, 21, 22, -1});
    require(id == 1, "vehicle appearance fixture allocation failed");
    auto& vehicle = game.vehicles_[id];
    game.players_.resize(2);
    game.player_pool_highest_ = 1;
    samp::server::RakNetPeer viewer, newcomer;
    for (int slot = 0; slot < 2; ++slot) {
        auto& player = game.players_[slot];
        player.id = slot;
        player.in_use = true;
        player.peer = slot == 0 ? &viewer : &newcomer;
    }
    game.send_vehicle_stream_in(game.players_[0], vehicle);
    take_rpc(viewer, 164);

    const auto check_event = [&](std::uint32_t type, std::uint32_t first, std::uint32_t second) {
        auto payload = take_rpc(viewer, 96);
        std::uint16_t sender = 0;
        std::array<std::uint32_t, 4> fields{};
        require(payload.numberOfBitsUsed_ == 144 && payload.read(&sender, sizeof(sender)) &&
                sender == 0xffff && payload.read(fields.data(), sizeof(fields)) &&
                fields == std::array<std::uint32_t, 4>{type, 1, first, second}, "SCM event wire fields differ");
        require(RakNetTransportTestAccess::messages(newcomer).empty(), "SCM event sent to nonviewer");
    };
    require(call(game.vm_, "GetVehicleComponentType", {999}) == -1 &&
            call(game.vm_, "GetVehicleComponentType", {65536 + 1193}) == 11 &&
            call(game.vm_, "GetVehicleComponentType", {1194}) == -1, "component type domain differs");
    require(call(game.vm_, "AddVehicleComponent", {2000, 1000}) == 0 &&
            call(game.vm_, "AddVehicleComponent", {id, 1194}) == 1 &&
            call(game.vm_, "AddVehicleComponent", {id, 1026}) == 1 &&
            call(game.vm_, "AddVehicleComponent", {id, 1086}) == 1 &&
            RakNetTransportTestAccess::messages(viewer).empty(), "component rejection behavior differs");
    require(call(game.vm_, "AddVehicleComponent", {65536 + id, 65536 + 1000}) == 1 &&
            call(game.vm_, "GetVehicleComponentInSlot", {id, 256}) == 1000 &&
            call(game.vm_, "GetVehicleComponentInSlot", {id, 14}) == 0, "component ID or slot width differs");
    check_event(2, 1000, 0);
    require(call(game.vm_, "AddVehicleComponent", {id, 1001}) == 1, "component replacement failed");
    check_event(2, 1001, 0);
    require(call(game.vm_, "RemoveVehicleComponent", {id, 1000}) == 1 &&
            RakNetTransportTestAccess::messages(viewer).empty(), "different component was removed");
    require(call(game.vm_, "RemoveVehicleComponent", {id, 1001}) == 1 &&
            call(game.vm_, "GetVehicleComponentInSlot", {id, 0}) == 0, "component removal did not clear slot");
    auto removal = take_rpc(viewer, 57);
    std::array<std::uint16_t, 2> remove_fields{};
    require(removal.numberOfBitsUsed_ == 32 && removal.read(remove_fields.data(), sizeof(remove_fields)) &&
            remove_fields == std::array<std::uint16_t, 2>{1, 1001}, "component removal wire fields differ");
    require(RakNetTransportTestAccess::messages(newcomer).empty(), "component removal sent to nonviewer");

    require(call(game.vm_, "AddVehicleComponent", {id, 1000}) == 1, "failed to restore component");
    check_event(2, 1000, 0);
    require(call(game.vm_, "ChangeVehicleColor", {id, 259, -1}) == 1, "colour change failed");
    check_event(3, 3, 255);
    require(call(game.vm_, "ChangeVehiclePaintjob", {2000, 3}) == 1 &&
            RakNetTransportTestAccess::messages(viewer).empty(), "missing paintjob target return differs");
    require(call(game.vm_, "ChangeVehiclePaintjob", {id, 258}) == 1, "paintjob change failed");
    check_event(1, 2, 0);

    const std::string plate(32, 'Z');
    samp::pawn::PawnNativeTestAccess::text(game.vm_, plate, true);
    require(call(game.vm_, "SetVehicleNumberPlate", {id, 0}) == 1, "32-byte plate rejected");
    samp::pawn::PawnNativeTestAccess::text(game.vm_, std::string(33, 'X'));
    require(call(game.vm_, "SetVehicleNumberPlate", {id, 0}) == 1 && vehicle.number_plate == plate &&
            RakNetTransportTestAccess::messages(viewer).empty(), "plate length or deferred-send behavior differs");

    const auto check_stream = [&](samp::server::RakNetPeer& peer, std::uint8_t component,
                                  std::uint8_t paintjob, std::array<std::int32_t, 2> colours) {
        auto frames = RakNetTransportTestAccess::messages(peer);
        require(frames.size() == 2, "expected spawn baseline followed by plate");
        auto spawn = read_rpc(std::move(frames[0]), 164);
        std::array<std::uint8_t, 63> baseline{};
        require(spawn.numberOfBitsUsed_ == baseline.size() * 8 &&
                spawn.read(baseline.data(), baseline.size()), "vehicle spawn record size differs");
        std::array<std::int32_t, 2> overrides{};
        std::memcpy(overrides.data(), baseline.data() + 55, sizeof(overrides));
        require(baseline[22] == 21 && baseline[23] == 22 && baseline[40] == component &&
                baseline[54] == paintjob && overrides == colours, "spawn appearance overrides differ");
        auto plate_rpc = read_rpc(std::move(frames[1]), 123);
        std::uint16_t wire_id = 0;
        std::uint8_t length = 0;
        std::array<char, 32> text{};
        require(plate_rpc.numberOfBitsUsed_ == (3 + plate.size()) * 8 &&
                plate_rpc.read(&wire_id, sizeof(wire_id)) && wire_id == id &&
                plate_rpc.read(&length, sizeof(length)) && length == plate.size() &&
                plate_rpc.read(text.data(), text.size()) &&
                std::string_view(text.data(), text.size()) == plate, "number plate stream record differs");
    };
    game.send_vehicle_stream_in(game.players_[1], vehicle);
    check_stream(newcomer, 1, 3, {3, 255});
    require(call(game.vm_, "SetVehicleToRespawn", {2000}) == 0 &&
            call(game.vm_, "SetVehicleToRespawn", {id}) == 1, "respawn native return differs");
    take_rpc(viewer, 165);
    take_rpc(newcomer, 165);
    game.send_vehicle_stream_in(game.players_[0], vehicle);
    check_stream(viewer, 0, 0, {-1, -1});
    samp::pawn::PawnNativeTestAccess::text(game.vm_, "");
    require(call(game.vm_, "SetVehicleNumberPlate", {id, 0}) == 0 && vehicle.number_plate.empty(),
            "empty plate clear return differs");
    game.send_vehicle_stream_in(game.players_[1], vehicle);
    take_rpc(newcomer, 164);
}

void vehicle_appearance_callbacks() {
    samp::server::GameLayer game;
    samp::pawn::register_server_natives(game.vm_, game);
    const auto id = call(game.vm_, "CreateVehicle", {411, 0, 0, 0, 0, 0, 0, -1});
    require(id == 1, "vehicle callback fixture allocation failed");
    auto& vehicle = game.vehicles_[id];
    game.players_.resize(3);
    game.player_pool_highest_ = 2;
    std::array<samp::server::RakNetPeer, 3> peers;
    for (int slot = 0; slot < 3; ++slot) {
        auto& player = game.players_[slot];
        player.id = slot;
        player.in_use = true;
        player.peer = &peers[slot];
        player.streamed_to.resize(3);
        player.streamed_vehicles.resize(2);
    }
    auto& sender = game.players_[0];
    sender.vehicle_id = 1;
    sender.streamed_vehicles[1] = 1;
    game.players_[1].streamed_vehicles[1] = 1;
    game.players_[2].streamed_to[0] = 1;

    std::vector<std::string> trace;
    std::vector<cell> args;
    std::array<bool, 3> veto{false, false, false};
    const auto callback = [&](std::size_t script, std::string_view name, std::span<const cell> values) {
        trace.push_back(std::to_string(script) + ":" + std::string(name));
        args.assign(values.begin(), values.end());
        return static_cast<cell>(!veto[script]);
    };
    samp::pawn::PawnNativeTestAccess::vehicle_callbacks(game.vm_, [&](auto name, auto values) {
        return callback(0, name, values);
    });
    for (std::size_t i = 1; i <= 2; ++i) {
        auto script = std::make_unique<samp::pawn::PawnVm>();
        samp::pawn::PawnNativeTestAccess::vehicle_callbacks(*script, [&, i](auto name, auto values) {
            return callback(i, name, values);
        });
        game.filterscripts_.push_back(std::move(script));
    }
    const auto submit = [&](std::uint32_t event, std::uint32_t first, std::uint32_t second,
                            std::uint32_t wire_vehicle = 1, std::size_t bytes = 16) {
        BitStream frame;
        const std::array<std::uint8_t, 2> header{20, 96};
        const std::uint32_t bits = static_cast<std::uint32_t>(bytes * 8);
        const std::array<std::uint32_t, 4> fields{wire_vehicle, first, second, event};
        frame.write(header.data(), header.size());
        frame.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits), 32, true);
        frame.write(fields.data(), bytes);
        trace.clear();
        game.on_user_message(peers[0], frame);
    };
    const auto require_empty = [&](std::size_t index) {
        require(RakNetTransportTestAccess::messages(peers[index]).empty(), "SCM RPC sent to wrong viewer");
    };
    const auto check_response = [&](std::size_t index, const std::array<std::uint32_t, 4>& wanted) {
        auto relay = take_rpc(peers[index], 96);
        std::uint16_t player = 65535;
        std::array<std::uint32_t, 4> fields{};
        require(relay.numberOfBitsUsed_ == 144 && relay.read(&player, sizeof(player)) && player == 0 &&
                relay.read(fields.data(), sizeof(fields)) && fields == wanted, "client SCM relay differs");
    };
    const auto check_correction = [&] {
        auto reply = take_rpc(peers[0], 57);
        std::array<std::uint16_t, 2> values{};
        require(reply.numberOfBitsUsed_ == 32 && reply.read(values.data(), sizeof(values)) &&
                values == std::array<std::uint16_t, 2>{1, 1000} && vehicle.mods[0] == 0,
                "component veto did not remove the unaccepted client mod");
        require_empty(1);
    };

    submit(2, 1000, 0);
    require(trace.empty(), "unauthenticated peer reached the mod callback");
    RakNetTransportTestAccess::authenticate(peers[0]);
    submit(2, 1000, 0, 1, 12);
    require(trace.empty(), "truncated appearance packet reached the mod callback");
    sender.vehicle_id = 2;
    submit(2, 1000, 0);
    require(trace.empty(), "another vehicle reached the mod callback");
    sender.vehicle_id = 1;
    sender.streamed_vehicles[1] = 0;
    submit(2, 1000, 0);
    require(trace.empty(), "unstreamed vehicle reached the mod callback");
    sender.streamed_vehicles[1] = 1;
    game.gamemode_restarting_ = true;
    submit(2, 1000, 0);
    require(trace.empty(), "restarting game mode reached the mod callback");
    game.gamemode_restarting_ = false;
    submit(2, 1194, 0);
    require(trace.empty(), "invalid component reached the mod callback");
    for (std::size_t index = 0; index < peers.size(); ++index) require_empty(index);

    veto[0] = true;
    submit(2, 1000, 0);
    require(trace == std::vector<std::string>{"0:OnVehicleMod"} &&
            args == std::vector<cell>{0, 1, 1000}, "game mode component veto or arguments differ");
    check_correction();
    veto = {false, true, false};
    submit(2, 1000, 0);
    require(trace == std::vector<std::string>{"0:OnVehicleMod", "1:OnVehicleMod", "2:OnVehicleMod"},
            "filterscript component veto stopped the callback chain");
    check_correction();
    veto[1] = false;
    submit(2, 1000, 0, 65537);
    require(vehicle.mods[0] == 1, "accepted component did not update vehicle state");
    check_response(1, {2, 1, 1000, 0});
    require_empty(0);
    require_empty(2);

    veto[1] = true;
    submit(3, 0x12345678, 0xfedcba98);
    require(trace == std::vector<std::string>{"0:OnVehicleRespray", "1:OnVehicleRespray", "2:OnVehicleRespray"} &&
            args == std::vector<cell>{0, 1, 0x12345678, std::bit_cast<cell>(0xfedcba98u)} &&
            vehicle.respray_colour1 == 0x12345678 && vehicle.respray_colour2 == std::bit_cast<cell>(0xfedcba98u),
            "respray should use the last filter result and preserve DWORD colors");
    check_response(1, {3, 1, 0x12345678, 0xfedcba98});

    veto = {false, false, true};
    submit(1, 257, 0);
    require(trace == std::vector<std::string>{"0:OnVehiclePaintjob", "1:OnVehiclePaintjob", "2:OnVehiclePaintjob"} &&
            args == std::vector<cell>{0, 1, 1} && vehicle.paintjob == 0, "paintjob veto or byte width differs");
    require_empty(0);
    require_empty(1);
    veto[2] = false;
    submit(1, 257, 0);
    require(vehicle.paintjob == 2, "accepted paintjob did not update state");
    check_response(1, {1, 1, 1, 0});

    veto = {true, true, true};
    submit(4, 2, 41);
    require(trace == std::vector<std::string>{"1:OnEnterExitModShop", "2:OnEnterExitModShop", "0:OnEnterExitModShop"} &&
            args == std::vector<cell>{0, 2, 41} && sender.in_mod_shop,
            "mod shop state, argument order, or callback order differs");
    check_response(2, {4, 1, 2, 41});
    require_empty(0);
    require_empty(1);
    submit(4, 0, 41);
    require(!sender.in_mod_shop, "mod shop exit did not clear state");
    check_response(2, {4, 1, 0, 41});
}

void vehicle_damage_and_repair() {
    samp::server::GameLayer game;
    samp::pawn::register_server_natives(game.vm_, game);
    const auto id = call(game.vm_, "CreateVehicle", {411, 0, 0, 0, 0, 0, 0, -1});
    require(id == 1, "damage fixture vehicle allocation failed");
    auto& vehicle = game.vehicles_[id];
    game.players_.resize(3);
    game.player_pool_highest_ = 2;
    std::array<samp::server::RakNetPeer, 3> peers;
    for (int slot = 0; slot < 3; ++slot) {
        auto& player = game.players_[slot];
        player.id = slot;
        player.in_use = true;
        player.peer = &peers[slot];
        player.streamed_to.resize(3);
        player.streamed_vehicles.resize(2);
        player.streamed_vehicles[1] = slot < 2;
    }
    vehicle.driver = 0;
    vehicle.health = 340;
    std::vector<std::size_t> trace;
    const auto install_callback = [&](samp::pawn::PawnVm& vm, std::size_t script) {
        samp::pawn::PawnNativeTestAccess::vehicle_callbacks(vm, [&, script](auto name, auto args) {
            require(name == "OnVehicleDamageStatusUpdate" && args.size() == 2 &&
                    args[0] == 1 && args[1] == 0, "vehicle damage public arguments differ");
            require(vehicle.damage_panels == 0xf1234567u && vehicle.damage_doors == 0x1234abcdu &&
                    vehicle.damage_lights == 19 && vehicle.damage_tires == 226,
                    "callback must observe the incoming damage before relay");
            trace.push_back(script);
            return static_cast<cell>(script == 1);
        });
    };
    install_callback(game.vm_, 0);
    for (std::size_t script = 1; script <= 2; ++script) {
        auto vm = std::make_unique<samp::pawn::PawnVm>();
        install_callback(*vm, script);
        game.filterscripts_.push_back(std::move(vm));
    }

    const auto send_damage = [&](std::size_t peer, std::uint32_t payload_bits = 96) {
        BitStream payload;
        constexpr std::uint16_t target = 1;
        constexpr std::array<std::uint32_t, 2> words{0xf1234567u, 0x1234abcdu};
        constexpr std::array<std::uint8_t, 2> bytes{19, 226};
        payload.write(&target, sizeof(target));
        payload.write(words.data(), sizeof(words));
        payload.write(bytes.data(), sizeof(bytes));
        BitStream rpc;
        constexpr std::array<std::uint8_t, 2> header{20, 106};
        rpc.write(header.data(), header.size());
        rpc.writeCompressed(reinterpret_cast<const std::uint8_t*>(&payload_bits), 32, true);
        rpc.writeBits(payload.data_.data(), static_cast<int>(payload_bits), false);
        game.on_user_message(peers[peer], rpc);
    };
    const auto check_damage = [&](BitStream payload, const std::array<std::uint32_t, 2>& words,
                                  const std::array<std::uint8_t, 2>& bytes) {
        std::uint16_t which = 0;
        std::array<std::uint32_t, 2> actual_words{};
        std::array<std::uint8_t, 2> actual_bytes{};
        require(payload.numberOfBitsUsed_ == 96 && payload.read(&which, sizeof(which)) && which == id &&
                payload.read(actual_words.data(), sizeof(actual_words)) && actual_words == words &&
                payload.read(actual_bytes.data(), sizeof(actual_bytes)) && actual_bytes == bytes,
                "vehicle damage RPC 106 fields differ");
    };
    const auto require_no_messages = [&](std::size_t index) {
        require(RakNetTransportTestAccess::messages(peers[index]).empty(), "unexpected vehicle damage RPC");
    };
    send_damage(1);
    send_damage(0, 88);
    game.gamemode_restarting_ = true;
    send_damage(0);
    game.gamemode_restarting_ = false;
    require(trace.empty() && vehicle.damage_panels == 0, "invalid damage report changed state");
    for (std::size_t index = 0; index < peers.size(); ++index) require_no_messages(index);

    send_damage(0);
    require(trace == std::vector<std::size_t>{1, 0},
            "vehicle damage must stop at the first nonzero filter and still notify the game mode");
    check_damage(take_rpc(peers[1], 106), {0xf1234567u, 0x1234abcdu}, {19, 226});
    require_no_messages(0);
    require_no_messages(2);

    trace.clear();
    require(call(game.vm_, "UpdateVehicleDamageStatus", {65536 + id, 0x10203040,
                std::bit_cast<cell>(0xff102030u), 0x1fe, -1}) == 1 &&
            trace.empty() && call(game.vm_, "UpdateVehicleDamageStatus", {-1, 0, 0, 0, 0}) == 0,
            "Pawn vehicle damage must use WORD targets and skip callbacks");
    for (std::size_t i = 0; i < 2; ++i) {
        check_damage(take_rpc(peers[i], 106), {0x10203040, 0xff102030u}, {254, 255});
    }
    require_no_messages(2);
    require(call(game.vm_, "GetVehicleDamageStatus", {id, 0, 4, 8, 12}) == 1 &&
            call(game.vm_, "GetVehicleDamageStatus", {2000, 0, 4, 8, 12}) == 0 &&
            samp::pawn::PawnNativeTestAccess::data_cell(game.vm_, 0) == 0x10203040 &&
            samp::pawn::PawnNativeTestAccess::data_cell(game.vm_, 4) == std::bit_cast<cell>(0xff102030u) &&
            samp::pawn::PawnNativeTestAccess::data_cell(game.vm_, 8) == 254 &&
            samp::pawn::PawnNativeTestAccess::data_cell(game.vm_, 12) == 255, "Pawn damage outputs differ");

    vehicle.parameters.fill(7);
    require(call(game.vm_, "RepairVehicle", {2000}) == 0 && call(game.vm_, "RepairVehicle", {id}) == 1 &&
            vehicle.health == 1000 && vehicle.damage_panels == 0 && vehicle.damage_doors == 0 &&
            vehicle.damage_lights == 0 && vehicle.damage_tires == 0 && trace.empty(), "vehicle repair state differs");
    const std::array<std::uint8_t, 16> repaired{7, 7, 7, 7, 0, 0, 7, 7, 255, 255, 255, 255, 7, 7, 7, 7};
    require(vehicle.parameters == repaired, "repair parameter resets differ");
    for (std::size_t i = 0; i < 2; ++i) {
        auto messages = RakNetTransportTestAccess::messages(peers[i]);
        require(messages.size() == 2, "repair must send health then damage");
        auto health = read_rpc(std::move(messages[0]), 147);
        std::uint16_t target = 0;
        float value = 0;
        require(health.numberOfBitsUsed_ == 48 && health.read(&target, sizeof(target)) && target == id &&
                health.read(&value, sizeof(value)) && value == 1000.0f, "repair health RPC differs");
        check_damage(read_rpc(std::move(messages[1]), 106), {0, 0}, {0, 0});
    }
    require_no_messages(2);

    const auto synchronize = [&](std::uint8_t kind, std::size_t size) {
        std::array<std::uint8_t, 64> raw{};
        raw[0] = kind;
        raw[1] = 1;
        if (kind == 211) raw[3] = 1;
        BitStream packet;
        packet.write(raw.data(), size);
        auto& player = game.players_[0];
        player.spawned = true;
        vehicle.parameters.fill(7);
        game.on_user_message(peers[0], packet);
        const std::array<std::uint8_t, 16> synced{7, 7, 7, 7, 7, 7, 7, 7, 255, 255, 255, 255, 7, 7, 7, 7};
        require(vehicle.parameters == synced, "vehicle sync must clear the four door override bytes");
    };
    synchronize(200, 64);
    synchronize(211, 25);
}

void vehicle_trailers_and_streaming_queries() {
    samp::server::GameLayer game;
    std::array<samp::server::RakNetPeer, 3> peers;
    game.players_.resize(4);
    for (std::uint16_t id = 0; id < peers.size(); ++id) {
        auto& player = game.players_[id];
        player.id = id;
        player.in_use = true;
        player.peer = &peers[id];
        player.streamed_to.resize(game.players_.size());
        player.streamed_vehicles.resize(4);
    }
    game.update_player_pool_size();
    samp::pawn::register_server_natives(game.vm_, game);
    const auto tractor = call(game.vm_, "CreateVehicle", {403, 0, 0, 0, 0, 0, 0, -1, 0});
    const auto trailer = call(game.vm_, "CreateVehicle", {435, 0, 0, 0, 0, 0, 0, -1, 0});
    require(tractor == 1 && trailer == 2, "trailer fixture vehicle allocation failed");

    auto& driver = game.players_[0];
    driver.spawned = true;
    driver.streamed_vehicles[tractor] = 1;
    game.players_[1].streamed_to[2] = 1;
    game.players_[1].streamed_to[3] = 1;
    game.players_[1].streamed_vehicles[trailer] = 1;
    game.players_[1].streamed_vehicles[3] = 1;
    game.players_[2].streamed_vehicles[tractor] = 1;
    require(call(game.vm_, "IsPlayerStreamedIn", {65538, 65537}) == 1 &&
        call(game.vm_, "IsPlayerStreamedIn", {1, 2}) == 0 &&
        call(game.vm_, "IsPlayerStreamedIn", {3, 1}) == 0 &&
        call(game.vm_, "IsPlayerStreamedIn", {2, 1000}) == 0, "player visibility query differs");
    require(call(game.vm_, "IsVehicleStreamedIn", {65536 + trailer, 65537}) == 1 &&
        call(game.vm_, "IsVehicleStreamedIn", {trailer, 2}) == 0 &&
        call(game.vm_, "IsVehicleStreamedIn", {3, 1}) == 0 &&
        call(game.vm_, "IsVehicleStreamedIn", {2000, 1}) == 0 &&
        call(game.vm_, "IsVehicleStreamedIn", {trailer, 3}) == 0, "vehicle visibility query differs");

    const auto check_attachment = [&](cell expected) {
        require(call(game.vm_, "IsTrailerAttachedToVehicle", {65536 + tractor}) == (expected != 0) &&
            call(game.vm_, "GetVehicleTrailer", {tractor}) == expected, "synced trailer state differs");
    };
    check_attachment(0);
    require(call(game.vm_, "AttachTrailerToVehicle", {65536 + trailer, 65536 + tractor}) == 1,
        "attached trailer command failed");
    const auto attach = take_rpc(peers[1], 148);
    require(attach.numberOfBitsUsed_ == 32 && attach.data_[0] == trailer && attach.data_[1] == 0 &&
        attach.data_[2] == tractor && attach.data_[3] == 0, "attached trailer RPC differs");
    require(RakNetTransportTestAccess::messages(peers[0]).empty() &&
        RakNetTransportTestAccess::messages(peers[2]).empty(), "attach reached tractor-only observers");
    check_attachment(0);

    const auto send_driver_sync = [&](std::uint16_t trailer_id, bool complete = true) {
        std::array<std::uint8_t, 64> bytes{};
        bytes[0] = 200;
        bytes[1] = static_cast<std::uint8_t>(tractor);
        bytes[58] = static_cast<std::uint8_t>(trailer_id);
        bytes[59] = static_cast<std::uint8_t>(trailer_id >> 8);
        BitStream packet;
        packet.write(bytes.data(), complete ? bytes.size() : bytes.size() - 1);
        game.on_user_message(peers[0], packet);
    };
    send_driver_sync(static_cast<std::uint16_t>(trailer), false);
    check_attachment(0);
    send_driver_sync(static_cast<std::uint16_t>(trailer));
    check_attachment(trailer);
    require(call(game.vm_, "DetachTrailerFromVehicle", {65536 + tractor}) == 1,
        "detach trailer command failed");
    for (const auto id : {0, 2}) {
        const auto detach = take_rpc(peers[id], 149);
        require(detach.numberOfBitsUsed_ == 16 && detach.data_[0] == tractor && detach.data_[1] == 0,
            "detach trailer RPC differs");
    }
    check_attachment(trailer);

    for (const auto id : {1999, 2000, 0xffff, 0}) {
        send_driver_sync(static_cast<std::uint16_t>(id));
        check_attachment(id == 1999 ? id : 0);
    }
    require(call(game.vm_, "AttachTrailerToVehicle", {3, tractor}) == 1 &&
        call(game.vm_, "AttachTrailerToVehicle", {trailer, 2000}) == 1 &&
        call(game.vm_, "DetachTrailerFromVehicle", {2000}) == 1 &&
        call(game.vm_, "GetVehicleTrailer", {-1}) == 0, "invalid trailer command contract differs");
    for (auto& peer : peers)
        require(RakNetTransportTestAccess::messages(peer).empty(), "invalid trailer command sent an RPC");
}

void vehicle_parameters_and_siren() {
    samp::server::GameLayer game;
    samp::pawn::register_server_natives(game.vm_, game);
    const auto id = call(game.vm_, "CreateVehicle", {411, 0, 0, 0, 0, 0, 0, -1, 1});
    require(id == 1, "parameter fixture vehicle allocation failed");
    auto& vehicle = game.vehicles_[id];
    game.players_.resize(2);
    game.player_pool_highest_ = 1;
    std::array<samp::server::RakNetPeer, 2> peers;
    for (int slot = 0; slot < 2; ++slot) {
        auto& player = game.players_[slot];
        player.id = slot;
        player.in_use = true;
        player.peer = &peers[slot];
        player.streamed_to.resize(2);
        player.streamed_vehicles.resize(2);
    }
    auto& driver = game.players_[0];
    driver.spawned = true;
    driver.streamed_vehicles[1] = 1;
    driver.streamed_vehicle_count = 1;
    std::vector<std::size_t> trace;
    std::uint8_t expected_signal = 0;
    bool last_filter_handles = false;
    const auto install_callback = [&](samp::pawn::PawnVm& vm, std::size_t script) {
        samp::pawn::PawnNativeTestAccess::vehicle_callbacks(vm, [&, script](auto name, auto args) {
            require(name == "OnVehicleSirenStateChange" && args.size() == 3 && args[0] == 0 &&
                    args[1] == 1 && args[2] == expected_signal, "siren Pawn callback arguments differ");
            require(call(game.vm_, "GetVehicleParamsSirenState", {id}) == (expected_signal != 0),
                    "siren getter must see state before callbacks");
            trace.push_back(script);
            return static_cast<cell>(script == 2 && last_filter_handles);
        });
    };
    install_callback(game.vm_, 0);
    for (std::size_t script = 1; script <= 2; ++script) {
        auto vm = std::make_unique<samp::pawn::PawnVm>();
        install_callback(*vm, script);
        game.filterscripts_.push_back(std::move(vm));
    }
    const auto expect_outputs = [&](const char* name, std::initializer_list<cell> addresses,
                                    std::initializer_list<cell> values) {
        require(call(game.vm_, name, addresses) == 1, "parameter getter failed");
        std::size_t i = 0;
        for (const auto expected : values) {
            require(samp::pawn::PawnNativeTestAccess::data_cell(game.vm_, i * sizeof(cell)) == expected,
                    "parameter getter did not sign-extend its byte");
            ++i;
        }
    };
    const auto expect_parameters_rpc = [&](BitStream payload) {
        std::uint16_t target = 0;
        std::array<std::uint8_t, 16> parameters{};
        require(payload.numberOfBitsUsed_ == 144 && payload.read(&target, sizeof(target)) && target == id &&
                payload.read(parameters.data(), parameters.size()) && parameters == vehicle.parameters,
                "vehicle parameter packet differs");
    };

    require(vehicle.siren && call(game.vm_, "GetVehicleParamsSirenState", {id}) == -1 &&
            call(game.vm_, "GetVehicleParamsSirenState", {2000}) == 0, "initial siren sentinel differs");
    expect_outputs("GetVehicleParamsEx", {id, 0, 4, 8, 12, 16, 20, 24}, {-1, -1, -1, -1, -1, -1, -1});
    require(call(game.vm_, "SetVehicleParamsEx", {65536 + id, -1, 0, 1, -128, 259, 254, 0x1234}) == 1,
            "vehicle parameter setter did not use low WORD and BYTE inputs");
    expect_parameters_rpc(take_rpc(peers[0], 24));
    expect_outputs("GetVehicleParamsEx", {id, 0, 4, 8, 12, 16, 20, 24}, {-1, 0, 1, -128, 3, -2, 52});
    require(call(game.vm_, "SetVehicleParamsCarDoors", {id, -1, -128, 259, 384}) == 1,
            "door setter failed");
    expect_parameters_rpc(take_rpc(peers[0], 24));
    require(call(game.vm_, "SetVehicleParamsCarWindows", {id, 0, 1, -1, 255}) == 1,
            "window setter failed");
    expect_parameters_rpc(take_rpc(peers[0], 24));
    expect_outputs("GetVehicleParamsCarDoors", {id, 0, 4, 8, 12}, {-1, -128, 3, -128});
    expect_outputs("GetVehicleParamsCarWindows", {id, 0, 4, 8, 12}, {0, 1, -1, -1});
    require(RakNetTransportTestAccess::messages(peers[1]).empty(),
            "parameter updates were sent to a nonviewer");

    const auto synchronize_siren = [&](std::uint8_t signal) {
        expected_signal = signal;
        std::array<std::uint8_t, 64> raw{};
        raw[0] = 200;
        raw[1] = 1;
        raw[56] = signal;
        BitStream packet;
        packet.write(raw.data(), raw.size());
        trace.clear();
        game.on_user_message(peers[0], packet);
    };
    synchronize_siren(0);
    require(trace.empty() && call(game.vm_, "GetVehicleParamsSirenState", {id}) == -1,
            "unchanged initial siren report must preserve the unset parameter");
    expect_outputs("GetVehicleParamsCarDoors", {id, 0, 4, 8, 12}, {-1, -1, -1, -1});
    expect_outputs("GetVehicleParamsCarWindows", {id, 0, 4, 8, 12}, {0, 1, -1, -1});
    synchronize_siren(2);
    require(trace == std::vector<std::size_t>{1, 2, 0} &&
            call(game.vm_, "GetVehicleParamsSirenState", {65536 + id}) == 1,
            "siren change must reach the filterscripts and game mode");
    synchronize_siren(2);
    require(trace.empty(), "duplicate siren report must not repeat callbacks");
    last_filter_handles = true;
    synchronize_siren(3);
    require(trace == std::vector<std::size_t>{1, 2} &&
            call(game.vm_, "GetVehicleParamsSirenState", {id}) == 1,
            "handled raw siren change must skip game mode but retain state");
    last_filter_handles = false;
    synchronize_siren(0);
    require(trace == std::vector<std::size_t>{1, 2, 0} &&
            call(game.vm_, "GetVehicleParamsSirenState", {id}) == 0, "siren off transition differs");

    game.send_vehicle_stream_in(game.players_[1], vehicle);
    auto initial = RakNetTransportTestAccess::messages(peers[1]);
    require(initial.size() == 2, "vehicle stream-in omitted the parameter record");
    auto spawn = read_rpc(std::move(initial[0]), 164);
    std::array<std::uint8_t, 63> baseline{};
    require(spawn.read(baseline.data(), baseline.size()) && baseline[39] == 1,
            "siren capability should remain set in the spawn record");
    expect_parameters_rpc(read_rpc(std::move(initial[1]), 24));
}

void vehicle_tick_boundaries() {
    samp::server::GameLayer game;
    auto& vehicle=game.vehicles_[1];
    vehicle.id=1; vehicle.active=true; vehicle.model=411;
    vehicle.respawn_delay_ms=1000; vehicle.has_been_occupied=true;
    vehicle.health=400; vehicle.x=20; vehicle.respawn_x=10;
    vehicle.created_ms=vehicle.last_occupied_ms=0xfffff000u;
    std::srand(0);
    for (int i=0; i<1000; ++i) game.update_vehicles(5903); // 9999 ms after DWORD rollover
    require(vehicle.health==400, "vehicle respawned before minimum age across tick rollover");
    for (int i=0; i<1000 && vehicle.has_been_occupied; ++i) game.update_vehicles(5904);
    require(vehicle.health==1000 && vehicle.x==10 && !vehicle.has_been_occupied,
        "idle respawn failed at minimum age across DWORD rollover");
    vehicle.created_ms=vehicle.last_occupied_ms=0; vehicle.has_been_occupied=true; vehicle.health=400;
    for (int i=0; i<1000; ++i) game.update_vehicles(0x80000000u);
    require(vehicle.health==400, "vehicle tick comparison lost original signed DWORD semantics");
    vehicle.dead=vehicle.death_notified=true; vehicle.respawn_delay_ms=-1; vehicle.death_ms=0xfffff000u;
    for (int i=0; i<1000; ++i) game.update_vehicles(5904);
    require(vehicle.dead, "death expiry must remain strict at ten seconds across rollover");
    for (int i=0; i<1000 && vehicle.dead; ++i) game.update_vehicles(5905);
    require(!vehicle.dead && vehicle.health==1000, "death respawn failed across tick rollover");
    game.players_.resize(1001);
    game.players_[999].in_use=true; game.players_[999].state=3; game.players_[999].vehicle_id=1;
    game.update_player_pool_size();
    vehicle.created_ms=vehicle.last_occupied_ms=0; vehicle.respawn_delay_ms=1000;
    vehicle.has_been_occupied=true; vehicle.health=400;
    for (int i=0; i<1000; ++i) game.update_vehicles(10000);
    require(vehicle.health==400, "last-slot passenger did not prevent idle respawn");
    game.players_[999].in_use=false;
    game.players_[1000].in_use=true; game.players_[1000].state=2; game.players_[1000].vehicle_id=1;
    game.update_player_pool_size();
    for (int i=0; i<1000 && vehicle.has_been_occupied; ++i) game.update_vehicles(10000);
    require(vehicle.health==1000, "out-of-domain player prevented idle respawn");
}

void cached_world_broadcasts() {
    samp::server::Config config;
    config.values_ = {{"worldtime", "12:00"}, {"weather", "10"}, {"gravity", "0.008"}};
    samp::server::GameLayer game;game.config_=&config;
    game.players_.resize(1001);
    std::array<samp::server::RakNetPeer,4> peers;
    game.players_[0].in_use=true;game.players_[0].peer=&peers[0];
    game.players_[999].in_use=game.players_[999].joined=true;game.players_[999].peer=&peers[1];
    game.players_[1].peer=&peers[2];
    game.players_[1000].in_use=game.players_[1000].joined=true;game.players_[1000].peer=&peers[3];
    samp::pawn::register_server_natives(game.vm_,game);
    require(call(game.vm_,"GangZoneCreate",{0,0,0,0})==0,"zone fixture allocation failed");
    for(const bool refreshed:{false,true}) {
        if(refreshed) game.update_player_pool_size();
        const auto check=[&](std::uint8_t id,std::span<const std::uint8_t> expected) {
            for(int i=0;i<4;++i) {
                if(i==0 || (i==1 && refreshed)) {
                    const auto payload=take_rpc(peers[i],id);
                    require(payload.numberOfBitsUsed_==expected.size()*8 &&
                        std::memcmp(payload.data_.data(),expected.data(),expected.size())==0,"world broadcast payload differs");
                } else require(RakNetTransportTestAccess::messages(peers[i]).empty(),"broadcast bypassed cached pool or fixed domain");
            }
        };
        const std::array<std::uint8_t,1> time{1},weather{255};
        const std::array<std::uint8_t,4> gravity{0xcd,0xcc,0x4c,0x3c};
        const std::array<std::uint8_t,22> zone{};
        require(call(game.vm_,"SetWorldTime",{257})==1,"time native failed");check(94,time);
        require(call(game.vm_,"SetWeather",{-1})==1,"weather native failed");check(152,weather);
        require(call(game.vm_,"SetGravity",{0x3c4ccccd})==1,"gravity native failed");check(146,gravity);
        require(call(game.vm_,"GangZoneShowForAll",{0,0})==1,"zone native failed");check(108,zone);
        require(config.values_.at("worldtime")=="01:00" && config.values_.at("weather")=="255" &&
            config.values_.at("gravity")=="0.012500","world query variables differ");
    }
}

void player_wanted_level_and_fighting_style() {
    samp::server::GameLayer game;
    std::array<samp::server::RakNetPeer, 3> peers;
    game.players_.resize(4);
    for (std::uint16_t id = 0; id < peers.size(); ++id) {
        auto& player = game.players_[id];
        player.id = id;
        player.in_use = true;
        player.peer = &peers[id];
        player.streamed_to.resize(game.players_.size());
    }
    game.players_[1].streamed_to[0] = 1;
    game.update_player_pool_size();
    samp::pawn::register_server_natives(game.vm_, game);

    require(call(game.vm_, "GetPlayerWantedLevel", {0}) == 0 &&
        call(game.vm_, "GetPlayerFightingStyle", {0}) == 4, "player defaults differ");
    require(call(game.vm_, "SetPlayerWantedLevel", {65536, -1}) == 1 &&
        call(game.vm_, "GetPlayerWantedLevel", {0}) == 255, "wanted level must use the low byte");
    const auto wanted = take_rpc(peers[0], 133);
    require(wanted.numberOfBitsUsed_ == 8 && wanted.data_[0] == 255, "wanted level RPC differs");
    require(RakNetTransportTestAccess::messages(peers[1]).empty(), "wanted level reached a viewer");

    for (const cell style : {4, 5, 6, 7, 15, 272}) {
        require(call(game.vm_, "SetPlayerFightingStyle", {65536, style}) == 1 &&
            call(game.vm_, "GetPlayerFightingStyle", {0}) == (style & 255), "valid fighting style rejected");
        for (const auto id : {0, 1}) {
            const auto payload = take_rpc(peers[id], 89);
            require(payload.numberOfBitsUsed_ == 24 && payload.data_[0] == 0 && payload.data_[1] == 0 &&
                payload.data_[2] == (style & 255), "fighting style RPC differs");
        }
    }
    for (const cell id : {3, 1000, -1}) {
        require(call(game.vm_, "SetPlayerWantedLevel", {id, 5}) == 0 &&
            call(game.vm_, "GetPlayerWantedLevel", {id}) == 0 &&
            call(game.vm_, "SetPlayerFightingStyle", {id, 5}) == 1 &&
            call(game.vm_, "GetPlayerFightingStyle", {id}) == 4, "missing-player contract differs");
    }
    require(call(game.vm_, "SetPlayerFightingStyle", {0, 8}) == 0 &&
        call(game.vm_, "GetPlayerFightingStyle", {0}) == 16, "invalid style changed the player");
    for (auto& peer : peers)
        require(RakNetTransportTestAccess::messages(peer).empty(), "player state RPC reached an unintended recipient");

    game.players_[0].spawned = true;
    game.players_[0].state = 1;
    game.players_[2].joined = game.players_[2].spawned = true;
    game.update_streaming();
    const auto streamed = take_rpc(peers[2], 32);
    require(streamed.numberOfBitsUsed_ == 54 * 8 && streamed.data_[31] == 16,
        "late stream-in discarded the current fighting style");
}

void player_commands() {
    using Access=samp::pawn::PawnNativeTestAccess;
    samp::server::GameLayer game;
    std::array<samp::server::RakNetPeer,2> peers;
    game.players_.resize(1001);
    auto& player=game.players_[0];player.in_use=true;player.peer=&peers[0];
    player.x=10;player.y=20;player.z=30;player.vx=1;player.vy=2;player.vz=3;
    game.players_[999].in_use=true;game.players_[999].peer=&peers[1];
    game.players_[1000].in_use=true;game.players_[1000].peer=&peers[1];
    game.players_[3].in_use=true; // A valid player still returns success without a transport.
    samp::pawn::register_server_natives(game.vm_,game);
    Access::text(game.vm_,"stream");
    const std::array<std::pair<const char*,std::vector<cell>>,11> commands{{
        {"PlayerPlaySound",{0,1057,0,0,0}}, {"SetCameraBehindPlayer",{0}},
        {"InterpolateCameraPos",{0,0,0,0,0,0,0,1000,1}},
        {"InterpolateCameraLookAt",{0,0,0,0,0,0,0,1000,2}},
        {"SetPlayerVelocity",{0,0,0,0}},
        {"PlayAudioStreamForPlayer",{0,0,0,0,0,0,1}}, {"StopAudioStreamForPlayer",{0}},
        {"SetPlayerPosFindZ",{0,0,0,0}}, {"SetPlayerSpecialAction",{0,257}},
        {"SetPlayerAmmo",{0,257,65537}}, {"RemoveBuildingForPlayer",{0,-1,0,0,0,0}}
    }};
    const std::array<std::uint8_t,11> ids{16,162,82,82,90,41,42,13,88,145,43};
    for(const cell id:{0,65536,-65536,999,1,1000,-1,3}) {
        const bool valid=id==0 || id==65536 || id==-65536 || id==999 || id==3;
        for(std::size_t i=0;i<commands.size();++i) {
            auto args=commands[i].second;args[0]=id;
            require(Access::call_span(game.vm_,commands[i].first,args)==(valid && i!=10?1:0),"player command WORD slot/return differs");
            if(valid && id!=3) {
                const auto payload=take_rpc(peers[id==999?1:0],ids[i]);
                if(i==1 || i==6) require(payload.numberOfBitsUsed_==0,"empty player command has extra payload");
            }
            require(RakNetTransportTestAccess::messages(peers[0]).empty() && RakNetTransportTestAccess::messages(peers[1]).empty(),
                "player command reached an unintended recipient");
        }
    }
    const std::array<cell,6> coordinates{0x3f800000,std::bit_cast<cell>(0xc0200000u),std::bit_cast<cell>(0x80000000u),
        0x7fc12345,0x7f800000,std::bit_cast<cell>(0xff800000u)};
    require(call(game.vm_,"PlayerPlaySound",{0,-1,coordinates[0],coordinates[1],coordinates[2]})==1,"sound native failed");
    auto sound=take_rpc(peers[0],16);cell sound_id=0;std::array<cell,3> position{};
    require(sound.numberOfBitsUsed_==128 && sound.read(&sound_id,4) && sound_id==-1 && sound.read(position.data(),12) &&
        std::memcmp(position.data(),coordinates.data(),12)==0,"sound payload changed raw cells");
    require(call(game.vm_,"SetPlayerVelocity",{0,coordinates[3],coordinates[4],coordinates[5]})==1,"velocity native failed");
    const auto velocity=take_rpc(peers[0],90);
    require(velocity.numberOfBitsUsed_==96 && std::memcmp(velocity.data_.data(),coordinates.data()+3,12)==0,
        "velocity command clamped or changed the float bits");
    require(call(game.vm_,"SetPlayerPosFindZ",{0,coordinates[0],coordinates[1],coordinates[2]})==1,"ground-position native failed");
    const auto ground=take_rpc(peers[0],13);
    require(ground.numberOfBitsUsed_==96 && std::memcmp(ground.data_.data(),coordinates.data(),12)==0,
        "ground-position command changed raw coordinates");
    require(player.x==10 && player.y==20 && player.z==30 && player.vx==1 && player.vy==2 && player.vz==3,
        "player command fabricated a synchronization report");
    for(const bool move:{true,false}) for(const cell mode:{0,1,2,3,256,257,258,-255,-1}) for(const cell time:{0,-1,1000,INT32_MIN}) {
        require(call(game.vm_,move?"InterpolateCameraPos":"InterpolateCameraLookAt",
            {0,coordinates[0],coordinates[1],coordinates[2],coordinates[3],coordinates[4],coordinates[5],time,mode})==1,
            "camera interpolation native failed");
        auto camera=take_rpc(peers[0],82);
        require(camera.numberOfBitsUsed_==233 && camera.readBit()==move,"camera selector must occupy one bit");
        std::array<cell,6> values{};cell duration=0;std::uint8_t actual_mode=0;
        auto expected_mode=static_cast<std::uint8_t>(mode);if(expected_mode<1 || expected_mode>2) expected_mode=2;
        require(camera.read(values.data(),24) && values==coordinates && camera.read(&duration,4) && duration==time &&
            camera.read(&actual_mode,1) && actual_mode==expected_mode,"camera payload/byte normalization differs");
    }
    for(const cell action:{0,1,2,255,256,257,-1,INT32_MIN}) {
        require(call(game.vm_,"SetPlayerSpecialAction",{0,action})==1,"special action native failed");
        const auto payload=take_rpc(peers[0],88);
        require(payload.numberOfBitsUsed_==8 && payload.data_[0]==static_cast<std::uint8_t>(action),
            "special action must preserve the low byte without validation");
    }
    player.ammunition[2]=123;player.weapons[2]=24;
    for(const cell weapon:{0,46,255,256,257,-1}) for(const cell ammunition:{0,1,65535,65536,65537,-1,INT32_MIN}) {
        require(call(game.vm_,"SetPlayerAmmo",{0,weapon,ammunition})==1,"ammunition native failed");
        const auto payload=take_rpc(peers[0],145);
        const std::array<std::uint8_t,3> expected{static_cast<std::uint8_t>(weapon),
            static_cast<std::uint8_t>(ammunition),static_cast<std::uint8_t>(static_cast<std::uint32_t>(ammunition)>>8)};
        require(payload.numberOfBitsUsed_==24 && std::memcmp(payload.data_.data(),expected.data(),3)==0,
            "ammunition command BYTE/WORD conversion differs");
    }
    require(player.ammunition[2]==123 && player.weapons[2]==24,"ammunition command changed client-reported weapons");
    for(const cell model:{-1,20000,INT32_MIN}) {
        const std::array<cell,5> expected{model,coordinates[3],coordinates[4],coordinates[5],std::bit_cast<cell>(-50.0f)};
        require(call(game.vm_,"RemoveBuildingForPlayer",{0,model,expected[1],expected[2],expected[3],expected[4]})==0,
            "building removal must retain the official zero success return");
        const auto payload=take_rpc(peers[0],43);
        require(payload.numberOfBitsUsed_==160 && std::memcmp(payload.data_.data(),expected.data(),20)==0,
            "building removal filtered or changed model/position/radius cells");
    }
}

void audio_stream_commands() {
    using Access=samp::pawn::PawnNativeTestAccess;
    samp::server::GameLayer game;samp::server::RakNetPeer peer;
    game.players_.resize(1);game.players_[0].in_use=true;game.players_[0].peer=&peer;
    samp::pawn::register_server_natives(game.vm_,game);
    for(const bool packed:{false,true}) for(const int length:{0,1,254,255,256,257,511,512}) {
        std::string url(static_cast<std::size_t>(length),'A');
        for(std::size_t i=0;i<url.size();++i) url[i]=static_cast<char>('A'+i%26);
        Access::text(game.vm_,url,packed);
        for(const cell spatial:{0,1,2,255,256,257,-1}) {
            require(call(game.vm_,"PlayAudioStreamForPlayer",{0,0,0x3f800000,0x40000000,0x40400000,
                std::bit_cast<cell>(-50.0f),spatial})==1,"audio stream native failed");
            auto payload=take_rpc(peer,41);
            const auto expected_length=static_cast<std::uint8_t>(length);
            std::uint8_t actual_length=0,actual_spatial=0;
            require(payload.numberOfBitsUsed_==(18u+expected_length)*8u && payload.read(&actual_length,1) &&
                actual_length==expected_length,"audio URL byte length must wrap rather than clamp");
            std::string actual(actual_length,'\0');
            require(actual.empty() || payload.read(actual.data(),actual.size()),"audio URL missing");
            std::array<float,3> position{};float radius=0;
            require(actual==url.substr(0,expected_length) && payload.read(position.data(),12) &&
                position==std::array<float,3>{1,2,3} && payload.read(&radius,4) && radius==-50 &&
                payload.read(&actual_spatial,1) && actual_spatial==static_cast<std::uint8_t>(spatial),
                "audio coordinates, radius or raw spatial byte differ");
        }
    }
    require(call(game.vm_,"StopAudioStreamForPlayer",{0})==1 && take_rpc(peer,42).numberOfBitsUsed_==0,
        "audio stop payload must be empty");
}

void actor_pool_lifecycle() {
    using Access = samp::pawn::PawnNativeTestAccess;
    using samp::pawn::kActorPoolSize;
    samp::server::Config config;
    config.values_["stream_distance"] = "10";
    samp::server::GameLayer game;
    auto& host = static_cast<samp::pawn::NativeHost&>(game);
    game.config_ = &config;
    std::array<samp::server::RakNetPeer, 2> peers;
    game.players_.resize(peers.size());
    for (std::size_t i = 0; i < peers.size(); ++i) {
        auto& player = game.players_[i];
        player.in_use = player.joined = true;
        player.id = static_cast<int>(i);
        player.peer = &peers[i];
        player.streamed_to.resize(peers.size());
    }
    auto& viewer = game.players_[0];
    auto& npc = game.players_[1];
    npc.is_npc = true;
    game.update_player_pool_size();
    samp::pawn::register_server_natives(game.vm_, game);
    Access::text(game.vm_, "");

    const auto bits = [](float value) { return std::bit_cast<cell>(value); };
    const auto created = [](BitStream payload, std::uint16_t id, std::int32_t model, std::int32_t custom,
                            std::array<float, 3> position, float angle, float health, std::uint8_t invulnerable) {
        std::uint16_t actual_id = 0xffff;
        std::int32_t actual_model = -1, actual_custom = -1;
        std::array<float, 3> actual_position{};
        float actual_angle = 0, actual_health = 0;
        std::uint8_t actual_invulnerable = 0xff;
        require(payload.numberOfBitsUsed_ == 31 * 8 &&
                payload.read(&actual_id, 2) && actual_id == id &&
                payload.read(&actual_model, 4) && actual_model == model &&
                payload.read(&actual_custom, 4) && actual_custom == custom &&
                payload.read(actual_position.data(), 12) && actual_position == position &&
                payload.read(&actual_angle, 4) && actual_angle == angle &&
                payload.read(&actual_health, 4) && actual_health == health &&
                payload.read(&actual_invulnerable, 1) && actual_invulnerable == invulnerable,
                "actor creation did not match the 31-byte client payload");
    };
    const auto update = [](BitStream payload, std::uint16_t id, std::initializer_list<float> values) {
        std::uint16_t actual_id = 0xffff;
        require(payload.numberOfBitsUsed_ == 16 + 32 * values.size() &&
            payload.read(&actual_id, 2) && actual_id == id, "actor update payload header differs");
        for (float value : values) {
            float actual = 0;
            require(payload.read(&actual, 4) && actual == value, "actor update value differs");
        }
    };

    require(call(game.vm_, "GetActorPoolSize", {}) == 0, "empty actor pool size differs");
    require(call(game.vm_, "CreateActor", {7, bits(10), 0, bits(900), bits(-15)}) == 0,
        "first actor must occupy slot zero");
    require(RakNetTransportTestAccess::messages(peers[0]).empty(), "actor creation must wait for streaming");
    host.update_player_position(viewer, 0.0f, 0.0f, 0.0f, true);
    require(RakNetTransportTestAccess::messages(peers[0]).empty(), "actor XY radius must exclude equality");
    host.update_player_position(viewer, 1.0f, 0.0f, 0.0f, true);
    created(take_rpc(peers[0], 171), 0, 7, 0, {10, 0, 900}, -15, 100, 1);
    host.update_player_position(npc, 1.0f, 0.0f, 0.0f, true);
    require(RakNetTransportTestAccess::messages(peers[1]).empty() &&
        call(game.vm_, "IsActorStreamedIn", {65536, 65536}) == 1 &&
        call(game.vm_, "IsActorStreamedIn", {0, 1}) == 0 &&
        call(game.vm_, "IsActorStreamedIn", {1000, 0}) == 0,
        "actor stream query must use low WORD IDs and omit NPCs");

    require(call(game.vm_, "SetActorPos", {65536, bits(2), bits(-3), bits(41)}) == 1 &&
        call(game.vm_, "SetActorFacingAngle", {0, bits(-721)}) == 1 &&
        call(game.vm_, "SetActorHealth", {0, bits(-15)}) == 1, "actor state setters failed");
    auto frames = RakNetTransportTestAccess::messages(peers[0]);
    require(frames.size() == 3 && RakNetTransportTestAccess::messages(peers[1]).empty(),
        "actor pose and health changes must go only to existing viewers");
    update(read_rpc(frames[0], 176), 0, {2, -3, 41});
    update(read_rpc(frames[1], 175), 0, {-721});
    update(read_rpc(frames[2], 178), 0, {-15});

    require(call(game.vm_, "GetActorPos", {0, 0, 4, 8}) == 1 &&
        Access::data_cell(game.vm_, 0) == bits(2) && Access::data_cell(game.vm_, 4) == bits(-3) &&
        Access::data_cell(game.vm_, 8) == bits(41) &&
        call(game.vm_, "GetActorFacingAngle", {0, 12}) == 1 && Access::data_cell(game.vm_, 12) == bits(-721) &&
        call(game.vm_, "GetActorHealth", {0, 16}) == 1 && Access::data_cell(game.vm_, 16) == bits(-15) &&
        call(game.vm_, "GetActorHealth", {1000, 16}) == 0 && Access::data_cell(game.vm_, 16) == bits(-15),
        "actor query results and invalid-slot output side effects differ");

    require(call(game.vm_, "SetActorInvulnerable", {0, 256}) == 1 &&
        call(game.vm_, "IsActorInvulnerable", {0}) == 1 &&
        call(game.vm_, "SetActorInvulnerable", {0, 0}) == 1 &&
        call(game.vm_, "IsActorInvulnerable", {0}) == 0 &&
        call(game.vm_, "SetActorVirtualWorld", {0, -1}) == 1 &&
        call(game.vm_, "GetActorVirtualWorld", {0}) == -1,
        "actor invulnerability and signed virtual world differ");
    require(RakNetTransportTestAccess::messages(peers[0]).empty(),
        "world and invulnerability mutate state without an immediate RPC");
    host.update_player_position(viewer, 1.0f, 0.0f, 0.0f, true);
    update(take_rpc(peers[0], 172), 0, {});
    viewer.virtual_world = -1;
    host.update_player_position(viewer, 1.0f, 0.0f, 0.0f, true);
    created(take_rpc(peers[0], 171), 0, 7, 0, {2, -3, 41}, -721, -15, 0);
    require(call(game.vm_, "DestroyActor", {65536}) == 1 &&
        call(game.vm_, "DestroyActor", {0}) == 0 &&
        call(game.vm_, "IsValidActor", {0}) == 0 &&
        viewer.streamed_actor_count == 0, "actor destruction must release the slot and viewer state");
    update(take_rpc(peers[0], 172), 0, {});

    game.artwork_enabled_ = true;
    samp::pawn::CustomModelRecord custom_model;
    custom_model.spec.base_id = 42;
    custom_model.spec.new_id = 20001;
    game.models_.push_back(custom_model);
    for (int id = 0; id < kActorPoolSize; ++id) {
        require(call(game.vm_, "CreateActor", {20001, 0, 0, 0, 0}) == id, "actor slot must be reused in order");
    }
    require(call(game.vm_, "GetActorPoolSize", {}) == 999 &&
        call(game.vm_, "CreateActor", {7, 0, 0, 0, 0}) == 0xffff, "actor full pool sentinel differs");
    viewer.virtual_world = 0;
    host.update_player_position(viewer, 0.0f, 0.0f, 0.0f, true);
    frames = RakNetTransportTestAccess::messages(peers[0]);
    require(frames.size() == 51 && viewer.streamed_actor_count == 51, "actor stream limit differs");
    created(read_rpc(frames.front(), 171), 0, 42, 20001, {}, 0, 100, 1);
    require(call(game.vm_, "DestroyActor", {999}) == 1 && call(game.vm_, "GetActorPoolSize", {}) == 998,
        "pool highest actor must update after destruction");
    game.begin_gamemode_restart();
    require(call(game.vm_, "GetActorPoolSize", {}) == -1 && viewer.streamed_actor_count == 0,
        "mode restart must clear the actor pool and per-player view");
}

void actor_animations() {
    using Access = samp::pawn::PawnNativeTestAccess;
    samp::server::GameLayer game;
    auto& host = static_cast<samp::pawn::NativeHost&>(game);
    std::array<samp::server::RakNetPeer, 2> peers;
    game.players_.resize(peers.size());
    for (std::size_t i = 0; i < peers.size(); ++i) {
        auto& player = game.players_[i];
        player.in_use = player.joined = true;
        player.id = static_cast<int>(i);
        player.peer = &peers[i];
        player.streamed_to.resize(peers.size());
    }
    game.update_player_pool_size();
    auto& first = game.players_[0];
    auto& second = game.players_[1];
    samp::pawn::register_server_natives(game.vm_, game);
    Access::text(game.vm_, std::string(68, 'L'));
    constexpr cell name_address = 512;
    Access::set_data_text(game.vm_, name_address, std::string(71, 'N'), true);
    constexpr float speed = 3.5f;
    constexpr cell duration = -103;
    require(call(game.vm_, "CreateActor", {7, 0, 0, 0, 0}) == 0, "actor animation fixture needs slot zero");
    host.update_player_position(first, 0, 0, 0, true);
    static_cast<void>(take_rpc(peers[0], 171));

    const auto animation_payload = [=](BitStream payload, std::string_view library, std::string_view name,
                                         std::array<bool, 4> flags) {
        require(payload.numberOfBitsUsed_ == 16 + 8 * (library.size() + name.size() + 2) + 64 + 4,
            "actor animation bit length differs");
        std::uint16_t actor = 0xffff;
        require(payload.read(&actor, 2) && actor == 0, "actor animation WORD ID differs");
        for (const auto field : {library, name}) {
            std::uint8_t length = 0;
            std::array<char, 64> actual{};
            require(payload.read(&length, 1) && length == field.size() &&
                payload.read(actual.data(), length) && std::string_view(actual.data(), length) == field,
                "actor animation library/name field differs");
        }
        float actual_speed = 0.0f;
        require(payload.read(&actual_speed, 4) && actual_speed == speed, "actor animation speed differs");
        for (bool flag : flags) require(payload.readBit() == flag, "actor animation flag bit differs");
        cell actual_duration = 0;
        require(payload.read(&actual_duration, 4) && actual_duration == duration, "actor animation duration differs");
    };
    const auto apply = [&](cell name, cell loop, cell lock_x, cell lock_y, cell freeze) {
        return call(game.vm_, "ApplyActorAnimation", {65536, 0, name, std::bit_cast<cell>(speed),
            loop, lock_x, lock_y, freeze, duration});
    };

    require(apply(name_address, 256, 0, -1, 0) == 1, "looping actor animation native failed");
    animation_payload(take_rpc(peers[0], 173), std::string(64, 'L'), std::string(64, 'N'), {true, false, true, false});
    require(RakNetTransportTestAccess::messages(peers[1]).empty(), "animation targeted an unstreamed actor");
    host.update_player_position(second, 0, 0, 0, true);
    auto frames = RakNetTransportTestAccess::messages(peers[1]);
    require(frames.size() == 2, "stream-in must replay looping animation after creation");
    static_cast<void>(read_rpc(frames[0], 171));
    animation_payload(read_rpc(frames[1], 173), std::string(64, 'L'), std::string(64, 'N'), {true, false, true, false});

    host.update_player_position(second, 500, 0, 0, true);
    static_cast<void>(take_rpc(peers[1], 172));
    require(apply(0, 0, 1, 0, 0) == 1, "aliased actor animation strings must be accepted");
    animation_payload(take_rpc(peers[0], 173), std::string(64, 'L'), std::string(64, 'L'), {false, true, false, false});
    host.update_player_position(second, 0, 0, 0, true);
    static_cast<void>(take_rpc(peers[1], 171)); // Transient animation clears older replay.

    require(apply(name_address, 0, 0, 0, 1) == 1, "frozen actor animation native failed");
    animation_payload(take_rpc(peers[0], 173), std::string(64, 'L'), std::string(64, 'N'), {false, false, false, true});
    animation_payload(take_rpc(peers[1], 173), std::string(64, 'L'), std::string(64, 'N'), {false, false, false, true});
    host.update_player_position(second, 500, 0, 0, true);
    static_cast<void>(take_rpc(peers[1], 172));
    host.update_player_position(second, 0, 0, 0, true);
    frames = RakNetTransportTestAccess::messages(peers[1]);
    require(frames.size() == 2, "stream-in must retain freeze without loop");
    static_cast<void>(read_rpc(frames[0], 171));
    animation_payload(read_rpc(frames[1], 173), std::string(64, 'L'), std::string(64, 'N'), {false, false, false, true});

    require(call(game.vm_, "ClearActorAnimations", {1000}) == 0 &&
        call(game.vm_, "ClearActorAnimations", {65536}) == 1, "actor animation clear slot boundary differs");
    for (auto& peer : peers) {
        auto clear = take_rpc(peer, 174);
        std::uint16_t id = 0xffff;
        require(clear.numberOfBitsUsed_ == 16 && clear.read(&id, 2) && id == 0,
            "actor animation clear must send only a WORD ID");
    }
    host.update_player_position(second, 500, 0, 0, true);
    static_cast<void>(take_rpc(peers[1], 172));
    host.update_player_position(second, 0, 0, 0, true);
    static_cast<void>(take_rpc(peers[1], 171));
    Access::set_data_text(game.vm_, name_address, "", false);
    require(apply(name_address, 1, 0, 0, 0) == 0 && RakNetTransportTestAccess::messages(peers[0]).empty(),
        "empty actor animation name must fail without a broadcast");
}

void text_label_lifecycle() {
    using Access = samp::pawn::PawnNativeTestAccess;
    using samp::pawn::kTextLabelPoolSize;
    samp::server::GameLayer game;
    std::array<samp::server::RakNetPeer, 3> peers;
    game.players_.resize(peers.size());
    for (std::size_t i = 0; i < peers.size(); ++i) {
        auto& player = game.players_[i];
        player.in_use = player.joined = true;
        player.id = static_cast<int>(i);
        player.peer = &peers[i];
        player.state = 1;
        player.streamed_to.resize(peers.size());
    }
    auto& receiver = game.players_[0];
    game.players_[1].virtual_world = 4;
    game.players_[2].z = 10.0f;
    game.update_player_pool_size();
    auto& host = static_cast<samp::pawn::NativeHost&>(game);
    samp::pawn::register_server_natives(game.vm_, game);
    std::string text = "label";
    Access::text(game.vm_, text);

    const auto bits = [](float value) { return std::bit_cast<cell>(value); };
    const auto shown = [&text](BitStream payload, std::uint16_t id, std::uint32_t colour,
                          std::array<float, 3> position, std::uint16_t player, std::uint16_t vehicle) {
        std::uint16_t actual_id = 0, actual_player = 0, actual_vehicle = 0;
        std::uint32_t actual_colour = 0;
        std::array<float, 3> actual_position{};
        float distance = 0;
        std::uint8_t los = 0;
        require(payload.read(&actual_id, 2) && actual_id == id &&
            payload.read(&actual_colour, 4) && actual_colour == colour &&
            payload.read(actual_position.data(), 12) && actual_position == position &&
            payload.read(&distance, 4) && distance == 10.0f &&
            payload.read(&los, 1) && los == 0x23 &&
            payload.read(&actual_player, 2) && actual_player == player &&
            payload.read(&actual_vehicle, 2) && actual_vehicle == vehicle &&
            payload.numberOfBitsUsed_ > 216, "text label show payload differs");
        RakNet::BitStream compressed(payload.data_.data(), (payload.numberOfBitsUsed_ + 7) / 8, false);
        compressed.SetReadOffset(216);
        std::array<char, 2048> decoded{};
        require(StringCompressor::Instance()->DecodeString(decoded.data(), decoded.size(), &compressed, 0) &&
            text == decoded.data(), "text label compressed text differs");
    };
    const auto hidden = [](BitStream payload, std::uint16_t id) {
        std::uint16_t actual = 0;
        require(payload.numberOfBitsUsed_ == 16 && payload.read(&actual, 2) && actual == id,
            "text label hide payload differs");
    };

    const std::initializer_list<cell> create{0, 0x11223344, 0, 0, 0, bits(10), 0, 0x123};
    require(call(game.vm_, "Create3DTextLabel", create) == 0, "expected first global slot");
    shown(take_rpc(peers[0], 36), 0, 0x11223344, {}, 0xffff, 0xffff);
    shown(take_rpc(peers[1], 36), 0, 0x11223344, {}, 0xffff, 0xffff);
    require(RakNetTransportTestAccess::messages(peers[2]).empty(),
        "creation radius must exclude equality on the Z axis");

    host.update_player_position(game.players_[1], 0, 0, 0, true);
    hidden(take_rpc(peers[1], 58), 0);
    require(RakNetTransportTestAccess::messages(peers[2]).empty(),
        "another player's movement must not stream a label to the receiver");
    host.update_player_position(game.players_[2], 0, 0, 10, true);
    shown(take_rpc(peers[2], 36), 0, 0x11223344, {}, 0xffff, 0xffff);
    host.update_player_position(game.players_[2], 0, 0, 11, true);
    hidden(take_rpc(peers[2], 58), 0);
    require(receiver.streamed_text_label_count == 1, "global stream count differs");

    require(call(game.vm_, "CreatePlayer3DTextLabel", {0, 0, 0x10203040, 0, 0, 0,
        bits(10), 7, 9, 0x123}) == 0, "private creation must return the local pool index");
    shown(take_rpc(peers[0], 36), kTextLabelPoolSize, 0x10203040, {}, 7, 9);

    text = "updated";
    Access::text(game.vm_, text);
    require(call(game.vm_, "UpdatePlayer3DTextLabelText", {0, 0, 0x556677, 0}) == 1,
        "private update failed");
    auto frames = RakNetTransportTestAccess::messages(peers[0]);
    require(frames.size() == 2, "private update must hide then show");
    hidden(read_rpc(frames[0], 58), kTextLabelPoolSize);
    shown(read_rpc(frames[1], 36), kTextLabelPoolSize, 0x556677, {}, 7, 9);

    require(call(game.vm_, "Update3DTextLabelText", {0, 0x12345678, 0}) == 1,
        "global update failed");
    frames = RakNetTransportTestAccess::messages(peers[0]);
    require(frames.size() == 2, "global update must hide then show");
    hidden(read_rpc(frames[0], 58), 0);
    shown(read_rpc(frames[1], 36), 0, 0x12345678, {}, 0xffff, 0xffff);
    require(RakNetTransportTestAccess::messages(peers[1]).empty() &&
        RakNetTransportTestAccess::messages(peers[2]).empty(),
        "global update or private RPC reached a non-viewer");

    game.vehicles_.resize(2);
    game.vehicles_[1].active = true;
    require(call(game.vm_, "Attach3DTextLabelToVehicle", {0, 1, bits(1), 0, 0}) == 1,
        "attach to active vehicle failed");
    frames = RakNetTransportTestAccess::messages(peers[0]);
    require(frames.size() == 2, "vehicle attach must refresh current viewers");
    hidden(read_rpc(frames[0], 58), 0);
    shown(read_rpc(frames[1], 36), 0, 0x12345678, {1, 0, 0}, 0xffff, 1);
    require(call(game.vm_, "Attach3DTextLabelToPlayer", {0, 1, bits(2), 0, 0}) == 1 &&
        call(game.vm_, "Attach3DTextLabelToPlayer", {0, 1000, 0, 0, 0}) == 0,
        "attachment target validation differs");
    frames = RakNetTransportTestAccess::messages(peers[0]);
    require(frames.size() == 2, "player attach must refresh current viewers");
    hidden(read_rpc(frames[0], 58), 0);
    shown(read_rpc(frames[1], 36), 0, 0x12345678, {2, 0, 0}, 1, 1);

    require(call(game.vm_, "Delete3DTextLabel", {kTextLabelPoolSize}) == 0 &&
        call(game.vm_, "Delete3DTextLabel", {65536}) == 1 &&
        call(game.vm_, "Delete3DTextLabel", {0}) == 0, "global delete ID handling differs");
    hidden(take_rpc(peers[0], 58), 0);
    require(receiver.streamed_text_label_count == 0, "global delete leaked a streaming slot");
    require(call(game.vm_, "DeletePlayer3DTextLabel", {0, kTextLabelPoolSize}) == 0 &&
        call(game.vm_, "DeletePlayer3DTextLabel", {0, 0}) == 1,
        "private delete must use local pool ID");
    hidden(take_rpc(peers[0], 58), kTextLabelPoolSize);

    for (auto& player : game.players_) player.state = 0;
    for (int id = 0; id < kTextLabelPoolSize; ++id)
        require(call(game.vm_, "Create3DTextLabel", create) == id, "global slot allocation order differs");
    require(call(game.vm_, "Create3DTextLabel", create) == 0xffff, "global full-pool sentinel differs");
}
}

int main(int, char**) {
    try {
        class_registration();
        gang_zone_broadcasts();
        vehicle_creation();
        vehicle_appearance();
        vehicle_appearance_callbacks();
        vehicle_damage_and_repair();
        vehicle_trailers_and_streaming_queries();
        vehicle_parameters_and_siren();
        vehicle_tick_boundaries();
        cached_world_broadcasts();
        player_wanted_level_and_fighting_style();
        player_commands();
        audio_stream_commands();
        actor_pool_lifecycle();
        actor_animations();
        text_label_lifecycle();
        std::puts("Server native parity checks passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
