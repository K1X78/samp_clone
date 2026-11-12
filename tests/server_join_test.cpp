#include "samp/server/game_layer.hpp"
#include "samp/proto/samp_auth_table.hpp"

#include <array>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <stdexcept>
#include <string>

#if defined(_WIN32)
#include <windows.h>
#endif

void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

#if defined(_MSC_VER) && defined(_M_IX86)
// Execute the exact, self-contained 0x468EE0..0x468F39 owner from the shipped
// 0.3.DL image. It has no calls or absolute data references; cdecl returns AL.
class OfficialNameValidator {
public:
    OfficialNameValidator() {
        std::ifstream file(SAMP_OFFICIAL_SERVER_PATH, std::ios::binary);
        const std::vector<std::uint8_t> image{std::istreambuf_iterator<char>(file), {}};
        require(image.size() >= sizeof(IMAGE_DOS_HEADER), "official PE unavailable");
        const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(image.data());
        require(dos->e_magic == IMAGE_DOS_SIGNATURE && dos->e_lfanew > 0 &&
                static_cast<std::size_t>(dos->e_lfanew) + sizeof(IMAGE_NT_HEADERS32) <= image.size(),
                "invalid official PE header");
        const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS32*>(image.data() + dos->e_lfanew);
        require(nt->Signature == IMAGE_NT_SIGNATURE && nt->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR32_MAGIC,
                "reference must be Win32 PE");
        constexpr std::uint32_t rva = 0x468ee0 - 0x400000;
        const auto* section = IMAGE_FIRST_SECTION(nt);
        std::size_t offset = image.size();
        for (unsigned i = 0; i < nt->FileHeader.NumberOfSections; ++i) {
            if (rva >= section[i].VirtualAddress &&
                rva - section[i].VirtualAddress < section[i].SizeOfRawData)
                offset = section[i].PointerToRawData + rva - section[i].VirtualAddress;
        }
        require(offset + 0x5a <= image.size() && image[offset + 0x59] == 0xc3,
                "official validator bytes missing");
        code_ = VirtualAlloc(nullptr, 0x5a, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
        require(code_ != nullptr, "cannot allocate validator oracle");
        std::memcpy(code_, image.data() + offset, 0x5a);
        DWORD old = 0;
        if (!VirtualProtect(code_, 0x5a, PAGE_EXECUTE_READ, &old)) {
            VirtualFree(code_, 0, MEM_RELEASE);
            code_ = nullptr;
            throw std::runtime_error("cannot protect validator oracle");
        }
        FlushInstructionCache(GetCurrentProcess(), code_, 0x5a);
    }
    ~OfficialNameValidator() { if (code_) VirtualFree(code_, 0, MEM_RELEASE); }
    bool invalid(const char* name) const {
        return reinterpret_cast<bool (__cdecl*)(const char*)>(code_)(name);
    }
private:
    void* code_ = nullptr;
};
#endif

struct JoinResult { bool accepted; int rejection; };

namespace samp::server {
struct RakNetTransportTestAccess {
    static std::string_view answer(RakNetServer& server) {
        return samp::proto::auth::kAuthPairs[server.peers_.at(1234).auth_index_].answer;
    }
    static void flush(RakNetServer& server) {
        const auto now = static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
        server.peers_.at(1234).send_state_.last_update_ms = now - 100;
        server.tick(now);
    }
};
}

// Deliver through the real transport and RPC dispatch, then inspect the RPC
// actually queued to the peer. No sockets, game, or server process are started.
JoinResult join(std::string name, std::uint32_t version = samp::server::kSampVersionNumber,
                std::uint32_t challenge = samp::server::kSampVersionNumber,
                std::uint8_t mod = 1, std::string existing = {}, bool occupied = true) {
    using namespace samp;
    server::Config config;
    server::GameLayer game;
    game.config_ = &config;
    game.players_.resize(1000);
    if (!existing.empty()) {
        game.players_[999].in_use = occupied;
        game.players_[999].name = existing;
        game.players_[999].id = 999;
    }
    server::RakNetServer network;
    network.handler_ = &game;
    network.port_ = 7777;
    const std::uint8_t open[] = {proto::kIdOpenConnectionRequest, 0x69, 0x69};
    network.handle_datagram(0, 1234, proto::obfuscate(open, network.port_));
    require(!network.outbox_.empty(), "transport did not accept test peer");
    network.outbox_.clear();
    std::uint16_t message_number = 0;
    const auto send = [&](const proto::BitStream& message) {
        proto::ReliabilityFrame frame;
        frame.message_number = message_number++;
        frame.reliability = proto::Reliability::Reliable;
        frame.data = message;
        proto::ConnectedDatagram datagram;
        datagram.frames.push_back(frame);
        const auto encoded = proto::encode_connected_datagram(datagram);
        network.handle_datagram(0,1234,proto::obfuscate(
            std::span<const std::uint8_t>(encoded.data_.data(),(encoded.numberOfBitsUsed_+7)/8),network.port_));
        server::RakNetTransportTestAccess::flush(network);
    };
    proto::BitStream connection_request;
    const std::uint8_t request_id = 11;
    connection_request.write(&request_id,1);
    send(connection_request);
    const auto answer = server::RakNetTransportTestAccess::answer(network);
    proto::BitStream authentication;
    const std::uint8_t auth_id = 12, answer_length = static_cast<std::uint8_t>(answer.size());
    authentication.write(&auth_id,1); authentication.write(&answer_length,1);
    authentication.write(answer.data(),answer.size());
    send(authentication);
    network.outbox_.clear();
    proto::BitStream payload;
    payload.write(&version, sizeof(version));
    payload.write(&mod, 1);
    const auto length = static_cast<std::uint8_t>(name.size());
    payload.write(&length, 1);
    if (!name.empty()) payload.write(name.data(), name.size());
    payload.write(&challenge, sizeof(challenge));
    // Original KEY gates: 0x3E900 / 1001 = 0x100 with remainder zero;
    // quotient renders as "100" (length 3, inside the required 2..40).
    const char key[] = "3E900";
    const std::uint8_t key_length = sizeof(key) - 1, client_length = 0;
    payload.write(&key_length, 1);
    payload.write(key, key_length);
    payload.write(&client_length, 1);
    proto::ReliabilityFrame frame;
    frame.message_number = message_number++;
    frame.reliability = proto::Reliability::ReliableOrdered;
    const std::uint8_t rpc[] = {proto::kIdRpc, server::kRpcPlayerConnect};
    frame.data.write(rpc, sizeof(rpc));
    const auto bits = static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
    frame.data.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits), 32, true);
    frame.data.writeBits(payload.data_.data(), static_cast<int>(bits), false);
    proto::ConnectedDatagram datagram;
    datagram.frames.push_back(frame);
    const auto encoded = proto::encode_connected_datagram(datagram);
    network.handle_datagram(0, 1234, proto::obfuscate(
        std::span<const std::uint8_t>(encoded.data_.data(), (encoded.numberOfBitsUsed_ + 7) / 8), network.port_));
    server::RakNetTransportTestAccess::flush(network);
    int rejection = -1;
    for (const auto& output : network.outbox_) {
        proto::BitStream packet;
        packet.write(output.data.data(), output.data.size());
        require(!packet.readBit(), "unexpected ACK prefix in immediate RPC reply");
        std::uint16_t number = 0, order = 0;
        std::uint8_t reliability = 0, channel = 0;
        require(packet.read(&number, 2) && packet.readBits(&reliability, 4, true), "invalid outgoing frame");
        if (reliability == 7 || reliability == 9 || reliability == 10)
            require(packet.readBits(&channel, 5, true) && packet.read(&order, 2), "invalid outgoing ordering");
        require(!packet.readBit(), "unexpected split reply");
        std::uint8_t size[2]{};
        require(packet.readCompressed(size, 16, true), "missing outgoing frame length");
        const auto byte_count = (static_cast<unsigned>(size[0] | size[1] << 8) + 7) / 8;
        std::vector<std::uint8_t> message(byte_count);
        require(packet.readAlignedBytes(message.data(), message.size()), "truncated outgoing frame");
        if (message.size() < 2 || message[0] != proto::kIdRpc || message[1] != server::kRpcConnectionRejected)
            continue;
        proto::BitStream reply;
        reply.write(message.data() + 2, message.size() - 2);
        std::uint8_t count[4]{}, code = 0;
        require(reply.readCompressed(count, 32, true) && count[0] == 8 &&
                reply.readBits(&code, 8, false), "invalid rejection RPC payload");
        rejection = code;
    }
    return {game.players_[0].in_use, rejection};
}

