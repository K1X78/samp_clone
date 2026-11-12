// The verification of the server to client RPC handlers.
//
// RPCs are driven through the public dispatcher with existing payload fixtures
// and the resulting world state is checked. These source regression tests do
// not independently establish binary or live GTA parity. The
// tests also cover the official pool guards: a handler must not
// create a player, a vehicle or an object the server never announced.
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <array>
#include <string>
#include <string_view>
#include <vector>

#include "samp/client/server_rpc.hpp"
#include "samp/client/asset_manager.hpp"
#include "samp/client/compressed_string_table.hpp"
#include "samp/proto/bitstream.hpp"

namespace {

using samp::client::MapObject;
using samp::client::ServerRpcContext;
using samp::client::WorldPlayer;
using samp::client::WorldVehicle;

class TestBitStream final : public samp::proto::BitStream {
public:
    using samp::proto::BitStream::BitStream;
    void writeUInt8(std::uint8_t value) { write(&value,1); }
    void writeUInt16(std::uint16_t value) {
        const std::uint8_t bytes[2]{static_cast<std::uint8_t>(value),
                                    static_cast<std::uint8_t>(value>>8)};
        write(bytes,sizeof(bytes));
    }
    void writeUInt32(std::uint32_t value) {
        const std::uint8_t bytes[4]{static_cast<std::uint8_t>(value),
            static_cast<std::uint8_t>(value>>8),static_cast<std::uint8_t>(value>>16),
            static_cast<std::uint8_t>(value>>24)};
        write(bytes,sizeof(bytes));
    }
    void writeFloat(float value) {
        std::uint32_t bits=0;
        std::memcpy(&bits,&value,sizeof(bits));
        writeUInt32(bits);
    }
    void writeBit(bool value) { if(value) write1(); else write0(); }
};
using BitStream=TestBitStream;

int g_failures = 0;

void check(bool condition, const char* expression, int line) {
    if (!condition) {
        std::printf("FAIL line %d: %s\n", line, expression);
        ++g_failures;
    }
}

#define CHECK(expression) check((expression), #expression, __LINE__)

bool near(float a, float b) {
    return std::fabs(a - b) < 1.0e-5f;
}

std::uint32_t float_bits(float value) {
    std::uint32_t bits = 0;
    std::memcpy(&bits, &value, sizeof(bits));
    return bits;
}

void put_u8(BitStream& bs, std::uint8_t value) { bs.writeUInt8(value); }
void put_u16(BitStream& bs, std::uint16_t value) { bs.writeUInt16(value); }
void put_u32(BitStream& bs, std::uint32_t value) { bs.writeUInt32(value); }
void put_i32(BitStream& bs, std::int32_t value) { bs.writeUInt32(static_cast<std::uint32_t>(value)); }
void put_f32(BitStream& bs, float value) { bs.writeFloat(value); }
void put_bit(BitStream& bs, bool value) { bs.writeBit(value); }
void put_str8(BitStream& bs, std::string_view text) {
    bs.writeUInt8(static_cast<std::uint8_t>(text.size()));
    bs.write(text.data(), text.size());
}

// The Huffman code of a symbol, from the official table.
std::uint32_t huffman_code_of(std::uint8_t symbol, std::uint8_t& length) {
    for (const samp::client::HuffmanCode& entry : samp::client::kHuffmanCodes) {
        if (entry.symbol == symbol) {
            length = entry.length;
            return entry.code;
        }
    }
    length = 0;
    return 0;
}

// Writes the compressed string of the RPC 36 and 61: the bit count and then
// the code of every character, most significant bit first.
void put_compressed(BitStream& bs, std::string_view text) {
    std::uint32_t bits = 0;
    for (const char character : text) {
        std::uint8_t length = 0;
        huffman_code_of(static_cast<std::uint8_t>(character), length);
        bits += length;
    }
    bs.writeUInt16(static_cast<std::uint16_t>(bits));
    for (const char character : text) {
        std::uint8_t length = 0;
        const std::uint32_t code = huffman_code_of(static_cast<std::uint8_t>(character), length);
        for (int bit = static_cast<int>(length) - 1; bit >= 0; --bit) {
            bs.writeBit(((code >> bit) & 1u) != 0);
        }
    }
}

WorldPlayer make_player(int id, const char* name) {
    WorldPlayer player;
    player.id = id;
    player.name = name;
    player.present = true;
    return player;
}

WorldVehicle make_vehicle(std::uint16_t id) {
    WorldVehicle vehicle;
    vehicle.id = id;
    vehicle.present = true;
    return vehicle;
}

MapObject make_object(std::uint16_t id) {
    MapObject object;
    object.id = id;
    return object;
}

struct TestWorldState final : samp::client::WorldState {
    WorldPlayer& add_player(WorldPlayer value) {
        const auto id=value.id;
        players_[id]=std::move(value);
        return players_.at(id);
    }
    WorldPlayer* player(int id) {
        const auto it=players_.find(id);
        return it==players_.end()?nullptr:&it->second;
    }
    const WorldPlayer* player(int id) const {
        const auto it=players_.find(id);
        return it==players_.end()?nullptr:&it->second;
    }
    WorldPlayer& mutable_player(int id) { return players_[id]; }
    WorldVehicle& add_vehicle(WorldVehicle value) {
        const auto id=value.id;
        vehicles_[id]=std::move(value);
        return vehicles_.at(id);
    }
    MapObject& add_object(MapObject value) {
        const auto id=value.id;
        objects_[id]=std::move(value);
        return objects_.at(id);
    }
    const auto& vehicles() const { return vehicles_; }
    const auto& objects() const { return objects_; }
    int selected_class() const { return selected_class_; }
};

// The test-side mutable lookups, mirroring what the handlers do.
inline constexpr auto mutable_player = [](samp::client::WorldState& world,
                                          int id) -> WorldPlayer* {
    const auto it=world.players_.find(id);
    return it==world.players_.end()?nullptr:&it->second;
};

inline constexpr auto mutable_vehicle = [](samp::client::WorldState& world,
                                           std::uint16_t id) -> WorldVehicle* {
    const auto& vehicles = world.vehicles_;
    const auto entry = vehicles.find(id);
    return entry == vehicles.end() ? nullptr : const_cast<WorldVehicle*>(&entry->second);
};

inline constexpr auto mutable_object = [](samp::client::WorldState& world,
                                          std::uint16_t id) -> MapObject* {
    const auto& objects = world.objects_;
    const auto entry = objects.find(id);
    return entry == objects.end() ? nullptr : const_cast<MapObject*>(&entry->second);
};

struct Fixture {
    TestWorldState world;
    std::vector<samp::client::GameCommand> commands;
    std::string local_name = "Player";
    std::uint32_t local_colour = 0;
    ServerRpcContext context{world, &commands, 0, &local_name, &local_colour};
};

// 11: SetPlayerName.  A refused rename of another player is dropped; the local
// player is renamed either way.
void test_11() {
    Fixture f;
    BitStream bs;
    put_u16(bs, 0);
    put_u8(bs, 5);
    bs.write("Alice", 5);
    put_u8(bs, 1);
    CHECK(samp::client::apply_server_rpc(f.context, 11, bs));
    CHECK(f.world.stream.local.name == "Alice");
    CHECK(f.local_name == "Alice");

    f.world.add_player(make_player(7, "Bob"));
    BitStream refused;
    put_u16(refused, 7);
    put_u8(refused, 3);
    refused.write("Zed", 3);
    put_u8(refused, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 11, refused));
    CHECK(f.world.player(7)->name == "Bob");

    BitStream accepted;
    put_u16(accepted, 7);
    put_u8(accepted, 3);
    accepted.write("Zed", 3);
    put_u8(accepted, 1);
    CHECK(samp::client::apply_server_rpc(f.context, 11, accepted));
    CHECK(f.world.player(7)->name == "Zed");

    BitStream too_long;
    put_u16(too_long, 7);
    put_u8(too_long, 25);
    CHECK(samp::client::apply_server_rpc(f.context, 11, too_long));
    CHECK(f.world.player(7)->name == "Zed");
}

