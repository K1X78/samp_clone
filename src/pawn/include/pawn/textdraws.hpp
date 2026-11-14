#pragma once

#include <array>
#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

namespace samp::pawn {
class NativeHost;

struct TextDrawNativeState {
    bool active=false;
    std::array<std::uint8_t,63> data{};
    std::string text;
    std::vector<std::uint8_t> viewers;
};

struct TextDrawPool {
    NativeHost* host=nullptr;
    std::vector<TextDrawNativeState> entries=std::vector<TextDrawNativeState>(2048);

    void reset();
    void release();
    std::uint16_t create(std::int32_t x,std::int32_t y,std::string_view text);
    void letter_size(std::uint16_t id,std::int32_t x,std::int32_t y);
    void text_size(std::uint16_t id,std::int32_t x,std::int32_t y);
    void alignment(std::uint16_t id,std::uint8_t alignment);
    void colour(std::uint16_t id,std::uint32_t colour);
    void box_colour(std::uint16_t id,std::uint32_t colour);
    void background_colour(std::uint16_t id,std::uint32_t colour);
    void selectable(std::uint16_t id,std::uint8_t value);
    void show(std::uint16_t player,std::uint16_t id);
    void show_all(std::uint16_t id);
    void hide(std::uint16_t player,std::uint16_t id);
    void hide_all(std::uint16_t id);
    void set_string(std::uint16_t id,std::string_view text);
    void destroy(std::uint16_t id);
};
}