int main(int, char**) {
    try {
#if defined(_MSC_VER) && defined(_M_IX86)
        OfficialNameValidator official;
#endif
        const std::string allowed = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz][_$=()@.";
        for (unsigned value = 0; value < 256; ++value) {
            const char input[] = {static_cast<char>(value), '\0'};
            const char middle[] = {'A', static_cast<char>(value), 'Z', '\0'};
            const bool invalid = value != 0 && allowed.find(static_cast<char>(value)) == std::string::npos;
            require(samp::server::invalid_player_name(input) == invalid, "validator byte domain mismatch");
#if defined(_MSC_VER) && defined(_M_IX86)
            require(samp::server::invalid_player_name(input) == official.invalid(input) &&
                    samp::server::invalid_player_name(middle) == official.invalid(middle),
                    "validator differs from shipped function bytes");
#endif
        }
        require(!samp::server::invalid_player_name("A\0!"), "validator must stop at first NUL");
        for (const int length : {0, 1, 2, 3, 20, 21, 24, 25}) {
            const auto result = join(std::string(length, 'A'));
            const bool accepted = length >= 3 && length <= 20;
            require(result.accepted == accepted && result.rejection == (accepted ? -1 : 2), "nickname length gate");
        }
        for (const auto& name : {std::string("A!B"), std::string("A B"), std::string("A-B"), std::string("Ab\0C", 4)})
            require(join(name).rejection == 2, "invalid nickname must emit rejection two");
        require(join("][_$=()@.").accepted, "official punctuation whitelist is admitted");
        require(join(std::string("A") + static_cast<char>(0x80) + "B").rejection == 2,
                "high-bit nickname byte must emit rejection two");
        require(join("aLiCe", samp::server::kSampVersionNumber, samp::server::kSampVersionNumber, 1, "Alice").rejection == 2,
                "duplicate name after pool holes must reject ignoring case");
        require(join("Alice", samp::server::kSampVersionNumber, samp::server::kSampVersionNumber, 1, "Alice", false).accepted,
                "unoccupied old name does not block admission");
        require(join("Bad!", 1).rejection == 1, "bad version precedes bad nickname");
        require(join("Bad!", samp::server::kSampVersionNumber, 1, 0).rejection == 1,
                "bad challenge precedes bad mod and nickname");
        require(join("Bad!", samp::server::kSampVersionNumber, samp::server::kSampVersionNumber, 0).rejection == 3,
                "bad mod precedes bad nickname");
        samp::server::GameLayer game;
        game.players_.resize(1001);
        game.players_[999].name = "Last";
        game.players_[999].in_use = true;
        game.players_[1000].name = "Outside";
        game.players_[1000].in_use = true;
        require(game.player_name_in_use("lAsT") && !game.player_name_in_use("Outside"), "fixed pool scan bounds");
        game.players_[999].in_use = false;
        require(!game.player_name_in_use("Last"), "removed occupant no longer reserves name");
        std::puts("Official nickname validator, admission gates and rejection RPCs passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
