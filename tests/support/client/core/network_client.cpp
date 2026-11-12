#include "samp/client/network_client.hpp"

#include <algorithm>
#include <array>
#include <chrono>
#include <cmath>
#include <cstring>

#include "samp/proto/encoders.hpp"
#include "samp/proto/obfuscation.hpp"
#include "samp/proto/own_sync.hpp"
#include "samp/proto/remote_sync.hpp"
#include "samp/proto/reliability_frame.hpp"
#include "samp/proto/samp_auth.hpp"
#include "samp/proto/sha1.hpp"
#include "samp/proto/samp_key.hpp"

#include "samp/client/player_connect.hpp"
#include "samp/client/key_bindings.hpp"
#include "samp/client/server_rpc.hpp"

#if defined(_WIN32)
#include <winsock2.h>
#include <ws2tcpip.h>
#else
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#endif

namespace samp::client {

namespace {

using samp::proto::BitStream;
using samp::proto::Reliability;
using samp::proto::ReliabilityFrame;

constexpr std::uint8_t kRpcPlayerConnect = 25;
// 0.3.DL registration 0x10012310: DAT_10117fa4=32 -> 0x100109d0,
// DAT_10117f9c=163 -> 0x10010ce0 (166 is the separate death RPC).
constexpr std::uint8_t kRpcPlayerStreamIn = 32;
constexpr std::uint8_t kRpcPlayerInit = 139;
// The class selection: the client asks for the data of a class, the server
// answers with the same id, and the client asks to spawn.
constexpr std::uint8_t kRpcPlayerRequestClass = 128;
constexpr std::uint8_t kRpcPlayerRequestSpawn = 129;
// The client tells the server that it is in the game.  The official client of
// the 0.3.DL build sends it when the spawn is accepted (samp.dll 0x10003b20
// sends the RPC whose id is 52, with an empty payload and the reliability
// nine, the reliable ordered one).  The server spawns the player only when
// this RPC arrives (samp-server.exe 0x497750), and it streams the player to
// the other players only when it is spawned.
constexpr std::uint8_t kRpcPlayerInGame = 52;
// The data of the spawn of the player, the server to the client.
constexpr std::uint8_t kRpcSetSpawnInfo = 68;

// Packet IDs handled by the 0.3.DL client dispatcher.
constexpr std::uint8_t kPacketVehicleSync = 200;
constexpr std::uint8_t kPacketAimSync = 203;
constexpr std::uint8_t kPacketBulletSync = 206;
constexpr std::uint8_t kPacketPlayerSync = 207;
constexpr std::uint8_t kPacketMarkerSync = 208;
constexpr std::uint8_t kPacketUnoccupiedSync = 209;
constexpr std::uint8_t kPacketTrailerSync = 210;
constexpr std::uint8_t kPacketPassengerSync = 211;

// The channel and reliability used for client RPCs, as observed in 0.3.DL.
constexpr std::uint8_t kClientChannelRpc = 0;
constexpr Reliability kClientRpcReliability = Reliability::Reliable;

}  // namespace

// Official: FUN_10033b60 @ 0x10033b60 (samp.dll)
NetworkClient::~NetworkClient() {
#if defined(_WIN32)
    if (socket_ != 0) {
        ::closesocket(static_cast<SOCKET>(socket_));
    }
    if(winsock_started_) WSACleanup();
#else
    if (socket_ != 0) {
        ::close(static_cast<int>(socket_));
    }
#endif
}

// RakClientInterface vtable 10119658+4 resolves to this Connect owner.
// 10002c70, previously cited here, is the unrelated HTTP URL parser.
// Official: FUN_10033bf0 @ 0x10033bf0 (samp.dll)
bool NetworkClient::connect(const ConnectionParameters& parameters) {

    if(socket_!=0) {
#if defined(_WIN32)
        ::closesocket(static_cast<SOCKET>(socket_));

#else
        ::close(static_cast<int>(socket_));
#endif
        socket_=0;
    }
#if defined(_WIN32)
    if(winsock_started_) {WSACleanup();winsock_started_=false;}
#endif
    pending_.clear();outgoing_frames_.clear();received_.clear();game_commands_.clear();
    delivered_message_numbers_.clear();
    receive_state_ = {}; send_state_ = {};
    game_commands_.emplace_back(RemotePlayersReset{});
    next_message_number_=0;std::fill(std::begin(next_ordering_index_),std::end(next_ordering_index_),std::uint16_t{0});
    next_ack_time_=0;class_count_=0;requested_class_=0xffffffff;
    class_ready_=spawn_accepted_=spawned_=spawn_requested_=in_game_=death_reported_=false;
    local_spawn_={};
    world_=WorldState{};retry_requested_=false;
    local_score_ping_={};
    last_foot_packet_.clear();last_foot_check_ms_=last_foot_sync_ms_=0;
    local_motion_provided_=false;local_motion_={};onfoot_rate_=incar_rate_=30;lan_mode_=false;lag_compensation_mode_=1;
    local_vehicle_mode_=reported_vehicle_mode_=0;reported_vehicle_id_=last_vehicle_driven_=0xffff;local_driver_={};local_passenger_={};
    local_aim_provided_=false;local_aim_={};last_aim_={};last_aim_ms_=0;
    local_money_=local_drunk_=0;local_weapons_={};local_ammo_={};reported_weapons_={};reported_ammo_={};
    target_player_=target_actor_=0xffff;reported_interior_=0;local_stats_provided_=false;
    last_stats_ms_=last_weapons_ms_=0;
    parameters_ = parameters;
    server_port_ = parameters.port;
    error_.clear();
    state_ = ConnectionState::Disconnected;
    have_cookie_ = false;
    have_challenge_ = false;
    class_selection_started_ = false;
    player_id_ = -1;
    // The server does not tell the joining client its own name: the client
    // knows it, it is the name it sent.
    player_name_ = parameters.name;
    assets_.reset();
    assets_.initialize_user_directory(parameters.user_files_directory);
    assets_.initialize_cache(parameters.host, parameters.port);


#if defined(_WIN32)
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        error_ = "WSAStartup failed";
        state_ = ConnectionState::Failed;
        return false;
    }
    winsock_started_=true;
    SOCKET sock = ::socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (sock == INVALID_SOCKET) {
        error_ = "the socket could not be created";
        state_ = ConnectionState::Failed;
        return false;
    }
    socket_ = static_cast<std::uint64_t>(sock);

#else
    const int sock = ::socket(AF_INET, SOCK_DGRAM, 0);
    if (sock < 0) {
        error_ = "the socket could not be created";
        state_ = ConnectionState::Failed;
        return false;
    }
    socket_ = static_cast<std::uint64_t>(sock);
#endif

    // The server address.
    sockaddr_in address{};
    address.sin_family = AF_INET;
    address.sin_port = htons(parameters.port);
    if (inet_pton(AF_INET, parameters.host.c_str(), &address.sin_addr) != 1) {
        // A host name: resolve it.
        addrinfo hints{};
        hints.ai_family = AF_INET;
        hints.ai_socktype = SOCK_DGRAM;
        addrinfo* result = nullptr;
        if (getaddrinfo(parameters.host.c_str(), nullptr, &hints, &result) != 0 || result == nullptr) {
            error_ = "the server address could not be resolved";
            state_ = ConnectionState::Failed;
            return false;
        }
        address.sin_addr = reinterpret_cast<sockaddr_in*>(result->ai_addr)->sin_addr;
        freeaddrinfo(result);
    }
    // The server address is kept for the sends.
    std::memcpy(server_address_, &address.sin_addr, 4);


    // The receive timeout: the tick must not block.
    const DWORD timeout_ms = 20;
#if defined(_WIN32)
    setsockopt(static_cast<SOCKET>(socket_), SOL_SOCKET, SO_RCVTIMEO,
               reinterpret_cast<const char*>(&timeout_ms), sizeof(timeout_ms));
#else
    timeval timeout{};
    timeout.tv_sec = 0;
    timeout.tv_usec = 20000;
    setsockopt(static_cast<int>(socket_), SOL_SOCKET, SO_RCVTIMEO, &timeout, sizeof(timeout));
#endif

    state_ = ConnectionState::WaitingForTheCookie;
    open_attempts_=1;
    next_open_ms_=static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count())+1000;
    last_receive_ms_=next_open_ms_-1000;
    const std::uint16_t xored_cookie=static_cast<std::uint16_t>(0u^0x6969u);
    const std::vector<std::uint8_t> request{
        samp::proto::kIdOpenConnectionRequest,
        static_cast<std::uint8_t>(xored_cookie&0xffu),
        static_cast<std::uint8_t>((xored_cookie>>8)&0xffu)};
    if(socket_!=0) {
        const auto wire=samp::proto::obfuscate(request,server_port_);
        sockaddr_in to{};to.sin_family=AF_INET;to.sin_port=htons(server_port_);
        std::memcpy(&to.sin_addr,server_address_,4);
#if defined(_WIN32)
        static_cast<void>(::sendto(static_cast<SOCKET>(socket_),
            reinterpret_cast<const char*>(wire.data()),static_cast<int>(wire.size()),0,
            reinterpret_cast<const sockaddr*>(&to),sizeof(to)));
#else
        static_cast<void>(::sendto(static_cast<int>(socket_),wire.data(),wire.size(),0,
            reinterpret_cast<const sockaddr*>(&to),sizeof(to)));
#endif
    }

    return true;
}

