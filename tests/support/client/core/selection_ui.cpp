#include "samp/client/selection_ui.hpp"
#include <cmath>

namespace samp::client {
// 0x10085f40; byte channels are rounded to float before interpolation.
// Official: FUN_10085f40 @ 0x10085f40 (samp.dll)
void blend_ui_colour(UiBlendColour& colour,unsigned state,float elapsed,float rate) {
    const auto argb=colour.states[state];
    const std::array<unsigned,4> shifts{16,8,0,24};
    const double amount=1.0-std::pow(static_cast<double>(rate),static_cast<double>(elapsed)*30.0);
    for(unsigned i=0;i<4;++i) {
        const float target=static_cast<float>((argb>>shifts[i])&255)*0.003921568859368563f;
        colour.current[i]=static_cast<float>((static_cast<double>(target)-colour.current[i])*amount+colour.current[i]);
    }
}

// 0x1008dfd0: two layered elements, each with independent texture/font blend.
// Official: FUN_1008dfd0 @ 0x1008dfd0 (samp.dll)
void draw_selection_button(SelectionButton& button,float elapsed,SelectionDrawHost& host) {
    unsigned state=0;
    int dx=0,dy=0;
    if(!button.visible) state=2;
    else if(!button.enabled) state=1;
    else if(button.pressed) {state=5;dx=1;dy=2;}
    else if(button.hovered) {state=4;dx=-1;dy=-2;}
    else if(button.focused) state=3;
    UiRect rectangle=button.bounds;
    rectangle.left+=dx;rectangle.right+=dx;rectangle.top+=dy;rectangle.bottom+=dy;
    for(auto& element:button.elements) {
        blend_ui_colour(element.texture_colour,state,elapsed,state==5?0.0f:0.8f);
        blend_ui_colour(element.font_colour,state,elapsed,state==5?0.0f:0.8f);
        host.sprite(element,rectangle);
        host.text(button.text.c_str(),element,rectangle);
    }
}

// 0x10084930: button down/double-click capture; release-inside clicks.
// Official: FUN_10084930 @ 0x10084930 (samp.dll)
bool selection_button_mouse(SelectionButton& button,std::uint32_t message,
                            std::int32_t x,std::int32_t y,bool keyboard_input,
                            SelectionMouseHost& host) {
    if(!button.enabled || !button.visible) return false;
    if(message==0x202) {
        if(!button.pressed) return false;
        button.pressed=false;
        host.release_capture();
        if(!keyboard_input) host.clear_focus();
        if(x>=button.bounds.left && x<button.bounds.right &&
           y>=button.bounds.top && y<button.bounds.bottom) host.event(0x101,button);
        return true;
    }
    if(message!=0x201 && message!=0x203) return false;
    if(x<button.bounds.left || x>=button.bounds.right ||
       y<button.bounds.top || y>=button.bounds.bottom) return false;
    button.pressed=true;
    host.capture();
    host.event(0x102,button);
    if(!button.focused) host.request_focus(button);
    return true;
}
}
