#pragma once
#include "samp/client/render/font_draw.hpp"
#include <array>
#include <optional>
#include <functional>
#include <string_view>
namespace samp::client::render {
struct WorldLabelHost {
    std::function<std::optional<std::array<float,3>>(std::array<float,3>)> project;
    std::function<bool(std::array<float,3>)> line_of_sight;
    std::function<std::array<int,2>(std::string_view)> measure;
    std::function<void(std::string_view,TextRect,std::uint32_t,std::uint32_t,bool)> draw;
    std::function<std::array<int,2>()> measure_status;
    std::function<void(bool,TextRect,std::uint32_t)> status;
};
void draw_world_label(WorldLabelHost&,std::array<float,3>,std::string_view,std::uint32_t,bool,bool);
void draw_name_tag(WorldLabelHost&,std::array<float,3>,std::string_view,std::uint32_t,float,bool,int);
}