void NetworkClient::tick() {
    if (state_ == ConnectionState::Failed || state_ == ConnectionState::Disconnected) {
        assets_.reset();return;
    }
    const auto current_time_ms = [] {
        using namespace std::chrono;
        return static_cast<std::uint64_t>(
            duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count());
    };

    // Process everything that arrived.
    for (;;) {
        std::vector<std::uint8_t> datagram;
        if(socket_==0) break;
        std::uint8_t buffer[2048];
        sockaddr_in sender{};
#if defined(_WIN32)
        int sender_length = sizeof(sender);
#else
        socklen_t sender_length = sizeof(sender);
#endif
#if defined(_WIN32)
        const int received=::recvfrom(static_cast<SOCKET>(socket_),
            reinterpret_cast<char*>(buffer),static_cast<int>(sizeof(buffer)),0,reinterpret_cast<sockaddr*>(&sender),&sender_length);
#else
        const ssize_t received=::recvfrom(static_cast<int>(socket_),buffer,sizeof(buffer),
                                          0,reinterpret_cast<sockaddr*>(&sender),&sender_length);
#endif
        if(received<=0) break;
        if (sender.sin_port != htons(server_port_) ||
            std::memcmp(&sender.sin_addr, server_address_, 4) != 0) continue;
        last_receive_ms_=current_time_ms();
        datagram.assign(buffer,buffer+received);
        if (datagram.empty()) {
            continue;
        }
        if (state_ == ConnectionState::WaitingForTheCookie ||
            state_ == ConnectionState::WaitingForTheReply) {
            const std::uint8_t* data=datagram.data();
            const std::size_t size=datagram.size();
            if(size==0) continue;
            const char* notice=nullptr;
            switch(data[0]) {
                case 0x1d: notice="The server didn't respond. Retrying..";retry_requested_=true;break;
                case 0x1f: notice="The server is full. Retrying...";retry_requested_=true;break;
                case 0x20: notice="Server closed the connection.";state_=ConnectionState::Failed;break;
                case 0x21: notice="Lost connection to the server. Reconnecting..";retry_requested_=true;break;
                case 0x23: notice="Failed to initialize encryption.";break;
                case 0x24: notice="You are banned from this server.";break;
                case 0x25: notice="Wrong server password.";state_=ConnectionState::Failed;break;
                default: break;
            }
            if(notice!=nullptr) {
                connection_messages_.emplace_back(notice);
                if(retry_requested_) state_=ConnectionState::Disconnected;
                if(state_==ConnectionState::Failed) error_=notice;
            } else if(data[0]==samp::proto::kIdOpenConnectionCookie && size>=3) {
                cookie_=static_cast<std::uint16_t>(data[1]|
                    (static_cast<std::uint16_t>(data[2])<<8));
                have_cookie_=true;
                state_=ConnectionState::WaitingForTheReply;
                const std::uint16_t xored_cookie=static_cast<std::uint16_t>(cookie_^0x6969u);
                const std::vector<std::uint8_t> request{
                    samp::proto::kIdOpenConnectionRequest,
                    static_cast<std::uint8_t>(xored_cookie&0xffu),
                    static_cast<std::uint8_t>((xored_cookie>>8)&0xffu)};
                if(socket_!=0) {
                    const auto wire=samp::proto::obfuscate(request,server_port_);
                    sockaddr_in to{};to.sin_family=AF_INET;to.sin_port=htons(server_port_);
                    std::memcpy(&to.sin_addr,server_address_,4);
#if defined(_WIN32)
                    static_cast<void>(::sendto(static_cast<SOCKET>(socket_),
                        reinterpret_cast<const char*>(wire.data()),static_cast<int>(wire.size()),0,
                        reinterpret_cast<const sockaddr*>(&to),sizeof(to)));
#else
                    static_cast<void>(::sendto(static_cast<int>(socket_),wire.data(),wire.size(),0,
                        reinterpret_cast<const sockaddr*>(&to),sizeof(to)));
#endif
                }
            } else if(data[0]==samp::proto::kIdOpenConnectionReply) {
                state_=ConnectionState::WaitingForTheChallenge;
                std::vector<std::uint8_t> request;
                request.reserve(parameters_.password.size()+1);
                request.push_back(samp::proto::kIdConnectionRequest);
                request.insert(request.end(),parameters_.password.begin(),parameters_.password.end());
                {
                    const auto outgoing_message = std::span<const std::uint8_t>(request.data(),request.size());
                    const auto outgoing_reliability = Reliability::Reliable;
                    const auto outgoing_channel = kClientChannelRpc;
                    samp::proto::ReliabilityFrame frame;
                    frame.message_number = next_message_number_++;
                    frame.reliability = outgoing_reliability;
                    if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                        outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                        outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                        frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                        frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
                    }
                    frame.data.write(outgoing_message.data(), outgoing_message.size());
                    outgoing_frames_.push_back(std::move(frame));
                }
            }
        } else {
            // The server -> client datagrams are plaintext.
            samp::proto::ConnectedDatagram connected_datagram;
            const bool decoded = samp::proto::decode_connected_datagram(
                datagram, connected_datagram, &receive_state_, current_time_ms());
            if (receive_state_.failed) {
                state_ = ConnectionState::Failed;
                error_ = "Transport receive capacity exceeded.";
                receive_state_ = {};
                send_state_ = {};
                pending_.clear();
                return;
            }
            if(decoded) {
                samp::proto::acknowledge_reliability_frames(send_state_, connected_datagram.acks, current_time_ms());
                for (const auto number : receive_state_.acknowledgements) {
                    if (std::find(received_.begin(), received_.end(), number) == received_.end())
                        received_.push_back(number);
                }
                receive_state_.acknowledgements.clear();
                for(const ReliabilityFrame& frame:connected_datagram.frames) {
                    const BitStream& message=frame.data;
                    if (samp::proto::handle_connected_ping(send_state_, message,
                                                          next_message_number_, current_time_ms())) continue;
                    // Preserve the first rejection reason if several messages
                    // are delivered from one connected datagram.
                    if(state_==ConnectionState::Failed || message.numberOfBitsUsed_<8) continue;
                    const std::uint8_t first=message.data_[0];
                    const char* notice=nullptr;
                    switch(first) {
                        case 0x1d: notice="The server didn't respond. Retrying..";retry_requested_=true;break;
                        case 0x1f: notice="The server is full. Retrying...";retry_requested_=true;break;
                        case 0x20: notice="Server closed the connection.";state_=ConnectionState::Failed;break;
                        case 0x21: notice="Lost connection to the server. Reconnecting..";retry_requested_=true;break;
                        case 0x23: notice="Failed to initialize encryption.";break;
                        case 0x24: notice="You are banned from this server.";break;
                        case 0x25: notice="Wrong server password.";state_=ConnectionState::Failed;break;
                        default: break;
                    }
                    if(notice!=nullptr) {
                        connection_messages_.emplace_back(notice);
                        if(retry_requested_) state_=ConnectionState::Disconnected;
                        if(state_==ConnectionState::Failed) error_=notice;
                        continue;
                    }
                    if(first==samp::proto::kIdAuthKey) {
                        BitStream auth_bits=message;
                        std::uint8_t message_id=0,key_length=0;
                        if(!auth_bits.read(&(message_id),1) ||
                           !auth_bits.read(&(key_length),1) || key_length==0) continue;
                        std::string key;
                        key.resize(key_length);
                        if(!auth_bits.read(key.data(),key_length)) continue;
                        while(!key.empty() && key.back()=='\0') key.pop_back();
                        samp::proto::Sha1 key_hash;
                        key_hash.update(reinterpret_cast<const std::uint8_t*>(key.data()),key.size());
                        key_hash.finalize();
                        std::array<std::uint8_t,samp::proto::kSha1DigestSize> digest{};
                        std::memcpy(digest.data(),key_hash.digest(),digest.size());
                        std::array<std::uint8_t,samp::proto::kSha1DigestSize> mixed{};
                        for(std::size_t i=0;i<mixed.size();++i) {
                            const std::size_t word=i/4u,byte=i%4u;
                            mixed[i]=static_cast<std::uint8_t>(
                                digest[word*4u+3u-byte]^samp::proto::auth::kAnswerMask[i]);
                        }
                        constexpr char hex[]="0123456789ABCDEF";
                        std::string answer;
                        answer.reserve(mixed.size()*2u);
                        for(const std::uint8_t byte:mixed) {
                            answer.push_back(hex[byte>>4]);
                            answer.push_back(hex[byte&0x0fu]);
                        }
                        state_=ConnectionState::WaitingForTheAuthKey;
                        std::vector<std::uint8_t> response;
                        response.reserve(answer.size()+2);
                        response.push_back(samp::proto::kIdAuthKey);
                        response.push_back(static_cast<std::uint8_t>(answer.size()));
                        response.insert(response.end(),answer.begin(),answer.end());
                        {
                            const auto outgoing_message = std::span<const std::uint8_t>(response.data(),response.size());
                            const auto outgoing_reliability = Reliability::Reliable;
                            const auto outgoing_channel = kClientChannelRpc;
                            samp::proto::ReliabilityFrame frame;
                            frame.message_number = next_message_number_++;
                            frame.reliability = outgoing_reliability;
                            if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                                outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                                outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                                frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                                frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
                            }
                            frame.data.write(outgoing_message.data(), outgoing_message.size());
                            outgoing_frames_.push_back(std::move(frame));
                        }
                        continue;
                    }
                    if(first==samp::proto::kIdConnectionRequestAccepted) {
                        if(((message.numberOfBitsUsed_+7u)>>3)<13) continue;
                        const auto* accepted=message.data_.data();
                        challenge_token_=static_cast<std::uint32_t>(accepted[9]) |
                            (static_cast<std::uint32_t>(accepted[10])<<8) |
                            (static_cast<std::uint32_t>(accepted[11])<<16) |
                            (static_cast<std::uint32_t>(accepted[12])<<24);
                        have_challenge_=true;
                        state_=ConnectionState::WaitingForThePlayerInit;
                        connection_messages_.emplace_back("Connected. Joining the game...");
                        sockaddr_in local{};
                        bool have_local_address=false;
#if defined(_WIN32)
                        int length=sizeof(local);
                        have_local_address=::getsockname(static_cast<SOCKET>(socket_),
                            reinterpret_cast<sockaddr*>(&local),&length)==0;
#else
                        socklen_t length=sizeof(local);
                        have_local_address=::getsockname(static_cast<int>(socket_),
                            reinterpret_cast<sockaddr*>(&local),&length)==0;
#endif
                        if(have_local_address) {
                            std::uint32_t address=0;
                            std::memcpy(&address,&local.sin_addr,4);
                            if(address==0) {
                                sockaddr_in route{};
                                route.sin_family=AF_INET;
                                route.sin_port=htons(server_port_);
                                std::memcpy(&route.sin_addr,server_address_,4);
#if defined(_WIN32)
                                const SOCKET probe=::socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
                                if(probe!=INVALID_SOCKET) {
                                    sockaddr_in probe_address{};
                                    int probe_length=sizeof(probe_address);
                                    if(::connect(probe,reinterpret_cast<const sockaddr*>(&route),sizeof(route))==0 &&
                                       ::getsockname(probe,reinterpret_cast<sockaddr*>(&probe_address),&probe_length)==0)
                                        std::memcpy(&address,&probe_address.sin_addr,4);
                                    ::closesocket(probe);
                                }
#else
                                const int probe=::socket(AF_INET,SOCK_DGRAM,0);
                                if(probe>=0) {
                                    sockaddr_in probe_address{};
                                    socklen_t probe_length=sizeof(probe_address);
                                    if(::connect(probe,reinterpret_cast<const sockaddr*>(&route),sizeof(route))==0 &&
                                       ::getsockname(probe,reinterpret_cast<sockaddr*>(&probe_address),&probe_length)==0)
                                        std::memcpy(&address,&probe_address.sin_addr,4);
                                    ::close(probe);
                                }
#endif
                            }
                            const std::uint16_t port=ntohs(local.sin_port);
                            const std::vector<std::uint8_t> incoming{
                                samp::proto::kIdNewIncomingConnection,
                                static_cast<std::uint8_t>(address>>24),
                                static_cast<std::uint8_t>(address>>16),
                                static_cast<std::uint8_t>(address>>8),
                                static_cast<std::uint8_t>(address),
                                static_cast<std::uint8_t>(port>>8),
                                static_cast<std::uint8_t>(port)};
                            {
                                const auto outgoing_message = std::span<const std::uint8_t>(incoming.data(),incoming.size());
                                const auto outgoing_reliability = Reliability::Reliable;
                                const auto outgoing_channel = kClientChannelRpc;
                                samp::proto::ReliabilityFrame frame;
                                frame.message_number = next_message_number_++;
                                frame.reliability = outgoing_reliability;
                                if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                                    outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                                    outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                                    frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                                    frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
                                }
                                frame.data.write(outgoing_message.data(), outgoing_message.size());
                                outgoing_frames_.push_back(std::move(frame));
                            }
                        }
                        send_player_connect();
                        continue;
                    }
                    if(first==samp::proto::kRaknetIdRpc) {
                        BitStream rpc_bits;
                        rpc_bits.write(message.data_.data(),(message.numberOfBitsUsed_+7u)>>3);
                        rpc_bits.numberOfBitsUsed_=message.numberOfBitsUsed_;
                        std::uint8_t message_id=0;
                        std::uint8_t rpc_id=0;
                        std::uint8_t bit_count_bytes[4]{};
                        if(!rpc_bits.read(&(message_id),1) || message_id!=samp::proto::kRaknetIdRpc ||
                           !rpc_bits.read(&(rpc_id),1) ||
                           !rpc_bits.readCompressed(bit_count_bytes,32,true)) continue;
                        const std::uint32_t payload_bits=static_cast<std::uint32_t>(bit_count_bytes[0]) |
                            (static_cast<std::uint32_t>(bit_count_bytes[1])<<8) |
                            (static_cast<std::uint32_t>(bit_count_bytes[2])<<16) |
                            (static_cast<std::uint32_t>(bit_count_bytes[3])<<24);
                        BitStream rpc_payload;
                        if(payload_bits>0) {
                            const std::size_t payload_bytes=(static_cast<std::size_t>(payload_bits)+7u)>>3;
                            std::vector<std::uint8_t> payload_buffer(payload_bytes,0);
                            if(!rpc_bits.readBits(payload_buffer.data(),static_cast<int>(payload_bits),false))
                                continue;
                            rpc_payload.write(payload_buffer.data(),payload_buffer.size());
                            rpc_payload.numberOfBitsUsed_=payload_bits;
                        }
                        if(rpc_id==kRpcPlayerInit) {
                            handle_player_init(rpc_payload);
                            continue;
                        }
                        if(rpc_id==155) {
                            handle_score_pings(rpc_payload);
                            continue;
                        }
                        if(rpc_id==130) {
                            BitStream rejection_bits=rpc_payload;
                            std::uint8_t reason=0;
                            if(!rejection_bits.read(&(reason),1)) continue;
                            const char* first_message=nullptr;
                            switch(reason) {
                            case 1:
                                first_message="CONNECTION REJECTED: Incorrect Version.";
                                connection_messages_.emplace_back(first_message);
                                break;
                            case 2:
                                first_message="CONNECTION REJECTED: Unacceptable NickName";
                                connection_messages_.emplace_back(first_message);
                                connection_messages_.emplace_back("Please choose another nick between and 3-20 characters");
                                connection_messages_.emplace_back("Please use only a-z, A-Z, 0-9");
                                connection_messages_.emplace_back("Use /quit to exit or press ESC and select Quit Game");
                                break;
                            case 3:
                                first_message="CONNECTION REJECTED: Bad mod version.";
                                connection_messages_.emplace_back(first_message);
                                break;
                            case 4:
                                first_message="CONNECTION REJECTED: Unable to allocate a player slot.";
                                connection_messages_.emplace_back(first_message);
                                break;
                            default:
                                break;
                            }
                            error_=first_message?first_message:"Connection rejected.";
                            const std::array<std::uint8_t,1> notification{0x20};
                            {
                                const auto outgoing_message = notification;
                                const auto outgoing_reliability = Reliability::Reliable;
                                const auto outgoing_channel = kClientChannelRpc;
                                samp::proto::ReliabilityFrame frame;
                                frame.message_number = next_message_number_++;
                                frame.reliability = outgoing_reliability;
                                if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                                    outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                                    outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                                    frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                                    frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
                                }
                                frame.data.write(outgoing_message.data(), outgoing_message.size());
                                outgoing_frames_.push_back(std::move(frame));
                            }
                            state_=ConnectionState::Failed;
                            continue;
                        }
                        {
                            ServerRpcContext context{world_,&game_commands_,player_id_,
                                &player_name_,&player_colour_,&assets_};
                            apply_server_rpc(context,rpc_id,rpc_payload);
                        }
                        if(!world_.stream.client_check_replies.empty()) {
                            for(const ClientCheckReply& reply:world_.stream.client_check_replies) {
                                BitStream check;
                                check.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(reply.type)}.data(),1);
                                check.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(reply.base)).data(),4);
                                check.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(reply.status)}.data(),1);
                                BitStream response;
                                response.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
                                response.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(9)}.data(),1);
                                const auto check_bits=static_cast<std::uint32_t>(check.numberOfBitsUsed_);
                                const std::uint8_t check_bit_count[4]{
                                    static_cast<std::uint8_t>(check_bits),
                                    static_cast<std::uint8_t>(check_bits>>8),
                                    static_cast<std::uint8_t>(check_bits>>16),
                                    static_cast<std::uint8_t>(check_bits>>24)};
                                response.writeCompressed(check_bit_count,32,true);
                                if(check_bits!=0)
                                    response.writeBits(check.data_.data(),static_cast<int>(check_bits),false);
                                {
                                    const auto outgoing_message = std::span<const std::uint8_t>(response.data_.data(),
                                    (response.numberOfBitsUsed_+7u)>>3);
                                    const auto outgoing_message_bit_count = response.numberOfBitsUsed_;
                                    const auto outgoing_reliability = Reliability::Reliable;
                                    const auto outgoing_channel = kClientChannelRpc;
                                    samp::proto::ReliabilityFrame frame;
                                    frame.message_number = next_message_number_++;
                                    frame.reliability = outgoing_reliability;
                                    if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                                        outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                                        outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                                        frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                                        frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
                                    }
                                    frame.data.write(outgoing_message.data(), outgoing_message.size());
                                    frame.data.numberOfBitsUsed_ = outgoing_message_bit_count;
                                    outgoing_frames_.push_back(std::move(frame));
                                }
                            }
                            world_.stream.client_check_replies.clear();
                        }
                        switch(rpc_id) {
                            case kRpcPlayerRequestClass:
                                handle_class_response(rpc_payload);
                                continue;
                            case kRpcSetSpawnInfo:
                                handle_spawn_info(rpc_payload);
                                continue;
                            case kRpcPlayerRequestSpawn: {
                                std::uint8_t spawn_state=0;
                                rpc_payload.read(&(spawn_state),1);
                                if(spawn_state==2 || (spawn_state!=0 && spawn_requested_)) {
                                    spawn_accepted_=true;
                                    if(parameters_.automatic_spawn && !in_game_) {
                                        BitStream confirmation;
                                        confirmation.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
                                        confirmation.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(52)}.data(),1);
                                        const std::uint8_t empty_bit_count[4]{};
                                        confirmation.writeCompressed(empty_bit_count,32,true);
                                        {
                                            const auto outgoing_message = std::span<const std::uint8_t>(confirmation.data_.data(),
                                            (confirmation.numberOfBitsUsed_+7u)>>3);
                                            const auto outgoing_message_bit_count = confirmation.numberOfBitsUsed_;
                                            const auto outgoing_reliability = Reliability::ReliableOrdered;
                                            const auto outgoing_channel = kClientChannelRpc;
                                            samp::proto::ReliabilityFrame frame;
                                            frame.message_number = next_message_number_++;
                                            frame.reliability = outgoing_reliability;
                                            if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                                                outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                                                outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                                                frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                                                frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
                                            }
                                            frame.data.write(outgoing_message.data(), outgoing_message.size());
                                            frame.data.numberOfBitsUsed_ = outgoing_message_bit_count;
                                            outgoing_frames_.push_back(std::move(frame));
                                        }
                                        spawned_=true;spawn_requested_=false;in_game_=true;
                                        last_foot_sync_ms_=0;
                                    }
                                } else {
                                    spawn_requested_=false;
                                }
                                continue;
                            }
                            case 93: {
                                ClientMessage client_message;
                                std::uint8_t colour_bytes[4]{};
                                if(rpc_payload.read(colour_bytes,sizeof(colour_bytes)))
                                    client_message.colour=static_cast<std::uint32_t>(colour_bytes[0]) |
                                        (static_cast<std::uint32_t>(colour_bytes[1])<<8) |
                                        (static_cast<std::uint32_t>(colour_bytes[2])<<16) |
                                        (static_cast<std::uint32_t>(colour_bytes[3])<<24);
                                std::uint8_t message_length_bytes[4]{};
                                if(rpc_payload.read(message_length_bytes,sizeof(message_length_bytes))) {
                                    const std::uint32_t message_length=
                                        static_cast<std::uint32_t>(message_length_bytes[0]) |
                                        (static_cast<std::uint32_t>(message_length_bytes[1])<<8) |
                                        (static_cast<std::uint32_t>(message_length_bytes[2])<<16) |
                                        (static_cast<std::uint32_t>(message_length_bytes[3])<<24);
                                    if(message_length<=((rpc_payload.numberOfBitsUsed_>rpc_payload.readOffset_?
                                        rpc_payload.numberOfBitsUsed_-rpc_payload.readOffset_:0)+7u)>>3) {
                                        client_message.message.assign(message_length,'\0');
                                        if(message_length!=0)
                                            static_cast<void>(rpc_payload.read(client_message.message.data(),message_length));
                                    }
                                }
                                world_.messages_.push_back(client_message);
                                continue;
                            }
                            case 101: {
                                std::uint16_t sender=0;
                                std::string chat_text;
                                std::uint8_t sender_bytes[2]{};
                                std::uint8_t chat_length=0;
                                if(!rpc_payload.read(sender_bytes,sizeof(sender_bytes)) ||
                                   !rpc_payload.read(&chat_length,sizeof(chat_length)) ||
                                   static_cast<std::size_t>(chat_length)>
                                       ((rpc_payload.numberOfBitsUsed_>rpc_payload.readOffset_?
                                         rpc_payload.numberOfBitsUsed_-rpc_payload.readOffset_:0)+7u)>>3)
                                    continue;
                                sender=static_cast<std::uint16_t>(sender_bytes[0] |
                                    (static_cast<std::uint16_t>(sender_bytes[1])<<8));
                                chat_text.assign(chat_length,'\0');
                                if(chat_length!=0 && !rpc_payload.read(chat_text.data(),chat_length)) continue;
                                if(chat_text.empty()) continue;
                                ClientMessage client_message;
                                client_message.colour=0xffffffffu;
                                client_message.message=chat_text;
                                if(static_cast<int>(sender)==player_id_) {
                                    client_message.message=player_name_+": "+chat_text;
                                    if(player_colour_!=0) client_message.colour=player_colour_;
                                } else if(const auto player=world_.players_.find(static_cast<int>(sender));
                                          player!=world_.players_.end()) {
                                    client_message.message=player->second.name+": "+chat_text;
                                    if(player->second.colour!=0) client_message.colour=player->second.colour;
                                } else {
                                    client_message.message=": "+chat_text;
                                }
                                world_.messages_.push_back(client_message);
                                continue;
                            }
                            default:
                                continue;
                        }
                    }
                    BitStream packet=message;
                    std::uint8_t packet_id=0;
                    if(!packet.read(&(packet_id),1)) continue;
                    {
                        {
                            // The synchronisation packets of the server.  They are the state of the
                            // other players, of the vehicles and of the markers of the radar.
                            //
                            // The number of a packet is the first byte of it.  A packet may carry
                            // a header: the byte 0x28 and four bytes of it, and then the number of
                            // the packet is the sixth byte.  The official client of the 0.3.DL build
                            // does the same: samp.dll 0x100af40 reads the first byte of the message
                            // it polls and, when that byte is 0x28, it takes the sixth byte of the
                            // message as the number of the packet.
                            //
                            // The parsers of the packets read the number of the packet as the type
                            // of the packet, so the stream of the packet starts at the number.
                            std::uint8_t id = packet_id;
                            std::size_t offset = 0;
                            if (((message.numberOfBitsUsed_+7u)>>3) >= 1 && message.data_[0] == 0x28u) {
                                if (((message.numberOfBitsUsed_+7u)>>3) < 6) {
                                    return;
                                }
                                offset = 5;
                                id = message.data_[5];
                        
                            }
                            BitStream packet;
                            const std::size_t packet_bytes=((message.numberOfBitsUsed_+7u)>>3)-offset;
                            packet.write(message.data_.data()+offset,packet_bytes);
                            const std::uint64_t stamp = static_cast<std::uint64_t>(
                                std::chrono::duration_cast<std::chrono::milliseconds>(
                                    std::chrono::steady_clock::now().time_since_epoch()).count());
                        
                            // The 0.3.DL dispatcher at 0x1000af40 routes these IDs to the matching
                            // sync handlers: vehicle, aim, bullet, on-foot, marker, unoccupied,
                            // trailer, and passenger sync.
                            switch (id) {
                            case 207: handle_foot_sync(packet,stamp); goto network_packet_done;
                            case 200: handle_vehicle_sync(packet,stamp); goto network_packet_done;
                            case 203: handle_aim_sync(packet,stamp); goto network_packet_done;
                            case 206: handle_bullet_sync(packet,stamp); goto network_packet_done;
                            case 208: handle_marker_sync(packet); goto network_packet_done;
                            case 209: handle_unoccupied_sync(packet); goto network_packet_done;
                            case 210: handle_trailer_sync(packet); goto network_packet_done;
                            case 211: handle_passenger_sync(packet,stamp); goto network_packet_done;
                                default:
                                    goto network_packet_done;
                            }
                        }
                    }
                    network_packet_done: ;
                }
            }
        }
    }

    const auto now=current_time_ms();
    // Native RakPeer Update 1004111d..1004121a: six open requests, strict
    // deadline comparison and one second between attempts, then ID29/retry.
    if((state_==ConnectionState::WaitingForTheCookie || state_==ConnectionState::WaitingForTheReply) && now>next_open_ms_) {
        if(open_attempts_==6) {
            state_=ConnectionState::Disconnected;retry_requested_=true;
            connection_messages_.emplace_back("The server didn't respond. Retrying..");
        } else {
            ++open_attempts_;next_open_ms_=now+1000;
            const auto cookie=static_cast<std::uint16_t>((have_cookie_?cookie_:0)^0x6969u);
            const std::uint8_t bytes[]{24,static_cast<std::uint8_t>(cookie),static_cast<std::uint8_t>(cookie>>8)};
            const auto wire=samp::proto::obfuscate(bytes,server_port_);
            sockaddr_in to{};to.sin_family=AF_INET;to.sin_port=htons(server_port_);std::memcpy(&to.sin_addr,server_address_,4);
#if defined(_WIN32)
            if(socket_) ::sendto(static_cast<SOCKET>(socket_),reinterpret_cast<const char*>(wire.data()),static_cast<int>(wire.size()),0,reinterpret_cast<const sockaddr*>(&to),sizeof(to));
#else
            if(socket_) ::sendto(static_cast<int>(socket_),wire.data(),wire.size(),0,reinterpret_cast<const sockaddr*>(&to),sizeof(to));
#endif
        }
    }
    if(state_!=ConnectionState::Connected && state_!=ConnectionState::Disconnected &&
       state_!=ConnectionState::Failed && now>last_receive_ms_ && now-last_receive_ms_>send_state_.timeout_ms) {
        state_=ConnectionState::Disconnected;retry_requested_=true;
        connection_messages_.emplace_back("The server didn't respond. Retrying..");
    }
    if(state_==ConnectionState::Disconnected || state_==ConnectionState::Failed) {
        receive_state_={};send_state_={};pending_.clear();outgoing_frames_.clear();received_.clear();
        in_game_=spawned_=spawn_accepted_=false;game_commands_.emplace_back(RemotePlayersReset{});
        return;
    }

    if(state_==ConnectionState::WaitingForTheCookie || state_==ConnectionState::WaitingForTheReply) return;

    // The acknowledgements of the messages that arrived.
    if (!received_.empty() && current_time_ms() >= next_ack_time_) {
        std::sort(received_.begin(), received_.end());
        std::vector<samp::proto::AckRange> ranges;
        for (const std::uint16_t number : received_) {
            if (ranges.empty() || ranges.back().max_index + 1 != number) {
                ranges.push_back({number, number});
            } else {
                ranges.back().max_index = number;
            }
        }
        for (std::size_t offset = 0; offset < ranges.size(); offset += 256) {
            samp::proto::ConnectedDatagram acknowledgements;
            acknowledgements.acks.assign(ranges.begin() + offset,
                ranges.begin() + std::min(offset + 256, ranges.size()));
            const BitStream encoded=samp::proto::encode_connected_datagram(acknowledgements);
            const std::size_t byte_count=(encoded.numberOfBitsUsed_+7u)>>3;
            if(byte_count!=0)
                pending_.emplace_back(encoded.data_.data(),encoded.data_.data()+byte_count);
        }
        received_.clear();
        next_ack_time_ = current_time_ms() + 30;
    }

    // 1000af40's model-manager service calls1000d390. Keep exact payload bits
    // (the finished message is one bit) and use native ordered channel0.
    if(state_==ConnectionState::Connected) {
        assets_.process_downloads(world_.stream.local.virtual_world,[&](std::uint8_t id,const BitStream& payload) {
            BitStream packet;const std::uint8_t marker=samp::proto::kRaknetIdRpc;
            packet.write(&marker,1);packet.write(&id,1);
            const auto count=static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
            packet.writeCompressed(reinterpret_cast<const std::uint8_t*>(&count),32,true);
            if(count) packet.writeBits(payload.data_.data(),static_cast<int>(count),false);
            ReliabilityFrame frame;frame.message_number=next_message_number_++;
            frame.reliability=Reliability::ReliableOrdered;frame.priority=1;frame.ordering_channel=0;
            frame.ordering_index=next_ordering_index_[0]++;frame.data=std::move(packet);
            outgoing_frames_.push_back(std::move(frame));
        });
        if(assets_.ready_ && !parameters_.defer_class_selection && !class_selection_started_ && class_count_) {
            class_selection_started_=true;request_class(0);
        }
    }

    // The client owns the state of its own ped: it tells the server where it
    // is, and the server relays that to the other players.  The official
    // client does it from samp.dll 0x10004db0 with the packet 207, and it
    // 0x100072d0 / 0x10003a00: poll using the server's on-foot rate,
    // plus the byte-sized remote-slot count (LAN uses 15ms).
    std::uint8_t nearby=0;
    for(const auto& [id,p] : world_.players_) if(id!=player_id_ && p.streamed_in) ++nearby;
    const auto interval=lan_mode_?15u:(local_vehicle_mode_?incar_rate_:onfoot_rate_)+nearby;
    if (in_game_ && current_time_ms()-last_foot_check_ms_ > interval) {
        last_foot_check_ms_=current_time_ms();
        if(local_vehicle_mode_==2) send_driver_sync();
        else if(local_vehicle_mode_==3) send_passenger_sync();
        else send_foot_sync();
    }

    if(in_game_) {send_aim_sync();send_stats_sync();send_weapons_sync();}

    // Legacy UI/RPC producers still enqueue encoded frames in pending_.
    // Adopt them once here so retries never allocate new message/order indices.
    const auto raw_send_time = current_time_ms();
    for (auto& frame : outgoing_frames_) {
        if (!samp::proto::queue_reliability_frame(send_state_, std::move(frame),
                                                next_message_number_, raw_send_time)) send_state_.failed = true;
    }
    outgoing_frames_.clear();
    auto queued = std::move(pending_);
    pending_.clear();
    const auto send_time = current_time_ms();
    for (const auto& bytes : queued) {
        samp::proto::ConnectedDatagram outgoing;
        if (!samp::proto::decode_connected_datagram(bytes, outgoing)) {
            send_state_.failed = true;
            break;
        }
        if (outgoing.frames.empty()) {
            pending_.push_back(bytes); // ACK-only packet; never retransmit it.
        } else {
            for (auto& frame : outgoing.frames) {
                if (!samp::proto::queue_reliability_frame(send_state_, std::move(frame),
                                                        next_message_number_, send_time)) {
                    send_state_.failed = true;
                    break;
                }
            }
        }
    }
    samp::proto::update_reliability_sends(send_state_, send_time, &next_message_number_);
    if (send_state_.failed) {
        state_ = ConnectionState::Failed;
        error_ = "Reliable transport timed out or exceeded capacity.";
        receive_state_ = {};
        send_state_ = {};
        pending_.clear();
        return;
    }
    for (auto& bytes : send_state_.outbox) pending_.push_back(std::move(bytes));
    send_state_.outbox.clear();

    for(const auto& datagram:pending_) {
        if(socket_==0) continue;
        const auto wire=samp::proto::obfuscate(datagram,server_port_);
        sockaddr_in to{};to.sin_family=AF_INET;to.sin_port=htons(server_port_);
        std::memcpy(&to.sin_addr,server_address_,4);
#if defined(_WIN32)
        static_cast<void>(::sendto(static_cast<SOCKET>(socket_),
            reinterpret_cast<const char*>(wire.data()),static_cast<int>(wire.size()),0,
            reinterpret_cast<const sockaddr*>(&to),sizeof(to)));
#else
        static_cast<void>(::sendto(static_cast<int>(socket_),wire.data(),wire.size(),0,
            reinterpret_cast<const sockaddr*>(&to),sizeof(to)));
#endif
    }
    pending_.clear();
}

