#include "pawn/natives.hpp"
#include "samp/proto/bitstream.hpp"
#include <cstring>

namespace samp::pawn {

// Official: FUN_00492da0 @ 0x00492da0 (samp-server.exe)
void MenuNativeState::invalidate(MenuNativeState* menu) {
    std::memset(menu->data.data()+0x361,0,4000);
}

// Official: FUN_00492e90 @ 0x00492e90 (samp-server.exe)
MenuNativeState::MenuNativeState(char* title,std::int32_t x,std::int32_t y,std::uint8_t columns,std::int32_t width1,std::int32_t width2) {
    invalidate(this);
    const std::uint32_t enabled=1;
    for(std::size_t row=0;row<12;++row) {
        data[0x21+row*64]=0;data[0x41+row*64]=0;
        std::memcpy(data.data()+0x1305+row*4,&enabled,4);
    }
    std::memcpy(data.data()+0x1301,&enabled,4);data[0x321]=data[0x341]=0;
    std::size_t length=0;const volatile char* scan=title;
    while(scan[length]!=0) ++length;
    if(length>=32) title[31]=0;
    for(std::size_t i=0;;++i) {data[1+i]=static_cast<std::uint8_t>(title[i]);if(title[i]==0) break;}
    std::memcpy(data.data()+0x1341,&x,4);std::memcpy(data.data()+0x1345,&y,4);
    std::memcpy(data.data()+0x1349,&width1,4);std::memcpy(data.data()+0x134d,&width2,4);
    data[0x1351]=columns==2?2:1;data[0x1352]=data[0x1353]=0;
}

// Official: FUN_00492dc0 @ 0x00492dc0 (samp-server.exe)
std::uint8_t MenuNativeState::add_item(MenuNativeState* menu,std::uint8_t column,char* text) {
    if(column>=2) return 0xff;
    const auto row=menu->data[0x1352+column];if(row>=32) return 0xff;
    std::size_t length=0;const volatile char* scan=text;
    while(scan[length]!=0) ++length;
    if(length>=32) text[31]=0;
    invalidate(menu);
    // The shipped 32-row check exceeds the 12-row layout; retain its overlaps.
    const auto offset=0x21+(std::size_t(row)*2+column)*32;
    for(std::size_t i=0;;++i) {menu->data[offset+i]=static_cast<std::uint8_t>(text[i]);if(text[i]==0) break;}
    ++menu->data[0x1352+column];return row;
}

// Official: FUN_00492e40 @ 0x00492e40 (samp-server.exe)
void MenuNativeState::set_header(MenuNativeState* menu,std::uint8_t column,char* text) {
    if(column>=2) return;
    std::size_t length=0;const volatile char* scan=text;
    while(scan[length]!=0) ++length;
    if(length>=32) text[31]=0;
    invalidate(menu);const auto offset=0x321+std::size_t(column)*32;
    for(std::size_t i=0;;++i) {menu->data[offset+i]=static_cast<std::uint8_t>(text[i]);if(text[i]==0) break;}
}

// Official: FUN_00492f60 @ 0x00492f60 (samp-server.exe)
void MenuNativeState::initialize(NativeHost& host,MenuNativeState* menu,std::uint16_t player) {
    if(player>=1000) return;
    const std::uint32_t initialized=1;std::memcpy(menu->data.data()+0x361+std::size_t(player)*4,&initialized,4);
    const std::uint32_t two_columns=menu->data[0x1351]==2?1u:0u;
    samp::proto::BitStream payload;payload.write(menu->data.data(),1);payload.write(&two_columns,4);
    payload.write(menu->data.data()+1,32);payload.write(menu->data.data()+0x1341,12);
    if(two_columns) payload.write(menu->data.data()+0x134d,4);
    payload.write(menu->data.data()+0x1301,4);payload.write(menu->data.data()+0x1305,48);
    payload.write(menu->data.data()+0x321,32);
    const auto first=menu->data[0x1352];payload.write(&first,1);
    for(unsigned row=0;row<first;++row) payload.write(menu->data.data()+0x21+row*64,32);
    if(two_columns) {
        payload.write(menu->data.data()+0x341,32);
        const auto second=menu->data[0x1353];payload.write(&second,1);
        for(unsigned row=0;row<second;++row) payload.write(menu->data.data()+0x41+row*64,32);
    }
    if(player<host.players_.size() && host.players_[player].in_use && host.players_[player].peer)
        host.send_rpc(*host.players_[player].peer,76,payload);
}

// Official: FUN_004931b0 @ 0x004931b0 (samp-server.exe)
void MenuNativeState::show(NativeHost& host,MenuNativeState* menu,std::uint16_t player) {
    if(player>=1000) return;
    std::uint32_t initialized=0;std::memcpy(&initialized,menu->data.data()+0x361+std::size_t(player)*4,4);
    if(initialized==0) initialize(host,menu,player);
    samp::proto::BitStream payload;payload.write(menu->data.data(),1);
    if(player<host.players_.size() && host.players_[player].in_use && host.players_[player].peer)
        host.send_rpc(*host.players_[player].peer,77,payload);
}

// Official: FUN_00493270 @ 0x00493270 (samp-server.exe)
void MenuNativeState::hide(NativeHost& host,MenuNativeState* menu,std::uint16_t player) {
    if(player>=1000) return;
    samp::proto::BitStream payload;payload.write(menu->data.data(),1);
    if(player<host.players_.size() && host.players_[player].in_use && host.players_[player].peer)
        host.send_rpc(*host.players_[player].peer,78,payload);
}

} // namespace samp::pawn
