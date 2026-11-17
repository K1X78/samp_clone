#include "pawn/natives.hpp"
#include <cstring>

namespace samp::pawn {

// Official: FUN_00476680 @ 0x00476680 (samp-server.exe)
int NativeHost::player_text_draw_create(int player,std::int32_t x,std::int32_t y,std::string_view text) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    auto& pool=players_[target].textdraw_pool;
    if(pool.entries.empty()) return 0xffff;
    pool.owner=target;
    return pool.create(x,y,text);
}

// Official: FUN_00476770 @ 0x00476770 (samp-server.exe)
int NativeHost::player_text_draw_set_string(int player,int id,std::string_view text) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.set_string(*this,slot,text);return 1;
}

// Official: FUN_00476870 @ 0x00476870 (samp-server.exe)
int NativeHost::player_text_draw_letter_size(int player,int id,std::int32_t x,std::int32_t y) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.letter_size(slot,x,y);return 1;
}

// Official: FUN_004768f0 @ 0x004768f0 (samp-server.exe)
int NativeHost::player_text_draw_text_size(int player,int id,std::int32_t x,std::int32_t y) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.text_size(slot,x,y);return 1;
}

// Official: FUN_00476970 @ 0x00476970 (samp-server.exe)
int NativeHost::player_text_draw_alignment(int player,int id,int value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.alignment(slot,static_cast<std::uint8_t>(value));return 1;
}

// Official: FUN_004769f0 @ 0x004769f0 (samp-server.exe)
int NativeHost::player_text_draw_colour(int player,int id,std::uint32_t value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.colour(slot,value);return 1;
}

// Official: FUN_00476a70 @ 0x00476a70 (samp-server.exe)
int NativeHost::player_text_draw_use_box(int player,int id,int value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    auto& flags=pool.entries[slot].data[0];
    flags=static_cast<std::uint8_t>((flags&0xfeu)|(static_cast<std::uint8_t>(value)!=0));return 1;
}

// Official: FUN_00476b00 @ 0x00476b00 (samp-server.exe)
int NativeHost::player_text_draw_box_colour(int player,int id,std::uint32_t value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.box_colour(slot,value);return 1;
}

// Official: FUN_00476b80 @ 0x00476b80 (samp-server.exe)
int NativeHost::player_text_draw_shadow(int player,int id,int value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.entries[slot].data[25]=static_cast<std::uint8_t>(value);return 1;
}

// Official: FUN_00476c00 @ 0x00476c00 (samp-server.exe)
int NativeHost::player_text_draw_outline(int player,int id,int value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.entries[slot].data[26]=static_cast<std::uint8_t>(value);return 1;
}

// Official: FUN_00476c80 @ 0x00476c80 (samp-server.exe)
int NativeHost::player_text_draw_background_colour(int player,int id,std::uint32_t value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.background_colour(slot,value);return 1;
}

// Official: FUN_00476d00 @ 0x00476d00 (samp-server.exe)
int NativeHost::player_text_draw_font(int player,int id,int value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.entries[slot].data[31]=static_cast<std::uint8_t>(value);return 1;
}

// Official: FUN_00476d80 @ 0x00476d80 (samp-server.exe)
int NativeHost::player_text_draw_proportional(int player,int id,int value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    auto& flags=pool.entries[slot].data[0];
    flags=static_cast<std::uint8_t>((flags&0xefu)|(static_cast<std::uint8_t>(value)!=0?0x10u:0u));return 1;
}

// Official: FUN_00476e10 @ 0x00476e10 (samp-server.exe)
int NativeHost::player_text_draw_selectable(int player,int id,int value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.selectable(slot,static_cast<std::uint8_t>(value));return 1;
}

// Official: FUN_00476e90 @ 0x00476e90 (samp-server.exe)
int NativeHost::player_text_draw_preview_model(int player,int id,int value) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    const auto model=static_cast<std::uint16_t>(value);
    std::memcpy(pool.entries[slot].data.data()+41,&model,2);return 1;
}

// Official: FUN_00476f10 @ 0x00476f10 (samp-server.exe)
int NativeHost::player_text_draw_preview_rotation(int player,int id,const std::array<std::int32_t,4>& values) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.preview_rotation(slot,values);return 1;
}

// Official: FUN_00476fc0 @ 0x00476fc0 (samp-server.exe)
int NativeHost::player_text_draw_preview_colours(int player,int id,int first,int second) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    const auto a=static_cast<std::uint16_t>(first),b=static_cast<std::uint16_t>(second);
    std::memcpy(pool.entries[slot].data.data()+59,&a,2);std::memcpy(pool.entries[slot].data.data()+61,&b,2);return 1;
}

// Official: FUN_00477050 @ 0x00477050 (samp-server.exe)
int NativeHost::player_text_draw_show(int player,int id) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.show(*this,slot);return 1;
}

// Official: FUN_004770c0 @ 0x004770c0 (samp-server.exe)
int NativeHost::player_text_draw_hide(int player,int id) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.hide(*this,slot);return 1;
}

// Official: FUN_00477130 @ 0x00477130 (samp-server.exe)
int NativeHost::player_text_draw_destroy(int player,int id) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=players_[target].textdraw_pool;
    if(slot>=256 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.destroy(*this,slot);return 1;
}

} // namespace samp::pawn