void NetworkClient::request_score_pings() {
#if defined(_WIN32)
    std::uint32_t now = GetTickCount();
#else
    std::uint32_t now = static_cast<std::uint32_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
#endif
    if (now - last_score_ping_request_ <= 3000u) {
        return;
    }
#if defined(_WIN32)
    last_score_ping_request_ = GetTickCount();
#else
    last_score_ping_request_ = static_cast<std::uint32_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
#endif
    if (state_ == ConnectionState::Connected) {
        BitStream frame;
        frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
        frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(155)}.data(),1);
        const std::uint8_t empty_bit_count[4]{};
        frame.writeCompressed(empty_bit_count,32,true);
        {
            const auto outgoing_message = std::span<const std::uint8_t>(frame.data_.data(),(frame.numberOfBitsUsed_+7u)>>3);
            const auto outgoing_message_bit_count = frame.numberOfBitsUsed_;
            const auto outgoing_reliability = Reliability::Reliable;
            const auto outgoing_channel = kClientChannelRpc;
            samp::proto::ReliabilityFrame frame;
            frame.message_number = next_message_number_++;
            frame.reliability = outgoing_reliability;
            if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
            }
            frame.data.write(outgoing_message.data(), outgoing_message.size());
            frame.data.numberOfBitsUsed_ = outgoing_message_bit_count;
            outgoing_frames_.push_back(std::move(frame));
        }
    }
}

