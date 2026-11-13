#include <bit>
#include <cstdio>
#include <cstring>
#include <limits>
#include "samp/server/game_layer.hpp"
#include "samp/client/server_rpc.hpp"
#include "pawn/amx_set_string_api.hpp"

namespace samp::pawn {
struct PawnNativeTestAccess {
    static void memory(PawnVm& vm) {
        vm.image_.assign(1024, 0); vm.header_.dat = 0; vm.ok_ = true;
        vm.amx_.stp = 512; vm.amx_.hea = 256; vm.amx_.stk = 384;
    }
    static samp::amx::cell call(PawnVm& vm, const char* name, std::initializer_list<samp::amx::cell> args) {
        return vm.native_functions_.at(name)({args.begin(), args.size()});
    }
    static samp::amx::cell get(const PawnVm& vm, std::size_t address) {
        samp::amx::cell result; std::memcpy(&result, vm.image_.data() + address, 4); return result;
    }
    static void text(PawnVm& vm,const char* value,bool packed=false) {
        amx_string::set_string(reinterpret_cast<samp::amx::cell*>(vm.image_.data()+128),value,packed,0,32);
    }
};
}
namespace {
using samp::amx::cell;
using Access = samp::pawn::PawnNativeTestAccess;
int failures = 0;
#define CHECK(x) do { if (!(x)) { std::printf("FAIL %d: %s\n", __LINE__, #x); ++failures; } } while(false)
struct Host : samp::pawn::NativeHost {
    struct Sent { std::uint8_t id; samp::proto::BitStream payload; };
    std::vector<Sent> sent;
    void send_vehicle_stream_in(samp::pawn::PlayerNativeState&, const samp::pawn::VehicleNativeState&) override {}
    void send_object(samp::pawn::PlayerNativeState&,const samp::pawn::ObjectNativeState&) override {CHECK(false);}
    int max_players() const override { return 10; }
    bool is_player_connected(int id) const override {
        const auto slot = static_cast<std::uint16_t>(id);
        return slot < players_.size() && players_[slot].in_use;
    }
    bool select_gamemode(std::string_view) override {CHECK(false);return false;}
    int add_custom_model(const samp::pawn::CustomModelSpec&) override { CHECK(false);return 0; }
    bool redirect_download(int,std::string_view) override { CHECK(false);return false; }
    void send_rpc(samp::server::RakNetPeer&, std::uint8_t id, const samp::proto::BitStream& payload) override { sent.push_back({id, payload}); }
    void set_game_mode_text(std::string_view) override {}
    void set_world_time(int) override {}
    void set_weather(int) override {}
    void set_gravity(float) override {}
    void kick_player(int) override {}
    void send_client_message(int, int, std::string_view) override {}
    void add_player_class(const samp::pawn::PlayerClassSpec&) override {}
    void set_player_interior(int, int) override {}
    void set_player_pos(int, float, float, float) override {}
    void set_player_facing_angle(int, float) override {}
    void set_camera_pos(int, float, float, float) override {}
    void set_camera_look_at(int, float, float, float, int) override {}
    void toggle_player_clock(int, std::uint8_t) override {}
};
void natives() {
    Host host; host.players_.resize(10);
    samp::server::RakNetPeer peer;
    auto& player = host.players_[2]; player.in_use = true; player.id = 2; player.peer = &peer;
    samp::pawn::PawnVm vm; Access::memory(vm); samp::pawn::register_server_natives(vm, host);
    CHECK(Access::call(vm, "IsPlayerConnected", {2}) == 1);
    CHECK(Access::call(vm, "IsPlayerConnected", {3}) == 0);
    CHECK(Access::call(vm, "IsPlayerConnected", {-1}) == 0);
    CHECK(Access::call(vm, "IsPlayerConnected", {65538}) == 1); // native uses ushort IDs
    CHECK(Access::call(vm, "GetPlayerWeapon", {3}) == -1);
    CHECK(Access::call(vm, "GetPlayerState", {2}) == 0);
    player.state = 1; player.keys = 0xdead; player.up_down = -128; player.left_right = 128;
    CHECK(Access::call(vm, "GetPlayerKeys", {2, 0, 4, 8}) == 1);
    CHECK(Access::get(vm, 0) == 0xdead && Access::get(vm, 4) == -128 && Access::get(vm, 8) == 128);
    CHECK(Access::call(vm, "GetPlayerKeys", {3, 0, 4, 8}) == 0);
    CHECK(Access::get(vm, 0) == 0xdead);
    player.health = 80; player.armour = 15; player.weapon = 24;
    player.x = 10; player.y = 20; player.z = 30; player.angle = 135;
    CHECK(Access::call(vm, "GetPlayerHealth", {2, 0}) == 1);
    CHECK(std::bit_cast<float>(Access::get(vm, 0)) == 80);
    CHECK(Access::call(vm, "GetPlayerArmour", {2, 4}) == 1);
    CHECK(std::bit_cast<float>(Access::get(vm, 4)) == 15);
    CHECK(Access::call(vm, "GetPlayerPos", {2, 0, 4, 8}) == 1);
    CHECK(std::bit_cast<float>(Access::get(vm, 8)) == 30);
    CHECK(Access::call(vm, "GetPlayerFacingAngle", {2, 0}) == 1);
    CHECK(std::bit_cast<float>(Access::get(vm, 0)) == 135);
    CHECK(Access::call(vm, "GetPlayerHealth", {2, 300}) == 0); // unallocated AMX gap
    CHECK(Access::call(vm, "SetPlayerHealth", {2, std::bit_cast<cell>(40.0f)}) == 1);
    CHECK(Access::call(vm, "SetPlayerArmour", {2, std::bit_cast<cell>(20.0f)}) == 1);
    CHECK(player.health == 80 && player.armour == 15); // observed state, not fabricated acknowledgement
    CHECK(Access::call(vm, "GivePlayerMoney", {2, 50}) == 1);
    CHECK(Access::call(vm, "GetPlayerMoney", {2}) == 50);
    CHECK(Access::call(vm, "GivePlayerWeapon", {2, 31, 100}) == 1);
    CHECK(Access::call(vm, "SetPlayerArmedWeapon", {2, 31}) == 1);
    CHECK(Access::call(vm, "GetPlayerWeapon", {2}) == 24);
    samp::client::WorldState world;
    samp::client::ServerRpcContext context{world, nullptr, 2};
    for (const auto& rpc : host.sent) CHECK(samp::client::apply_server_rpc(context, rpc.id, rpc.payload));
    CHECK(world.stream.local.health == 40 && world.stream.local.armour == 20);
    CHECK(world.stream.local.money == 50 && world.stream.local.armed_weapon == 31);
    host.sent.clear();
    CHECK(Access::call(vm, "ResetPlayerMoney", {2}) == 1);
    CHECK(player.money == 0 && host.sent.back().id == 20);
    CHECK(Access::call(vm, "ResetPlayerWeapons", {2}) == 1 && host.sent.back().id == 21);
    CHECK(Access::call(vm, "GivePlayerMoney", {3, 100}) == 0);
    player.money = std::numeric_limits<cell>::max();
    CHECK(Access::call(vm, "GivePlayerMoney", {2, 1}) == 1);
    CHECK(player.money == std::numeric_limits<cell>::min());
    player.state = 0;
    CHECK(Access::call(vm, "GetPlayerVelocity", {2, 0, 4, 8}) == 0);
    CHECK(Access::get(vm, 0) == 0 && Access::get(vm, 4) == 0 && Access::get(vm, 8) == 0);
    host.sent.clear();
    constexpr char title[]="~w~SA-MP: ~r~Bare Script";
    Access::text(vm,title);
    CHECK(Access::call(vm,"GameTextForPlayer",{65538,128,5000,5}) == 1);
    CHECK(host.sent.size() == 1 && host.sent[0].id == 73);
    const std::uint8_t header[]{5,0,0,0,0x88,0x13,0,0,sizeof(title)-1,0,0,0};
    CHECK(host.sent[0].payload.numberOfBitsUsed_ == (sizeof(header)+sizeof(title)-1)*8);
    CHECK(std::memcmp(host.sent[0].payload.data_.data(),header,sizeof(header)) == 0);
    CHECK(std::memcmp(host.sent[0].payload.data_.data()+12,title,sizeof(title)-1) == 0);
    std::vector<samp::client::GameCommand> commands;
    samp::client::ServerRpcContext text_context{world,&commands,2};
    CHECK(samp::client::apply_server_rpc(text_context,73,host.sent[0].payload));
    CHECK(commands.size() == 1 && std::holds_alternative<samp::client::GameTextCommand>(commands[0]));
    const auto& text = std::get<samp::client::GameTextCommand>(commands[0]);
    CHECK(text.text == title && text.time == 5000 && text.style == 5);
    Access::text(vm,title,true);
    CHECK(Access::call(vm,"GameTextForPlayer",{2,128,5000,5}) == 1);
    CHECK(host.sent[1].payload.data_ == host.sent[0].payload.data_);
    Access::text(vm,"");
    CHECK(Access::call(vm,"GameTextForPlayer",{2,128,5000,5}) == 0);
    CHECK(Access::call(vm,"GameTextForPlayer",{3,128,5000,5}) == 0 && host.sent.size() == 2);
    for(const std::int32_t length : {0,-1,200,201}) {
        samp::proto::BitStream message;
        const std::uint32_t style=5,duration=1000;
        message.write(&style,4);message.write(&duration,4);message.write(&length,4);
        const std::string value(length>0?length:0,'A');message.write(value.data(),value.size());
        commands.clear();CHECK(samp::client::apply_server_rpc(text_context,73,message));
        CHECK(commands.size() == (length==200?1:0));
    }
}
}
int main(int, char**) { natives(); std::printf("core native checks: %d failures\n", failures); return failures != 0; }
