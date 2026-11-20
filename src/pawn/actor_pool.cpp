#include "pawn/natives.hpp"
#include "samp/proto/bitstream.hpp"
#include "samp/proto/rpc_ids.hpp"

#include <utility>

namespace samp::pawn {

// Official: FUN_0048f1a0 @ 0x0048f1a0 (samp-server.exe)
ActorNativeState::ActorNativeState(const NativeHost& host, std::int32_t model_id,
                                   const std::array<float, 3>& spawn_position, float spawn_angle)
    : model(model_id), position(spawn_position), angle(spawn_angle)
{
    if (host.artwork_enabled_ && model_id > 20000) {
        const int base_id = host.model_base_id(model_id);
        if (base_id >= 0 && base_id < 20000) {
            model = base_id;
            custom_model = model_id;
        } else {
            model = 0;
        }
    }
}

// Official: FUN_0048f280 @ 0x0048f280 (samp-server.exe)
void ActorNativeState::set_position(const std::array<float, 3>& new_position) {
    position = new_position;
}

// Official: FUN_0048f2b0 @ 0x0048f2b0 (samp-server.exe)
void ActorNativeState::set_angle(float new_angle) {
    angle = new_angle;
}

// Official: FUN_0048f2c0 @ 0x0048f2c0 (samp-server.exe)
double ActorNativeState::squared_distance_xy(float x, float y) const {
    const double dx = double(position[0]) - x;
    const double dy = double(position[1]) - y;
    return dx * dx + dy * dy;
}

// Official: FUN_0046fe10 @ 0x0046fe10 (samp-server.exe)
ActorNativeState* NativeHost::get_actor(std::uint16_t id) const {
    return actor_pool_ready_ && id < kActorPoolSize ? actors_[id].get() : nullptr;
}

// Official: FUN_00464540 @ 0x00464540 (samp-server.exe)
void NativeHost::update_actor_pool_size() {
    actor_pool_highest_ = 0;
    for (std::uint16_t id = kActorPoolSize - 1; id > 0; --id) {
        if (actors_[id]) {
            actor_pool_highest_ = id;
            break;
        }
    }
}

// Official: FUN_004645d0 @ 0x004645d0 (samp-server.exe)
std::uint16_t NativeHost::create_actor(std::int32_t model, const std::array<float, 3>& position, float angle) {
    if (!actor_pool_ready_) return kInvalidActorId;
    for (std::uint16_t id = 0; id < kActorPoolSize; ++id) {
        if (actors_[id]) continue;
        actors_[id].reset(new (std::nothrow) ActorNativeState(*this, model, position, angle));
        if (!actors_[id]) return kInvalidActorId;
        update_actor_pool_size();
        return id;
    }
    return kInvalidActorId;
}

// Official: FUN_00465bd0 @ 0x00465bd0 (samp-server.exe)
bool PlayerNativeState::is_actor_streamed(std::uint16_t actor_id) const {
    return actor_id < kActorPoolSize && streamed_actors[actor_id] != 0;
}

// Official: FUN_004646a0 @ 0x004646a0 (samp-server.exe)
void NativeHost::send_actor_create(PlayerNativeState& player, std::uint16_t id) {
    const auto* actor = get_actor(id);
    if (!actor || !player.peer) return;

    samp::proto::BitStream payload;
    const std::uint8_t invulnerable = actor->invulnerable;
    payload.write(&id, sizeof(id));
    payload.write(&actor->model, sizeof(actor->model));
    payload.write(&actor->custom_model, sizeof(actor->custom_model));
    payload.write(actor->position.data(), sizeof(actor->position));
    payload.write(&actor->angle, sizeof(actor->angle));
    payload.write(&actor->health, sizeof(actor->health));
    payload.write(&invulnerable, sizeof(invulnerable));
    send_rpc(*player.peer, 171, payload);
    if (actor->animation) send_actor_animation(player, id, *actor->animation);
}

// Official: FUN_00464880 @ 0x00464880 (samp-server.exe)
void NativeHost::send_actor_destroy(PlayerNativeState& player, std::uint16_t id) {
    if (!get_actor(id) || !player.peer) return;
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    send_rpc(*player.peer, 172, payload);
}

// Official: FUN_00483df0 @ 0x00483df0 (samp-server.exe)
void NativeHost::stream_actor_in(PlayerNativeState& player, std::uint16_t id) {
    if (player.is_npc || player.streamed_actor_count >= 51 || !get_actor(id)) return;
    send_actor_create(player, id);
    ++player.streamed_actors[id];
    ++player.streamed_actor_count;
    notify_actor_stream(id, player.id, true);
}

// Official: FUN_00483e70 @ 0x00483e70 (samp-server.exe)
void NativeHost::stream_actor_out(PlayerNativeState& player, std::uint16_t id) {
    send_actor_destroy(player, id);
    player.streamed_actors[id] = 0;
    --player.streamed_actor_count;
    notify_actor_stream(id, player.id, false);
}

// Official: FUN_00465f00 @ 0x00465f00 (samp-server.exe)
void NativeHost::clear_actor_viewers(std::uint16_t id) {
    for (auto& player : live_player_slots(*this)) {
        if (player.in_use && player.is_actor_streamed(id)) {
            stream_actor_out(player, id);
        }
    }
}

// Official: FUN_0048f260 @ 0x0048f260 (samp-server.exe)
void NativeHost::destroy_actor_streaming(std::uint16_t id) {
    clear_actor_viewers(id);
}

// Official: FUN_00464810 @ 0x00464810 (samp-server.exe)
bool NativeHost::destroy_actor(std::uint16_t id) {
    auto* actor = get_actor(id);
    if (!actor || actor->destroying) return false;
    actor->destroying = true;
    destroy_actor_streaming(id);
    actors_[id].reset();
    update_actor_pool_size();
    return true;
}

// Official: FUN_00464930 @ 0x00464930 (samp-server.exe)
void NativeHost::reset_actors() {
    for (std::uint16_t id = 0; id < kActorPoolSize; ++id) {
        destroy_actor(id);
    }
    actor_pool_ready_ = false;
}

// Official: FUN_004647e0 @ 0x004647e0 (samp-server.exe)
void NativeHost::set_actor_world(std::uint16_t id, std::int32_t world) {
    if (auto* actor = get_actor(id)) actor->world = world;
}

// Shared actor broadcast code with no standalone native entry.
void NativeHost::send_actor_update(std::uint16_t id, std::uint8_t rpc, const samp::proto::BitStream& payload) {
    for (auto& player : live_player_slots(*this)) {
        if (player.in_use && player.peer && player.is_actor_streamed(id)) {
            send_rpc(*player.peer, rpc, payload);
        }
    }
}

// Official: FUN_0048f2f0 @ 0x0048f2f0 (samp-server.exe)
void NativeHost::set_actor_health(std::uint16_t id, ActorNativeState& actor, float health) {
    actor.health = health;
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    payload.write(&actor.health, sizeof(actor.health));
    send_actor_update(id, static_cast<std::uint8_t>(samp::proto::RpcId::SetActorHealthForPlayer), payload);
}

// Official: FUN_0048f420 @ 0x0048f420 (samp-server.exe)
void NativeHost::send_actor_animation(PlayerNativeState& player, std::uint16_t id,
                                     const ActorAnimation& animation) {
    if (!player.in_use || !player.peer) return;
    const auto library_size = static_cast<std::uint8_t>(animation.library.size());
    const auto name_size = static_cast<std::uint8_t>(animation.name.size());
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    payload.write(&library_size, sizeof(library_size));
    payload.write(animation.library.data(), library_size);
    payload.write(&name_size, sizeof(name_size));
    payload.write(animation.name.data(), name_size);
    payload.write(&animation.speed, sizeof(animation.speed));
    const bool flags[]{animation.loop, animation.lock_x, animation.lock_y, animation.freeze};
    for (const bool flag : flags) {
        if (flag) payload.write1();
        else payload.write0();
    }
    payload.write(&animation.duration, sizeof(animation.duration));
    send_rpc(*player.peer, static_cast<std::uint8_t>(samp::proto::RpcId::ApplyActorAnimationForPlayer), payload);
}

// Official: FUN_0048f710 @ 0x0048f710 (samp-server.exe)
void NativeHost::apply_actor_animation(std::uint16_t id, ActorNativeState& actor, ActorAnimation animation) {
    if (animation.library.size() > 64) animation.library.resize(64);
    if (animation.name.size() > 64) animation.name.resize(64);
    for (auto& player : live_player_slots(*this)) {
        if (player.in_use && player.is_actor_streamed(id)) send_actor_animation(player, id, animation);
    }
    if (animation.loop || animation.freeze) actor.animation = std::move(animation);
    else actor.animation.reset();
}

// Official: FUN_0048f600 @ 0x0048f600 (samp-server.exe)
void NativeHost::clear_actor_animation(std::uint16_t id, ActorNativeState& actor) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    send_actor_update(id, static_cast<std::uint8_t>(samp::proto::RpcId::ClearActorAnimationsForPlayer), payload);
    actor.animation.reset();
}

// Actor portion of the official stream pass at 0x004851d0, with no standalone native entry.
void NativeHost::update_actor_streaming(PlayerNativeState& player, float radius) {
    const auto world = player.virtual_world;
    const float squared_radius = radius * radius;
    const int highest = actor_pool_highest_;
    for (std::uint16_t id = 0; id <= highest && player.in_use && player.peer; ++id) {
        const auto* actor = get_actor(id);
        if (!actor || actor->destroying) continue;
        const bool visible = actor->world == world &&
            actor->squared_distance_xy(player.x, player.y) < squared_radius;
        const bool held = player.is_actor_streamed(id);

        if (visible && !held) stream_actor_in(player, id);
        if (!visible && held) stream_actor_out(player, id);
    }
}

} // namespace samp::pawn
