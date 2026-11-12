#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstring>
#include "samp/server/game_layer.hpp"
#include "samp/proto/reliability_frame.hpp"
#include "samp/proto/samp_auth.hpp"
#include "samp/proto/samp_auth_table.hpp"
#include "samp/proto/sha1.hpp"
#include "samp/proto/samp_key.hpp"

namespace samp::server {
struct RakNetTransportTestAccess {
    static RakNetPeer& peer(RakNetServer& server, std::uint32_t address, std::uint16_t port) {
        return server.peers_.at((std::uint64_t(address) << 16) | port);
    }
    static std::size_t count(const RakNetServer& server) { return server.peers_.size(); }
    static bool authenticated(const RakNetPeer& peer) { return peer.stage_ == RakNetPeer::Stage::Authenticated; }
    static auto answer(const RakNetPeer& peer) { return samp::proto::auth::kAuthPairs[peer.auth_index_].answer; }
    static void advance_send_clocks(RakNetServer& server, std::uint64_t now) {
        for (auto& [id, peer] : server.peers_) {
            (void)id; peer.send_state_.last_update_ms = now - 100;
        }
    }
};
}
namespace {
using namespace samp::proto;
using Access = samp::server::RakNetTransportTestAccess;
int failures = 0;
#define CHECK(x) do { if (!(x)) { std::printf("FAIL %d: %s\n", __LINE__, #x); ++failures; } } while(false)
std::uint64_t now() { return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count(); }
void u8(BitStream& out, std::uint8_t n) { out.write(&n, 1); }
void u32(BitStream& out, std::uint32_t n) { out.write(&n, 4); }
void string8(BitStream& out, std::string_view text) { u8(out, static_cast<std::uint8_t>(text.size())); out.write(text.data(), text.size()); }

struct Fixture {
    static constexpr std::uint32_t address = 0x0100007f;
    samp::server::Config config;
    samp::server::GameLayer game;
    samp::server::RakNetServer server;
    Fixture() {
        config.values_["password"] = "secret"; config.values_["maxplayers"] = "8";
        game.config_ = &config; game.players_.resize(8); game.challenge_token_ = 0x12345678;
        server.port_ = 7802; server.handler_ = &game;
        server.cookie_table_[0][127] = 0x12; server.cookie_table_[1][1] = 0x34;
    }
    void raw(std::uint16_t port, std::span<const std::uint8_t> bytes) {
        auto encoded = obfuscate(bytes, server.port_);
        server.handle_datagram(address, port, encoded);
    }
    void open(std::uint16_t port) {
        const std::uint8_t request[]{24, 0x7b, 0x5d}; raw(port, request);
        CHECK(!server.outbox_.empty());
        CHECK(server.outbox_.back().data == std::vector<std::uint8_t>({25, 0}));
        server.outbox_.clear();
    }
    void send(std::uint16_t port, std::uint16_t number, const BitStream& message) {
        ReliabilityFrame frame; frame.message_number = number;
        frame.reliability = Reliability::Reliable; frame.data = message;
        ConnectedDatagram datagram; datagram.frames.push_back(frame);
        auto bits = encode_connected_datagram(datagram);
        raw(port, {bits.data_.data(), (bits.numberOfBitsUsed_ + 7u) / 8u});
    }
    std::vector<BitStream> flush() {
        const auto stamp = now(); Access::advance_send_clocks(server, stamp); server.tick(stamp);
        std::vector<BitStream> result;
        for (const auto& wire : server.outbox_) {
            ConnectedDatagram datagram;
            CHECK(decode_connected_datagram(wire.data, datagram));
            for (const auto& frame : datagram.frames) result.push_back(frame.data);
        }
        server.outbox_.clear(); return result;
    }
    void authenticate(std::uint16_t port, bool correct = true) {
        open(port);
        BitStream request; u8(request, 11); request.write("secret", 6);
        send(port, 0, request);
        auto messages = flush();
        CHECK(std::any_of(messages.begin(), messages.end(), [](const auto& message) { return message.data_[0] == 12; }));
        CHECK(!Access::authenticated(Access::peer(server, address, port)));
        BitStream response; u8(response, 12);
        string8(response, correct ? Access::answer(Access::peer(server, address, port)) : "incorrect");
        send(port, 1, response);
        messages = flush();
        CHECK(Access::authenticated(Access::peer(server, address, port)) == correct);
        CHECK(std::any_of(messages.begin(), messages.end(), [](const auto& message) { return message.data_[0] == 34; }) == correct);
    }
    BitStream join(std::string_view name, std::uint32_t version = 0xfde, std::uint8_t mod=1, bool valid_challenge=true, std::string_view serial={}) {
        BitStream payload; u32(payload, version); u8(payload, mod); string8(payload, name);
        u32(payload, (game.challenge_token_ ^ version) + (valid_challenge?0:1)); string8(payload, serial.empty()?key::generate("connection-test"):std::string(serial)); string8(payload, "0.3.DL-R1");
        u32(payload, game.challenge_token_ ^ version);
        BitStream rpc; u8(rpc, 20); u8(rpc, 25);
        const auto bits = static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
        rpc.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits), 32, true);
        rpc.writeBits(payload.data_.data(), static_cast<int>(bits), false); return rpc;
    }
    int rejection(const std::vector<BitStream>& messages) {
        for (auto message : messages) {
            std::uint8_t id = 0, rpc = 0, reason = 0; std::uint32_t bits = 0;
            if (!message.read(&id, 1) || id != 20 || !message.read(&rpc, 1) || rpc != 130) continue;
            CHECK(message.readCompressed(reinterpret_cast<std::uint8_t*>(&bits), 32, true));
            CHECK(message.read(&reason, 1)); return reason;
        }
        return -1;
    }
};

