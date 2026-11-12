// The SA-MP game layer: the messages that ride on top of the RakNet
// transport.
//
// Provenance
//   docs/re/spec/connection-handshake.json    (lane R04: the connect flow)
//   docs/re/spec/game-packets.json            (lane R05: the packet layouts)
//   docs/re/spec/rpc-client-to-server.json    (lane R07: the c2s RPCs)
//   docs/re/spec/protocol-answers.json        (lane R19: the 0x28 framing)
//
// The connection flow:
//
//   1. the RakNet handshake accepts the peer
//   2. the server sends the game packet 34, "connection accepted + challenge
//      token": [0x22][u32 the client's address][u16 the client's port]
//      [u16 the peer index][u32 the challenge token]  (13 bytes)
//   3. the client sends the RPC 25 PlayerConnect
//   4. the server answers with the RPC 137 PlayerJoin and the RPC 139
//      PlayerInit, or with the RPC 130 "connection rejected" and a code
//
// The challenge response of the client is the token XOR 0xFDE (0xFD9 in the
// 0.3.7 build).  The RPC 130 codes are 1 = Incorrect Version, 2 =
// Unacceptable NickName, 3 = Bad mod version and 4 = Unable to allocate a
// player slot.
//
// A message that is addressed to ONE player is wrapped by the server in the
// 0x28 framing marker: [0x28][u32 the target player id][the ordinary
// message].  The effective message id of a wrapped message is the first byte
// of the inner message (lane R19).

#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "samp/proto/raknet.hpp"
#include "samp/server/config.hpp"
#include "pawn/natives.hpp"
#include "pawn/pawn_vm.hpp"
#include "samp/server/raknet_server.hpp"

namespace samp::server {

[[nodiscard]] bool invalid_player_name(const char* name);

// The SA-MP message ids of the connection flow.
inline constexpr std::uint8_t kGamePacketConnectionAccepted = 34;
inline constexpr std::uint8_t kRpcPlayerConnect = 25;
inline constexpr std::uint8_t kRpcConnectionRejected = 130;
inline constexpr std::uint8_t kRpcPlayerJoin = 137;
inline constexpr std::uint8_t kRpcPlayerQuit = 138;
inline constexpr std::uint8_t kRpcPlayerInit = 139;

// The stream-in and stream-out RPCs of the official server.  samp-server.exe
// 0x4877e0 sends the RPC whose id lives at DAT_004b6340 (32) when a player
// enters the 200.0 radius of another one, and 0x4667d0 the RPC at
// DAT_004bb31c (163) when it leaves it again.  The streaming pass itself is
// the per-tick loop 0x4851d0.
inline constexpr std::uint8_t kRpcPlayerStreamIn = 32;
inline constexpr std::uint8_t kRpcPlayerStreamOut = 163;
// samp-server.exe 0x4ebcfc: the squared streaming radius is 200.0 * 200.0,
// and 0x483b80 refuses a receiver that already holds 0xc9 streamed players.
inline constexpr float kStreamRadius = 200.0f;
inline constexpr unsigned kMaxStreamedPlayers = 0xc9;

// The class selection and spawn flow.  The client requests a class with the
// id of it (32 bits), the server answers with the same id carrying the data
// of the class; the spawn request is empty and the answer is one byte.
inline constexpr std::uint8_t kRpcPlayerRequestClass = 128;
inline constexpr std::uint8_t kRpcPlayerRequestSpawn = 129;
inline constexpr std::uint8_t kRpcPlayerInGame = 52;
inline constexpr std::uint8_t kRpcClientMessage = 93;

// The chat and the command input.
//
//   client -> server 101  u8 length (max 128), then the raw bytes
//   server -> client 101  u16 the sender id, u8 length, then the raw bytes
//
// The official server reads both directions at samp-server.exe 0x498340
// (the receive handler) and 0x484eb0 (the broadcast).  The broadcast carries
// the sender id instead of a pre-formatted line, so the client prefixes the
// name and paints the line in the colour of the player.  The command RPC is
// the u32-prefixed sibling handled at 0x498ea0: the server requires
// 2 <= length <= 255 and answers an unhandled command with the RPC 93
// message "SERVER: Unknown command." in white.
inline constexpr std::uint8_t kRpcPlayerRequestChat = 101;
inline constexpr std::uint8_t kRpcPlayerChat = 101;
inline constexpr std::uint8_t kRpcPlayerRequestCommand = 50;
inline constexpr std::size_t kMaxChatLength = 128;
inline constexpr std::size_t kMaxCommandLength = 255;

// The per-player RPCs a game mode provokes through its natives.
inline constexpr std::uint8_t kRpcSetPlayerPos = 12;
inline constexpr std::uint8_t kRpcSetPlayerFacingAngle = 19;
inline constexpr std::uint8_t kRpcSetPlayerInterior = 156;
inline constexpr std::uint8_t kRpcSetCameraPos = 157;
inline constexpr std::uint8_t kRpcSetCameraLookAt = 158;
inline constexpr std::uint8_t kRpcTogglePlayerClock = 30;

// The spawn answer the client accepts: 1 is "spawn", anything else refuses.
inline constexpr std::uint8_t kSpawnAnswerAllowed = 1;

// The result codes of the RPC 130.
inline constexpr std::uint8_t kRejectIncorrectVersion = 1;
inline constexpr std::uint8_t kRejectUnacceptableNickName = 2;
inline constexpr std::uint8_t kRejectBadModVersion = 3;
inline constexpr std::uint8_t kRejectNoPlayerSlot = 4;

// The version number of the 0.3.DL protocol.  The shipped server compares
// the first field of the PlayerConnect RPC and the challenge response
// against this constant, and the client XORs its token with it:
//
//   samp-server.exe 0x498114  cmp [esp+0x38], 0xfde   ; the version
//   samp-server.exe 0x49812b  xor ecx, 0xfde          ; the challenge
//
// The 0.3.7 build used 0xfd9, which is why the 0.3.7 references say 4057.
inline constexpr std::uint32_t kSampVersionNumber = 0xFDE;

using GamePlayer = samp::pawn::PlayerNativeState;
using GameVehicle = samp::pawn::VehicleNativeState;

// The game layer.
class GameLayer : public RakNetHandler, public samp::pawn::NativeHost {
    friend class Console;
    friend class RakNetServer;
public:
    GameLayer() = default;

