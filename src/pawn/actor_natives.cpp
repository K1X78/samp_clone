#include "actor_natives.hpp"
#include "pawn/natives.hpp"
#include "samp/proto/bitstream.hpp"
#include "samp/proto/rpc_ids.hpp"

#include <bit>
#include <utility>

namespace samp::pawn::actor_natives {

// Official: FUN_004714a0 @ 0x004714a0 (samp-server.exe)
cell get_pool_size(NativeHost& host, std::span<const cell>) {
    return host.actor_pool_ready_ ? host.actor_pool_highest_ : -1;
}

// Official: FUN_00471730 @ 0x00471730 (samp-server.exe)
cell is_streamed_in(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto actor = static_cast<std::uint16_t>(args[0]);
    const auto player = static_cast<std::uint16_t>(args[1]);
    return host.get_actor(actor) && player < 1000 && player < host.players_.size() &&
        host.players_[player].in_use && host.players_[player].is_actor_streamed(actor);
}

// Official: FUN_004796c0 @ 0x004796c0 (samp-server.exe)
cell create(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 5) return kInvalidActorId;
    const std::array position{std::bit_cast<float>(args[1]), std::bit_cast<float>(args[2]),
                              std::bit_cast<float>(args[3])};
    return host.create_actor(args[0], position, std::bit_cast<float>(args[4]));
}

// Official: FUN_00479700 @ 0x00479700 (samp-server.exe)
cell destroy(NativeHost& host, std::span<const cell> args) {
    return !args.empty() && host.destroy_actor(static_cast<std::uint16_t>(args[0]));
}

// Official: FUN_00479b30 @ 0x00479b30 (samp-server.exe)
cell is_valid(NativeHost& host, std::span<const cell> args) {
    return !args.empty() && host.get_actor(static_cast<std::uint16_t>(args[0])) != nullptr;
}

// Official: FUN_00479850 @ 0x00479850 (samp-server.exe)
cell set_world(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto actor = static_cast<std::uint16_t>(args[0]);
    if (!host.get_actor(actor)) return 0;
    host.set_actor_world(actor, args[1]);
    return 1;
}

// Official: FUN_00479890 @ 0x00479890 (samp-server.exe)
cell get_world(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto* actor = host.get_actor(static_cast<std::uint16_t>(args[0]));
    return actor ? actor->world : 0;
}

// Official: FUN_00479b70 @ 0x00479b70 (samp-server.exe)
cell set_invulnerable(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    auto* actor = host.get_actor(static_cast<std::uint16_t>(args[0]));
    if (!actor) return 0;
    actor->invulnerable = args[1] != 0;
    return 1;
}

// Official: FUN_00479bb0 @ 0x00479bb0 (samp-server.exe)
cell is_invulnerable(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto* actor = host.get_actor(static_cast<std::uint16_t>(args[0]));
    return actor && actor->invulnerable;
}

// Official: FUN_00479af0 @ 0x00479af0 (samp-server.exe)
cell set_health(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto id = static_cast<std::uint16_t>(args[0]);
    auto* actor = host.get_actor(id);
    if (!actor) return 0;
    host.set_actor_health(id, *actor, std::bit_cast<float>(args[1]));
    return 1;
}

// Official: FUN_00479a90 @ 0x00479a90 (samp-server.exe)
cell get_health(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 2) return 0;
    const auto* actor = host.get_actor(static_cast<std::uint16_t>(args[0]));
    return actor && write(args[1], std::bit_cast<cell>(actor->health));
}

// Official: FUN_00480ff0 @ 0x00480ff0 (samp-server.exe)
cell set_position(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 4) return 0;
    const auto id = static_cast<std::uint16_t>(args[0]);
    auto* actor = host.get_actor(id);
    if (!actor) return 0;
    const std::array position{std::bit_cast<float>(args[1]), std::bit_cast<float>(args[2]),
                              std::bit_cast<float>(args[3])};
    actor->set_position(position);
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    payload.write(position.data(), sizeof(position));
    host.send_actor_update(id, static_cast<std::uint8_t>(samp::proto::RpcId::SetActorPosForPlayer), payload);
    return 1;
}

// Official: FUN_00479740 @ 0x00479740 (samp-server.exe)
cell get_position(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 4) return 0;
    const auto* actor = host.get_actor(static_cast<std::uint16_t>(args[0]));
    return actor && write(args[1], std::bit_cast<cell>(actor->position[0])) &&
        write(args[2], std::bit_cast<cell>(actor->position[1])) &&
        write(args[3], std::bit_cast<cell>(actor->position[2]));
}

// Official: FUN_004811e0 @ 0x004811e0 (samp-server.exe)
cell set_angle(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto id = static_cast<std::uint16_t>(args[0]);
    auto* actor = host.get_actor(id);
    if (!actor) return 0;
    actor->set_angle(std::bit_cast<float>(args[1]));
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    payload.write(&actor->angle, sizeof(actor->angle));
    host.send_actor_update(id, static_cast<std::uint8_t>(samp::proto::RpcId::SetActorFacingAngleForPlayer), payload);
    return 1;
}

// Official: FUN_004797f0 @ 0x004797f0 (samp-server.exe)
cell get_angle(NativeHost& host, std::span<const cell> args, const CellWriter& write) {
    if (args.size() < 2) return 0;
    const auto* actor = host.get_actor(static_cast<std::uint16_t>(args[0]));
    return actor && write(args[1], std::bit_cast<cell>(actor->angle));
}

// Official: FUN_004798d0 @ 0x004798d0 (samp-server.exe)
cell apply_animation(NativeHost& host, std::span<const cell> args, const StringReader& read) {
    if (args.size() < 9) return 0;
    const auto id = static_cast<std::uint16_t>(args[0]);
    auto* actor = host.get_actor(id);
    if (!actor) return 0;

    const char* library_text = read(args[1]);
    if (!library_text || !*library_text) return 0;
    // Reading an aliased Pawn address can replace the first decoded buffer.
    std::string library(library_text);
    const char* name = read(args[2]);
    if (!name || !*name) return 0;
    ActorAnimation animation{std::move(library), name, std::bit_cast<float>(args[3]),
        args[4] != 0, args[5] != 0, args[6] != 0, args[7] != 0, args[8]};
    host.apply_actor_animation(id, *actor, std::move(animation));
    return 1;
}

// Official: FUN_00479a30 @ 0x00479a30 (samp-server.exe)
cell clear_animations(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto id = static_cast<std::uint16_t>(args[0]);
    auto* actor = host.get_actor(id);
    if (!actor) return 0;
    host.clear_actor_animation(id, *actor);
    return 1;
}

} // namespace samp::pawn::actor_natives