void auth_vectors() {
    constexpr char hex[] = "0123456789ABCDEF";
    for (const auto& pair : auth::kAuthPairs) {
        Sha1 hash; hash.update(reinterpret_cast<const std::uint8_t*>(pair.key.data()), pair.key.size()); hash.finalize();
        std::string answer;
        for (std::size_t i = 0; i < 20; ++i) {
            const auto byte = static_cast<std::uint8_t>(hash.digest()[i / 4 * 4 + 3 - i % 4] ^ auth::kAnswerMask[i]);
            answer += hex[byte >> 4]; answer += hex[byte & 15];
        }
        CHECK(answer == pair.answer);
    }
}

void lifecycle() {
    Fixture f;
    const std::uint8_t request[]{24, 0x69, 0x69};
    f.raw(12345, request);
    CHECK(f.server.outbox_.back().data == std::vector<std::uint8_t>({26, 0x12, 0x34}));
    CHECK(Access::count(f.server) == 0); f.server.outbox_.clear();
    f.open(12345);
    f.send(12345, 0, f.join("TooEarly"));
    CHECK(std::none_of(f.game.players_.begin(), f.game.players_.end(), [](const auto& p) { return p.in_use; }));
    BitStream wrong; u8(wrong, 11); wrong.write("bad", 3);
    f.send(12345, 1, wrong);
    auto messages = f.flush();
    CHECK(std::any_of(messages.begin(), messages.end(), [](const auto& m) { return m.data_[0] == 0x25; }));
    f.server.tick(now() + 600); CHECK(Access::count(f.server) == 0);
    f.authenticate(12345);
    auto join = f.join("Client"); f.send(12345, 2, join); f.flush();
    CHECK(f.game.players_[0].in_use && f.game.players_[0].joined);
    f.send(12345, 3, join); f.flush();
    CHECK(std::count_if(f.game.players_.begin(), f.game.players_.end(), [](const auto& p) { return p.in_use; }) == 1);
    f.authenticate(12346);
    f.send(12346, 2, f.join("client"));
    CHECK(f.rejection(f.flush()) == 2);
    f.authenticate(12347);
    f.send(12347, 2, f.join("Bad Name")); CHECK(f.rejection(f.flush()) == 2);
    f.authenticate(12348);
    f.send(12348, 2, f.join("OldVersion", 0xfd9)); CHECK(f.rejection(f.flush()) == 1);
    BitStream disconnect; u8(disconnect, 0x20); f.send(12345, 4, disconnect);
    f.server.tick(now() + 600);
    CHECK(!f.game.players_[0].in_use && Access::count(f.server) == 0);
    f.authenticate(12345);
    f.send(12345, 2, f.join("Client")); f.flush();
    CHECK(f.game.players_[0].in_use && f.game.players_[0].streamed_count == 0);
    CHECK(!f.game.players_[0].spawned);
    f.authenticate(12349, false);
    f.server.tick(now() + 600); CHECK(Access::count(f.server) == 1);
}
void validation() {
    {
        Fixture f;f.authenticate(13000);f.send(13000,2,f.join("Client",0xfde,0));CHECK(f.rejection(f.flush())==3);
    }
    {
        Fixture f;f.authenticate(13000);f.send(13000,2,f.join("Client",0xfde,1,false));CHECK(f.rejection(f.flush())==1);
    }
    {
        Fixture f;f.authenticate(13000);f.send(13000,2,f.join("Client",0xfde,1,true,"not-a-serial"));CHECK(f.rejection(f.flush())==-1);
        f.server.tick(now()+600);CHECK(Access::count(f.server)==0);
    }
    {
        Fixture f;f.authenticate(13000);
        for(auto& p:f.game.players_) p.in_use=true;
        f.send(13000,2,f.join("Client"));CHECK(f.rejection(f.flush())==4);
    }
    {
        Fixture f;f.config.values_["maxplayers"]="1";f.authenticate(13000);
        const std::uint8_t open[]{24,0x7b,0x5d};f.raw(13001,open);
        CHECK(f.server.outbox_.back().data[0]==0x1f && Access::count(f.server)==1);
    }
    for(const auto name:{std::string("ab"),std::string(21,'A')}) {
        Fixture f;f.authenticate(13000);f.send(13000,2,f.join(name));CHECK(f.rejection(f.flush())==2);
    }
    for(const auto name:{std::string("Abc"),std::string(20,'A')}) {
        Fixture f;f.authenticate(13000);f.send(13000,2,f.join(name));f.flush();CHECK(f.game.players_[0].joined);
    }
}

}
int main(int, char**) { auth_vectors(); lifecycle();validation(); std::printf("connection checks: %d failures\n", failures); return failures != 0; }
