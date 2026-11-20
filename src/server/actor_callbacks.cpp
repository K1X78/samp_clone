#include "samp/server/game_layer.hpp"

#include <bit>

namespace samp::server {

using samp::amx::cell;

// Official: FUN_0046c1a0 @ 0x0046c1a0 (samp-server.exe)
cell GameLayer::filterscript_actor_stream_in(int actor, int player) {
    const cell args[]{actor, player};
    cell result = 1;
    for (std::size_t slot = 0; slot < 16 && slot < filterscripts_.size(); ++slot) {
        if (filterscripts_[slot]) run_script_callback(*filterscripts_[slot], "OnActorStreamIn", args, result);
    }
    return result;
}

// Official: FUN_0046c220 @ 0x0046c220 (samp-server.exe)
cell GameLayer::filterscript_actor_stream_out(int actor, int player) {
    const cell args[]{actor, player};
    cell result = 1;
    for (std::size_t slot = 0; slot < 16 && slot < filterscripts_.size(); ++slot) {
        if (filterscripts_[slot]) run_script_callback(*filterscripts_[slot], "OnActorStreamOut", args, result);
    }
    return result;
}

// Official: FUN_0046ed80 @ 0x0046ed80 (samp-server.exe)
cell GameLayer::gamemode_actor_stream_in(int actor, int player) {
    if (!vm_.ok_) return 0;
    const cell args[]{actor, player};
    cell result = 1;
    run_script_callback(vm_, "OnActorStreamIn", args, result);
    return result;
}

// Official: FUN_0046edf0 @ 0x0046edf0 (samp-server.exe)
cell GameLayer::gamemode_actor_stream_out(int actor, int player) {
    if (!vm_.ok_) return 0;
    const cell args[]{actor, player};
    cell result = 1;
    run_script_callback(vm_, "OnActorStreamOut", args, result);
    return result;
}

// Virtual host adapter with no standalone native entry.
void GameLayer::notify_actor_stream(std::uint16_t actor, int player, bool visible) {
    if (visible) {
        filterscript_actor_stream_in(actor, player);
        gamemode_actor_stream_in(actor, player);
    } else {
        filterscript_actor_stream_out(actor, player);
        gamemode_actor_stream_out(actor, player);
    }
}

// Official: FUN_0046c590 @ 0x0046c590 (samp-server.exe)
cell GameLayer::filterscript_actor_damage(std::span<const cell, 5> args) {
    cell result = 0;
    for (std::size_t slot = 0; slot < 16 && slot < filterscripts_.size(); ++slot) {
        auto* script = filterscripts_[slot].get();
        if (script && run_script_callback(*script, "OnPlayerGiveDamageActor", args, result) && result != 0) {
            return 1;
        }
    }
    return result;
}

// Official: FUN_0046f0d0 @ 0x0046f0d0 (samp-server.exe)
cell GameLayer::gamemode_actor_damage(std::span<const cell, 5> args) {
    cell result = 0;
    run_script_callback(vm_, "OnPlayerGiveDamageActor", args, result);
    return result;
}

// Official: FUN_0049a280 @ 0x0049a280 (samp-server.exe)
void GameLayer::handle_actor_damage(RakNetPeer& peer, const samp::proto::BitStream& payload) {
    // The client prefixes its actor-damage fields with the same direction bit
    // as player damage. This owner consumes the bit without branching on it.
    if (payload.numberOfBitsUsed_ < 1 + 16 + 3 * 32) return;
    auto input = payload;
    ++input.readOffset_;
    std::uint16_t actor = 0;
    float damage = 0.0f;
    std::uint32_t weapon = 0;
    std::uint32_t body_part = 0;
    if (!input.read(&actor, sizeof(actor)) || !input.read(&damage, sizeof(damage)) ||
        !input.read(&weapon, sizeof(weapon)) || !input.read(&body_part, sizeof(body_part))) return;

    const auto limit = std::min<std::size_t>(1000, players_.size());
    for (std::size_t slot = 0; slot < limit; ++slot) {
        if (!players_[slot].in_use || players_[slot].peer != &peer) continue;
        const cell args[]{static_cast<cell>(slot), actor, std::bit_cast<cell>(damage),
                          std::bit_cast<cell>(weapon), std::bit_cast<cell>(body_part)};
        filterscript_actor_damage(args);
        gamemode_actor_damage(args);
        return;
    }
}

} // namespace samp::server
