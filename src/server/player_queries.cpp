#include "samp/server/game_layer.hpp"
#include "samp/proto/packet_ids.hpp"
#include "samp/proto/wire.hpp"
#include <algorithm>
#include <bit>
#include <chrono>
#include <set>

namespace samp::server {
// Official: FUN_00494680 @ 0x00494680 (samp-server.exe)
void GameLayer::record_server_tick(std::uint32_t now) {
    if (!tick_window_start_) tick_window_start_ = now;
    if (std::bit_cast<std::int32_t>(now - *tick_window_start_) >= 1000) {
        tick_window_start_ = now;
        server_tick_rate_ = ticks_in_window_;
        ticks_in_window_ = 0;
    }
    ++ticks_in_window_;
    ++server_tick_count_;
}

// Official: FUN_00463da0 @ 0x00463da0 (samp-server.exe)
bool GameLayer::player_slot_is_occupied(std::uint16_t slot) const {
    return slot < 1000 && slot < players_.size() && players_[slot].in_use;
}

// Official: FUN_00465c50 @ 0x00465c50 (samp-server.exe)
void GameLayer::update_player_pool_size() {
    player_pool_highest_ = 0;
    const auto end = std::min<std::size_t>(1000, players_.size());
    for (std::size_t slot = 0; slot < end; ++slot)
        if (players_[slot].in_use) player_pool_highest_ = static_cast<int>(slot);
}

// Official: FUN_00466b10 @ 0x00466b10 (samp-server.exe)
std::uint32_t GameLayer::count_human_players() {
    return static_cast<std::uint32_t>(std::ranges::count_if(samp::pawn::live_player_slots(*this),
        [](const auto& player) { return player.in_use && !player.is_npc; }));
}

// no standalone native entry
std::optional<samp::pawn::PlayerConnectionInfo> GameLayer::player_connection_info(int id) const {
    if (id < 0 || id >= 1000 || !player_slot_is_occupied(static_cast<std::uint16_t>(id))) return std::nullopt;
    const auto* peer = players_[id].peer;
    if (!peer) return std::nullopt;
    const auto now = static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    const auto duration = peer->opened_ms_ ? static_cast<std::uint32_t>(now - peer->opened_ms_) : 0u;
    const auto status = peer->stage_ == RakNetPeer::Stage::Authenticated ? 8 : 3;
    return samp::pawn::PlayerConnectionInfo{peer->address_, peer->port_, peer->latest_ping(), status,
        duration, peer->send_state_.total_bits_sent};
}

// Official: FUN_00493ca0 @ 0x00493ca0 (samp-server.exe)
void GameLayer::send_marker_sync(RakNetPeer& peer, const samp::proto::BitStream& packet) {
    peer.send({packet.data_.data(), (packet.numberOfBitsUsed_ + 7) / 8},
              samp::proto::Reliability::UnreliableSequenced, 1, packet.numberOfBitsUsed_);
}

// Official: FUN_00484c20 @ 0x00484c20 (samp-server.exe)
void GameLayer::update_player_markers(GamePlayer& receiver, std::uint32_t now) {
    if (player_marker_mode_ != 1) return;
    if (!receiver.last_marker_sync_ms) {
        receiver.last_marker_sync_ms = now;
        return;
    }
    if (std::bit_cast<std::int32_t>(now - *receiver.last_marker_sync_ms) <= 2500) return;
    receiver.last_marker_sync_ms = now;

    samp::proto::BitStream packet;
    const auto kind = static_cast<std::uint8_t>(samp::proto::PacketId::PlayerMarkersSync);
    const auto count = count_human_players() - 1;
    packet.write(&kind, sizeof(kind));
    packet.write(&count, sizeof(count));
    const float radius_squared = player_marker_radius_ * player_marker_radius_;
    for (const auto& other : samp::pawn::live_player_slots(*this)) {
        if (!other.in_use || other.is_npc || other.id == receiver.id) continue;
        const auto id = static_cast<std::uint16_t>(other.id);
        packet.write(&id, sizeof(id));
        const bool outside_radius = limit_player_marker_radius_ &&
            radius_squared < other.squared_horizontal_distance_to(receiver.x, receiver.y);
        if (other.state == 0 || other.state == 9 || other.virtual_world != receiver.virtual_world || outside_radius) {
            packet.write0();
            continue;
        }
        packet.write1();
        for (float position : {other.x, other.y, other.z}) {
            const auto coordinate = position >= -0x1p63f && position < 0x1p63f
                ? static_cast<std::uint16_t>(static_cast<std::int64_t>(position)) : std::uint16_t{};
            packet.write(&coordinate, sizeof(coordinate));
        }
    }
    send_marker_sync(*receiver.peer, packet);
}

// Official: FUN_00499090 @ 0x00499090 (samp-server.exe)
void GameLayer::handle_score_request(RakNetPeer& peer) {
    const auto found=std::find_if(players_.begin(),players_.end(),[&](const auto& player){return player.in_use && player.joined && player.peer==&peer;});
    if(found==players_.end()) return;
    const auto now=static_cast<std::uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    if(std::bit_cast<std::int32_t>(now-found->last_score_request_ms)<2000) return;
    found->last_score_request_ms=now;
    samp::proto::BitStream payload;
    for(const auto& player:players_) if(player.in_use) {
        const auto id=static_cast<std::uint16_t>(player.id);
        const std::uint32_t ping = player.peer ? player.peer->latest_ping() : 0xffffffffu;
        payload.write(&id,2);payload.write(&player.score,4);payload.write(&ping,4);
    }
    // Native466080 maintains the number of DISTINCT connected IPs at+30d54.
    // The trailing word is that count, not the requesting player's id.
    std::set<std::uint32_t> addresses;
    for(const auto& player:players_) if(player.in_use) addresses.insert(player.ipv4_address);
    const auto unique_addresses=static_cast<std::uint16_t>(addresses.size());payload.write(&unique_addresses,2);
    samp::proto::BitStream frame;const std::uint8_t prefix[]{samp::proto::kRaknetIdRpc,155};frame.write(prefix,2);
    const auto bits=static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
    frame.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits),32,true);
    frame.writeBits(payload.data_.data(),bits,false);
    peer.send({frame.data_.data(),(frame.numberOfBitsUsed_+7u)/8},samp::proto::Reliability::Reliable,0,frame.numberOfBitsUsed_);
}
}
