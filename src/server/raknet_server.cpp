#include "samp/server/raknet_server.hpp"
#include "samp/server/game_layer.hpp"

#include <algorithm>
#include <chrono>
#include <random>

#include "samp/proto/wire.hpp"
#include "samp/proto/reliability_frame.hpp"

namespace samp::server {

namespace {

using samp::proto::AckRange;
using samp::proto::BitStream;
using samp::proto::ConnectedDatagram;
using samp::proto::Reliability;
using samp::proto::ReliabilityFrame;

// SAMPRakNet.cpp:40 -- the constant the SA-MP cookie is XORed with.
constexpr std::uint16_t kSampPetarded = 0x6969;

// Existing host ACK cadence; native adaptive timing is tracked in P1.1.
constexpr std::uint64_t kMinPingToResendMs = 30;

// How long a peer may stay silent before the server drops it.  RakNet's own
// default timeout is ten seconds.
constexpr std::uint64_t kPeerTimeoutMs = 10000;

}  // namespace

// Official: FUN_00455ec0 @ 0x00455ec0 (samp-server.exe)
void RakNetPeer::send(std::span<const std::uint8_t> message, Reliability reliability,
                      std::uint8_t channel, std::size_t bit_count, std::uint8_t priority) {
    if (bit_count > message.size() * 8u) return;
    ReliabilityFrame frame;
    frame.message_number = next_message_number_++;
    frame.reliability = reliability;
    frame.ordering_channel = channel;
    frame.priority = priority;
    frame.data.write(message.data(), message.size());
    if (bit_count != 0) frame.data.numberOfBitsUsed_ = bit_count;
    const auto now = static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
    samp::proto::queue_reliability_frame(send_state_, std::move(frame), next_message_number_, now);
    for (auto& datagram : send_state_.outbox) outbox_.push_back(std::move(datagram));
    send_state_.outbox.clear();
}

// Official: FUN_00456650 @ 0x00456650 (samp-server.exe)
void RakNetServer::handle_datagram(std::uint32_t address, std::uint16_t port,
                                   std::span<const std::uint8_t> data) {
    if (auto* game_layer=dynamic_cast<GameLayer*>(handler_)) {
        const auto* octets=reinterpret_cast<const std::uint8_t*>(&address);
        const std::string ip=std::to_string(octets[0])+"."+std::to_string(octets[1])+"."+
                             std::to_string(octets[2])+"."+std::to_string(octets[3]);
        if(std::find(game_layer->banned_ips_.begin(),game_layer->banned_ips_.end(),ip)!=
           game_layer->banned_ips_.end()) {
            outbox_.push_back({address,port,{0x24}});
            return;
        }
    }
    // The client -> server datagrams are obfuscated.
    const auto plain = samp::proto::deobfuscate(data, port_);
    if (!plain || plain->empty()) {
        return;
    }
    const std::uint8_t* bytes = plain->data();
    const std::size_t size = plain->size();

    // A connected frame's first byte also contains its message number. Do
    // not mistake message-number prefixes for unconnected control IDs.
    if (bytes[0] == samp::proto::kIdOpenConnectionRequest && size == 3) {
        const std::uint16_t xored =
            static_cast<std::uint16_t>(bytes[1] | (static_cast<std::uint16_t>(bytes[2]) << 8));
        const auto* address_bytes = reinterpret_cast<const std::uint8_t*>(&address);
        const std::uint16_t cookie = static_cast<std::uint16_t>(
            (cookie_table_[0][address_bytes[0]] |
             (static_cast<std::uint16_t>(cookie_table_[1][address_bytes[3]]) << 8)) ^
            ((static_cast<std::uint16_t>(address_bytes[1]) << 8) | address_bytes[2]));
        if (static_cast<std::uint16_t>(xored ^ kSampPetarded) != cookie) {
            // The cookie is wrong: send the cookie and wait for the retry.
            std::vector<std::uint8_t> cookie_reply{samp::proto::kIdOpenConnectionCookie,
                static_cast<std::uint8_t>(cookie & 0xFFu),
                static_cast<std::uint8_t>(cookie >> 8)};
            if (!cookie_reply.empty()) outbox_.push_back({address, port, std::move(cookie_reply)});
            return;
        }
        // The cookie matches: accept the peer.
        const std::uint64_t key = (static_cast<std::uint64_t>(address) << 16) | port;
        auto it = peers_.find(key);
        const bool is_new = (it == peers_.end());
        if (!is_new && it->second.stage_ == RakNetPeer::Stage::Authenticated) {
            outbox_.push_back({address, port, {0x1d}});
            return;
        }
        if (is_new) {
            std::size_t capacity = 1000;
            if (const auto* game = dynamic_cast<GameLayer*>(handler_); game && game->config_)
                capacity = static_cast<std::size_t>(std::clamp(game->config_->getInt("maxplayers", 50), 1, 1000));
            if (peers_.size() >= capacity) {
                outbox_.push_back({address, port, {0x1f}});
                return;
            }
            it = peers_.try_emplace(key).first;
            auto& peer = it->second;
            peer.address_ = address;
            peer.port_ = port;
            peer.cookie_ = cookie;
            for (std::uint16_t slot = 0; slot < 1000; ++slot) {
                const bool occupied = std::any_of(peers_.begin(), peers_.end(), [&](const auto& entry) {
                    return &entry.second != &peer && entry.second.peer_index_ == slot;
                });
                if (!occupied) { peer.peer_index_ = slot; break; }
            }
            peer.last_receive_ms_ = static_cast<std::uint64_t>(
                std::chrono::duration_cast<std::chrono::milliseconds>(
                    std::chrono::steady_clock::now().time_since_epoch()).count());
        }
        // ID_OPEN_CONNECTION_REPLY plus the pad byte.
        std::vector<std::uint8_t> reply{samp::proto::kIdOpenConnectionReply, 0x00};
        if (!reply.empty()) outbox_.push_back({address, port, std::move(reply)});
        for (auto& datagram : it->second.outbox_) {
            outbox_.push_back({address, port, std::move(datagram)});
        }
        it->second.outbox_.clear();
        return;
    }

    if ((bytes[0] == samp::proto::kIdPing || bytes[0] == samp::proto::kIdPingOpenConnections) &&
        size == 5 && !peers_.contains((static_cast<std::uint64_t>(address) << 16) | port)) {
        // ID_PONG echoes the ping time.
        const std::uint32_t time = static_cast<std::uint32_t>(bytes[1]) |
                                   (static_cast<std::uint32_t>(bytes[2]) << 8) |
                                   (static_cast<std::uint32_t>(bytes[3]) << 16) |
                                   (static_cast<std::uint32_t>(bytes[4]) << 24);
        std::vector<std::uint8_t> pong{samp::proto::kIdPong,
            static_cast<std::uint8_t>(time), static_cast<std::uint8_t>(time >> 8),
            static_cast<std::uint8_t>(time >> 16), static_cast<std::uint8_t>(time >> 24)};
        if (!pong.empty()) outbox_.push_back({address, port, std::move(pong)});
        return;
    }

    // Everything else is traffic of a connected peer.
    const auto it = peers_.find((static_cast<std::uint64_t>(address) << 16) | port);
    if (it == peers_.end()) {
        return;
    }
    auto& peer = it->second;
    if (peer.receive_state_.failed || peer.send_state_.failed) return;
    peer.last_receive_ms_ = static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
    ConnectedDatagram datagram;
    if (!samp::proto::decode_connected_datagram({bytes, size}, datagram,
                                               &peer.receive_state_, peer.last_receive_ms_)) {
        if (peer.receive_state_.failed) peer.last_receive_ms_ = 0;
        return;
    }
    samp::proto::acknowledge_reliability_frames(peer.send_state_, datagram.acks, peer.last_receive_ms_);
    for (const auto number : peer.receive_state_.acknowledgements) {
        if (std::find(peer.received_.begin(), peer.received_.end(), number) == peer.received_.end())
            peer.received_.push_back(number);
    }
    peer.receive_state_.acknowledgements.clear();
    for (const auto& frame : datagram.frames) {
        if (samp::proto::handle_connected_ping(peer.send_state_, frame.data,
                                              peer.next_message_number_, peer.last_receive_ms_)) continue;
        if (frame.data.numberOfBitsUsed_ < 8 || peer.stage_ == RakNetPeer::Stage::Closing) continue;
        const auto packet = frame.data.data_[0];
        if (packet == 11) handle_connection_request(peer, frame.data);
        else if (packet == 12) handle_authentication(peer, frame.data);
        else if (packet == 0x20) {
            peer.stage_ = RakNetPeer::Stage::Closing;
            peer.close_reason_ = 1;
            peer.close_after_ms_ = peer.last_receive_ms_;
        } else if (peer.stage_ == RakNetPeer::Stage::Authenticated && packet != 30)
            peer.delivered_.push_back(frame.data);
    }

    // Hand the received user messages to the handler.
    for (const BitStream& message : it->second.delivered_) {
        if (handler_ != nullptr) {
            handler_->on_user_message(it->second, message);
        }
    }
    it->second.delivered_.clear();
    for (auto& datagram : it->second.outbox_) {
        outbox_.push_back({it->second.address_, it->second.port_, std::move(datagram)});
    }
    it->second.outbox_.clear();
}

// Official: FUN_00457ca0 @ 0x00457ca0 (samp-server.exe)
void RakNetServer::tick(std::uint64_t now) {
    // A peer that has not sent anything for the timeout is gone: the
    // original drops the player and tells the others (RPC 138).
    for (auto it = peers_.begin(); it != peers_.end();) {
        if ((it->second.stage_ == RakNetPeer::Stage::Closing && now >= it->second.close_after_ms_) ||
            (now > it->second.last_receive_ms_ && now - it->second.last_receive_ms_ > kPeerTimeoutMs)) {
            if (auto* game_layer=dynamic_cast<GameLayer*>(handler_)) {
                GamePlayer* player=nullptr;
                for(GamePlayer& candidate:game_layer->players_) {
                    if(candidate.in_use && candidate.peer==&it->second) {
                        player=&candidate;
                        break;
                    }
                }
                if (player != nullptr)
                    game_layer->disconnect_player(player->id,
                        it->second.stage_ == RakNetPeer::Stage::Closing ? it->second.close_reason_ : 0);
            }
            it = peers_.erase(it);
            continue;
        }
        ++it;
    }
    for (auto& [key, peer] : peers_) {
        samp::proto::update_reliability_sends(peer.send_state_, now, &peer.next_message_number_);
        if (peer.send_state_.failed) {
            peer.last_receive_ms_ = 0;
            continue;
        }
        for (auto& datagram : peer.send_state_.outbox) peer.outbox_.push_back(std::move(datagram));
        peer.send_state_.outbox.clear();
        if(!peer.received_.empty() && now>=peer.next_ack_time_) {
            std::sort(peer.received_.begin(),peer.received_.end());
            std::vector<AckRange> ranges;
            for(const std::uint16_t number:peer.received_) {
                if(ranges.empty() || ranges.back().max_index+1!=number)
                    ranges.push_back({number,number});
                else
                    ranges.back().max_index=number;
            }
            // At most 256 worst-case ranges fit comfortably below the MTU.
            for (std::size_t offset = 0; offset < ranges.size(); offset += 256) {
                ConnectedDatagram acknowledgements;
                acknowledgements.acks.assign(ranges.begin() + offset,
                    ranges.begin() + std::min(offset + 256, ranges.size()));
                const BitStream encoded=samp::proto::encode_connected_datagram(acknowledgements);
                const std::size_t byte_count=(encoded.numberOfBitsUsed_+7u)>>3;
                if(byte_count!=0) peer.outbox_.emplace_back(encoded.data_.data(),encoded.data_.data()+byte_count);
            }
            peer.received_.clear();
            peer.next_ack_time_=now+kMinPingToResendMs;
        }
        for (auto& datagram : peer.outbox_) {
            outbox_.push_back({peer.address_, peer.port_, std::move(datagram)});
        }
        peer.outbox_.clear();
    }
}

}  // namespace samp::server
