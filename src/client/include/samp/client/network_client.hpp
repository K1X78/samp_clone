// The client's RakNet connection to the pinned SA-MP 0.3.DL server.
//
// Historical navigation references (0.3.7; not proof of 0.3.DL parity)
//   docs/re/spec/raknet-handshake.json      (lane R01: the handshake)
//   docs/re/spec/connection-handshake.json   (lane R04: the connect flow)
//   docs/re/spec/raknet-usage.json          (lane R03: the channels)
//   docs/re/spec/protocol-answers.json      (lane R19: the 0x28 framing)
//
// The flow
//
//   1. the client sends [0x18][u16 cookie ^ 0x6969] with the cookie 0
//   2. the server answers [0x1A][u16 cookie] and the client retries with
//      the cookie it was given
//   3. the server answers [0x19][0x00] and the RakNet connection is up
//   4. the client sends [0x0B][the password], the RakNet connection request;
//      the server does not accept the peer before it has arrived
//   5. the server answers [0x0C][u8 length][the 16 byte auth key]
//   6. the client answers [0x0C][u8 length][the 40 character answer] and
//      the server accepts the peer
//   7. the server answers [0x22][the address][the port][the peer index]
//      [the challenge token], the connection accepted message
//   8. the client sends the RPC 25 PlayerConnect, whose challenge response
//      is the token XOR 0xFD9
//   9. the server answers the RPC 137 PlayerJoin and the RPC 139 PlayerInit
//
// Everything the client sends is obfuscated with the mask of the server's
// port; everything the server sends is plaintext.

#pragma once

#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

#include "samp/proto/raknet.hpp"
#include "samp/proto/reliability_frame.hpp"
#include "samp/proto/wire.hpp"
#include "samp/proto/own_sync.hpp"

#include "samp/client/world_state.hpp"
#include "samp/client/asset_manager.hpp"
#include "samp/client/game_command.hpp"

namespace samp::client {

// The state of the connection.
enum class ConnectionState {
    Disconnected,
    WaitingForTheCookie,
    WaitingForTheReply,
    WaitingForTheChallenge,
    WaitingForTheAuthKey,
    WaitingForThePlayerInit,
    Connected,
    Failed,
};

// The parameters of a connection.
struct ConnectionParameters {
    std::string host;
    std::uint16_t port = 0;
    std::string name;
    std::string password;
    std::string user_files_directory;
    // The secret the key of the client is derived from.  The official client
    // takes it from the game process (samp.dll 0x1000ad80 reads the string
    // at 0x00C9236C); the server never looks at it, so a client without the
    // game uses a fixed one.
    std::string secret;
    // Explicit automation for the headless diagnostic probe. The injected
    // client waits for the player's class selection and spawn request.
    bool automatic_spawn = false;
    // The injected game begins selection from 0x10005f40's equivalent,
    // after world/actor initialization, rather than during the early handshake.
    bool defer_class_selection = false;
};

// The network client.
class NetworkClient {
public:
    NetworkClient() = default;
    ~NetworkClient();

    NetworkClient(const NetworkClient&) = delete;
    NetworkClient& operator=(const NetworkClient&) = delete;

    // Starts the connection.  The datagrams are sent and received by tick().
    bool connect(const ConnectionParameters& parameters);
    void disconnect(std::uint32_t blocking_milliseconds = 0, std::uint8_t ordering_channel = 0);

    // The tick: it sends what is pending and processes what arrived.
    void tick();

    // Sends a user message.  The message is a game packet ([u8 id][payload])
    // or an RPC frame.

    // Sends an RPC.  The reliability is the one of the official client: the
    // RPCs ride a reliable frame, and the RPC that tells the server that the
    // Sends a chat line with the RPC 101 of the official client
    // (samp.dll 0x10005860): a one-byte length, then the raw bytes.  The
    // official client truncates the length to the byte, and the official
    // server drops every request of 129 bytes or more, so a longer line is
    // refused here instead of being put on the wire.
    bool send_chat(std::string_view text);

    // Sends a slash command with the u32 length-prefixed request used by
    // samp.dll 0x10069340. The official server accepts lengths 2..255.
    bool send_command(std::string_view command);
    // 0x1006eaf0 asks for RPC 155 while the scoreboard is rendered; the
    // recovered helper applies its own strict three-second throttle.
    void request_score_pings();

