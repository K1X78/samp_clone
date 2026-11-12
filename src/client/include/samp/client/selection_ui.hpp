#pragma once
#include <array>
#include <cstdint>
#include <functional>
#include <string>

namespace samp::client {
struct UiRect {std::int32_t left,top,right,bottom;};
struct UiBlendColour {
    std::array<std::uint32_t,6> states{};
    std::array<float,4> current{};
};
static_assert(sizeof(UiBlendColour)==40);
struct UiElement {
    std::uint32_t texture=0,font=0,format=5;
    UiRect source{0,0,136,54};
    UiBlendColour texture_colour,font_colour;
};
static_assert(sizeof(UiElement)==108);
struct SelectionButton {
    std::int32_t id=0;
    std::string text;
    UiRect bounds{};
    bool visible=true,enabled=true,hovered=false,focused=false,pressed=false;
    std::array<UiElement,2> elements;
};
enum class SelectionAction {None,Spawn,Next,Previous};
inline const std::array<UiElement,2> kDefaultButtonElements = [] {
    std::array<UiElement,2> elements;
    for(auto& element:elements) {
        element.font_colour.states.fill(0xffffffff);
        element.font_colour.states[1]=0xc8808080;
        element.font_colour.states[2]=0;
        element.font_colour.states[0]=0xffc8c8c8;
    }
    elements[0].texture_colour.states.fill(0xffffffff);
    elements[0].texture_colour.states[1]=0xc8808080;
    elements[0].texture_colour.states[2]=0;
    elements[0].texture_colour.states[0]=0xc8ffffff;
    elements[0].texture_colour.states[4]=0xffb92228;
    elements[0].texture_colour.states[5]=0xff95b0d0;
    elements[1].texture_colour.states.fill(0x00ffffff);
    elements[1].texture_colour.states[1]=0xc8808080;
    elements[1].texture_colour.states[2]=0;
    elements[1].texture_colour.states[3]=0xc8ffffff;
    elements[1].texture_colour.states[4]=0xffb92228;
    elements[1].texture_colour.states[5]=0x3c505050;
    return elements;
}();
void blend_ui_colour(UiBlendColour& colour,unsigned state,float elapsed,float rate);
struct SelectionDrawHost {
    std::function<void(const UiElement&,UiRect&)> sprite;
    std::function<void(const char*,const UiElement&,UiRect&)> text;
};
void draw_selection_button(SelectionButton& button,float elapsed,SelectionDrawHost& host);
struct SelectionMouseHost {
    std::function<void()> capture;
    std::function<void()> release_capture;
    std::function<void()> clear_focus;
    std::function<void(SelectionButton&)> request_focus;
    std::function<void(std::uint32_t,SelectionButton&)> event;
};
bool selection_button_mouse(SelectionButton& button,std::uint32_t message,
                            std::int32_t x,std::int32_t y,bool keyboard_input,
                            SelectionMouseHost& host);
}
