#pragma once

#include <array>
#include <cstdint>

namespace samp::pawn {
class NativeHost;

struct MenuNativeState {
    std::array<std::uint8_t,0x1354> data;

    MenuNativeState(char* title,std::int32_t x,std::int32_t y,std::uint8_t columns,std::int32_t width1,std::int32_t width2);
    static void invalidate(MenuNativeState* menu);
    static std::uint8_t add_item(MenuNativeState* menu,std::uint8_t column,char* text);
    static void set_header(MenuNativeState* menu,std::uint8_t column,char* text);
    static void initialize(NativeHost& host,MenuNativeState* menu,std::uint16_t player);
    static void show(NativeHost& host,MenuNativeState* menu,std::uint16_t player);
    static void hide(NativeHost& host,MenuNativeState* menu,std::uint16_t player);
};

struct MenuPool {
    // Native pointer/occupancy/current-menu layout retains BYTE-index aliases.
    std::array<std::uint8_t,0x7e8> data;
    std::array<MenuNativeState*,128> objects{};

    MenuPool();
    ~MenuPool();
    MenuPool(const MenuPool&)=delete;
    MenuPool& operator=(const MenuPool&)=delete;
    std::uint8_t create(char* title,const std::array<std::int32_t,4>& position,std::uint8_t columns);
    bool destroy(std::uint8_t id);
    void reset_player(std::uint16_t player);
};
}
