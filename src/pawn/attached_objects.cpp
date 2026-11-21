#include "pawn/natives.hpp"

#include "samp/proto/bitstream.hpp"
#include "samp/proto/rpc_ids.hpp"

namespace samp::pawn {
namespace {

using samp::amx::cell;
constexpr auto kAttachmentRpc = static_cast<std::uint8_t>(samp::proto::RpcId::SetPlayerAttachedObject);

constexpr auto attachment_payload = [](std::uint16_t id, cell index, const PlayerAttachedObject* attachment) {
    samp::proto::BitStream payload;
    payload.write(&id, sizeof(id));
    payload.write(&index, sizeof(index));
    if (attachment) {
        payload.write1();
        payload.write(attachment->data(), sizeof(*attachment));
    } else {
        payload.write0();
    }
    return payload;
};

constexpr auto broadcast_attachment = [](NativeHost& host, const PlayerNativeState& player, cell index,
                                         const PlayerAttachedObject* attachment) {
    const auto id = static_cast<std::uint16_t>(player.id);
    const auto payload = attachment_payload(id, index, attachment);
    host.send_streamed_player_rpc(id, kAttachmentRpc, payload);
    if (player.peer) host.send_rpc(*player.peer, kAttachmentRpc, payload);
};

} // namespace

// Official: FUN_00484490 @ 0x00484490 (samp-server.exe)
bool PlayerNativeState::has_attached_object(cell index) const {
    return static_cast<std::uint32_t>(index) < attached_objects.size() && attached_objects[index].has_value();
}

// Official: FUN_00486130 @ 0x00486130 (samp-server.exe)
void set_player_attachment(NativeHost& host, PlayerNativeState& player, cell index,
                           const PlayerAttachedObject& attachment) {
    if (static_cast<std::uint32_t>(index) >= player.attached_objects.size()) return;
    player.attached_objects[index] = attachment;
    broadcast_attachment(host, player, index, &attachment);
}

// Official: FUN_00486270 @ 0x00486270 (samp-server.exe)
void remove_player_attachment(NativeHost& host, PlayerNativeState& player, cell index) {
    if (static_cast<std::uint32_t>(index) >= player.attached_objects.size()) return;
    player.attached_objects[index].reset();
    broadcast_attachment(host, player, index, nullptr);
}

// Official: FUN_00486390 @ 0x00486390 (samp-server.exe)
void send_player_attachment(NativeHost& host, const PlayerNativeState& player,
                            const PlayerNativeState& recipient, cell index) {
    if (!recipient.peer || !player.has_attached_object(index)) return;
    const auto id = static_cast<std::uint16_t>(player.id);
    const auto payload = attachment_payload(id, index, &*player.attached_objects[index]);
    host.send_rpc(*recipient.peer, kAttachmentRpc, payload);
}

} // namespace samp::pawn
