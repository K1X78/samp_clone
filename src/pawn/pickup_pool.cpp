#include "pawn/natives.hpp"
#include "samp/proto/bitstream.hpp"
#include "samp/proto/rpc_ids.hpp"

#include <algorithm>

namespace samp::pawn {

// Official: FUN_00465870 @ 0x00465870 (samp-server.exe)
void NativeHost::update_pickup_pool_size() {
    pickup_pool_highest_ = 0;
    const auto limit = std::min<std::size_t>(4096, pickups_.size());
    for (std::size_t i = limit; i != 0; --i) {
        if (pickups_[i - 1].active) {
            pickup_pool_highest_ = static_cast<std::uint32_t>(i - 1);
            break;
        }
    }
}

// Official: FUN_004658c0 @ 0x004658c0 (samp-server.exe)
int NativeHost::create_pickup(int model, int type, const std::array<float, 3>& position, int world) {
    const auto last = pickups_.begin() + std::min<std::size_t>(4096, pickups_.size());
    const auto slot = std::find_if(pickups_.begin(), last, [](const auto& pickup) { return !pickup.active; });
    if (slot == last) return -1;
    *slot = StaticPickupNativeState{true, model, type, world, position};
    update_pickup_pool_size();
    return static_cast<int>(slot - pickups_.begin());
}

// Official: FUN_00465960 @ 0x00465960 (samp-server.exe)
bool NativeHost::destroy_pickup(std::uint32_t id) {
    if (id >= 4096 || id >= pickups_.size() || !pickups_[id].active) return false;
    const auto limit = std::min<std::size_t>(1000, players_.size());
    for (std::size_t i = 0; i < limit; ++i) {
        auto& player = players_[i];
        if (player.in_use && id < player.streamed_pickups.size() && player.streamed_pickups[id]) {
            send_pickup_out(player, id);
        }
    }
    pickups_[id].active = false;
    pickups_[id].world = 0;
    update_pickup_pool_size();
    return true;
}

// Official: FUN_00465a10 @ 0x00465a10 (samp-server.exe)
void NativeHost::send_pickup_create_rpc(PlayerNativeState& player, std::uint32_t id) {
    if (!player.peer || id >= 4096 || id >= pickups_.size() || !pickups_[id].active) return;
    const auto& pickup = pickups_[id];
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    payload.write(&pickup.model, sizeof(pickup.model));
    payload.write(&pickup.type, sizeof(pickup.type));
    payload.write(pickup.position.data(), sizeof(pickup.position));
    send_rpc(*player.peer, static_cast<std::uint8_t>(samp::proto::RpcId::PlayerCreatePickup), payload);
}

// Official: FUN_00465ae0 @ 0x00465ae0 (samp-server.exe)
void NativeHost::send_pickup_destroy_rpc(PlayerNativeState& player, std::uint32_t id) {
    if (!player.peer || id >= 4096 || id >= pickups_.size() || !pickups_[id].active) return;
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    send_rpc(*player.peer, static_cast<std::uint8_t>(samp::proto::RpcId::PlayerDestroyPickup), payload);
}

// Official: FUN_00483d20 @ 0x00483d20 (samp-server.exe)
void NativeHost::send_pickup_in(PlayerNativeState& player, std::uint32_t id) {
    if (id >= pickups_.size() || !pickups_[id].active) return;
    send_pickup_create_rpc(player, id);
    if (player.streamed_pickups.size() != pickups_.size()) player.streamed_pickups.resize(pickups_.size());
    ++player.streamed_pickups[id];
}

// Official: FUN_00483d60 @ 0x00483d60 (samp-server.exe)
void NativeHost::send_pickup_out(PlayerNativeState& player, std::uint32_t id) {
    if (id >= pickups_.size()) return;
    send_pickup_destroy_rpc(player, id);
    if (id < player.streamed_pickups.size()) player.streamed_pickups[id] = 0;
}

} // namespace samp::pawn