void NetworkClient::handle_score_pings(const BitStream& payload) {
    const std::size_t bytes_used = payload.numberOfBitsUsed_ / 8;
    if (bytes_used == 0) {
        return;
    }
    for (std::size_t offset = 0; offset + 10 <= bytes_used; offset += 10) {
        const std::uint16_t id = static_cast<std::uint16_t>(payload.data_[offset]) |
                                 (static_cast<std::uint16_t>(payload.data_[offset + 1]) << 8);
        if (id >= 1004) {
            continue;
        }
        const std::uint32_t raw_score = static_cast<std::uint32_t>(payload.data_[offset + 2]) |
                                        (static_cast<std::uint32_t>(payload.data_[offset + 3]) << 8) |
                                        (static_cast<std::uint32_t>(payload.data_[offset + 4]) << 16) |
                                        (static_cast<std::uint32_t>(payload.data_[offset + 5]) << 24);
        const std::uint32_t ping = static_cast<std::uint32_t>(payload.data_[offset + 6]) |
                                   (static_cast<std::uint32_t>(payload.data_[offset + 7]) << 8) |
                                   (static_cast<std::uint32_t>(payload.data_[offset + 8]) << 16) |
                                   (static_cast<std::uint32_t>(payload.data_[offset + 9]) << 24);
        const std::int32_t score = static_cast<std::int32_t>(raw_score);
        if (id == static_cast<std::uint16_t>(player_id_)) {
            local_score_ping_ = {score, ping};
        } else if (const auto entry = world_.players_.find(id); entry != world_.players_.end()) {
            entry->second.score_ping = {score, ping};
        }
    }
}