    void on_user_message(RakNetPeer& peer, const samp::proto::BitStream& message) override;
    void update_streaming();
    void update_vehicles(std::uint64_t now);
    void process_script_timers(std::uint32_t elapsed_ms);
    void remove_script_timers(samp::pawn::PawnVm* script);
    int add_custom_model(const samp::pawn::CustomModelSpec& spec) override;
    bool redirect_download(int player,std::string_view url) override;
    void send_model_manifest(GamePlayer& player);
    void process_model_download(GamePlayer& player,std::size_t mtu=1492);
    void request_model_download(GamePlayer& player,std::uint8_t type,std::uint32_t checksum);
    bool begin_model_transfer(GamePlayer& player,const samp::pawn::CustomModelRecord& model);
    bool read_model_block(GamePlayer& player);
    void send_model_error(GamePlayer& player);
    void handle_model_finish(RakNetPeer& peer,const samp::proto::BitStream& payload);
    int model_base_id(std::int32_t custom) const;
    void load_model_config(std::string_view name="artconfig.txt");

    // Loads the game mode script and the filterscripts.
    bool load_filterscript(const std::string& name);

    // Runs the game mode: OnGameModeInit and then main().
    int start_gamemode();
    bool select_gamemode(std::string_view name) override;
    void begin_gamemode_restart();
    void finish_gamemode_restart();
    void initialize_player(GamePlayer& player);
    void disconnect_player(int id, std::uint8_t reason);
    void send_object(GamePlayer& player,const samp::pawn::ObjectNativeState& object) override;
    void send_vehicle_stream_in(GamePlayer& player, const GameVehicle& vehicle) override;
    void send_vehicle_stream_out(GamePlayer& player, std::uint16_t vehicle);
    void send_pickup_in(GamePlayer& player,std::uint32_t pickup);
    void send_pickup_out(GamePlayer& player,std::uint32_t pickup);
    void send_rpc(RakNetPeer& peer, std::uint8_t rpc_id, const samp::proto::BitStream& payload) override;


    // ------------------------------------------------------ the native host
    [[nodiscard]] int max_players() const override;
    [[nodiscard]] bool is_player_connected(int id) const override;
    [[nodiscard]] bool player_name_in_use(const char* name) const;
    void set_game_mode_text(std::string_view text) override;
    void set_world_time(int hour) override;
    void set_weather(int id) override;
    void set_gravity(float gravity) override;
    void kick_player(int id) override;
    void send_client_message(int id, int type, std::string_view text) override;

