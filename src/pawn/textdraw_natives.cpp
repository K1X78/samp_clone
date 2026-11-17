#include "pawn/natives.hpp"
#include <cstring>

namespace samp::pawn {

// Official: FUN_00475f70 @ 0x00475f70 (samp-server.exe)
int NativeHost::text_draw_create(std::int32_t x,std::int32_t y,std::string_view text) {
    if(textdraw_pool_.entries.empty()) return 0xffff;
    return textdraw_pool_.create(x,y,text);
}

// Official: FUN_00476010 @ 0x00476010 (samp-server.exe)
int NativeHost::text_draw_set_string(int id,std::string_view text) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.set_string(slot,text);return 1;
}

// Official: FUN_004760d0 @ 0x004760d0 (samp-server.exe)
int NativeHost::text_draw_letter_size(int id,std::int32_t x,std::int32_t y) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.letter_size(slot,x,y);return 1;
}

// Official: FUN_00476110 @ 0x00476110 (samp-server.exe)
int NativeHost::text_draw_text_size(int id,std::int32_t x,std::int32_t y) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.text_size(slot,x,y);return 1;
}

// Official: FUN_00476150 @ 0x00476150 (samp-server.exe)
int NativeHost::text_draw_alignment(int id,int value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.alignment(slot,static_cast<std::uint8_t>(value));return 1;
}

// Official: FUN_00476190 @ 0x00476190 (samp-server.exe)
int NativeHost::text_draw_colour(int id,std::uint32_t value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.colour(slot,value);return 1;
}

// Official: FUN_004761d0 @ 0x004761d0 (samp-server.exe)
int NativeHost::text_draw_use_box(int id,int value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    auto& flags=pool.entries[slot].data[0];
    flags=static_cast<std::uint8_t>((flags&0xfeu)|(static_cast<std::uint8_t>(value)!=0));return 1;
}

// Official: FUN_00476220 @ 0x00476220 (samp-server.exe)
int NativeHost::text_draw_box_colour(int id,std::uint32_t value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.box_colour(slot,value);return 1;
}

// Official: FUN_00476260 @ 0x00476260 (samp-server.exe)
int NativeHost::text_draw_shadow(int id,int value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.entries[slot].data[25]=static_cast<std::uint8_t>(value);return 1;
}

// Official: FUN_004762a0 @ 0x004762a0 (samp-server.exe)
int NativeHost::text_draw_outline(int id,int value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.entries[slot].data[26]=static_cast<std::uint8_t>(value);return 1;
}

// Official: FUN_004762e0 @ 0x004762e0 (samp-server.exe)
int NativeHost::text_draw_background_colour(int id,std::uint32_t value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.background_colour(slot,value);return 1;
}

// Official: FUN_00476320 @ 0x00476320 (samp-server.exe)
int NativeHost::text_draw_font(int id,int value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.entries[slot].data[31]=static_cast<std::uint8_t>(value);return 1;
}

// Official: FUN_00476360 @ 0x00476360 (samp-server.exe)
int NativeHost::text_draw_proportional(int id,int value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    auto& flags=pool.entries[slot].data[0];
    flags=static_cast<std::uint8_t>((flags&0xefu)|(static_cast<std::uint8_t>(value)!=0?0x10u:0u));return 1;
}

// Official: FUN_004763b0 @ 0x004763b0 (samp-server.exe)
int NativeHost::text_draw_selectable(int id,int value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.selectable(slot,static_cast<std::uint8_t>(value));return 1;
}

// Official: FUN_004763f0 @ 0x004763f0 (samp-server.exe)
int NativeHost::text_draw_preview_model(int id,int value) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    const auto model=static_cast<std::uint16_t>(value);
    std::memcpy(pool.entries[slot].data.data()+41,&model,2);return 1;
}

// Official: FUN_00476430 @ 0x00476430 (samp-server.exe)
int NativeHost::text_draw_preview_rotation(int id,const std::array<std::int32_t,4>& values) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    std::memcpy(pool.entries[slot].data.data()+43,values.data(),16);return 1;
}

// Official: FUN_004764b0 @ 0x004764b0 (samp-server.exe)
int NativeHost::text_draw_preview_colours(int id,int first,int second) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    const auto a=static_cast<std::uint16_t>(first),b=static_cast<std::uint16_t>(second);
    std::memcpy(pool.entries[slot].data.data()+59,&a,2);
    std::memcpy(pool.entries[slot].data.data()+61,&b,2);return 1;
}

// Official: FUN_00476500 @ 0x00476500 (samp-server.exe)
int NativeHost::text_draw_show_for_player(int player,int id) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.show(target,slot);return 1;
}

// Official: FUN_00476560 @ 0x00476560 (samp-server.exe)
int NativeHost::text_draw_hide_for_player(int player,int id) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use) return 0;
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.hide(target,slot);return 1;
}

// Official: FUN_004765c0 @ 0x004765c0 (samp-server.exe)
int NativeHost::text_draw_show_for_all(int id) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.show_all(slot);return 1;
}

// Official: FUN_00476600 @ 0x00476600 (samp-server.exe)
int NativeHost::text_draw_hide_for_all(int id) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.hide_all(slot);return 1;
}

// Official: FUN_00476640 @ 0x00476640 (samp-server.exe)
int NativeHost::text_draw_destroy(int id) {
    const auto slot=static_cast<std::uint16_t>(id);auto& pool=textdraw_pool_;
    if(slot>=2048 || slot>=pool.entries.size() || !pool.entries[slot].active) return 0;
    pool.destroy(slot);return 1;
}

} // namespace samp::pawn