void NetworkClient::handle_foot_sync(const BitStream& packet,std::uint64_t stamp) {
    samp::proto::remote::FootSync sync;
    BitStream in=packet;
    std::uint8_t type=0;
    if(!in.read(&(type),1) || !in.read(&(sync.player_id),2)) return;
    bool present=in.readBit();
    if(present && !in.read(&(sync.left_right),2)) return;
    present=in.readBit();
    if(present && !in.read(&(sync.up_down),2)) return;
    if(!in.read(&(sync.keys),2)) return;
    std::uint8_t position[12]{};
    if(!in.read(position,sizeof(position))) return;
    std::memcpy(&sync.position.x,position,sizeof(float));
    std::memcpy(&sync.position.y,position+4,sizeof(float));
    std::memcpy(&sync.position.z,position+8,sizeof(float));
    const bool negative_w=in.readBit(),negative_x=in.readBit();
    const bool negative_y=in.readBit(),negative_z=in.readBit();
    std::uint16_t rotation_x=0,rotation_y=0,rotation_z=0;
    if(!in.read(&(rotation_x),2) || !in.read(&(rotation_y),2) ||
       !in.read(&(rotation_z),2)) return;
    constexpr float rotation_scale=1.0f/65535.0f;
    sync.rotation.x=static_cast<float>(rotation_x)*rotation_scale;
    sync.rotation.y=static_cast<float>(rotation_y)*rotation_scale;
    sync.rotation.z=static_cast<float>(rotation_z)*rotation_scale;
    if(negative_x) sync.rotation.x=-sync.rotation.x;
    if(negative_y) sync.rotation.y=-sync.rotation.y;
    if(negative_z) sync.rotation.z=-sync.rotation.z;
    float squared=1.0f-sync.rotation.x*sync.rotation.x-sync.rotation.y*sync.rotation.y-
                  sync.rotation.z*sync.rotation.z;
    if(squared<0.0f) squared=0.0f;
    sync.rotation.w=std::sqrt(squared);
    if(negative_w) sync.rotation.w=-sync.rotation.w;
    std::uint8_t health_armour=0;
    if(!in.read(&(health_armour),1)) return;
    const auto expand_percent=[](std::uint8_t nibble) {
        return nibble==0x0f?100.0f:nibble==0?0.0f:static_cast<float>(nibble)*7.0f;
    };
    sync.health=expand_percent(static_cast<std::uint8_t>(health_armour>>4));
    sync.armour=expand_percent(static_cast<std::uint8_t>(health_armour&0x0f));
    std::uint8_t weapon=0;
    if(!in.read(&(weapon),1) || !in.read(&(sync.special_action),1)) return;
    sync.weapon=static_cast<std::uint8_t>(weapon&0x3f);
    if(!samp::proto::remote::read_compressed_velocity(in,sync.velocity)) return;
    sync.surfing=in.readBit();
    if(sync.surfing) {
        if(!in.read(&(sync.surfing_id),2)) return;
        std::uint8_t offset[12]{};
        if(!in.read(offset,sizeof(offset))) return;
        std::memcpy(&sync.surfing_offset.x,offset,sizeof(float));
        std::memcpy(&sync.surfing_offset.y,offset+4,sizeof(float));
        std::memcpy(&sync.surfing_offset.z,offset+8,sizeof(float));
    } else sync.surfing_id=0xffffu;
    sync.animated=in.readBit();
    if(sync.animated && !in.read(&(sync.animation_id),4)) return;
    const auto entry=world_.players_.find(sync.player_id);
    WorldPlayer* player=entry==world_.players_.end()?nullptr:&entry->second;
    if(sync.player_id>=1004 || sync.player_id==player_id_ ||
       player==nullptr || !player->streamed_in || player->dead) return;
    player->x=sync.position.x;player->y=sync.position.y;player->z=sync.position.z;
    player->health=sync.health;player->armour=sync.armour;player->weapon=sync.weapon;
    player->special_action=sync.special_action;
    player->surfing=sync.surfing;player->surfing_id=sync.surfing_id;
    player->surfing_x=sync.surfing_offset.x;player->surfing_y=sync.surfing_offset.y;
    player->surfing_z=sync.surfing_offset.z;player->animation_id=sync.animation_id;
    player->present=true;player->in_vehicle=false;player->vehicle_id=0xffff;
    player->last_update_ms=stamp;++player->updates;
    const float qw=sync.rotation.w,qx=sync.rotation.x,qy=sync.rotation.y,qz=sync.rotation.z;
    const float yaw=std::atan2(2.0f*(qw*qz+qx*qy),1.0f-2.0f*(qy*qy+qz*qz));
    constexpr float kPi=3.14159265358979F;
    float degrees=yaw*180.0f/kPi;
    if(degrees<0.0f) degrees+=360.0f;
    player->angle=degrees;
    RemotePlayerUpdate update{static_cast<int>(sync.player_id),sync.position.x,sync.position.y,
        sync.position.z,degrees,sync.health,sync.armour,sync.velocity.x,sync.velocity.y,sync.velocity.z};
    update.qw=qw;update.qx=qx;update.qy=qy;update.qz=qz;
    update.keys=sync.keys;update.left_right=sync.left_right;update.up_down=sync.up_down;update.weapon=sync.weapon;
    game_commands_.emplace_back(update);
}

void NetworkClient::handle_vehicle_sync(const BitStream& packet,std::uint64_t stamp) {
    samp::proto::remote::VehicleSync sync;
    BitStream in=packet;
    std::uint8_t type=0;
    if(!in.read(&(type),1) || !in.read(&(sync.player_id),2) ||
       !in.read(&(sync.vehicle_id),2) || !in.read(&(sync.left_right),2) ||
       !in.read(&(sync.up_down),2) || !in.read(&(sync.keys),2)) return;
    const bool negative_w=in.readBit(),negative_x=in.readBit();
    const bool negative_y=in.readBit(),negative_z=in.readBit();
    std::uint16_t rotation_x=0,rotation_y=0,rotation_z=0;
    if(!in.read(&(rotation_x),2) || !in.read(&(rotation_y),2) ||
       !in.read(&(rotation_z),2)) return;
    constexpr float rotation_scale=1.0f/65535.0f;
    sync.rotation.x=static_cast<float>(rotation_x)*rotation_scale;
    sync.rotation.y=static_cast<float>(rotation_y)*rotation_scale;
    sync.rotation.z=static_cast<float>(rotation_z)*rotation_scale;
    if(negative_x) sync.rotation.x=-sync.rotation.x;
    if(negative_y) sync.rotation.y=-sync.rotation.y;
    if(negative_z) sync.rotation.z=-sync.rotation.z;
    float squared=1.0f-sync.rotation.x*sync.rotation.x-sync.rotation.y*sync.rotation.y-
                  sync.rotation.z*sync.rotation.z;
    if(squared<0.0f) squared=0.0f;
    sync.rotation.w=std::sqrt(squared);
    if(negative_w) sync.rotation.w=-sync.rotation.w;
    std::uint8_t position[12]{};
    if(!in.read(position,sizeof(position))) return;
    std::memcpy(&sync.position.x,position,sizeof(float));
    std::memcpy(&sync.position.y,position+4,sizeof(float));
    std::memcpy(&sync.position.z,position+8,sizeof(float));
    if(!samp::proto::remote::read_compressed_velocity(in,sync.velocity)) return;
    if(!in.read(&(sync.vehicle_health),2)) return;
    std::uint8_t health_armour=0;
    if(!in.read(&(health_armour),1)) return;
    const auto expand_percent=[](std::uint8_t nibble) {
        return nibble==0x0f?100.0f:nibble==0?0.0f:static_cast<float>(nibble)*7.0f;
    };
    sync.health=expand_percent(static_cast<std::uint8_t>(health_armour>>4));
    sync.armour=expand_percent(static_cast<std::uint8_t>(health_armour&0x0f));
    std::uint8_t weapon=0;
    if(!in.read(&(weapon),1)) return;
    sync.weapon=static_cast<std::uint8_t>(weapon&0x3f);
    sync.siren=in.readBit();sync.landing_gear=in.readBit();
    if(in.readBit() && !in.read(&sync.train_speed_bits,4)) return;
    sync.has_trailer=in.readBit();
    std::uint16_t trailer=0;
    if(sync.has_trailer && !in.read(&trailer,2)) return;
    sync.trailer_id=trailer;
    if(!std::isfinite(sync.position.x) || !std::isfinite(sync.position.y) || !std::isfinite(sync.position.z)) return;
    const auto entry=world_.players_.find(sync.player_id);
    WorldPlayer* player=entry==world_.players_.end()?nullptr:&entry->second;
    const auto known_vehicle=world_.vehicles_.find(sync.vehicle_id);
    if(!player || !player->streamed_in || player->dead || known_vehicle==world_.vehicles_.end()) return;
    if(player!=nullptr) {
        player->x=sync.position.x;player->y=sync.position.y;player->z=sync.position.z;
        player->health=sync.health;player->armour=sync.armour;player->weapon=sync.weapon;
        player->in_vehicle=true;player->vehicle_id=sync.vehicle_id;player->present=true;
        player->last_update_ms=stamp;++player->updates;
    }
    auto& known=known_vehicle->second;
    known.x=sync.position.x;known.y=sync.position.y;known.z=sync.position.z;
    known.health=sync.vehicle_health;known.driver=sync.player_id;
    known.trailer_id=sync.has_trailer?static_cast<std::uint16_t>(sync.trailer_id):0xffff;
    known.velocity_x=sync.velocity.x;known.velocity_y=sync.velocity.y;known.velocity_z=sync.velocity.z;
    ++known.updates;
    VehicleTransformCommand command;
    command.id=sync.vehicle_id;command.player_id=sync.player_id;
    command.keys=sync.keys;command.left_right=sync.left_right;command.up_down=sync.up_down;
    command.weapon=sync.weapon;command.player_health=sync.health;command.player_armour=sync.armour;
    command.position={sync.position.x,sync.position.y,sync.position.z};
    command.velocity={sync.velocity.x,sync.velocity.y,sync.velocity.z};
    command.rotation={sync.rotation.w,sync.rotation.x,sync.rotation.y,sync.rotation.z};command.health=sync.vehicle_health;
    game_commands_.emplace_back(command);
}