// 12: SetPlayerPosition, and 13: the find-z variant.
void test_12_13() {
    Fixture f;
    f.world.stream.local.velocity_x = 9.0f;
    f.world.stream.local.velocity_y = 9.0f;
    f.world.stream.local.velocity_z = 9.0f;
    BitStream bs;
    put_f32(bs, 1.0f);
    put_f32(bs, 2.0f);
    put_f32(bs, 3.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 12, bs));
    CHECK(near(f.world.stream.local.x, 1.0f));
    CHECK(near(f.world.stream.local.y, 2.0f));
    CHECK(near(f.world.stream.local.z, 3.0f));
    CHECK(near(f.world.stream.local.velocity_x, 0.0f));
    CHECK(!f.world.stream.local.find_ground_z);

    BitStream find_z;
    put_f32(find_z, 4.0f);
    put_f32(find_z, 5.0f);
    put_f32(find_z, 6.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 13, find_z));
    CHECK(near(f.world.stream.local.x, 4.0f));
    CHECK(near(f.world.stream.local.z, 6.0f));
    CHECK(f.world.stream.local.find_ground_z);
}

// 14: health, 15: controllable, 16: play sound.
void test_14_15_16() {
    Fixture f;
    BitStream health;
    put_f32(health, 75.5f);
    CHECK(samp::client::apply_server_rpc(f.context, 14, health));
    CHECK(near(f.world.stream.local.health, 75.5f));

    BitStream controllable;
    put_u8(controllable, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 15, controllable));
    CHECK(!f.world.stream.local.controllable);

    BitStream sound;
    put_u32(sound, 42);
    put_f32(sound, 10.0f);
    put_f32(sound, 20.0f);
    put_f32(sound, 30.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 16, sound));
    CHECK(f.world.stream.local.last_sound_id == 42);
    CHECK(near(f.world.stream.local.sound_x, 10.0f));
    CHECK(near(f.world.stream.local.sound_y, 20.0f));
    CHECK(near(f.world.stream.local.sound_z, 30.0f));
}

// 17: world bounds, 18: money, 20: reset money, 21: reset weapons.
void test_17_18_20_21() {
    Fixture f;
    BitStream bounds;
    put_f32(bounds, -3000.0f);
    put_f32(bounds, -2000.0f);
    put_f32(bounds, 3000.0f);
    put_f32(bounds, 2000.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 17, bounds));
    CHECK(f.world.stream.world_bounds.set);
    CHECK(near(f.world.stream.world_bounds.min_x, -3000.0f));
    CHECK(near(f.world.stream.world_bounds.max_y, 2000.0f));

    f.world.stream.local.money = 100;
    BitStream money;
    put_i32(money, -30);
    CHECK(samp::client::apply_server_rpc(f.context, 18, money));
    CHECK(f.world.stream.local.money == 70);

    BitStream reset_money;
    CHECK(samp::client::apply_server_rpc(f.context, 20, reset_money));
    CHECK(f.world.stream.local.money == 0);

    f.world.stream.local.weapon = 24;
    f.world.stream.local.ammo = 50;
    f.world.stream.local.armed_weapon = 24;
    BitStream reset_weapons;
    CHECK(samp::client::apply_server_rpc(f.context, 21, reset_weapons));
    CHECK(f.world.stream.local.weapon == 0);
    CHECK(f.world.stream.local.ammo == 0);
    CHECK(f.world.stream.local.armed_weapon == 0);
}

// 22: give weapon, 66: armour, 67: armed weapon.
void test_22_66_67() {
    Fixture f;
    BitStream weapon;
    put_u32(weapon, 24);
    put_u32(weapon, 500);
    CHECK(samp::client::apply_server_rpc(f.context, 22, weapon));
    CHECK(f.world.stream.local.weapon == 24);
    CHECK(f.world.stream.local.ammo == 500);

    BitStream armour;
    put_f32(armour, 50.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 66, armour));
    CHECK(near(f.world.stream.local.armour, 50.0f));

    BitStream armed;
    put_u32(armed, 31);
    CHECK(samp::client::apply_server_rpc(f.context, 67, armed));
    CHECK(f.world.stream.local.armed_weapon == 31);
    BitStream invalid;
    put_u32(invalid, 47);
    CHECK(samp::client::apply_server_rpc(f.context, 67, invalid));
    CHECK(f.world.stream.local.armed_weapon == 31);
}

// 24: the sixteen vehicle component states.  A vehicle the server did not
// stream in is untouched.
void test_24() {
    Fixture f;
    f.world.add_vehicle(make_vehicle(3));
    BitStream bs;
    put_u16(bs, 3);
    for (std::uint8_t i = 0; i < 16; ++i) {
        put_u8(bs, static_cast<std::uint8_t>(i + 1));
    }
    CHECK(samp::client::apply_server_rpc(f.context, 24, bs));
    for (std::size_t i = 0; i < 16; ++i) {
        CHECK(mutable_vehicle(f.world, 3)->component_states[i] == i + 1);
    }

    BitStream absent;
    put_u16(absent, 9);
    for (std::uint8_t i = 0; i < 16; ++i) {
        put_u8(absent, 1);
    }
    CHECK(samp::client::apply_server_rpc(f.context, 24, absent));
    CHECK(mutable_vehicle(f.world, 9) == nullptr);
}

// 26: a remote player enters a vehicle.  Both pool entries must exist.
void test_26() {
    Fixture f;
    f.world.add_player(make_player(2, "Rider"));
    f.world.add_vehicle(make_vehicle(3));
    BitStream bs;
    put_u16(bs, 2);
    put_u16(bs, 3);
    put_u8(bs, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 26, bs));
    CHECK(f.world.player(2)->in_vehicle);
    CHECK(f.world.player(2)->vehicle_id == 3);
    CHECK(mutable_vehicle(f.world, 3)->driver == 2);

    BitStream absent;
    put_u16(absent, 77);
    put_u16(absent, 3);
    put_u8(absent, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 26, absent));
    CHECK(f.world.player(77) == nullptr);
}

// 38/39: the race checkpoint.
void test_38_39() {
    Fixture f;
    BitStream bs;
    put_u8(bs, 2);
    put_f32(bs, 1.0f);
    put_f32(bs, 2.0f);
    put_f32(bs, 3.0f);
    put_f32(bs, 4.0f);
    put_f32(bs, 5.0f);
    put_f32(bs, 6.0f);
    put_f32(bs, 7.5f);
    CHECK(samp::client::apply_server_rpc(f.context, 38, bs));
    const auto& checkpoint = f.world.stream.race_checkpoint;
    CHECK(checkpoint.active);
    CHECK(checkpoint.type == 2);
    CHECK(near(checkpoint.x, 1.0f));
    CHECK(near(checkpoint.next_z, 6.0f));
    CHECK(near(checkpoint.radius, 7.5f));

    BitStream disable;
    CHECK(samp::client::apply_server_rpc(f.context, 39, disable));
    CHECK(!f.world.stream.race_checkpoint.active);
}

// 41/42: the audio stream.
void test_41_42() {
    Fixture f;
    BitStream bs;
    put_str8(bs, "http://radio");
    put_f32(bs, 1.0f);
    put_f32(bs, 2.0f);
    put_f32(bs, 3.0f);
    put_f32(bs, 50.0f);
    put_u8(bs, 1);
    CHECK(samp::client::apply_server_rpc(f.context, 41, bs));
    const auto& audio = f.world.stream.audio_stream;
    CHECK(audio.active);
    CHECK(audio.url == "http://radio");
    CHECK(near(audio.radius, 50.0f));
    CHECK(audio.use_pos);

    BitStream stop;
    CHECK(samp::client::apply_server_rpc(f.context, 42, stop));
    CHECK(!f.world.stream.audio_stream.active);
    CHECK(f.world.stream.audio_stream.url.empty());
}

