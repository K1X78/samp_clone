#include "samp/server/game_layer.hpp"
#include <cmath>
#include <algorithm>
#include <bit>
#include <cstring>

namespace samp::server {

// Official: FUN_00493d40 @ 0x00493d40 (samp-server.exe)
void GameLayer::relay_sync(const GamePlayer& player, const samp::proto::BitStream& payload) {
    for (auto& receiver : players_) {
        if (!receiver.in_use || !receiver.peer || receiver.id==player.id ||
            receiver.virtual_world!=player.virtual_world ||
            player.id>=static_cast<int>(receiver.streamed_to.size()) ||
            !receiver.streamed_to[player.id]) continue;
        samp::proto::BitStream wrapped;
        const std::uint8_t marker=0x28;
        const auto sender=static_cast<std::uint32_t>(player.id);
        wrapped.write(&marker,1);wrapped.write(&sender,4);
        wrapped.writeBits(payload.data_.data(),static_cast<int>(payload.numberOfBitsUsed_),false);
        receiver.peer->send({wrapped.data_.data(),(wrapped.numberOfBitsUsed_+7u)/8},
            samp::proto::Reliability::UnreliableSequenced,1,wrapped.numberOfBitsUsed_);
    }
}

// Official: FUN_00494f00 @ 0x00494f00 (samp-server.exe)
void GameLayer::handle_aim_packet(GamePlayer& player, const samp::proto::BitStream& message) {
    if(message.numberOfBitsUsed_<32*8) return;
    const auto* block=message.data_.data()+1;
    for(std::size_t at=1;at<=25;at+=4) {
        float value=0;std::memcpy(&value,block+at,4);
        if(!std::isfinite(value)) return;
    }
    float direction[3];std::memcpy(direction,block+1,12);
    const float magnitude=std::sqrt(direction[0]*direction[0]+direction[1]*direction[1]+direction[2]*direction[2]);
    if(magnitude<=0 || magnitude>1.5f) return;
    std::memcpy(player.aim.data(),block,31);
    samp::proto::BitStream relay;
    const std::uint8_t kind=203;const auto id=static_cast<std::uint16_t>(player.id);
    relay.write(&kind,1);relay.write(&id,2);relay.write(block,31);
    relay_sync(player,relay);
}

// Official: FUN_004956d0 @ 0x004956d0 (samp-server.exe)
void GameLayer::handle_bullet_packet(GamePlayer& player, const samp::proto::BitStream& message) {
    if(message.numberOfBitsUsed_<41*8) return;
    const auto* block=message.data_.data()+1;
    if(block[39]<22 || (block[39]>34 && block[39]!=38) || block[0]>4) return;
    for(std::size_t at=3;at<=35;at+=4) {
        float value=0;std::memcpy(&value,block+at,4);
        if(!std::isfinite(value)) return;
        if(at>=27 && std::fabs(value)>=(block[0]==0?20000.0f:1000.0f)) return;
    }
    std::uint16_t target=0;std::memcpy(&target,block+1,2);
    if(block[0]==1 && (target==player.id || target>=players_.size() ||
        !players_[target].in_use || target>=player.streamed_to.size() || !player.streamed_to[target])) return;
    if(block[0]==2 && (target>=vehicles_.size() || !vehicles_[target].active ||
        target>=player.streamed_vehicles.size() || !player.streamed_vehicles[target])) return;
    std::memcpy(player.bullet.data(),block,40);
    const samp::amx::cell args[]{player.id,block[39],block[0],target,
        std::bit_cast<samp::amx::cell>(std::bit_cast<float>(std::array<std::uint8_t,4>{block[27],block[28],block[29],block[30]})),
        std::bit_cast<samp::amx::cell>(std::bit_cast<float>(std::array<std::uint8_t,4>{block[31],block[32],block[33],block[34]})),
        std::bit_cast<samp::amx::cell>(std::bit_cast<float>(std::array<std::uint8_t,4>{block[35],block[36],block[37],block[38]}))};
    const auto allow=[&](samp::pawn::PawnVm& script) {
        if(!std::any_of(script.publics_.begin(),script.publics_.end(),[](const auto& p){return p.name=="OnPlayerWeaponShot";})) return true;
        samp::amx::cell result=1;
        return script.execute("OnPlayerWeaponShot",args,result)==0 && result!=0;
    };
    for(const auto& script:filterscripts_) if(!allow(*script)) return;
    if(!allow(vm_)) return;
    samp::proto::BitStream relay;
    const std::uint8_t kind=206;const auto id=static_cast<std::uint16_t>(player.id);
    relay.write(&kind,1);relay.write(&id,2);relay.write(block,40);relay_sync(player,relay);
}

// Official: FUN_00495860 @ 0x00495860 (samp-server.exe)
void GameLayer::handle_stats_packet(GamePlayer& player, const samp::proto::BitStream& message) {
    auto input=message;std::uint8_t kind=0;std::int32_t money=0,drunk=0;
    if(!input.read(&kind,1) || !input.read(&money,4) || !input.read(&drunk,4)) return;
    player.money=money;player.drunk_level=drunk;
}

// Official: FUN_00495940 @ 0x00495940 (samp-server.exe)
void GameLayer::handle_weapons_packet(GamePlayer& player, const samp::proto::BitStream& message) {
    auto input=message;std::uint8_t kind=0;std::uint16_t target=0xffff,actor=0xffff;
    if(!input.read(&kind,1) || !input.read(&target,2) || !input.read(&actor,2)) return;
    auto weapons=player.weapons;auto ammunition=player.ammunition;
    while(input.numberOfBitsUsed_-input.readOffset_>=32) {
        std::uint8_t slot=0,weapon=0;std::uint16_t ammo=0;
        if(!input.read(&slot,1) || !input.read(&weapon,1) || !input.read(&ammo,2)) return;
        if(slot<13) {weapons[slot]=weapon;ammunition[slot]=ammo;}
    }
    player.target_player=target;player.target_actor=actor;
    player.weapons=weapons;player.ammunition=ammunition;
}

} // namespace samp::server
