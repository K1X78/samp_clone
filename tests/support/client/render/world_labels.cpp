#include "samp/client/render/world_labels.hpp"
namespace samp::client::render {
// source adapter only; no established separate native entry
// Original projection, strict depth gate and1-pixel rectangle. Both diagnostic
// commands call with LOS disabled, preserving the exact shipped label text.
void draw_world_label(WorldLabelHost& host,std::array<float,3> position,std::string_view text,
                      std::uint32_t colour,bool shadow,bool check_los) {
    if(check_los && !host.line_of_sight(position)) return;
    const auto screen=host.project(position);if(!screen || (*screen)[2]>1.f) return;
    const auto x=static_cast<int>((*screen)[0]),y=static_cast<int>((*screen)[1]);
    host.draw(text,{x,y,x+1,y+1},colour,0x101,shadow);
}
// Original6c7e0: distance offset, centered name and optional SAMPAUX3 status2.
// source adapter only; no established separate native entry
void draw_name_tag(WorldLabelHost& host,std::array<float,3> position,std::string_view text,
                   std::uint32_t colour,float distance,bool show_status,int status) {
    position[2]+=distance*0.0475f+0.2f;
    const auto screen=host.project(position);if(!screen || (*screen)[2]>1.f) return;
    const auto size=host.measure(text);
    const int x=static_cast<int>((*screen)[0]),y=static_cast<int>((*screen)[1]);
    host.draw(text,{x-size[0]/2,y+17-size[1],x+size[0]/2,y},colour,0x100,true);
    if(!show_status || status!=2) return;
    const auto glyph=host.measure_status();const int left=x-22-glyph[0]/2,top=y+glyph[1]/2+17;
    host.status(false,{left,top,left+1,top+2},0xff000000);
    host.status(true,{left-1,top-2,left+1,top+2},0xffe3e1e3);
}
}