// 45/46/47: the object position, rotation and destroy.
void test_45_46_47() {
    Fixture f;
    f.world.add_object(make_object(5));
    BitStream pos;
    put_u16(pos, 5);
    put_f32(pos, 1.0f);
    put_f32(pos, 2.0f);
    put_f32(pos, 3.0f);
    put_f32(pos, 99.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 45, pos));
    CHECK(near(mutable_object(f.world, 5)->x, 1.0f));
    CHECK(near(mutable_object(f.world, 5)->z, 3.0f));

    BitStream rot;
    put_u16(rot, 5);
    put_f32(rot, 10.0f);
    put_f32(rot, 20.0f);
    put_f32(rot, 30.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 46, rot));
    CHECK(near(mutable_object(f.world, 5)->rotation_y, 20.0f));

    BitStream destroy;
    put_u16(destroy, 5);
    CHECK(samp::client::apply_server_rpc(f.context, 47, destroy));
    CHECK(mutable_object(f.world, 5) == nullptr);
}

// 48: the virtual world clears the two collision flags.
void test_48() {
    Fixture f;
    f.world.stream.local.virtual_world_flags = 3;
    BitStream bs;
    put_u32(bs, 7);
    CHECK(samp::client::apply_server_rpc(f.context, 48, bs));
    CHECK(f.world.stream.local.virtual_world == 7);
    CHECK(f.world.stream.local.virtual_world_flags == 0);
}

// 55: the death message and its "no victim" sentinel.
void test_55() {
    Fixture f;
    BitStream bs;
    put_u16(bs, 1);
    put_u16(bs, 2);
    put_u8(bs, 3);
    CHECK(samp::client::apply_server_rpc(f.context, 55, bs));
    CHECK(f.world.stream.death_messages.size() == 1);
    CHECK(f.world.stream.death_messages.back().reason == 3);

    BitStream sentinel;
    put_u16(sentinel, 1);
    put_u16(sentinel, 0xFFFF);
    put_u8(sentinel, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 55, sentinel));
    CHECK(f.world.stream.death_messages.size() == 1);
}

// 57: remove a vehicle component.
void test_57() {
    Fixture f;
    f.world.add_vehicle(make_vehicle(4));
    mutable_vehicle(f.world, 4)->component_states[3] = 1;
    BitStream bs;
    put_u16(bs, 4);
    put_u16(bs, 3);
    CHECK(samp::client::apply_server_rpc(f.context, 57, bs));
    CHECK(mutable_vehicle(f.world, 4)->removed_components.size() == 1);
    CHECK(mutable_vehicle(f.world, 4)->component_states[3] == 0);
}

// 58/80: the text label and the name tag.
void test_58_80() {
    Fixture f;
    BitStream label;
    put_u16(label, 5);
    CHECK(samp::client::apply_server_rpc(f.context, 58, label));
    CHECK(f.world.stream.text_labels.find(5) == f.world.stream.text_labels.end());

    f.world.add_player(make_player(6, "Tagged"));
    BitStream tag;
    put_u16(tag, 6);
    put_u8(tag, 1);
    CHECK(samp::client::apply_server_rpc(f.context, 80, tag));
    CHECK(f.world.stream.name_tags[6]);

    BitStream absent;
    put_u16(absent, 9);
    put_u8(absent, 1);
    CHECK(samp::client::apply_server_rpc(f.context, 80, absent));
    CHECK(f.world.stream.name_tags.find(9) == f.world.stream.name_tags.end());
}

// 59: the chat bubble.
void test_59() {
    Fixture f;
    f.world.add_player(make_player(6, "Talker"));
    BitStream bs;
    put_u16(bs, 6);
    put_u32(bs, 0xFF00FF00u);
    put_f32(bs, 20.0f);
    put_u32(bs, 5000);
    put_str8(bs, "hello");
    CHECK(samp::client::apply_server_rpc(f.context, 59, bs));
    const auto& bubble = f.world.stream.chat_bubbles[6];
    CHECK(bubble.colour == 0xFF00FF00u);
    CHECK(near(bubble.distance, 20.0f));
    CHECK(bubble.expire_time == 5000);
    CHECK(bubble.text == "hello");

    BitStream absent;
    put_u16(absent, 9);
    put_u32(absent, 0);
    put_f32(absent, 0.0f);
    put_u32(absent, 0);
    put_str8(absent, "x");
    CHECK(samp::client::apply_server_rpc(f.context, 59, absent));
    CHECK(f.world.stream.chat_bubbles.find(9) == f.world.stream.chat_bubbles.end());
}

// 60/152: the world time and the weather.
void test_60_152() {
    Fixture f;
    BitStream time;
    put_u32(time, 720);
    CHECK(samp::client::apply_server_rpc(f.context, 60, time));
    CHECK(f.world.stream.world_time_minutes == 720);

    BitStream weather;
    put_u8(weather, 19);
    CHECK(samp::client::apply_server_rpc(f.context, 152, weather));
    CHECK(f.world.stream.weather == 19);
}

// 63/95: id32 followed by model32/type32/xyz float32 (20 bytes).
void test_63_95() {
    Fixture f;
    BitStream create;
    put_u32(create, 42);
    put_u32(create,371);put_u32(create,15);
    put_f32(create,1.25f);put_f32(create,-2.5f);put_f32(create,100.f);
    CHECK(samp::client::apply_server_rpc(f.context, 95, create));
    CHECK(f.world.stream.pickups[42].id == 42);
    CHECK(f.world.stream.pickups[42].model==371 && f.world.stream.pickups[42].type==15);
    CHECK(f.world.stream.pickups[42].x==1.25f && f.world.stream.pickups[42].y==-2.5f && f.world.stream.pickups[42].z==100.f);

    BitStream destroy;
    put_u32(destroy, 42);
    CHECK(samp::client::apply_server_rpc(f.context, 63, destroy));
    CHECK(f.world.stream.pickups.find(42) == f.world.stream.pickups.end());
}

// 65/91/98/106: the vehicle interior, velocity, tyre status and damage status.
void test_65_91_98_106() {
    Fixture f;
    f.world.add_vehicle(make_vehicle(8));
    BitStream interior;
    put_u16(interior, 8);
    put_u8(interior, 3);
    CHECK(samp::client::apply_server_rpc(f.context, 65, interior));
    CHECK(mutable_vehicle(f.world, 8)->interior == 3);

    f.world.stream.local.in_vehicle = true;
    f.world.stream.local.vehicle_id = 8;
    BitStream velocity;
    put_u8(velocity, 1);
    put_f32(velocity, 1.0f);
    put_f32(velocity, 2.0f);
    put_f32(velocity, 3.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 91, velocity));
    CHECK(mutable_vehicle(f.world, 8)->angular_velocity);
    CHECK(near(mutable_vehicle(f.world, 8)->velocity_y, 2.0f));

    BitStream tires;
    put_u16(tires, 8);
    put_u8(tires, 5);
    CHECK(samp::client::apply_server_rpc(f.context, 98, tires));
    CHECK(mutable_vehicle(f.world, 8)->damage_tires == 5);

    BitStream damage;
    put_u16(damage, 8);
    put_u32(damage, 1);
    put_u32(damage, 2);
    put_u8(damage, 3);
    put_u8(damage, 4);
    CHECK(samp::client::apply_server_rpc(f.context, 106, damage));
    CHECK(mutable_vehicle(f.world, 8)->damage_panels == 1);
    CHECK(mutable_vehicle(f.world, 8)->damage_doors == 2);
    CHECK(mutable_vehicle(f.world, 8)->damage_lights == 3);
    CHECK(mutable_vehicle(f.world, 8)->damage_tires == 4);
}