void NetworkClient::handle_aim_sync(const BitStream& packet,std::uint64_t stamp) {
    samp::proto::sync::AimSync sync;
    std::uint16_t player_id=0;
    BitStream in=packet;
    std::uint8_t camera_mode=0;
    if(!in.read(&(camera_mode),1) || !in.read(&(player_id),2)) return;
    std::uint8_t block[31]{};
    if(!in.read(block,sizeof(block))) return;
    sync.camera_mode=block[0];
    std::memcpy(&sync.camera_front_vector.x,block+1,sizeof(float));
    std::memcpy(&sync.camera_front_vector.y,block+5,sizeof(float));
    std::memcpy(&sync.camera_front_vector.z,block+9,sizeof(float));
    std::memcpy(&sync.camera_position.x,block+13,sizeof(float));
    std::memcpy(&sync.camera_position.y,block+17,sizeof(float));
    std::memcpy(&sync.camera_position.z,block+21,sizeof(float));
    std::memcpy(&sync.aim_height,block+25,sizeof(float));
    sync.zoom_and_weapon_state=block[29];sync.aspect_ratio=block[30];
    const auto entry=world_.players_.find(player_id);
    WorldPlayer* player=entry==world_.players_.end()?nullptr:&entry->second;
    if(player==nullptr || !player->streamed_in || player->dead ||
        !std::isfinite(sync.aim_height) || !std::isfinite(sync.camera_front_vector.x) ||
        !std::isfinite(sync.camera_front_vector.y) || !std::isfinite(sync.camera_front_vector.z) ||
        !std::isfinite(sync.camera_position.x) || !std::isfinite(sync.camera_position.y) ||
        !std::isfinite(sync.camera_position.z)) return;
    player->aim_x=sync.camera_position.x+sync.camera_front_vector.x*sync.aim_height;
    player->aim_y=sync.camera_position.y+sync.camera_front_vector.y*sync.aim_height;
    player->aim_z=sync.camera_position.z+sync.camera_front_vector.z*sync.aim_height;
    player->aiming=true;player->last_update_ms=stamp;
    RemoteAimCommand command;command.player_id=player_id;std::memcpy(command.data.data(),block,31);
    game_commands_.emplace_back(command);
}

void NetworkClient::handle_bullet_sync(const BitStream& packet,std::uint64_t stamp) {
    samp::proto::sync::BulletSync sync;
    std::uint16_t player_id=0;
    BitStream in=packet;
    std::uint8_t hit_type=0;
    if(!in.read(&(hit_type),1) || !in.read(&(player_id),2)) return;
    std::uint8_t block[40]{};
    if(!in.read(block,sizeof(block))) return;
    sync.hit_type=block[0];
    sync.hit_id=static_cast<std::uint16_t>(block[1] | (static_cast<std::uint16_t>(block[2])<<8));
    std::memcpy(&sync.origin.x,block+3,sizeof(float));
    std::memcpy(&sync.origin.y,block+7,sizeof(float));
    std::memcpy(&sync.origin.z,block+11,sizeof(float));
    std::memcpy(&sync.hit_position.x,block+15,sizeof(float));
    std::memcpy(&sync.hit_position.y,block+19,sizeof(float));
    std::memcpy(&sync.hit_position.z,block+23,sizeof(float));
    std::memcpy(&sync.offset.x,block+27,sizeof(float));
    std::memcpy(&sync.offset.y,block+31,sizeof(float));
    std::memcpy(&sync.offset.z,block+35,sizeof(float));
    sync.weapon=block[39];
    for(std::size_t at=3;at<=35;at+=4) {
        float value=0;std::memcpy(&value,block+at,4);
        if(!std::isfinite(value) || (sync.hit_type!=0 && at>=27 && std::fabs(value)>=300.f)) return;
    }
    const auto entry=world_.players_.find(player_id);
    WorldPlayer* player=entry==world_.players_.end()?nullptr:&entry->second;
    if(player!=nullptr && player->streamed_in && !player->dead) {
        player->weapon=sync.weapon;player->last_update_ms=stamp;
        RemoteBulletCommand command;command.player_id=player_id;std::memcpy(command.data.data(),block,40);
        game_commands_.emplace_back(command);
    }
}

void NetworkClient::handle_marker_sync(const BitStream& packet) {
    BitStream in=packet;
    std::uint8_t type=0;
    std::uint32_t count=0;
    if(!in.read(&(type),1) || !in.read(&(count),4)) return;
    for(std::uint32_t index=0;index<count;++index) {
        samp::proto::remote::Marker marker;
        if(!in.read(&(marker.player_id),2)) return;
        marker.present=in.readBit();
        if(marker.present && (!in.read(&(marker.x),2) || !in.read(&(marker.y),2) ||
                              !in.read(&(marker.z),2))) return;
        WorldMarker world_marker;
        world_marker.player_id=marker.player_id;world_marker.present=marker.present;
        world_marker.x=marker.x;world_marker.y=marker.y;world_marker.z=marker.z;
        world_.markers_[world_marker.player_id]=world_marker;
    }
    (void)type;
}

void NetworkClient::handle_unoccupied_sync(const BitStream& packet) {
    BitStream in=packet;
    std::uint8_t packet_type=0;
    std::uint16_t player_id=0;
    std::array<std::uint8_t,54> block{};
    if(!in.read(&(packet_type),1) || !in.read(&(player_id),2) ||
       !in.read(block.data(),block.size())) return;
    if(!in_game_ || player_id>=1004) return;
    const auto player=world_.players_.find(player_id);
    if(player==world_.players_.end() || !player->second.streamed_in) return;
    const auto vehicle_id=static_cast<std::uint16_t>(block[0] |
        (static_cast<std::uint16_t>(block[1])<<8));
    const auto vehicle=world_.vehicles_.find(vehicle_id);
    if(vehicle==world_.vehicles_.end()) return;
    auto& state=vehicle->second;
    std::memcpy(&state.x,block.data()+2,sizeof(float));
    std::memcpy(&state.y,block.data()+6,sizeof(float));
    std::memcpy(&state.z,block.data()+10,sizeof(float));
    std::memcpy(&state.rotation_x,block.data()+14,sizeof(float));
    std::memcpy(&state.rotation_y,block.data()+18,sizeof(float));
    std::memcpy(&state.rotation_z,block.data()+22,sizeof(float));
    std::memcpy(&state.velocity_x,block.data()+26,sizeof(float));
    std::memcpy(&state.velocity_y,block.data()+30,sizeof(float));
    std::memcpy(&state.velocity_z,block.data()+34,sizeof(float));
    std::memcpy(state.unoccupied_state.data(),block.data()+38,state.unoccupied_state.size());
    std::memcpy(&state.unoccupied_animation,block.data()+50,sizeof(state.unoccupied_animation));
    state.angle=state.rotation_z;
    ++state.updates;
    (void)packet_type;
}

void NetworkClient::handle_trailer_sync(const BitStream& packet) {
    samp::proto::sync::TrailerSync sync;
    std::uint16_t player_id=0;
    BitStream in=packet;
    std::uint8_t type=0;
    if(!in.read(&(type),1) || !in.read(&(player_id),2)) return;
    std::uint8_t block[54]{};
    if(!in.read(block,sizeof(block))) return;
    sync.vehicle_id=static_cast<std::uint16_t>(block[0] | (static_cast<std::uint16_t>(block[1])<<8));
    std::memcpy(&sync.position.x,block+2,sizeof(float));
    std::memcpy(&sync.position.y,block+6,sizeof(float));
    std::memcpy(&sync.position.z,block+10,sizeof(float));
    std::memcpy(&sync.rotation.x,block+14,sizeof(float));
    std::memcpy(&sync.rotation.y,block+18,sizeof(float));
    std::memcpy(&sync.rotation.z,block+22,sizeof(float));
    std::memcpy(&sync.rotation_extra,block+26,sizeof(float));
    std::memcpy(&sync.velocity.x,block+30,sizeof(float));
    std::memcpy(&sync.velocity.y,block+34,sizeof(float));
    std::memcpy(&sync.velocity.z,block+38,sizeof(float));
    std::memcpy(sync.trailer_state,block+42,sizeof(sync.trailer_state));
    WorldVehicle vehicle;
    vehicle.id=sync.vehicle_id;vehicle.x=sync.position.x;vehicle.y=sync.position.y;
    vehicle.z=sync.position.z;
    auto& known=world_.vehicles_[vehicle.id];
    const std::uint32_t updates=known.updates;
    known=vehicle;known.present=true;known.updates=updates+1;
}

