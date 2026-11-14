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

struct PlayerTextDrawPool {
    std::uint16_t owner=0xffff;
    std::vector<TextDrawNativeState> entries;
    std::array<std::uint8_t,256> shown{};

    PlayerTextDrawPool();
    ~PlayerTextDrawPool();
    PlayerTextDrawPool(const PlayerTextDrawPool&)=default;
    PlayerTextDrawPool& operator=(const PlayerTextDrawPool&)=default;
    PlayerTextDrawPool(PlayerTextDrawPool&&) noexcept=default;
    PlayerTextDrawPool& operator=(PlayerTextDrawPool&&) noexcept=default;
    std::uint16_t create(std::int32_t x,std::int32_t y,std::string_view text);
    void letter_size(std::uint16_t id,std::int32_t x,std::int32_t y);
    void text_size(std::uint16_t id,std::int32_t x,std::int32_t y);
    void alignment(std::uint16_t id,std::uint8_t value);
    void colour(std::uint16_t id,std::uint32_t value);
    void box_colour(std::uint16_t id,std::uint32_t value);
    void background_colour(std::uint16_t id,std::uint32_t value);
    void selectable(std::uint16_t id,std::uint8_t value);
    void preview_rotation(std::uint16_t id,const std::array<std::int32_t,4>& values);
    void show(NativeHost& host,std::uint16_t id);
    void hide(NativeHost& host,std::uint16_t id);
    void set_string(NativeHost& host,std::uint16_t id,std::string_view text);
    void destroy(NativeHost& host,std::uint16_t id);
};
}