// 69/72/89: team, colour and fighting style, local and remote.
void test_69_72_89() {
    Fixture f;
    f.world.add_player(make_player(7, "Remote"));

    BitStream team;
    put_u16(team, 0);
    put_u8(team, 4);
    CHECK(samp::client::apply_server_rpc(f.context, 69, team));
    CHECK(f.world.stream.local.team == 4);

    BitStream remote_team;
    put_u16(remote_team, 7);
    put_u8(remote_team, 5);
    CHECK(samp::client::apply_server_rpc(f.context, 69, remote_team));
    CHECK(f.world.player(7)->team == 5);

    BitStream colour;
    put_u16(colour, 0);
    put_u32(colour, 0x11223344u);
    CHECK(samp::client::apply_server_rpc(f.context, 72, colour));
    CHECK(f.world.stream.local.colour == 0x11223344u);
    CHECK(f.local_colour == 0x11223344u);

    BitStream remote_colour;
    put_u16(remote_colour, 7);
    put_u32(remote_colour, 0x55667788u);
    CHECK(samp::client::apply_server_rpc(f.context, 72, remote_colour));
    CHECK(f.world.player(7)->colour == 0x55667788u);

    BitStream style;
    put_u16(style, 0);
    put_u8(style, 5);
    CHECK(samp::client::apply_server_rpc(f.context, 89, style));
    CHECK(f.world.stream.local.fighting_style == 5);

    BitStream remote_style;
    put_u16(remote_style, 7);
    put_u8(remote_style, 6);
    CHECK(samp::client::apply_server_rpc(f.context, 89, remote_style));
    CHECK(f.world.player(7)->fighting_style == 6);
}

// 70/71: the local player enters and leaves a vehicle.
void test_70_71() {
    Fixture f;
    f.world.add_vehicle(make_vehicle(9));
    BitStream enter;
    put_u16(enter, 9);
    put_u8(enter, 1);
    CHECK(samp::client::apply_server_rpc(f.context, 70, enter));
    CHECK(f.world.stream.local.in_vehicle);
    CHECK(f.world.stream.local.vehicle_id == 9);
    CHECK(f.world.stream.local.vehicle_seat == 1);

    BitStream leave;
    CHECK(samp::client::apply_server_rpc(f.context, 71, leave));
    CHECK(!f.world.stream.local.in_vehicle);
}

// 74/77/78: the menus and the forced class selection.
void test_74_77_78() {
    Fixture f;
    BitStream force;
    CHECK(samp::client::apply_server_rpc(f.context, 74, force));
    CHECK(f.world.stream.force_class_selection);
    CHECK(f.world.selected_class() == -1);

    BitStream show;
    put_u8(show, 2);
    CHECK(samp::client::apply_server_rpc(f.context, 77, show));
    CHECK(f.world.stream.active_menu == 2);

    BitStream hide;
    put_u8(hide, 2);
    CHECK(samp::client::apply_server_rpc(f.context, 78, hide));
    CHECK(f.world.stream.active_menu == -1);
}

// 79: the explosion.
void test_79() {
    Fixture f;
    BitStream bs;
    put_f32(bs, 1.0f);
    put_f32(bs, 2.0f);
    put_f32(bs, 3.0f);
    put_u32(bs, 7);
    put_f32(bs, 12.5f);
    CHECK(samp::client::apply_server_rpc(f.context, 79, bs));
    CHECK(f.world.stream.explosions.size() == 1);
    CHECK(f.world.stream.explosions.back().type == 7);
    CHECK(near(f.world.stream.explosions.back().radius, 12.5f));
}

// 81/82/157/158: the camera.
void test_81_82_157_158() {
    Fixture f;
    f.world.add_object(make_object(8));
    BitStream attach;
    put_u16(attach, 8);
    CHECK(samp::client::apply_server_rpc(f.context, 81, attach));
    CHECK(f.world.stream.camera.attached_object == 8);
    CHECK(f.world.stream.camera.set);

    BitStream absent;
    put_u16(absent, 99);
    CHECK(samp::client::apply_server_rpc(f.context, 81, absent));
    CHECK(f.world.stream.camera.attached_object == 8);

    BitStream interpolate;
    put_bit(interpolate, true);
    for (const float value : {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f}) {
        put_f32(interpolate, value);
    }
    put_u32(interpolate, 100);
    put_u8(interpolate, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 82, interpolate));
    CHECK(f.world.stream.camera.interpolating);
    CHECK(f.world.stream.camera.interpolation_mode == 2);
    CHECK(near(f.world.stream.camera.look_z, 6.0f));

    BitStream zero_time;
    put_bit(zero_time, false);
    for (const float value : {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}) {
        put_f32(zero_time, value);
    }
    put_u32(zero_time, 0);
    put_u8(zero_time, 1);
    CHECK(samp::client::apply_server_rpc(f.context, 82, zero_time));
    CHECK(near(f.world.stream.camera.x, 1.0f));

    BitStream position;
    put_f32(position, 10.0f);
    put_f32(position, 20.0f);
    put_f32(position, 30.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 157, position));
    CHECK(near(f.world.stream.camera.y, 20.0f));

    BitStream look_at;
    put_f32(look_at, 7.0f);
    put_f32(look_at, 8.0f);
    put_f32(look_at, 9.0f);
    put_u8(look_at, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 158, look_at));
    CHECK(near(f.world.stream.camera.look_x, 7.0f));
    CHECK(f.world.stream.camera.interpolation_mode == 2);
}

// 85/108/120/121: the gang zones.
void test_85_108_120_121() {
    Fixture f;
    BitStream show;
    put_u16(show, 3);
    put_f32(show, 1.0f);
    put_f32(show, 2.0f);
    put_f32(show, 3.0f);
    put_f32(show, 4.0f);
    put_u32(show, 0xFF0000FFu);
    CHECK(samp::client::apply_server_rpc(f.context, 108, show));
    CHECK(f.world.stream.gang_zones[3].shown);
    CHECK(near(f.world.stream.gang_zones[3].max_y, 4.0f));

    BitStream flash;
    put_u16(flash, 3);
    put_u32(flash, 0x00FF00FFu);
    CHECK(samp::client::apply_server_rpc(f.context, 121, flash));
    CHECK(f.world.stream.gang_zones[3].flashing);

    BitStream stop;
    put_u16(stop, 3);
    CHECK(samp::client::apply_server_rpc(f.context, 85, stop));
    CHECK(!f.world.stream.gang_zones[3].flashing);

    BitStream hide;
    put_u16(hide, 3);
    CHECK(samp::client::apply_server_rpc(f.context, 120, hide));
    CHECK(!f.world.stream.gang_zones[3].shown);

    BitStream absent;
    put_u16(absent, 9);
    put_u32(absent, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 121, absent));
    CHECK(f.world.stream.gang_zones.find(9) == f.world.stream.gang_zones.end());
}

// 56/144: map icon placement and removal.
void test_56_144() {
    Fixture f;
    BitStream set;
    put_u8(set, 7);
    put_f32(set, 1.0f); put_f32(set, 2.0f); put_f32(set, 3.0f);
    put_u8(set, 1); put_u32(set, 0xAABBCCDDu); put_u8(set, 2);
    CHECK(samp::client::apply_server_rpc(f.context, 56, set));
    const auto& icon = f.world.icons_.at(7);
    CHECK(icon.id == 7 && near(icon.x, 1.0f) && near(icon.y, 2.0f) && near(icon.z, 3.0f) &&
          icon.type == 1 && icon.colour == 0xAABBCCDDu && icon.style == 2);

    BitStream remove;
    put_u8(remove, 7);
    CHECK(samp::client::apply_server_rpc(f.context, 144, remove));
    CHECK(f.world.icons_.find(7) == f.world.icons_.end());
}

// 86/87: the animation and its clear.
void test_86_87() {
    Fixture f;
    BitStream animation;
    put_u16(animation, 0);
    put_str8(animation, "ped");
    put_str8(animation, "idle");
    put_u32(animation, 4);
    put_bit(animation, true);
    put_bit(animation, false);
    put_bit(animation, true);
    put_bit(animation, false);
    put_u32(animation, 500);
    CHECK(samp::client::apply_server_rpc(f.context, 86, animation));
    CHECK(f.world.stream.local.animation_library == "ped");
    CHECK(f.world.stream.local.animation_name == "idle");
    CHECK(f.world.stream.local.animation_loop);
    CHECK(f.world.stream.local.animation_lock_y);
    CHECK(f.world.stream.local.animation_time == 500);

    f.world.add_player(make_player(4, "Animated"));
    BitStream remote;
    put_u16(remote, 4);
    put_str8(remote, "car");
    put_str8(remote, "drive");
    put_u32(remote, 4);
    put_bit(remote, false);
    put_bit(remote, true);
    put_bit(remote, false);
    put_bit(remote, true);
    put_u32(remote, 1000);
    CHECK(samp::client::apply_server_rpc(f.context, 86, remote));
    CHECK(f.world.player(4)->animation_applied);
    CHECK(f.world.player(4)->animation_lock_x);

    BitStream absent;
    put_u16(absent, 77);
    put_str8(absent, "x");
    put_str8(absent, "y");
    put_u32(absent, 0);
    for (int i = 0; i < 4; ++i) put_bit(absent, false);
    put_u32(absent, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 86, absent));
    CHECK(f.world.player(77) == nullptr);

    BitStream clear;
    put_u16(clear, 0);
    CHECK(samp::client::apply_server_rpc(f.context, 87, clear));
    CHECK(f.world.stream.local.animation_library.empty());

    BitStream clear_remote;
    put_u16(clear_remote, 4);
    CHECK(samp::client::apply_server_rpc(f.context, 87, clear_remote));
    CHECK(!f.world.player(4)->animation_applied);
}

