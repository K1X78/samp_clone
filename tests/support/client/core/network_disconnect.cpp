#include "samp/client/network_client.hpp"
#include "samp/proto/encoders.hpp"

#include <algorithm>
#include <array>
#include <chrono>
#include <thread>

#ifdef _WIN32
#include <winsock2.h>
#else
#include <unistd.h>
#endif

namespace samp::client {

// RakClient's Disconnect slot resolves through 0x10034500 / 0x10033CB0
// to this owner. Its close helper at 0x1003E3B0 queues reliable ID 0x20;
// allow queued traffic to drain, then release the peer's transport buffers.
// Official: FUN_100400e0 @ 0x100400e0 (samp.dll)
void NetworkClient::disconnect(std::uint32_t blocking_milliseconds, std::uint8_t ordering_channel) {
    if (blocking_milliseconds != 0 && socket_ != 0 && state_ == ConnectionState::Connected) {
        const std::array<std::uint8_t, 1> notification{0x20};
        samp::proto::ReliabilityFrame frame;
        frame.message_number = next_message_number_++;
        frame.reliability = samp::proto::Reliability::Reliable;
        frame.ordering_channel = ordering_channel;
        frame.data.write(notification.data(), notification.size());
        samp::proto::ConnectedDatagram datagram;
        datagram.frames.push_back(frame);
        const auto encoded = samp::proto::encode_connected_datagram(datagram);
        pending_.emplace_back(encoded.data_.data(),
            encoded.data_.data() + ((encoded.numberOfBitsUsed_ + 7u) >> 3));
        const auto started = std::chrono::steady_clock::now();
        do {
            tick();
            if (state_ != ConnectionState::Connected) break;
            std::this_thread::sleep_for(std::chrono::milliseconds(15));
        } while (std::chrono::duration_cast<std::chrono::milliseconds>(
                     std::chrono::steady_clock::now() - started).count() < blocking_milliseconds);
    }
    if (socket_ != 0) {
#ifdef _WIN32
        closesocket(static_cast<SOCKET>(socket_));
#else
        close(static_cast<int>(socket_));
#endif
        socket_ = 0;
    }
#ifdef _WIN32
    if(winsock_started_) {WSACleanup();winsock_started_=false;}
#endif
    world_.icons_.clear();world_.stream.gang_zones.clear();world_.stream.world_bounds={};
    world_.stream.gravity=0.008f;world_.stream.weather=1;world_.stream.interior_enter_exits_disabled=false;
    assets_.reset();
    pending_.clear();outgoing_frames_.clear();
    receive_state_={};send_state_={};
    game_commands_.clear();game_commands_.emplace_back(RemotePlayersReset{});
    class_ready_=spawn_accepted_=spawned_=spawn_requested_=in_game_=death_reported_=false;
    have_cookie_=have_challenge_=class_selection_started_=false;
    player_id_=-1;local_vehicle_mode_=reported_vehicle_mode_=0;
    reported_vehicle_id_=last_vehicle_driven_=0xffff;
    received_.clear();
    delivered_message_numbers_.clear();
    next_ack_time_ = 0;
    next_message_number_ = 0;
    std::fill(std::begin(next_ordering_index_), std::end(next_ordering_index_), std::uint16_t{});
    retry_requested_ = false;
    state_ = ConnectionState::Disconnected;
}

}
