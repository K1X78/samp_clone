#include "samp/server/game_layer.hpp"
#include "pawn/amx_set_string_api.hpp"

#include <array>
#include <bit>
#include <cstdio>
#include <cstring>
#include <cstdlib>
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
    static samp::amx::cell call_span(PawnVm& vm, const char* name, std::span<const samp::amx::cell> args) {
        return vm.native_functions_.at(name)(args);
    }
    static void text(PawnVm& vm, const std::string& text, bool packed=false) {
        vm.image_.assign(8192,0);vm.header_.dat=0;vm.ok_=true;
        vm.amx_.stp=8188;vm.amx_.hea=6144;vm.amx_.stk=7168;
        amx_string::set_string(reinterpret_cast<samp::amx::cell*>(vm.image_.data()),text.c_str(),packed,0,2048);
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
    const std::array<std::pair<const char*,std::vector<cell>>,7> commands{{
        {"PlayerPlaySound",{0,1057,0,0,0}}, {"SetCameraBehindPlayer",{0}},
        {"InterpolateCameraPos",{0,0,0,0,0,0,0,1000,1}},
        {"InterpolateCameraLookAt",{0,0,0,0,0,0,0,1000,2}},
        {"SetPlayerVelocity",{0,0,0,0}},
        {"PlayAudioStreamForPlayer",{0,0,0,0,0,0,1}}, {"StopAudioStreamForPlayer",{0}}
    }};
    const std::array<std::uint8_t,7> ids{16,162,82,82,90,41,42};
    for(const cell id:{0,65536,-65536,999,1,1000,-1,3}) {
        const bool valid=id==0 || id==65536 || id==-65536 || id==999 || id==3;
        for(std::size_t i=0;i<commands.size();++i) {
            auto args=commands[i].second;args[0]=id;
            require(Access::call_span(game.vm_,commands[i].first,args)==(valid?1:0),"player command WORD slot/return differs");
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
}

int main(int, char**) {
    try {
        class_registration();
        gang_zone_broadcasts();
        vehicle_creation();
        vehicle_tick_boundaries();
        cached_world_broadcasts();
        player_commands();
        audio_stream_commands();
        std::puts("Server native parity checks passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