// 88/90: the special action, the velocity, the interior.
void test_88_90_156() {
    Fixture f;
    BitStream action;
    put_u8(action, 7);
    CHECK(samp::client::apply_server_rpc(f.context, 88, action));
    CHECK(f.world.stream.local.special_action == 7);

    BitStream velocity;
    put_f32(velocity, 1.0f);
    put_f32(velocity, -2.0f);
    put_f32(velocity, 3.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 90, velocity));
    CHECK(near(f.world.stream.local.velocity_y, -2.0f));

    BitStream interior;
    put_u8(interior, 9);
    CHECK(samp::client::apply_server_rpc(f.context, 156, interior));
    CHECK(f.world.stream.local.interior == 9);
}

// 92/104/111: gravity, stunt bonus, widescreen.
void test_146_104_111() {
    Fixture f;
    BitStream gravity;
    put_f32(gravity, 0.008f);
    CHECK(samp::client::apply_server_rpc(f.context, 146, gravity));
    CHECK(near(f.world.stream.gravity, 0.008f));

    BitStream stunt;
    put_bit(stunt, true);
    CHECK(samp::client::apply_server_rpc(f.context, 104, stunt));
    CHECK(f.world.stream.stunt_bonus);
    CHECK(f.world.stream.local.stunt_bonus);

    BitStream wide;
    put_u8(wide, 1);
    CHECK(samp::client::apply_server_rpc(f.context, 111, wide));
    CHECK(f.world.stream.widescreen);
    CHECK(f.world.stream.local.widescreen);
}

// 99: MoveObject reads the current position, the target, the rotation and the
// speed and applies the last seven words.
void test_99() {
    Fixture f;
    f.world.add_object(make_object(11));
    BitStream bs;
    put_u16(bs, 11);
    for (const float value : {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f}) {
        put_f32(bs, value);
    }
    CHECK(samp::client::apply_server_rpc(f.context, 99, bs));
    const MapObject* object = mutable_object(f.world, 11);
    CHECK(object->moving);
    CHECK(near(object->target_x, 4.0f));
    CHECK(near(object->target_y, 5.0f));
    CHECK(near(object->target_z, 6.0f));
    CHECK(near(object->rotation_x, 7.0f));
    CHECK(near(object->rotation_y, 8.0f));
    CHECK(near(object->rotation_z, 9.0f));
    CHECK(near(object->speed, 10.0f));

    BitStream stop;
    put_u16(stop, 11);
    CHECK(samp::client::apply_server_rpc(f.context, 122, stop));
    CHECK(!object->moving);
    CHECK(near(object->x, 4.0f));
}

// 105/135: the text draw string and destroy.
void test_105_135() {
    Fixture f;
    samp::client::WorldTextDraw draw;
    draw.id = 10;
    draw.text = "old";
    f.world.stream.text_draws[10] = draw;
    BitStream string;
    put_u16(string, 10);
    put_u16(string, 3);
    string.write("new", 3);
    CHECK(samp::client::apply_server_rpc(f.context, 105, string));
    CHECK(f.world.stream.text_draws[10].text == "new");

    BitStream absent;
    put_u16(absent, 99);
    put_u16(absent, 1);
    absent.write("x", 1);
    CHECK(samp::client::apply_server_rpc(f.context, 105, absent));
    CHECK(f.world.stream.text_draws.find(99) == f.world.stream.text_draws.end());

    BitStream destroy;
    put_u16(destroy, 10);
    CHECK(samp::client::apply_server_rpc(f.context, 135, destroy));
    CHECK(f.world.stream.text_draws.find(10) == f.world.stream.text_draws.end());
}

// 107/112: the checkpoint and the crime report.
void test_107_112() {
    Fixture f;
    BitStream checkpoint;
    for (const float value : {1.0f, 2.0f, 3.0f, 4.0f}) {
        put_f32(checkpoint, value);
    }
    CHECK(samp::client::apply_server_rpc(f.context, 107, checkpoint));
    CHECK(f.world.stream.checkpoint.active);
    CHECK(near(f.world.stream.checkpoint.radius, 4.0f));

    BitStream crime;
    put_u16(crime, 5);
    put_u32(crime, 1);
    put_u32(crime, 411);
    put_u32(crime, 0xAABBCCDDu);
    put_u32(crime, 3);
    put_u32(crime, float_bits(10.0f));
    put_u32(crime, float_bits(20.0f));
    put_u32(crime, float_bits(30.0f));
    CHECK(samp::client::apply_server_rpc(f.context, 112, crime));
    const auto& report = f.world.stream.crime_reports.back();
    CHECK(report.suspect == 5);
    CHECK(report.in_vehicle);
    CHECK(report.vehicle_model == 411);
    CHECK(report.vehicle_colour == 0xAABBCCDDu);
    CHECK(report.crime == 3);
    CHECK(near(report.x, 10.0f));
    CHECK(near(report.y, 20.0f));
    CHECK(near(report.z, 30.0f));
}

// 122: stop an object at its target.
void test_122() {
    Fixture f;
    MapObject object = make_object(12);
    object.moving = true;
    object.target_x = 7.0f;
    object.target_y = 8.0f;
    object.target_z = 9.0f;
    f.world.add_object(object);
    BitStream bs;
    put_u16(bs, 12);
    CHECK(samp::client::apply_server_rpc(f.context, 122, bs));
    CHECK(!mutable_object(f.world, 12)->moving);
    CHECK(near(mutable_object(f.world, 12)->z, 9.0f));
}

// 137/138/163: the join, the quit and the stream out.
void test_137_138_163() {
    Fixture f;
    BitStream join;
    put_u16(join, 9);
    put_u32(join, 0xFF0000FFu);
    put_u8(join, 1);
    put_str8(join, "Carl");
    CHECK(samp::client::apply_server_rpc(f.context, 137, join));
    CHECK(f.world.player(9) != nullptr);
    CHECK(f.world.player(9)->name == "Carl");
    CHECK(f.world.player(9)->npc);
    CHECK(f.world.player(9)->colour == 0xFF0000FFu);

    BitStream long_name;
    put_u16(long_name, 10);
    put_u32(long_name, 0);
    put_u8(long_name, 0);
    put_str8(long_name, "1234567890123456789012345");
    CHECK(samp::client::apply_server_rpc(f.context, 137, long_name));
    CHECK(f.world.player(10) == nullptr);

    BitStream stream_out;
    put_u16(stream_out, 9);
    CHECK(samp::client::apply_server_rpc(f.context, 163, stream_out));
    CHECK(!f.world.player(9)->streamed_in);

    BitStream quit;
    put_u16(quit, 9);
    put_u8(quit, 1);
    CHECK(samp::client::apply_server_rpc(f.context, 138, quit));
    CHECK(f.world.player(9) == nullptr);
}