    void request_class(std::uint32_t class_id);
    void send_bullet_sync(const std::array<std::uint8_t,40>& bullet);
    void send_aim_sync();
    void send_stats_sync();
    void send_weapons_sync();
    void send_interior(std::uint8_t interior);
    void send_enter_vehicle(std::uint16_t id,bool passenger);
    void send_exit_vehicle(std::uint16_t id);
    void send_vehicle_death(std::uint16_t id);
    void send_death_notification(std::uint8_t reason, std::uint16_t killer);
private:
    friend struct NetworkClientTestAccess;
    void handle_player_init(const samp::proto::BitStream& payload);
    void handle_score_pings(const samp::proto::BitStream& payload);
    void handle_foot_sync(const samp::proto::BitStream& packet,std::uint64_t stamp);
    void handle_vehicle_sync(const samp::proto::BitStream& packet,std::uint64_t stamp);
    void handle_aim_sync(const samp::proto::BitStream& packet,std::uint64_t stamp);
    void handle_bullet_sync(const samp::proto::BitStream& packet,std::uint64_t stamp);
    void handle_marker_sync(const samp::proto::BitStream& packet);
    void handle_unoccupied_sync(const samp::proto::BitStream& packet);
    void handle_trailer_sync(const samp::proto::BitStream& packet);
    // The class selection: the client asks the server for the classes, the
    // server answers with the data of the class and the client asks to
    // spawn.
    void handle_class_response(const samp::proto::BitStream& payload);
    void handle_spawn_info(const samp::proto::BitStream& payload);
    void send_player_connect();
    // The state of the local player, the packet 207 the official client sends
    // from samp.dll 0x10004db0.  The server relays it to the other players.
    void send_foot_sync();
    void send_driver_sync();
    void send_passenger_sync();
    void handle_passenger_sync(const samp::proto::BitStream& packet, std::uint64_t stamp);

public:
    // The socket.
    std::uint64_t socket_ = 0;
    bool winsock_started_ = false;
    std::uint8_t open_attempts_ = 0;
    std::uint64_t next_open_ms_ = 0, last_receive_ms_ = 0;
    std::uint16_t server_port_ = 0;
    std::uint16_t local_port_ = 0;
    std::uint16_t cookie_ = 0;
    bool have_cookie_ = false;
    std::uint32_t challenge_token_ = 0;
    bool have_challenge_ = false;
    ConnectionState state_ = ConnectionState::Disconnected;
    std::string error_;

    // The server address, in network order.
    std::uint8_t server_address_[4] = {0, 0, 0, 0};

    // The datagrams that are waiting to be sent.
    std::vector<std::vector<std::uint8_t>> pending_;
    std::vector<samp::proto::ReliabilityFrame> outgoing_frames_;

    // The RakNet peer state.
    std::uint16_t next_message_number_ = 0;
    std::uint16_t next_ordering_index_[32] = {};
    std::vector<std::uint16_t> received_;
    // Every message number that has already been delivered, so a retransmit
    // of a reliable frame is dropped (RakNet delivers a message number once).
    std::vector<std::uint16_t> delivered_message_numbers_;
    std::uint64_t next_ack_time_ = 0;
    samp::proto::ReliabilityReceiveState receive_state_;
    samp::proto::ReliabilitySendState send_state_;

    // The connection parameters.
    ConnectionParameters parameters_;

    int player_id_ = -1;
    std::uint32_t player_colour_ = 0;
    std::string player_name_;
    // The model manager the RPC 179, 180, 183 and 185 drive.
    AssetManager assets_;
    std::string server_name_;
    ScorePingValue local_score_ping_;
    std::uint32_t last_score_ping_request_=0;
    std::vector<std::string> connection_messages_{"SA-MP 0.3.DL-R1 Started"};
    bool retry_requested_=false;

    // The class selection: the number of the classes the server has, the
    // class that was asked for and the state of the spawn.
    std::uint32_t class_count_ = 0;
    std::uint32_t requested_class_ = 0xFFFFFFFFu;
    bool class_ready_ = false;
    bool spawn_accepted_ = false;
    std::vector<GameCommand> game_commands_;
    bool class_selection_started_ = false;
    bool spawned_ = false;
    bool death_reported_ = false;
    // The client has asked the server to spawn it.
    bool spawn_requested_ = false;
    // The server has taken the player into the game, so the client owns the
    // state of its own ped from now on.
    bool in_game_ = false;
    WorldClass local_spawn_;
    // Where the server put the player, and the moment the last on-foot sync
    // went out.
    float local_x_ = 0.0F;
    float local_y_ = 0.0F;
    float local_z_ = 0.0F;
    float local_angle_ = 0.0F;
    std::uint64_t last_foot_sync_ms_ = 0;
    std::uint64_t last_foot_check_ms_ = 0;
    std::array<std::uint8_t,31> local_aim_{}, last_aim_{};
    bool local_aim_provided_ = false;
    std::int32_t local_money_ = 0, local_drunk_ = 0;
    std::array<std::uint8_t,13> local_weapons_{}, reported_weapons_{};
    std::array<std::uint16_t,13> local_ammo_{}, reported_ammo_{};
    std::uint16_t target_player_ = 0xffff, target_actor_ = 0xffff;
    std::uint8_t reported_interior_ = 0;
    bool local_stats_provided_ = false;
    std::uint64_t last_stats_ms_ = 0, last_weapons_ms_ = 0;
    std::uint64_t last_aim_ms_ = 0;
    std::uint32_t onfoot_rate_ = 30, incar_rate_ = 30;
    std::uint8_t local_vehicle_mode_ = 0, reported_vehicle_mode_ = 0;
    std::uint16_t reported_vehicle_id_ = 0xffff, last_vehicle_driven_ = 0xffff;
    std::array<std::uint8_t,63> local_driver_{};
    std::array<std::uint8_t,24> local_passenger_{};
    bool lan_mode_ = false;
    std::int32_t lag_compensation_mode_ = 1;
    bool local_motion_provided_ = false;
    samp::proto::own::FootSync local_motion_{};
    std::vector<std::uint8_t> last_foot_packet_;

    // The world the server streams.
    WorldState world_;
};

}  // namespace samp::client