    // The class list (AddPlayerClass / AddPlayerClassEx) and the player
    // commands the game mode calls while it handles the callbacks.
    void add_player_class(const samp::pawn::PlayerClassSpec& spec) override;
    void set_player_interior(int id, int interior) override;
    void set_player_pos(int id, float x, float y, float z) override;
    void set_player_facing_angle(int id, float angle) override;
    void set_camera_pos(int id, float x, float y, float z) override;
    void set_camera_look_at(int id, float x, float y, float z, int cut) override;
    void toggle_player_clock(int id, bool on) override;

    // The server main loop and console query commands report the live slots.
    std::vector<std::unique_ptr<samp::pawn::PawnVm>> filterscripts_;
    std::vector<std::string> banned_ips_;
    samp::pawn::PawnVm vm_;
    Config* config_ = nullptr;
    std::function<void(int,std::string_view)> execute_remote_console_;
    std::string gamemodes_directory_="gamemodes",next_gamemode_;
    int gamemode_index_=0;
    std::uint32_t gamemode_repetitions_=0;
    bool gamemode_selected_=true,gamemode_restarting_=false;
    float gamemode_restart_elapsed_=0.f;
    std::uint32_t challenge_token_ = 0;

private:
    void relay_sync(const GamePlayer& player, const samp::proto::BitStream& payload);
    void handle_driver_packet(GamePlayer& player, const samp::proto::BitStream& message);
    void handle_passenger_packet(GamePlayer& player, const samp::proto::BitStream& message);
    void handle_aim_packet(GamePlayer& player, const samp::proto::BitStream& message);
    void handle_bullet_packet(GamePlayer& player, const samp::proto::BitStream& message);
    void handle_stats_packet(GamePlayer& player, const samp::proto::BitStream& message);
    void handle_weapons_packet(GamePlayer& player, const samp::proto::BitStream& message);
    void handle_game_packet(RakNetPeer& peer, const samp::proto::BitStream& message);
    void handle_player_connect(RakNetPeer& peer, const samp::proto::BitStream& payload);
    void handle_player_request_class(RakNetPeer& peer, const samp::proto::BitStream& payload);
    void handle_player_request_spawn(RakNetPeer& peer);
    void handle_player_in_game(RakNetPeer& peer);
    void process_vehicle(GameVehicle& vehicle,std::uint64_t now);
    void respawn_vehicle(GameVehicle& vehicle,std::uint64_t now);
    void handle_vehicle_death(RakNetPeer& peer,const samp::proto::BitStream& payload);
    void handle_vehicle_enter(RakNetPeer& peer, const samp::proto::BitStream& payload);
    void handle_vehicle_exit(RakNetPeer& peer, const samp::proto::BitStream& payload);
    void handle_player_interior(RakNetPeer& peer, const samp::proto::BitStream& payload);
    void handle_player_death(RakNetPeer& peer, const samp::proto::BitStream& payload);
    void set_player_state(GamePlayer& player, std::uint8_t state);
    void notify_key_change(GamePlayer& player, std::uint32_t old_keys);
    void handle_player_chat(RakNetPeer& peer, const samp::proto::BitStream& payload);
    void handle_player_command(RakNetPeer& peer, const samp::proto::BitStream& payload);
    void handle_score_request(RakNetPeer& peer);
    void handle_remote_console(RakNetPeer& peer,const samp::proto::BitStream& message);

    // The streaming pass of the official server (samp-server.exe 0x4851d0):
    // every spawned player receives the RPC 32 of the spawned players within
    // the 200.0 radius and the RPC 163 of those that left it.  The main loop
    // calls it once per tick.
    void send_stream_in(GamePlayer& receiver, const GamePlayer& other);
    void send_stream_out(GamePlayer& receiver, const GamePlayer& other);
    // The chat broadcast of the official server (samp-server.exe 0x484eb0).
    void broadcast_player_chat(const GamePlayer& sender, std::string_view text);


    int world_hour_ = 12;
    int weather_id_ = 1;
    std::vector<std::uint8_t> vehicle_models_ = std::vector<std::uint8_t>(212, 0);
    std::vector<samp::pawn::PlayerClassSpec> classes_;
    // The filterscripts stay alive for the whole run; the official server
    // calls every callback of the game mode and then every filterscript.
};

}  // namespace samp::server