// The handlers of the remaining inbound table: the clock, the skills, the
// labels and dialogs, the editor, the actors, the vehicles and the models.
void test_packet_handlers() {
    // 36/58: the text label and its hide.
    {
        Fixture f;
        BitStream label;
        put_u16(label, 5);
        put_u32(label, 0xFF00FF00u);
        put_f32(label, 1.0f);
        put_f32(label, 2.0f);
        put_f32(label, 3.0f);
        put_f32(label, 40.0f);
        put_u8(label, 1);
        put_u16(label, 2);
        put_u16(label, 3);
        put_compressed(label, "Hi");
        CHECK(samp::client::apply_server_rpc(f.context, 36, label));
        const auto stored = f.world.stream.text_labels.find(5);
        CHECK(stored != f.world.stream.text_labels.end());
        if (stored != f.world.stream.text_labels.end()) {
            CHECK(stored->second.text == "Hi");
            CHECK(stored->second.colour == 0xFF00FF00u);
            CHECK(stored->second.line_of_sight);
            CHECK(stored->second.attached_player == 2);
            CHECK(stored->second.attached_vehicle == 3);
            CHECK(near(stored->second.draw_distance, 40.0f));
        }

        BitStream player_label;
        put_u16(player_label, 0x801);
        put_u32(player_label, 0);
        put_f32(player_label, 0.0f);
        put_f32(player_label, 0.0f);
        put_f32(player_label, 0.0f);
        put_f32(player_label, 1.0f);
        put_u8(player_label, 0);
        put_u16(player_label, 0);
        put_u16(player_label, 0);
        put_compressed(player_label, "x");
        CHECK(samp::client::apply_server_rpc(f.context, 36, player_label));
        CHECK(f.world.stream.text_labels.find(0x801) == f.world.stream.text_labels.end());

        BitStream hide;
        put_u16(hide, 5);
        CHECK(samp::client::apply_server_rpc(f.context, 58, hide));
        CHECK(f.world.stream.text_labels.empty());
    }

    // 61: the dialog.
    {
        Fixture f;
        BitStream dialog;
        put_u16(dialog, 7);
        put_u8(dialog, 1);
        put_str8(dialog, "Title");
        put_str8(dialog, "Yes");
        put_str8(dialog, "No");
        put_compressed(dialog, "Body");
        CHECK(samp::client::apply_server_rpc(f.context, 61, dialog));
        CHECK(f.world.stream.dialog.shown);
        CHECK(f.world.stream.dialog.id == 7);
        CHECK(f.world.stream.dialog.title == "Title");
        CHECK(f.world.stream.dialog.button1 == "Yes");
        CHECK(f.world.stream.dialog.button2 == "No");
        CHECK(f.world.stream.dialog.text == "Body");

        f.world.stream.dialog.shown = false;
        BitStream empty_title;
        put_u16(empty_title, 8);
        put_u8(empty_title, 0);
        put_str8(empty_title, "");
        put_str8(empty_title, "");
        put_str8(empty_title, "");
        put_compressed(empty_title, "Body");
        CHECK(samp::client::apply_server_rpc(f.context, 61, empty_title));
        CHECK(!f.world.stream.dialog.shown);
    }

    // 29/30/94: the clock.
    {
        Fixture f;
        BitStream clock;
        put_u8(clock, 7);
        put_u8(clock, 30);
        CHECK(samp::client::apply_server_rpc(f.context, 29, clock));
        CHECK(f.world.stream.clock_hour == 7);
        CHECK(f.world.stream.clock_minute == 30);

        BitStream off;
        put_u8(off, 1);
        CHECK(samp::client::apply_server_rpc(f.context, 30, off));
        CHECK(!f.world.stream.clock_enabled);
        BitStream on;
        put_u8(on, 0);
        CHECK(samp::client::apply_server_rpc(f.context, 30, on));
        CHECK(f.world.stream.clock_enabled);
        CHECK(f.world.stream.clock_hour == 7);

        BitStream hour;
        put_u8(hour, 9);
        CHECK(samp::client::apply_server_rpc(f.context, 94, hour));
        CHECK(f.world.stream.clock_hour == 9);
    }

    // 34: the weapon skills, local and remote.
    {
        Fixture f;
        BitStream local;
        put_u16(local, 0);
        put_u32(local, 3);
        put_u16(local, 500);
        CHECK(samp::client::apply_server_rpc(f.context, 34, local));
        CHECK(f.world.stream.local.weapon_skills[3] == 500);

        WorldPlayer remote = make_player(4, "Skill");
        remote.streamed_in = true;
        f.world.add_player(remote);
        BitStream player;
        put_u16(player, 4);
        put_u32(player, 2);
        put_u16(player, 700);
        CHECK(samp::client::apply_server_rpc(f.context, 34, player));
        CHECK(f.world.player(4)->weapon_skills[2] == 700);

        WorldPlayer not_streamed = make_player(5, "Far");
        f.world.add_player(not_streamed);
        BitStream absent;
        put_u16(absent, 5);
        put_u32(absent, 1);
        put_u16(absent, 900);
        CHECK(samp::client::apply_server_rpc(f.context, 34, absent));
        CHECK(f.world.player(5)->weapon_skills[1] == 0);
    }

    // 37/40: the client flag and the reset.
    {
        Fixture f;
        f.world.add_player(make_player(3, "Reset"));
        f.world.player(3);
        mutable_player(f.world, 3)->streamed_in = true;
        f.world.stream.client_flag_4d = 4;
        BitStream empty;
        CHECK(samp::client::apply_server_rpc(f.context, 37, empty));
        CHECK(f.world.stream.client_flag_4d == 0);

        f.world.stream.local.health = 5.0f;
        f.world.stream.clock_hour = 3;
        f.world.stream.weather = 9;
        CHECK(samp::client::apply_server_rpc(f.context, 40, empty));
        CHECK(f.world.stream.connection_state == 0xb);
        CHECK(near(f.world.stream.local.health, 100.0f));
        CHECK(near(f.world.stream.name_tag_distance, 60.0f));
        CHECK(f.world.stream.clock_hour == 12);
        CHECK(f.world.stream.clock_minute == 0);
        CHECK(f.world.stream.clock_enabled);
        CHECK(f.world.stream.weather == 1);
        CHECK(!f.world.player(3)->streamed_in);
    }

    // 96: the SCM event changes the named vehicle.
    {
        Fixture f;
        f.world.add_vehicle(make_vehicle(4));
        BitStream paintjob;
        put_u16(paintjob, 0);
        put_u32(paintjob, 1);
        put_u32(paintjob, 4);
        put_u32(paintjob, 5);
        put_u32(paintjob, 0);
        CHECK(samp::client::apply_server_rpc(f.context, 96, paintjob));
        CHECK(mutable_vehicle(f.world, 4)->paintjob == 5);

        BitStream component;
        put_u16(component, 0);
        put_u32(component, 2);
        put_u32(component, 4);
        put_u32(component, 1004);
        put_u32(component, 0);
        CHECK(samp::client::apply_server_rpc(f.context, 96, component));
        CHECK(mutable_vehicle(f.world, 4)->components.size() == 1);
        CHECK(mutable_vehicle(f.world, 4)->components[0] == 1004);

        BitStream colours;
        put_u16(colours, 0);
        put_u32(colours, 3);
        put_u32(colours, 4);
        put_u32(colours, 10);
        put_u32(colours, 20);
        CHECK(samp::client::apply_server_rpc(f.context, 96, colours));
        CHECK(mutable_vehicle(f.world, 4)->body_colour1 == 10);
        CHECK(mutable_vehicle(f.world, 4)->body_colour2 == 20);
        CHECK(f.world.stream.scm_events.size() == 3);
    }

    // 102/103: the client check state and the reply it queues.
    {
        Fixture f;
        BitStream blob;
        for (int i = 0; i < 0x128; ++i) {
            put_u8(blob, static_cast<std::uint8_t>(i & 0xFF));
        }
        CHECK(samp::client::apply_server_rpc(f.context, 102, blob));
        CHECK(f.world.stream.client_check_blob[0] == 0);
        CHECK(f.world.stream.client_check_blob[0x127] == 0x27);

        BitStream version;
        put_u8(version, 'H');
        put_u32(version, 123);
        put_u16(version, 0);
        put_u16(version, 4);
        CHECK(samp::client::apply_server_rpc(f.context, 103, version));
        CHECK(f.world.stream.client_check_replies.size() == 1);
        CHECK(f.world.stream.client_check_replies[0].type == 'H');
        CHECK(f.world.stream.client_check_replies[0].base == 0);

        f.world.stream.local.in_vehicle = true;
        f.world.stream.local.vehicle_id = 12;
        BitStream seat;
        put_u8(seat, 0x02);
        put_u32(seat, 0);
        put_u16(seat, 0);
        put_u16(seat, 4);
        CHECK(samp::client::apply_server_rpc(f.context, 103, seat));
        CHECK(f.world.stream.client_check_replies.size() == 2);
        CHECK(f.world.stream.client_check_replies[1].base == 12);
        CHECK(f.world.stream.client_check_replies[1].status == 1);

        BitStream too_small;
        put_u8(too_small, 'H');
        put_u32(too_small, 0);
        put_u16(too_small, 0);
        put_u16(too_small, 1);
        CHECK(samp::client::apply_server_rpc(f.context, 103, too_small));
        CHECK(f.world.stream.client_check_replies.size() == 2);
    }

    // 27/28/116/117: the object editor.
    {
        Fixture f;
        BitStream empty;
        CHECK(samp::client::apply_server_rpc(f.context, 27, empty));
        CHECK(f.world.stream.object_edit.selecting);
        CHECK(samp::client::apply_server_rpc(f.context, 28, empty));
        CHECK(!f.world.stream.object_edit.selecting);
        CHECK(f.world.stream.object_edit.cancelled);

        BitStream attached;
        put_u32(attached, 77);
        CHECK(samp::client::apply_server_rpc(f.context, 116, attached));
        CHECK(f.world.stream.object_edit.attached_object == 77);
        CHECK(f.world.stream.object_edit.object_edit);

        BitStream object;
        put_bit(object, true);
        put_u16(object, 9);
        CHECK(samp::client::apply_server_rpc(f.context, 117, object));
        CHECK(f.world.stream.object_edit.object_id == 9);
        CHECK(f.world.stream.object_edit.attached_object == 0);
    }

    // 151: the pickups of a model are removed.
    {
        Fixture f;
        samp::client::PickupState first;
        first.id = 1;
        first.model = 232;
        samp::client::PickupState second;
        second.id = 2;
        second.model = 232;
        samp::client::PickupState other;
        other.id = 3;
        other.model = 233;
        f.world.stream.pickups[1] = first;
        f.world.stream.pickups[2] = second;
        f.world.stream.pickups[3] = other;
        BitStream model;
        put_u8(model, 232);
        CHECK(samp::client::apply_server_rpc(f.context, 151, model));
        CHECK(f.world.stream.pickups.size() == 1);
        CHECK(f.world.stream.pickups.count(3) == 1);
    }

    // 154: the seat is only cleared within 200 units.
    {
        Fixture f;
        WorldPlayer near_player = make_player(4, "Near");
        near_player.streamed_in = true;
        near_player.in_vehicle = true;
        near_player.vehicle_id = 8;
        f.world.add_player(near_player);
        BitStream near_close;
        put_u16(near_close, 4);
        put_u16(near_close, 8);
        CHECK(samp::client::apply_server_rpc(f.context, 154, near_close));
        CHECK(!f.world.player(4)->in_vehicle);

        WorldPlayer far_player = make_player(5, "Far");
        far_player.streamed_in = true;
        far_player.in_vehicle = true;
        far_player.x = 500.0f;
        f.world.add_player(far_player);
        BitStream far_close;
        put_u16(far_close, 5);
        put_u16(far_close, 8);
        CHECK(samp::client::apply_server_rpc(f.context, 154, far_close));
        CHECK(f.world.player(5)->in_vehicle);
    }

    // 164/165: the vehicle spawn with the train carriages and the stream out.
    {
        Fixture f;
        BitStream spawn;
        put_u16(spawn, 5);
        put_u32(spawn, 537);
        put_f32(spawn, 1.0f);
        put_f32(spawn, 2.0f);
        put_f32(spawn, 3.0f);
        put_f32(spawn, 90.0f);
        put_u8(spawn, 1);
        put_u8(spawn, 2);
        put_f32(spawn, 1000.0f);
        put_u8(spawn, 3);
        put_u32(spawn, 0x11);
        put_u32(spawn, 0x22);
        put_u8(spawn, 4);
        put_u8(spawn, 5);
        put_u8(spawn, 1);
        for (int i = 0; i < 14; ++i) {
            put_u8(spawn, i == 0 ? 1 : 0);
        }
        put_u8(spawn, 3);
        put_i32(spawn, 10);
        put_i32(spawn, 20);
        CHECK(samp::client::apply_server_rpc(f.context, 164, spawn));
        const WorldVehicle* vehicle = mutable_vehicle(f.world, 5);
        CHECK(vehicle != nullptr);
        if (vehicle != nullptr) {
            CHECK(vehicle->model == 569);
            CHECK(near(vehicle->x, 1.0f));
            CHECK(near(vehicle->z, 3.0f));
            CHECK(near(vehicle->angle, 90.0f));
            CHECK(vehicle->colour1 == 1);
            CHECK(vehicle->colour2 == 2);
            CHECK(near(vehicle->health, 1000.0f));
            CHECK(vehicle->interior == 3);
            CHECK(vehicle->damage_doors == 0x11);
            CHECK(vehicle->damage_panels == 0x22);
            CHECK(vehicle->damage_lights == 4);
            CHECK(vehicle->damage_tires == 5);
            CHECK(vehicle->siren);
            CHECK(vehicle->paintjob == 2);
            CHECK(vehicle->body_colour1 == 10);
            CHECK(vehicle->body_colour2 == 20);
            CHECK(vehicle->mods[0] == 1000);
            CHECK(vehicle->components.size() == 1);
        }
        CHECK(mutable_vehicle(f.world, 6) != nullptr);
        CHECK(mutable_vehicle(f.world, 7) != nullptr);
        CHECK(mutable_vehicle(f.world, 8) != nullptr);

        BitStream out;
        put_u16(out, 5);
        CHECK(samp::client::apply_server_rpc(f.context, 165, out));
        CHECK(mutable_vehicle(f.world, 5) == nullptr);
        CHECK(mutable_vehicle(f.world, 6) == nullptr);
        CHECK(mutable_vehicle(f.world, 7) == nullptr);
        CHECK(mutable_vehicle(f.world, 8) == nullptr);
    }

    // 166/170/171/172: the death flag, the camera targeting and the actors.
    {
        Fixture f;
        WorldPlayer player = make_player(3, "Dead");
        player.streamed_in = true;
        f.world.add_player(player);
        BitStream dead;
        put_u16(dead, 3);
        CHECK(samp::client::apply_server_rpc(f.context, 166, dead));
        CHECK(f.world.player(3)->dead);

        BitStream targeting;
        put_bit(targeting, true);
        CHECK(samp::client::apply_server_rpc(f.context, 170, targeting));
        CHECK(f.world.stream.camera_targeting);

        BitStream actor;
        put_u16(actor, 2);
        put_u32(actor, 101);
        put_u32(actor, 20000);
        put_f32(actor, 4.0f);
        put_f32(actor, 5.0f);
        put_f32(actor, 6.0f);
        put_f32(actor, 45.0f);
        put_f32(actor, 100.0f);
        put_u8(actor, 1);
        CHECK(samp::client::apply_server_rpc(f.context, 171, actor));
        const auto stored_actor = f.world.stream.actors.find_by_network_id(2);
        CHECK(stored_actor == 2);
        CHECK(f.world.stream.actors.used_flag(stored_actor) != 0);

        BitStream invalid;
        put_u16(invalid, 3);
        put_u32(invalid, 0x7531);
        put_u32(invalid, 0);
        put_f32(invalid, 0.0f);
        put_f32(invalid, 0.0f);
        put_f32(invalid, 0.0f);
        put_f32(invalid, 0.0f);
        put_f32(invalid, 0.0f);
        put_u8(invalid, 0);
        CHECK(samp::client::apply_server_rpc(f.context, 171, invalid));
        CHECK(f.world.stream.actors.find_by_network_id(3) == samp::client::ActorSlots::kNoSlot);

        BitStream hide;
        put_u16(hide, 2);
        CHECK(samp::client::apply_server_rpc(f.context, 172, hide));
        CHECK(f.world.stream.actors.find_by_network_id(2) == samp::client::ActorSlots::kNoSlot);
    }

    // 179/180/183/185: the model requests drive the asset manager.
    {
        Fixture f;
        samp::client::AssetManager assets;
        f.context.assets = &assets;
        BitStream request;
        put_u32(request, 3);
        put_u32(request, 9);
        put_u8(request, 1);
        put_u32(request, 7);
        put_u32(request, 1000);
        put_u32(request, 5);
        put_u32(request, 0xDEADBEEFu);
        put_u32(request, 0x12345678u);
        put_u32(request, 111);
        put_u32(request, 222);
        put_u8(request, 1);
        put_u8(request, 2);
        CHECK(samp::client::apply_server_rpc(f.context, 179, request));
        CHECK(assets.find_index(samp::client::AssetKind::kModel,0xDEADBEEFu) == 3);
        CHECK(assets.find_index(samp::client::AssetKind::kTexture,0x12345678u) == 3);
        CHECK(assets.has_model(5));
        CHECK(assets.current_id_ == 9);

        BitStream first;
        put_u32(first, 0);
        put_u32(first, 0);
        put_u8(first, 0);
        put_u32(first, 0);
        put_u32(first, 1000);
        put_u32(first, 0);
        put_u32(first, 0);
        put_u32(first, 0);
        put_u32(first, 0);
        put_u32(first, 0);
        put_u8(first, 0);
        put_u8(first, 0);
        CHECK(samp::client::apply_server_rpc(f.context, 179, first));
        CHECK(assets.find_index(samp::client::AssetKind::kModel,0) == 0);

        BitStream remove;
        CHECK(samp::client::apply_server_rpc(f.context, 180, remove));
        CHECK(assets.find_index(samp::client::AssetKind::kModel,0) == -1);

        BitStream url;
        put_u8(url, 6);
        put_u8(url, 2);
        put_u32(url, 0xCAFEBABEu);
        put_str8(url, "http://x/m.dff");
        CHECK(samp::client::apply_server_rpc(f.context, 183, url));
        CHECK(!f.world.stream.asset_downloads.empty());
        const samp::client::AssetDownloadRequest& download = f.world.stream.asset_downloads.back();
        CHECK(download.type == 6);
        CHECK(download.pool == 2);
        CHECK(download.checksum == 0xCAFEBABEu);
        CHECK(download.url == "http://x/m.dff");

        BitStream block;
        put_u8(block, 1);
        put_u8(block, 0);
        put_u32(block, 0xABCDu);
        put_i32(block, 3);
        block.write("abc", 3);
        CHECK(samp::client::apply_server_rpc(f.context, 183, block));
        // Dispatch succeeds, but the impossible raw size is ignored before staging.
        CHECK(assets.last_error_==6001); // Prior redirect referenced an unknown CRC.

        BitStream all;
        CHECK(samp::client::apply_server_rpc(f.context, 185, all));
        CHECK(f.world.stream.asset_slots_ready == 6);
        CHECK(f.world.stream.asset_pending == 0);
    }
}

