#include "pawn/natives.hpp"
#include "samp/proto/bitstream.hpp"
#include <cstring>
#include <new>

namespace samp::pawn {

// Official: FUN_004886d0 @ 0x004886d0 (samp-server.exe)
PlayerTextDrawPool::PlayerTextDrawPool() {
    owner=0xffff;
    try {entries.resize(256);} catch(const std::bad_alloc&) {}
}

// Official: FUN_00488710 @ 0x00488710 (samp-server.exe)
PlayerTextDrawPool::~PlayerTextDrawPool() {
    entries.clear();
}

// Official: FUN_00488760 @ 0x00488760 (samp-server.exe)
std::uint16_t PlayerTextDrawPool::create(std::int32_t x,std::int32_t y,std::string_view text) {
    for(std::size_t id=0;id<256 && id<entries.size();++id) {
        auto& draw=entries[id];if(draw.active) continue;
        shown[id]=0;
        try {
            draw={};text=text.substr(0,text.find('\0'));draw.text.assign(text.substr(0,1024));
            const auto put=[&](std::size_t offset,std::uint32_t value) {std::memcpy(draw.data.data()+offset,&value,4);};
            draw.data[0]=0x10;put(1,0x3ef5c28f);put(5,0x3f8f5c29);put(9,0xffe1e1e1);
            put(13,0x44a00000);put(17,0x44a00000);put(21,0x80808080);
            draw.data[25]=2;put(27,0xff000000);draw.data[31]=1;
            put(33,static_cast<std::uint32_t>(x));put(37,static_cast<std::uint32_t>(y));
            put(55,0x3f800000);put(59,0xffffffff);draw.active=true;
            return static_cast<std::uint16_t>(id);
        } catch(const std::bad_alloc&) {return 0xffff;}
    }
    return 0xffff;
}

// Official: FUN_00488890 @ 0x00488890 (samp-server.exe)
void PlayerTextDrawPool::letter_size(std::uint16_t id,std::int32_t x,std::int32_t y) {
    std::memcpy(entries[id].data.data()+1,&x,4);std::memcpy(entries[id].data.data()+5,&y,4);
}

// Official: FUN_004888c0 @ 0x004888c0 (samp-server.exe)
void PlayerTextDrawPool::text_size(std::uint16_t id,std::int32_t x,std::int32_t y) {
    std::memcpy(entries[id].data.data()+13,&x,4);std::memcpy(entries[id].data.data()+17,&y,4);
}

// Official: FUN_004888f0 @ 0x004888f0 (samp-server.exe)
void PlayerTextDrawPool::alignment(std::uint16_t id,std::uint8_t value) {
    auto& flags=entries[id].data[0];flags&=0xf1;
    if(value==1) flags|=2;else if(value==2) flags|=8;else if(value==3) flags|=4;
}

// Official: FUN_00488940 @ 0x00488940 (samp-server.exe)
void PlayerTextDrawPool::colour(std::uint16_t id,std::uint32_t value) {
    value=(value>>24)|((value>>8)&0xff00u)|((value<<8)&0xff0000u)|(value<<24);
    std::memcpy(entries[id].data.data()+9,&value,4);
}

// Official: FUN_00488980 @ 0x00488980 (samp-server.exe)
void PlayerTextDrawPool::box_colour(std::uint16_t id,std::uint32_t value) {
    value=(value>>24)|((value>>8)&0xff00u)|((value<<8)&0xff0000u)|(value<<24);
    std::memcpy(entries[id].data.data()+21,&value,4);
}

// Official: FUN_004889c0 @ 0x004889c0 (samp-server.exe)
void PlayerTextDrawPool::background_colour(std::uint16_t id,std::uint32_t value) {
    value=(value>>24)|((value>>8)&0xff00u)|((value<<8)&0xff0000u)|(value<<24);
    std::memcpy(entries[id].data.data()+27,&value,4);
}

// Official: FUN_00488a00 @ 0x00488a00 (samp-server.exe)
void PlayerTextDrawPool::selectable(std::uint16_t id,std::uint8_t value) {
    entries[id].data[32]=value;
}

// Official: FUN_0046fd60 @ 0x0046fd60 (samp-server.exe)
void PlayerTextDrawPool::preview_rotation(std::uint16_t id,const std::array<std::int32_t,4>& values) {
    std::memcpy(entries[id].data.data()+43,values.data(),16);
}

// Official: FUN_00488a20 @ 0x00488a20 (samp-server.exe)
void PlayerTextDrawPool::show(NativeHost& host,std::uint16_t id) {
    if(id>=256 || id>=entries.size() || !entries[id].active) return;
    auto& draw=entries[id];const auto wire=static_cast<std::uint16_t>(2048+id);
    const auto length=static_cast<std::uint16_t>(draw.text.size());
    samp::proto::BitStream payload;payload.write(&wire,2);payload.write(draw.data.data(),63);
    payload.write(&length,2);if(length) payload.write(draw.text.data(),length);
    if(owner<1000 && owner<host.players_.size() && host.players_[owner].in_use && host.players_[owner].peer)
        host.send_rpc(*host.players_[owner].peer,134,payload);
    shown[id]=1;
}

// Official: FUN_00488b40 @ 0x00488b40 (samp-server.exe)
void PlayerTextDrawPool::hide(NativeHost& host,std::uint16_t id) {
    if(id>=256 || id>=entries.size() || !entries[id].active) return;
    const auto wire=static_cast<std::uint16_t>(2048+id);
    samp::proto::BitStream payload;payload.write(&wire,2);
    if(shown[id] && owner<1000 && owner<host.players_.size() && host.players_[owner].in_use && host.players_[owner].peer)
        host.send_rpc(*host.players_[owner].peer,135,payload);
    shown[id]=0;
}

// Official: FUN_00488c10 @ 0x00488c10 (samp-server.exe)
void PlayerTextDrawPool::set_string(NativeHost& host,std::uint16_t id,std::string_view text) {
    auto& draw=entries[id];text=text.substr(0,text.find('\0'));draw.text.assign(text.substr(0,1024));
    const auto wire=static_cast<std::uint16_t>(2048+id),length=static_cast<std::uint16_t>(draw.text.size());
    samp::proto::BitStream payload;payload.write(&wire,2);payload.write(&length,2);
    if(length) payload.write(draw.text.data(),length);
    if(shown[id] && owner<1000 && owner<host.players_.size() && host.players_[owner].in_use && host.players_[owner].peer)
        host.send_rpc(*host.players_[owner].peer,105,payload);
}

// Official: FUN_00488d40 @ 0x00488d40 (samp-server.exe)
void PlayerTextDrawPool::destroy(NativeHost& host,std::uint16_t id) {
    hide(host,id);entries[id]={};
}

} // namespace samp::pawn
