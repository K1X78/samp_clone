#include "samp/server/raknet_server.hpp"
#include "samp/server/game_layer.hpp"
#include "samp/proto/samp_auth_table.hpp"

#include <algorithm>
#include <chrono>
#include <cstdlib>

namespace samp::server {

// Official: FUN_00457e80 @ 0x00457e80 (samp-server.exe)
void RakNetServer::handle_connection_request(RakNetPeer& peer, const samp::proto::BitStream& message) {
    if (peer.stage_ != RakNetPeer::Stage::Opening || message.numberOfBitsUsed_ < 8) return;
    const auto* game = dynamic_cast<GameLayer*>(handler_);
    const auto password = game && game->config_ ? game->config_->get("password", "") : std::string{};
    const auto count = message.numberOfBitsUsed_ / 8u;
    const bool matches = count == password.size() + 1 &&
        std::equal(password.begin(), password.end(), message.data_.begin() + 1);
    if (!matches) {
        const std::uint8_t rejected = 0x25;
        peer.send({&rejected, 1}, samp::proto::Reliability::Reliable, 0, 8, 0);
        peer.stage_ = RakNetPeer::Stage::Closing;
        peer.close_after_ms_ = peer.last_receive_ms_ + 500;
        return;
    }
    begin_authentication(peer);
}

// Official: FUN_004558c0 @ 0x004558c0 (samp-server.exe)
void RakNetServer::begin_authentication(RakNetPeer& peer) {
    peer.auth_index_ = static_cast<std::uint8_t>(std::rand());
    const auto& pair = samp::proto::auth::kAuthPairs[peer.auth_index_];
    samp::proto::BitStream challenge;
    const std::uint8_t id = 12, length = static_cast<std::uint8_t>(pair.key.size() + 1);
    challenge.write(&id, 1); challenge.write(&length, 1);
    challenge.write(pair.key.data(), pair.key.size());
    const std::uint8_t terminator = 0; challenge.write(&terminator, 1);
    peer.stage_ = RakNetPeer::Stage::AwaitingAuth;
    peer.send({challenge.data_.data(), (challenge.numberOfBitsUsed_ + 7u) / 8u},
              samp::proto::Reliability::Reliable, 0, challenge.numberOfBitsUsed_, 0);
}

// Official: FUN_0048f9e0 @ 0x0048f9e0 (samp-server.exe)
void RakNetServer::handle_authentication(RakNetPeer& peer, const samp::proto::BitStream& message) {
    if (peer.stage_ != RakNetPeer::Stage::AwaitingAuth) return;
    auto input = message;
    std::uint8_t id = 0, length = 0;
    if (!input.read(&id, 1) || !input.read(&length, 1) || length == 0 || length > 64) return;
    std::string answer(length, '\0');
    if (!input.read(answer.data(), answer.size())) return;
    if (const auto end = answer.find('\0'); end != std::string::npos) answer.resize(end);
    if (answer == samp::proto::auth::kAuthPairs[peer.auth_index_].answer) accept_connection(peer);
    else {
        peer.stage_ = RakNetPeer::Stage::Closing;
        peer.close_after_ms_ = peer.last_receive_ms_ + 500;
    }
}

// Official: FUN_0048f8a0 @ 0x0048f8a0 (samp-server.exe)
void RakNetServer::accept_connection(RakNetPeer& peer) {
    samp::proto::BitStream accepted;
    const auto* game = dynamic_cast<GameLayer*>(handler_);
    const std::uint8_t id = 34;
    const std::uint32_t challenge = game ? game->challenge_token_ : 0;
    accepted.write(&id, 1); accepted.write(&peer.address_, 4); accepted.write(&peer.port_, 2);
    accepted.write(&peer.peer_index_, 2); accepted.write(&challenge, 4);
    peer.stage_ = RakNetPeer::Stage::Authenticated;
    peer.send({accepted.data_.data(), (accepted.numberOfBitsUsed_ + 7u) / 8u},
              samp::proto::Reliability::Reliable, 0, accepted.numberOfBitsUsed_, 0);
}

// Official: FUN_00466550 @ 0x00466550 (samp-server.exe)
void GameLayer::disconnect_player(int id, std::uint8_t reason) {
    if (id < 0 || static_cast<std::size_t>(id) >= players_.size() || !players_[id].in_use) return;
    auto& leaving = players_[id];
    const samp::amx::cell arguments[]{id, reason};
    const auto notify = [&](samp::pawn::PawnVm& script) {
        if (!script.ok_ || !std::any_of(script.publics_.begin(), script.publics_.end(), [](const auto& entry) {
            return entry.name == "OnPlayerDisconnect";
        })) return;
        samp::amx::cell result = 0;
        script.execute("OnPlayerDisconnect", arguments, result);
    };
    for (auto& script : filterscripts_) notify(*script);
    notify(vm_);
    if (leaving.peer) {
        leaving.peer->stage_ = RakNetPeer::Stage::Closing;
        leaving.peer->close_after_ms_ = leaving.peer->last_receive_ms_;
        leaving.peer->close_reason_ = reason;
    }
    for(auto& vehicle:vehicles_) {
        if(vehicle.driver==id) vehicle.driver=-1;
        for(auto& occupant:vehicle.passengers) if(occupant==id) occupant=-1;
    }
    samp::proto::BitStream quit;
    const auto player_id = static_cast<std::uint16_t>(id);
    quit.write(&player_id, 2); quit.write(&reason, 1);
    leaving = GamePlayer{};
    leaving.streamed_to.assign(players_.size(), 0);
    for (auto& receiver : players_) {
        if (!receiver.in_use || !receiver.peer) continue;
        if (static_cast<std::size_t>(id) < receiver.streamed_to.size() && receiver.streamed_to[id]) {
            receiver.streamed_to[id] = 0;
            if (receiver.streamed_count) --receiver.streamed_count;
        }
        if (receiver.joined) send_rpc(*receiver.peer, kRpcPlayerQuit, quit);
    }
    // Native 0x4666f2 refreshes the cache after callbacks and slot release.
    update_player_pool_size();
}

} // namespace samp::server