// These six routes previously had no behavior fixture.
void test_additional_routes() {
    Fixture f;
    BitStream heading;
    put_f32(heading, 135.0f);
    CHECK(samp::client::apply_server_rpc(f.context, 19, heading));
    CHECK(f.commands.size() == 1);
    CHECK(std::get<samp::client::PlayerHeading>(f.commands.back()).angle == float_bits(135.0f));

    BitStream building;
    put_u32(building, 1000);
    for (float value : {1.0f, 2.0f, 3.0f, 40.0f}) put_f32(building, value);
    CHECK(samp::client::apply_server_rpc(f.context, 43, building));
    CHECK(f.world.removed_buildings_.size() == 1);
    CHECK(f.world.removed_buildings_.back().model == 1000);
    CHECK(near(f.world.removed_buildings_.back().radius, 40.0f));

    BitStream object;
    put_u16(object, 9);
    put_u32(object, 19300);
    for (float value : {1.0f, 2.0f, 3.0f, 10.0f, 20.0f, 30.0f, 200.0f}) put_f32(object, value);
    put_u8(object, 1);
    put_u16(object, 12);
    put_u16(object, 13);
    for(float value:{0.f,0.f,0.f,0.f,0.f,0.f}) put_f32(object,value);
    put_u8(object,1); // Attachment sync-rotation flag precedes materials.
    put_u8(object, 2);
    CHECK(samp::client::apply_server_rpc(f.context, 44, object));
    CHECK(f.world.objects_.contains(9));
    CHECK(f.world.objects_.at(9).model == 19300);
    CHECK(near(f.world.objects_.at(9).rotation_z, 30.0f));

    BitStream icon;
    put_u8(icon, 7);
    for (float value : {4.0f, 5.0f, 6.0f}) put_f32(icon, value);
    put_u8(icon, 31);
    put_u32(icon, 0x12345678);
    put_u8(icon, 2);
    CHECK(samp::client::apply_server_rpc(f.context, 56, icon));
    CHECK(f.world.icons_.contains(7));
    CHECK(f.world.icons_.at(7).colour == 0x12345678);
    CHECK(near(f.world.icons_.at(7).y, 5.0f));

    BitStream text;
    put_u32(text, 3);
    put_u32(text, 5000);
    put_u32(text, 5);
    text.write("Hello", 5);
    CHECK(samp::client::apply_server_rpc(f.context, 73, text));
    CHECK(f.world.texts_.size() == 1);
    CHECK(f.world.texts_.back().text == "Hello");
    CHECK(f.world.texts_.back().time == 5000);

    f.world.add_player(make_player(5, "Remote"));
    BitStream stream;
    put_u16(stream, 5);
    put_u8(stream, 2);
    put_u32(stream, 101);
    put_u32(stream, 20000);
    for (float value : {10.0f, 20.0f, 30.0f, 45.0f}) put_f32(stream, value);
    put_u32(stream, 0x11223344);
    put_u8(stream, 6);
    for (int i = 0; i < 11; ++i) put_u16(stream, 500);
    CHECK(samp::client::apply_server_rpc(f.context, 32, stream));
    CHECK(f.world.player(5)->streamed_in);
    CHECK(f.world.player(5)->custom_model == 20000);
    CHECK(f.world.player(5)->weapon_skills[10] == 500);
    CHECK(std::get<samp::client::RemotePlayerStream>(f.commands.back()).player_id == 5);
}

