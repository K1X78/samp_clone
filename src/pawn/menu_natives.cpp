#include "pawn/natives.hpp"
#include <cstring>

namespace samp::pawn {

// Official: FUN_00475a70 @ 0x00475a70 (samp-server.exe)
int NativeHost::create_menu(std::string title,int columns,const std::array<std::int32_t,4>& position) {
    if(!menu_pool_) return -1;
    const auto id=menu_pool_->create(title.empty()?nullptr:title.data(),position,static_cast<std::uint8_t>(columns));
    return id==0xff?-1:id;
}

// Official: FUN_00475b20 @ 0x00475b20 (samp-server.exe)
int NativeHost::destroy_menu(int id) {
    return menu_pool_ && menu_pool_->destroy(static_cast<std::uint8_t>(id))?1:0;
}

// Official: FUN_00475b50 @ 0x00475b50 (samp-server.exe)
int NativeHost::add_menu_item(int id,int column,std::string text) {
    if(!menu_pool_) return 0;
    const auto slot=static_cast<std::uint8_t>(id);
    auto* menu=slot<128?menu_pool_->objects[slot]:nullptr;
    const auto row=MenuNativeState::add_item(menu,static_cast<std::uint8_t>(column),text.empty()?nullptr:text.data());
    return row==0xff?-1:row;
}

// Official: FUN_00475c10 @ 0x00475c10 (samp-server.exe)
int NativeHost::set_menu_header(int id,int column,std::string text) {
    if(!menu_pool_) return 0;
    const auto slot=static_cast<std::uint8_t>(id);
    auto* menu=slot<128?menu_pool_->objects[slot]:nullptr;
    MenuNativeState::set_header(menu,static_cast<std::uint8_t>(column),text.empty()?nullptr:text.data());return 1;
}

// Official: FUN_00475cc0 @ 0x00475cc0 (samp-server.exe)
int NativeHost::show_menu_for_player(int id,int player) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use || !menu_pool_) return 0;
    const auto slot=static_cast<std::uint8_t>(id);
    auto* menu=slot<128?menu_pool_->objects[slot]:nullptr;
    MenuNativeState::show(*this,menu,target);
    if(slot<128) menu_pool_->data[0x400+target]=slot;
    return 1;
}

// Official: FUN_00475d30 @ 0x00475d30 (samp-server.exe)
int NativeHost::hide_menu_for_player(int id,int player) {
    const auto target=static_cast<std::uint16_t>(player);
    if(target>=1000 || target>=players_.size() || !players_[target].in_use || !menu_pool_) return 0;
    const auto slot=static_cast<std::uint8_t>(id);
    auto* menu=slot<128?menu_pool_->objects[slot]:nullptr;
    MenuNativeState::hide(*this,menu,target);return 1;
}

// Official: FUN_00475da0 @ 0x00475da0 (samp-server.exe)
int NativeHost::is_valid_menu(int id) {
    if(!menu_pool_) return 0;const auto slot=static_cast<std::uint8_t>(id);
    if(slot>=128) return 0;
    std::uint32_t active=0;std::memcpy(&active,menu_pool_->data.data()+0x200+std::size_t(slot)*4,4);
    return active!=0?1:0;
}

// Official: FUN_00475dd0 @ 0x00475dd0 (samp-server.exe)
int NativeHost::disable_menu(int id) {
    if(!menu_pool_) return 0;
    const auto slot=static_cast<std::uint8_t>(id);
    auto* menu=slot<128?menu_pool_->objects[slot]:nullptr;
    // The official write is unchecked, including the null-menu fault path.
    const std::uint32_t disabled=0;
    std::memcpy(reinterpret_cast<void*>(reinterpret_cast<std::uintptr_t>(menu)+0x1301),&disabled,4);
    return 1;
}

// Official: FUN_00475e10 @ 0x00475e10 (samp-server.exe)
int NativeHost::disable_menu_row(int id,int row) {
    if(!menu_pool_) return 0;
    const auto slot=static_cast<std::uint8_t>(id);
    auto* menu=slot<128?menu_pool_->objects[slot]:nullptr;
    const std::uint32_t disabled=0;
    const auto offset=0x1305u+static_cast<std::uint8_t>(row)*4u;
    std::memcpy(reinterpret_cast<void*>(reinterpret_cast<std::uintptr_t>(menu)+offset),&disabled,4);
    return 1;
}

// Official: FUN_00475e50 @ 0x00475e50 (samp-server.exe)
int NativeHost::get_player_menu(int player) {
    if(!menu_pool_) return 255;
    const auto target=static_cast<std::uint16_t>(player);
    return target<1000?menu_pool_->data[0x400+target]:255;
}

} // namespace samp::pawn