void NetworkClient::handle_player_init(const BitStream& payload) {
    // Player-init settings and local ID from the registered 0.3.DL RPC 139
    // handler at 0x10010530.
    BitStream in = payload;
    bool flag = false;
    float number = 0.0f;
    std::uint32_t count = 0;

    flag = in.readBit();  // the zone names
    flag = in.readBit();  // the player ped animations
    flag = in.readBit();  // the interior weapons
    flag = in.readBit();  // the limit of the global chat radius
    in.read(&(number),4);  // the limit of the global chat radius
    flag = in.readBit();  // the stunt bonus
    world_.stream.stunt_bonus=flag;
    in.read(&(number),4);  // the distance the name tags are drawn at
    world_.stream.name_tag_distance=number;
    flag = in.readBit();  // the interior enter exits
    world_.stream.interior_enter_exits_disabled=flag;
    flag = in.readBit();  // the name tag line of sight
    world_.stream.name_tag_los=!flag;
    flag = in.readBit();  // the vehicle engine and lights
    in.read(&(count),4);   // the number of the spawn information
    class_count_ = count;
    std::uint16_t id = 0;
    if (in.read(&(id),2)) {
        player_id_ = id;
    }
    flag = in.readBit();  // the name tags
    world_.stream.show_name_tags=flag;
    in.read(&(count),4);   // the player markers
    std::uint8_t hour = 0;
    in.read(&(hour),1);     // the time of the world
    world_.stream.clock_hour=hour;world_.stream.clock_minute=0;
    std::uint8_t weather = 0;
    in.read(&(weather),1);  // the weather
    world_.stream.weather=weather;
    in.read(&(number),4);   // the gravity
    world_.stream.gravity=number;
    lan_mode_ = in.readBit();  // the lan mode
    in.read(&(count),4);   // the death drop amount
    flag = in.readBit();  // the instagib
    in.read(&(onfoot_rate_),4);   // 0x10003a00 consumes the server's on-foot rate
    in.read(&(incar_rate_),4);   // 100039c0: rate in a car
    in.read(&(count),4);   // the rate of the weapons
    in.read(&(count),4);   // the multiplier
    in.read(&(lag_compensation_mode_),4);   // 0.3.DL lag compensation mode
    std::uint8_t server_name_length=0;
    if(in.read(&server_name_length,sizeof(server_name_length)) &&
       static_cast<std::size_t>(server_name_length)<=
           ((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) {
        server_name_.assign(server_name_length,'\0');
        if(server_name_length!=0)
            static_cast<void>(in.read(server_name_.data(),server_name_length));
    }
    std::vector<std::uint8_t> models(212);
    in.read(models.data(), models.size());
    std::copy(models.begin(),models.end(),world_.stream.preloaded_vehicles.begin());
    in.read(&(count),4);   // the friendly fire of the vehicles

    state_ = ConnectionState::Connected;
    // Official format at 0x101180EC, used by 0x10010956: %.64s.
    connection_messages_.push_back("Connected to {B9C9BF}"+
        server_name_.substr(0,std::min(std::size_t{64},server_name_.find('\0'))));

    // The injected game starts its first class request after GTA is ready.
    // Standalone probes can begin immediately; spawning remains manual
    // unless a diagnostic probe explicitly opts into automatic spawning.
    std::printf("the server has %u classes\n", class_count_);
    if(assets_.ready_ && !parameters_.defer_class_selection && state_==ConnectionState::Connected &&
       !class_selection_started_ && class_count_!=0) {
        class_selection_started_=true;
        request_class(0);
    }
}

void NetworkClient::request_class(std::uint32_t class_id) {
    if(!assets_.ready_) {class_selection_started_=false;return;}
    // The client asks the server for the data of a class.  The 0.3.DL
    // client writes the number of the class as thirty two bits
    // (samp.dll 0x10005720 writes it with FUN_1001faa0 and 0x20), so a
    // request of sixteen bits is read as the wrong class.
    BitStream payload;
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(class_id)).data(),4);
    BitStream frame;
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(kRpcPlayerRequestClass)}.data(),1);
    const auto payload_bits=static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
    const std::uint8_t payload_bit_count[4]{
        static_cast<std::uint8_t>(payload_bits),static_cast<std::uint8_t>(payload_bits>>8),
        static_cast<std::uint8_t>(payload_bits>>16),static_cast<std::uint8_t>(payload_bits>>24)};
    frame.writeCompressed(payload_bit_count,32,true);
    if(payload_bits!=0) frame.writeBits(payload.data_.data(),static_cast<int>(payload_bits),false);
    {
        const auto outgoing_message = std::span<const std::uint8_t>(frame.data_.data(),(frame.numberOfBitsUsed_+7u)>>3);
        const auto outgoing_message_bit_count = frame.numberOfBitsUsed_;
        const auto outgoing_reliability = Reliability::Reliable;
        const auto outgoing_channel = kClientChannelRpc;
        samp::proto::ReliabilityFrame frame;
        frame.message_number = next_message_number_++;
        frame.reliability = outgoing_reliability;
        if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
            outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
            outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
            frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
            frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
        }
        frame.data.write(outgoing_message.data(), outgoing_message.size());
        frame.data.numberOfBitsUsed_ = outgoing_message_bit_count;
        outgoing_frames_.push_back(std::move(frame));
    }
    requested_class_ = class_id;
    class_ready_ = false;
}

void NetworkClient::handle_class_response(const BitStream& payload) {
    // The answer of the server with the data of a class: whether the class
    // can be picked, the team of the class, the model of the ped, the
    // model of the custom ped of 0.3.DL, a byte that is not known, the
    // place of the spawn, the angle of the spawn and the three weapons
    // with their ammunition.
    BitStream in = payload;
    std::uint8_t selectable = 0;
    std::uint8_t team = 0;
    std::uint32_t model = 0;
    std::uint32_t custom_model = 0;
    std::uint8_t unknown = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float angle = 0.0f;
    if (!in.read(&(selectable),1) || !in.read(&(team),1) || !in.read(&(model),4) ||
        !in.read(&(custom_model),4) || !in.read(&(unknown),1) || !in.read(&(x),4) ||
        !in.read(&(y),4) || !in.read(&(z),4) || !in.read(&(angle),4)) {
        std::printf("the class answer could not be read\n");
        return;
    }
    // The place of the spawn is where the ped of the player stands once the
    // server has taken the class.
    local_x_ = x;
    local_y_ = y;
    local_z_ = z;
    local_angle_ = angle;
    std::uint32_t weapons[3] = {0, 0, 0};
    std::uint32_t ammunition[3] = {0, 0, 0};
    for (std::uint32_t& weapon : weapons) {
        in.read(&(weapon),4);
    }
    for (std::uint32_t& amount : ammunition) {
        in.read(&(amount),4);
    }
    std::printf("the class %u: selectable %u, team %u, model %u, custom model %u, spawn %.1f %.1f %.1f, "
                "angle %.1f, weapons %u %u %u\n",
                static_cast<unsigned>(requested_class_), static_cast<unsigned>(selectable),
                static_cast<unsigned>(team), model, custom_model, x, y, z, angle, weapons[0],
                weapons[1], weapons[2]);

    // The class goes into the world: the client shows the classes of the
    // server in the menu of the class selection.
    WorldClass world_class;
    world_class.id = static_cast<int>(requested_class_);
    world_class.selectable = selectable != 0;
    world_class.team = team;
    world_class.model = model;
    world_class.custom_model = custom_model;
    world_class.x = x;
    world_class.y = y;
    world_class.z = z;
    world_class.angle = angle;
    for (int index = 0; index < 3; ++index) {
        world_class.weapons[index] = weapons[index];
        world_class.ammunition[index] = ammunition[index];
    }
    world_.classes_[world_class.id] = world_class;
    local_spawn_ = world_class;
    if (world_.selected_class_ < 0 && world_class.selectable) {
        world_.selected_class_ = world_class.id;
    }

    // The client asks for the classes one after the other, so it can show
    // the menu of the classes of the server.
    class_ready_ = world_class.selectable;
    if(!parameters_.automatic_spawn) return;
    if (requested_class_ + 1 < class_count_) {
        request_class(requested_class_ + 1);
        return;
    }

    // The server answered with the class, so the client asks to spawn in
    // it.
    BitStream spawn_request;
    spawn_request.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
    spawn_request.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(129)}.data(),1);
    const std::uint8_t empty_bit_count[4]{};
    spawn_request.writeCompressed(empty_bit_count,32,true);
    {
        const auto outgoing_message = std::span<const std::uint8_t>(spawn_request.data_.data(),(spawn_request.numberOfBitsUsed_+7u)>>3);
        const auto outgoing_message_bit_count = spawn_request.numberOfBitsUsed_;
        const auto outgoing_reliability = Reliability::Reliable;
        const auto outgoing_channel = kClientChannelRpc;
        samp::proto::ReliabilityFrame frame;
        frame.message_number = next_message_number_++;
        frame.reliability = outgoing_reliability;
        if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
            outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
            outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
            frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
            frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
        }
        frame.data.write(outgoing_message.data(), outgoing_message.size());
        frame.data.numberOfBitsUsed_ = outgoing_message_bit_count;
        outgoing_frames_.push_back(std::move(frame));
    }
    spawn_requested_=true;
}

void NetworkClient::handle_spawn_info(const BitStream& payload) {
    // The data of the spawn of the player: the team, the model of the ped,
    // the model of the custom ped of 0.3.DL, the place of the spawn, the
    // angle and the weapons.
    BitStream in = payload;
    std::uint8_t team = 0;
    std::uint32_t model = 0;
    std::uint32_t custom_model = 0;
    std::uint8_t unknown = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float angle = 0.0f;
    if (!in.read(&(team),1) || !in.read(&(model),4) || !in.read(&(custom_model),4) ||
        !in.read(&(unknown),1) || !in.read(&(x),4) || !in.read(&(y),4) || !in.read(&(z),4) ||
        !in.read(&(angle),4)) {
        std::printf("the spawn information could not be read\n");
        return;
    }
    local_x_ = x;
    local_y_ = y;
    local_z_ = z;
    local_angle_ = angle;
    local_spawn_.team = team;
    local_spawn_.model = model;
    local_spawn_.custom_model = custom_model;
    local_spawn_.x = x;
    local_spawn_.y = y;
    local_spawn_.z = z;
    local_spawn_.angle = angle;
    for (auto& weapon : local_spawn_.weapons) in.read(&(weapon),4);
    for (auto& amount : local_spawn_.ammunition) in.read(&(amount),4);
    std::printf("the spawn: team %u, model %u, custom model %u, %.1f %.1f %.1f, angle %.1f\n",
                static_cast<unsigned>(team), model, custom_model, x, y, z, angle);
}

