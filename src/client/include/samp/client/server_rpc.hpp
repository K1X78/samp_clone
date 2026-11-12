// Replica-side server RPC context and dispatch interface.
// Imported handlers remain in netrpc.cpp and scriptrpc.cpp.
#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "samp/client/game_command.hpp"
#include "samp/client/world_state.hpp"
#include "samp/proto/bitstream.hpp"

namespace samp::client {

class AssetManager;

// What a handler may touch.  The network client owns the world; the local
// player id and name come from the connection flow.
struct ServerRpcContext {
    WorldState& world;
    std::vector<GameCommand>* commands = nullptr;
    int local_player_id = -1;
    // The name and the colour the connection flow keeps, updated by the RPC 11
    // and 72 so the chat of the local player stays in step.
    std::string* local_player_name = nullptr;
    std::uint32_t* local_player_colour = nullptr;
    // The asset manager the RPC 179, 180, 183 and 185 drive.  The official
    // handlers create it on demand (samp.dll 0x10011d80); the replica always
    // owns one in the network client.
    AssetManager* assets = nullptr;
};

// The imported RPC registrations remain in netrpc.cpp and scriptrpc.cpp.
extern bool (*const apply_server_rpc)(ServerRpcContext&, std::uint8_t rpc_id,
                                      samp::proto::BitStream payload);

}  // namespace samp::client