void test_dispatcher() {
    Fixture f;
    f.world.stream.local.money = 123;
    for (std::uint8_t id : {0, 1, 255}) {
        BitStream payload;
        put_u32(payload, 999);
        CHECK(!samp::client::apply_server_rpc(f.context, id, payload));
        CHECK(f.world.stream.local.money == 123);
        CHECK(f.commands.empty());
        CHECK(f.world.players_.empty());
    }

    BitStream truncated;
    put_u8(truncated, 0xff);
    CHECK(!samp::client::apply_server_rpc(f.context, 12, truncated));
    CHECK(near(f.world.stream.local.x, 0.0f));
    CHECK(f.commands.empty());
}

}  // namespace

int main() {
    test_11();
    test_12_13();
    test_14_15_16();
    test_17_18_20_21();
    test_22_66_67();
    test_24();
    test_26();
    test_38_39();
    test_41_42();
    test_45_46_47();
    test_48();
    test_55();
    test_57();
    test_58_80();
    test_59();
    test_60_152();
    test_63_95();
    test_65_91_98_106();
    test_69_72_89();
    test_70_71();
    test_74_77_78();
    test_79();
    test_81_82_157_158();
    test_85_108_120_121();
    test_56_144();
    test_86_87();
    test_88_90_156();
    test_146_104_111();
    test_99();
    test_105_135();
    test_107_112();
    test_122();
    test_137_138_163();
    test_packet_handlers();
    test_additional_routes();
    test_dispatcher();

    if (g_failures == 0) {
        std::printf("all server RPC tests passed\n");
        return 0;
    }
    std::printf("%d server RPC test checks failed\n", g_failures);
    return 1;
}