void NetworkClient::send_player_connect() {
    // The official reads the game secret inside its 0x1000aa60 response
    // handler. The injected path supplies an empty view so that the owner
    // reads the game address; headless callers use the explicit/fallback key.
    std::string_view secret=parameters_.secret;
    std::string game_secret;
    if(secret.empty() && parameters_.defer_class_selection) {
        const auto* bytes=reinterpret_cast<const char*>(kKeySecretAddress);
        for(std::size_t i=0;i<64 && bytes[i]!='\0';++i) game_secret.push_back(bytes[i]);
        secret=game_secret;
    }
    if(secret.empty()) secret=kFallbackKeySecret;

    BitStream connect;
    connect.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(kProtocolVersion)).data(),4);
    connect.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(1)}.data(),1);
    const auto player_name_length=static_cast<std::uint8_t>(parameters_.name.size());
    connect.write(&player_name_length,sizeof(player_name_length));
    if(!parameters_.name.empty()) connect.write(parameters_.name.data(),parameters_.name.size());
    const std::uint32_t challenge_response=challenge_token_^kProtocolVersion;
    connect.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(challenge_response)).data(),4);
    const std::string key=samp::proto::key::generate(secret,kKeyMultiplier);
    const auto key_length=static_cast<std::uint8_t>(key.size());
    connect.write(&key_length,sizeof(key_length));
    if(!key.empty()) connect.write(key.data(),key.size());
    const auto version_length=static_cast<std::uint8_t>(kVersionString.size());
    connect.write(&version_length,sizeof(version_length));
    if(!kVersionString.empty()) connect.write(kVersionString.data(),kVersionString.size());
    connect.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(challenge_response)).data(),4);
    BitStream frame;
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(kRpcPlayerConnect)}.data(),1);
    const auto connect_bits=static_cast<std::uint32_t>(connect.numberOfBitsUsed_);
    const std::uint8_t connect_bit_count[4]{
        static_cast<std::uint8_t>(connect_bits),static_cast<std::uint8_t>(connect_bits>>8),
        static_cast<std::uint8_t>(connect_bits>>16),static_cast<std::uint8_t>(connect_bits>>24)};
    frame.writeCompressed(connect_bit_count,32,true);
    if(connect_bits!=0) frame.writeBits(connect.data_.data(),static_cast<int>(connect_bits),false);
    {
        const auto outgoing_message = std::span<const std::uint8_t>(frame.data_.data(),(frame.numberOfBitsUsed_+7u)>>3);
        const auto outgoing_message_bit_count = frame.numberOfBitsUsed_;
        const auto outgoing_reliability = Reliability::Reliable;
        const auto outgoing_channel = kClientChannelRpc;
        samp::proto::ReliabilityFrame frame;
        frame.message_number = next_message_number_++;
        frame.reliability = outgoing_reliability;
        if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
            outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
            outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
            frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
            frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
        }
        frame.data.write(outgoing_message.data(), outgoing_message.size());
        frame.data.numberOfBitsUsed_ = outgoing_message_bit_count;
        outgoing_frames_.push_back(std::move(frame));
    }
}

// samp.dll 0x10005860: the chat request is the RPC 101 with a one-byte length
// and the raw text, no terminator.  The official client casts the length to a
// byte and the server drops 129 bytes and up (samp-server.exe 0x498340), so
// this refuses anything it could not deliver.
bool NetworkClient::send_chat(std::string_view text) {
    if (state_ != ConnectionState::Connected || player_id_ < 0) {
        return false;
    }
    if (text.empty() || text.size() > 128) {
        return false;
    }
    if(text.find('\0')==std::string_view::npos) {
        std::array<char,2049> expanded{};
        std::memcpy(expanded.data(),text.data(),text.size());
        expanded[text.size()]='\0';
        const int expanded_length=samp::client::expand_key_bindings(
            expanded.data(),128,[](char* buffer) {
                reinterpret_cast<void(__cdecl*)(char*)>(0x0069e160)(buffer);
            });
        const std::string_view rewritten(expanded.data());
        if(expanded_length>0 || rewritten!=text) text=rewritten;
    }
    if(text.empty() || text.size()>128) return false;
    samp::proto::BitStream payload;
    const auto length=static_cast<std::uint8_t>(text.size());
    payload.write(&length,sizeof(length));
    if(!text.empty()) payload.write(text.data(),text.size());
    BitStream frame;
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(101)}.data(),1);
    const auto payload_bits=static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
    const std::uint8_t payload_bit_count[4]{
        static_cast<std::uint8_t>(payload_bits),static_cast<std::uint8_t>(payload_bits>>8),
        static_cast<std::uint8_t>(payload_bits>>16),static_cast<std::uint8_t>(payload_bits>>24)};
    frame.writeCompressed(payload_bit_count,32,true);
    if(payload_bits!=0) frame.writeBits(payload.data_.data(),static_cast<int>(payload_bits),false);
    {
        const auto outgoing_message = std::span<const std::uint8_t>(frame.data_.data(),(frame.numberOfBitsUsed_+7u)>>3);
        const auto outgoing_message_bit_count = frame.numberOfBitsUsed_;
        const auto outgoing_reliability = Reliability::Reliable;
        const auto outgoing_channel = kClientChannelRpc;
        samp::proto::ReliabilityFrame frame;
        frame.message_number = next_message_number_++;
        frame.reliability = outgoing_reliability;
        if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
            outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
            outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
            frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
            frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
        }
        frame.data.write(outgoing_message.data(), outgoing_message.size());
        frame.data.numberOfBitsUsed_ = outgoing_message_bit_count;
        outgoing_frames_.push_back(std::move(frame));
    }
    return true;
}

// samp.dll 0x10069340 sends the slash command using RPC 50: a 32-bit byte
// length followed by the command bytes, without a terminator.
bool NetworkClient::send_command(std::string_view command) {
    if (state_ != ConnectionState::Connected || player_id_ < 0 || command.size() < 2 || command.size() > 255) {
        return false;
    }
    samp::proto::BitStream payload;
    const auto length=static_cast<std::uint32_t>(command.size());
    const std::uint8_t length_bytes[4]{static_cast<std::uint8_t>(length),
        static_cast<std::uint8_t>(length>>8),static_cast<std::uint8_t>(length>>16),
        static_cast<std::uint8_t>(length>>24)};
    payload.write(length_bytes,sizeof(length_bytes));
    if(!command.empty()) payload.write(command.data(),command.size());
    BitStream frame;
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(50)}.data(),1);
    const auto payload_bits=static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
    const std::uint8_t payload_bit_count[4]{
        static_cast<std::uint8_t>(payload_bits),static_cast<std::uint8_t>(payload_bits>>8),
        static_cast<std::uint8_t>(payload_bits>>16),static_cast<std::uint8_t>(payload_bits>>24)};
    frame.writeCompressed(payload_bit_count,32,true);
    if(payload_bits!=0) frame.writeBits(payload.data_.data(),static_cast<int>(payload_bits),false);
    {
        const auto outgoing_message = std::span<const std::uint8_t>(frame.data_.data(),(frame.numberOfBitsUsed_+7u)>>3);
        const auto outgoing_message_bit_count = frame.numberOfBitsUsed_;
        const auto outgoing_reliability = Reliability::Reliable;
        const auto outgoing_channel = kClientChannelRpc;
        samp::proto::ReliabilityFrame frame;
        frame.message_number = next_message_number_++;
        frame.reliability = outgoing_reliability;
        if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
            outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
            outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
            frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
            frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
        }
        frame.data.write(outgoing_message.data(), outgoing_message.size());
        frame.data.numberOfBitsUsed_ = outgoing_message_bit_count;
        outgoing_frames_.push_back(std::move(frame));
    }
    return true;
}

void NetworkClient::send_foot_sync() {
    const auto current_time_ms = [] {
        using namespace std::chrono;
        return static_cast<std::uint64_t>(
            duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count());
    };
    // samp.dll 0x10004db0: the packet id 207, then the 0x44 byte block of the
    // state of the ped, sent on the sync channel with the unreliable
    // sequenced reliability (the priority one, the reliability seven and the
    // ordering channel one of the official client).
    samp::proto::own::FootSync state=local_motion_provided_?local_motion_:samp::proto::own::FootSync{};
    state.x = local_x_;
    state.y = local_y_;
    state.z = local_z_;
    // The ped stands where the server put it and looks along the angle of the
    // class: a rotation about the vertical axis, half of it for the
    // quaternion.
    constexpr float kPi = 3.14159265358979F;
    const float half = local_angle_ * kPi / 360.0F;
    if(!local_motion_provided_) {
        state.qw = std::cos(half);
        state.qz = -std::sin(half); // GTA matrix -> 0x100b48b0 quaternion signs.
        state.health = 100;
    }

    std::vector<std::uint8_t> message(1+samp::proto::own::kFootSyncBlockSize,0);
    message[0]=samp::proto::own::kFootSyncId;
    auto* block=message.data()+1;
    const auto write_u16=[block](std::size_t offset,std::uint16_t value) {
        block[offset]=static_cast<std::uint8_t>(value);
        block[offset+1]=static_cast<std::uint8_t>(value>>8);
    };
    const auto write_u32=[block](std::size_t offset,std::uint32_t value) {
        block[offset]=static_cast<std::uint8_t>(value);
        block[offset+1]=static_cast<std::uint8_t>(value>>8);
        block[offset+2]=static_cast<std::uint8_t>(value>>16);
        block[offset+3]=static_cast<std::uint8_t>(value>>24);
    };
    const auto write_float=[&write_u32](std::size_t offset,float value) {
        std::uint32_t bits=0;
        std::memcpy(&bits,&value,sizeof(bits));
        write_u32(offset,bits);
    };
    write_u16(0x00,state.left_right);write_u16(0x02,state.up_down);write_u16(0x04,state.keys);
    write_float(0x06,state.x);write_float(0x0a,state.y);write_float(0x0e,state.z);
    write_float(0x12,state.qw);write_float(0x16,state.qx);write_float(0x1a,state.qy);
    write_float(0x1e,state.qz);
    block[0x22]=state.health;block[0x23]=state.armour;block[0x24]=state.weapon;
    block[0x25]=state.special_action;
    write_float(0x26,state.vx);write_float(0x2a,state.vy);write_float(0x2e,state.vz);
    write_float(0x32,state.sx);write_float(0x36,state.sy);write_float(0x3a,state.sz);
    write_u16(0x3e,state.surfing_id);write_u32(0x40,state.animation_id);
    // 0x10004db0 suppresses an identical block until strictly >500ms.
    if(message==last_foot_packet_ && current_time_ms()-last_foot_sync_ms_<=500) return;
    last_foot_packet_=message;last_foot_sync_ms_=current_time_ms();

    {
        const auto outgoing_message = std::span<const std::uint8_t>(message.data(), message.size());
        const auto outgoing_reliability = Reliability::UnreliableSequenced;
        const auto outgoing_channel = 1;
        samp::proto::ReliabilityFrame frame;
        frame.message_number = next_message_number_++;
        frame.reliability = outgoing_reliability;
        if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
            outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
            outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
            frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
            frame.ordering_index = next_ordering_index_[frame.ordering_channel]++;
        }
        frame.data.write(outgoing_message.data(), outgoing_message.size());
        outgoing_frames_.push_back(std::move(frame));
    }
}



}  // namespace samp::client
