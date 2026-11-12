#include <winsock2.h>
#include <ws2tcpip.h>
#include <cstdio>
#include <chrono>
#include "samp/client/network_client.hpp"
#include "samp/proto/obfuscation.hpp"

namespace {
int failures=0;
#define CHECK(x) do {if(!(x)){std::printf("FAIL %d: %s\n",__LINE__,#x);++failures;}} while(false)
std::uint64_t now() {return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();}
struct ScriptedPeer {
    SOCKET socket=INVALID_SOCKET;
    sockaddr_in address{},client{};
    ScriptedPeer() {
        socket=::socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);CHECK(socket!=INVALID_SOCKET);
        address.sin_family=AF_INET;address.sin_addr.s_addr=htonl(INADDR_LOOPBACK);
        CHECK(bind(socket,reinterpret_cast<const sockaddr*>(&address),sizeof(address))==0);
        int length=sizeof(address);CHECK(getsockname(socket,reinterpret_cast<sockaddr*>(&address),&length)==0);
        const DWORD timeout=50;setsockopt(socket,SOL_SOCKET,SO_RCVTIMEO,reinterpret_cast<const char*>(&timeout),sizeof(timeout));
    }
    ~ScriptedPeer() {closesocket(socket);}
    std::vector<std::uint8_t> receive() {
        std::uint8_t bytes[2048];int length=sizeof(client);
        const int count=recvfrom(socket,reinterpret_cast<char*>(bytes),sizeof(bytes),0,reinterpret_cast<sockaddr*>(&client),&length);
        if(count<=0) return {};
        auto decoded=samp::proto::deobfuscate({bytes,static_cast<std::size_t>(count)},ntohs(address.sin_port));
        CHECK(decoded.has_value());return decoded.value_or(std::vector<std::uint8_t>{});
    }
    void send(std::initializer_list<std::uint8_t> data) {
        CHECK(sendto(socket,reinterpret_cast<const char*>(data.begin()),static_cast<int>(data.size()),0,
            reinterpret_cast<const sockaddr*>(&client),sizeof(client))==static_cast<int>(data.size()));
    }
};
void open_retry() {
    ScriptedPeer peer;samp::client::NetworkClient client;
    samp::client::ConnectionParameters parameters;parameters.host="127.0.0.1";
    parameters.port=ntohs(peer.address.sin_port);parameters.name="Client";parameters.secret="offline-fixture";
    CHECK(client.connect(parameters));CHECK(peer.receive()==std::vector<std::uint8_t>({24,0x69,0x69}));
    for(int attempt=2;attempt<=6;++attempt) {
        client.next_open_ms_=0;client.tick();
        CHECK(client.open_attempts_==attempt);CHECK(peer.receive()==std::vector<std::uint8_t>({24,0x69,0x69}));
    }
    client.next_open_ms_=0;client.tick();
    CHECK(client.state_==samp::client::ConnectionState::Disconnected && client.retry_requested_);
    CHECK(peer.receive().empty());
    CHECK(client.receive_state_.ordered_count==0 && client.receive_state_.buffered_bytes==0);
    for(const auto& channel:client.receive_state_.ordered) CHECK(channel.empty());
}
void endpoint_and_reset() {
    ScriptedPeer peer,spoof;samp::client::NetworkClient client;
    samp::client::ConnectionParameters parameters;parameters.host="127.0.0.1";
    parameters.port=ntohs(peer.address.sin_port);parameters.name="Client";parameters.secret="offline-fixture";
    CHECK(client.connect(parameters));CHECK(!peer.receive().empty());
    spoof.client=peer.client;spoof.send({26,0x55,0x66});client.tick();
    CHECK(!client.have_cookie_ && client.state_==samp::client::ConnectionState::WaitingForTheCookie);
    peer.send({26,0x12,0x34});client.tick();
    CHECK(client.have_cookie_ && client.cookie_==0x3412 && client.state_==samp::client::ConnectionState::WaitingForTheReply);
    CHECK(peer.receive()==std::vector<std::uint8_t>({24,0x7b,0x5d}));
    peer.send({25,0});client.tick();
    CHECK(client.state_==samp::client::ConnectionState::WaitingForTheChallenge);
    client.last_receive_ms_=now()-11000;client.tick();
    CHECK(client.state_==samp::client::ConnectionState::Disconnected && client.retry_requested_);
    client.world_.players_[5].name="stale";client.local_vehicle_mode_=2;client.local_ammo_[2]=99;
    client.spawned_=client.in_game_=client.class_ready_=true;client.local_money_=99;
    CHECK(client.connect(client.parameters_)); // self-reference is a supported reconnect call
    CHECK(client.world_.players_.empty() && !client.spawned_ && !client.in_game_ && !client.class_ready_);
    CHECK(client.local_vehicle_mode_==0 && client.local_ammo_[2]==0 && client.local_money_==0);
    CHECK(!client.have_cookie_ && !client.have_challenge_ && client.next_message_number_==0);
    CHECK(client.player_id_==-1 && client.game_commands_.size()==1);
    CHECK(std::holds_alternative<samp::client::RemotePlayersReset>(client.game_commands_[0]));
    client.send_aim_sync();client.local_aim_provided_=true;
    client.in_game_=client.spawned_=true;client.send_aim_sync();
    CHECK(!client.outgoing_frames_.empty());
    client.disconnect();
    CHECK(client.socket_==0 && !client.winsock_started_ && !client.in_game_ && !client.spawned_);
    CHECK(client.outgoing_frames_.empty() && client.pending_.empty() && client.send_state_.pending.empty());
    CHECK(client.receive_state_.buffered_bytes==0 && client.game_commands_.size()==1);
    CHECK(std::holds_alternative<samp::client::RemotePlayersReset>(client.game_commands_[0]));
}
}
int main() {
    WSADATA data{};CHECK(WSAStartup(MAKEWORD(2,2),&data)==0);
    open_retry();endpoint_and_reset();WSACleanup();
    std::printf("client connection: %d failures\n",failures);return failures!=0;
}
