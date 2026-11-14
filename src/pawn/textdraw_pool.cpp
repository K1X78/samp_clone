#include "pawn/natives.hpp"
#include "samp/proto/bitstream.hpp"
#include <algorithm>
#include <cstring>
#include <new>

namespace samp::pawn {

// Official: FUN_00466b80 @ 0x00466b80 (samp-server.exe)
void TextDrawPool::reset() {
    entries.assign(2048,{});
}

// Official: FUN_00466bb0 @ 0x00466bb0 (samp-server.exe)
void TextDrawPool::release() {
    entries.clear();
}

// Official: FUN_00466c00 @ 0x00466c00 (samp-server.exe)
std::uint16_t TextDrawPool::create(std::int32_t x,std::int32_t y,std::string_view text) {
    for(std::size_t id=0;id<2048 && id<entries.size();++id) {
        auto& draw=entries[id];
        if(draw.active) continue;
        try {
            draw={};draw.viewers.assign(1000,0);
            text=text.substr(0,text.find('\0'));
            draw.text.assign(text.substr(0,1024));
            const auto put=[&](std::size_t offset,std::uint32_t value) {std::memcpy(draw.data.data()+offset,&value,4);};
            draw.data[0]=0x10;
            put(1,0x3ef5c28f);put(5,0x3f8f5c29);put(9,0xffe1e1e1);
            put(13,0x44a00000);put(17,0x44a00000);put(21,0x80808080);
            draw.data[25]=2;put(27,0xff000000);draw.data[31]=1;
            put(33,static_cast<std::uint32_t>(x));put(37,static_cast<std::uint32_t>(y));
            put(55,0x3f800000);put(59,0xffffffff);
            draw.active=true;return static_cast<std::uint16_t>(id);
        } catch(const std::bad_alloc&) {return 0xffff;}
    }
    return 0xffff;
}

// Official: FUN_00466d40 @ 0x00466d40 (samp-server.exe)
void TextDrawPool::letter_size(std::uint16_t id,std::int32_t x,std::int32_t y) {
    std::memcpy(entries[id].data.data()+1,&x,4);
    std::memcpy(entries[id].data.data()+5,&y,4);
}

// Official: FUN_00466d70 @ 0x00466d70 (samp-server.exe)
void TextDrawPool::text_size(std::uint16_t id,std::int32_t x,std::int32_t y) {
    std::memcpy(entries[id].data.data()+13,&x,4);
    std::memcpy(entries[id].data.data()+17,&y,4);
}

// Official: FUN_00466da0 @ 0x00466da0 (samp-server.exe)
void TextDrawPool::alignment(std::uint16_t id,std::uint8_t value) {
    auto& flags=entries[id].data[0];flags&=0xf1;
    if(value==1) flags|=2;else if(value==2) flags|=8;else if(value==3) flags|=4;
}

// Official: FUN_00466df0 @ 0x00466df0 (samp-server.exe)
void TextDrawPool::colour(std::uint16_t id,std::uint32_t value) {
    value=(value>>24)|((value>>8)&0xff00u)|((value<<8)&0xff0000u)|(value<<24);
    std::memcpy(entries[id].data.data()+9,&value,4);
}

// Official: FUN_00466e30 @ 0x00466e30 (samp-server.exe)
void TextDrawPool::box_colour(std::uint16_t id,std::uint32_t value) {
    value=(value>>24)|((value>>8)&0xff00u)|((value<<8)&0xff0000u)|(value<<24);
    std::memcpy(entries[id].data.data()+21,&value,4);
}

// Official: FUN_00466e70 @ 0x00466e70 (samp-server.exe)
void TextDrawPool::background_colour(std::uint16_t id,std::uint32_t value) {
    value=(value>>24)|((value>>8)&0xff00u)|((value<<8)&0xff0000u)|(value<<24);
    std::memcpy(entries[id].data.data()+27,&value,4);
}

// Official: FUN_00466eb0 @ 0x00466eb0 (samp-server.exe)
void TextDrawPool::selectable(std::uint16_t id,std::uint8_t value) {
    entries[id].data[32]=value;
}

// Official: FUN_00466ed0 @ 0x00466ed0 (samp-server.exe)
void TextDrawPool::show(std::uint16_t player,std::uint16_t id) {
    if(id>=2048 || id>=entries.size() || !entries[id].active) return;
    auto& draw=entries[id];const auto length=static_cast<std::uint16_t>(draw.text.size());
    samp::proto::BitStream payload;payload.write(&id,2);payload.write(draw.data.data(),63);
    payload.write(&length,2);if(length) payload.write(draw.text.data(),length);
    if(player<1000 && player<host->players_.size() && host->players_[player].in_use && host->players_[player].peer)
        host->send_rpc(*host->players_[player].peer,134,payload);
    draw.viewers[player]=1;
}

// Official: FUN_00467000 @ 0x00467000 (samp-server.exe)
void TextDrawPool::show_all(std::uint16_t id) {
    if(id>=2048 || id>=entries.size() || !entries[id].active) return;
    auto& draw=entries[id];const auto length=static_cast<std::uint16_t>(draw.text.size());
    samp::proto::BitStream payload;payload.write(&id,2);payload.write(draw.data.data(),63);
    payload.write(&length,2);if(length) payload.write(draw.text.data(),length);
    for(std::size_t slot=0;slot<1000 && slot<host->players_.size() && static_cast<int>(slot)<=host->player_pool_highest_;++slot) {
        auto& player=host->players_[slot];
        if(player.in_use && player.peer) host->send_rpc(*player.peer,134,payload);
    }
    std::fill(draw.viewers.begin(),draw.viewers.end(),std::uint8_t{1});
}

// Official: FUN_00467130 @ 0x00467130 (samp-server.exe)
void TextDrawPool::hide(std::uint16_t player,std::uint16_t id) {
    if(id>=2048 || id>=entries.size() || !entries[id].active) return;
    auto& draw=entries[id];samp::proto::BitStream payload;payload.write(&id,2);
    if(draw.viewers[player] && player<1000 && player<host->players_.size() &&
       host->players_[player].in_use && host->players_[player].peer)
        host->send_rpc(*host->players_[player].peer,135,payload);
    draw.viewers[player]=0;
}

// Official: FUN_00467200 @ 0x00467200 (samp-server.exe)
void TextDrawPool::hide_all(std::uint16_t id) {
    if(id>=2048 || id>=entries.size() || !entries[id].active) return;
    auto& draw=entries[id];samp::proto::BitStream payload;payload.write(&id,2);
    for(std::size_t slot=0;slot<1000;++slot) if(draw.viewers[slot]) {
        if(slot<host->players_.size() && host->players_[slot].in_use && host->players_[slot].peer)
            host->send_rpc(*host->players_[slot].peer,135,payload);
        draw.viewers[slot]=0;
    }
}

// Official: FUN_004672d0 @ 0x004672d0 (samp-server.exe)
void TextDrawPool::set_string(std::uint16_t id,std::string_view text) {
    auto& draw=entries[id];text=text.substr(0,text.find('\0'));
    draw.text.assign(text.substr(0,1024));
    const auto length=static_cast<std::uint16_t>(draw.text.size());
    samp::proto::BitStream payload;payload.write(&id,2);payload.write(&length,2);
    if(length) payload.write(draw.text.data(),length);
    for(std::size_t slot=0;slot<1000;++slot)
        if(draw.viewers[slot] && slot<host->players_.size() && host->players_[slot].in_use && host->players_[slot].peer)
            host->send_rpc(*host->players_[slot].peer,105,payload);
}

// Official: FUN_00467410 @ 0x00467410 (samp-server.exe)
void TextDrawPool::destroy(std::uint16_t id) {
    hide_all(id);
    entries[id]={};
}

} // namespace samp::pawn
