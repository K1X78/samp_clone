#include "pawn/natives.hpp"
#include "samp/proto/bitstream.hpp"

namespace samp::pawn {

// Official: FUN_0047fc10 @ 0x0047fc10 (samp-server.exe)
int NativeHost::select_text_draw(int player,std::uint32_t colour) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    samp::proto::BitStream payload;payload.write1();payload.write(&colour,4);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,83,payload);
    return 1;
}

// Official: FUN_0047fd20 @ 0x0047fd20 (samp-server.exe)
int NativeHost::cancel_select_text_draw(int player) {
    const auto slot=static_cast<std::uint16_t>(player);
    if(slot>=1000 || slot>=players_.size() || !players_[slot].in_use) return 0;
    const std::uint32_t colour=0;
    samp::proto::BitStream payload;payload.write0();payload.write(&colour,4);
    if(players_[slot].peer) send_rpc(*players_[slot].peer,83,payload);
    return 1;
}

} // namespace samp::pawn
