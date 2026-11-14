#include "pawn/natives.hpp"
#include "samp/proto/bitstream.hpp"

namespace samp::pawn {

// Official: FUN_0047ccf0 @ 0x0047ccf0 (samp-server.exe)
int NativeHost::play_player_sound(int player, int sound, const std::array<float,3>& position) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    samp::proto::BitStream payload;
    payload.write(&sound,4);
    payload.write(position.data(),12);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,16,payload);
    return 1;
}

// Official: FUN_004723e0 @ 0x004723e0 (samp-server.exe)
int NativeHost::set_camera_behind_player(int player) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    samp::proto::BitStream payload;
    if(players_[slot].peer) send_rpc(*players_[slot].peer,162,payload);
    return 1;
}

// Official: FUN_0047c130 @ 0x0047c130 (samp-server.exe)
int NativeHost::interpolate_camera_pos(int player, const std::array<float,3>& from,
                                      const std::array<float,3>& to, int time, int mode) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    auto byte=static_cast<std::uint8_t>(mode);
    if(byte<1 || byte>2) byte=2;
    samp::proto::BitStream payload;
    payload.write1();
    payload.write(from.data(),12);payload.write(to.data(),12);
    payload.write(&time,4);payload.write(&byte,1);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,82,payload);
    return 1;
}

// Official: FUN_0047c300 @ 0x0047c300 (samp-server.exe)
int NativeHost::interpolate_camera_look_at(int player, const std::array<float,3>& from,
                                          const std::array<float,3>& to, int time, int mode) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    auto byte=static_cast<std::uint8_t>(mode);
    if(byte<1 || byte>2) byte=2;
    samp::proto::BitStream payload;
    payload.write0();
    payload.write(from.data(),12);payload.write(to.data(),12);
    payload.write(&time,4);payload.write(&byte,1);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,82,payload);
    return 1;
}

// Official: FUN_0047fe30 @ 0x0047fe30 (samp-server.exe)
int NativeHost::set_player_velocity(int player, const std::array<float,3>& velocity) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    samp::proto::BitStream payload;
    payload.write(velocity.data(),12);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,90,payload);
    return 1;
}

// Official: FUN_004807f0 @ 0x004807f0 (samp-server.exe)
int NativeHost::play_audio_stream_for_player(int player, std::string_view url,
                                            const std::array<float,3>& position, float radius, int use_position) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    url=url.substr(0,url.find('\0'));
    // 0x4808f7/0x4808ff retain the low byte, rather than clamping to 255.
    const auto length=static_cast<std::uint8_t>(url.size());
    const auto spatial=static_cast<std::uint8_t>(use_position);
    samp::proto::BitStream payload;
    payload.write(&length,1);
    if(length) payload.write(url.data(),length);
    payload.write(position.data(),12);payload.write(&radius,4);payload.write(&spatial,1);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,41,payload);
    return 1;
}

// Official: FUN_00478170 @ 0x00478170 (samp-server.exe)
int NativeHost::stop_audio_stream_for_player(int player) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    samp::proto::BitStream payload;
    if(players_[slot].peer) send_rpc(*players_[slot].peer,42,payload);
    return 1;
}

// Official: FUN_0047af60 @ 0x0047af60 (samp-server.exe)
int NativeHost::set_player_pos_find_z(int player, const std::array<float,3>& position) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    samp::proto::BitStream payload;
    payload.write(position.data(),12);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,13,payload);
    return 1;
}

// Official: FUN_0047bbe0 @ 0x0047bbe0 (samp-server.exe)
int NativeHost::set_player_special_action(int player, int action) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    const auto byte=static_cast<std::uint8_t>(action);
    samp::proto::BitStream payload;
    payload.write(&byte,1);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,88,payload);
    return 1;
}

// Official: FUN_0047c820 @ 0x0047c820 (samp-server.exe)
int NativeHost::set_player_ammo(int player, int weapon, int ammunition) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    const auto byte=static_cast<std::uint8_t>(weapon);
    const auto count=static_cast<std::uint16_t>(ammunition);
    samp::proto::BitStream payload;
    payload.write(&byte,1);payload.write(&count,2);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,145,payload);
    return 1;
}

// Official: FUN_00480d70 @ 0x00480d70 (samp-server.exe)
int NativeHost::remove_building_for_player(int player, int model, const std::array<float,3>& position, float radius) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    samp::proto::BitStream payload;
    payload.write(&model,4);payload.write(position.data(),12);payload.write(&radius,4);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,43,payload);
    return 0; // The official owner returns zero even after sending the RPC.
}

} // namespace samp::pawn
