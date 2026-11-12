#pragma once
#include <windows.h>
#include <d3d9.h>
#include <functional>
#include "samp/client/selection_ui.hpp"
#include "samp/client/hooks.hpp"

HRESULT WINAPI samp_d3d_reset(IDirect3DDevice9* device, D3DPRESENT_PARAMETERS* parameters);
BOOL WINAPI DllMain(HINSTANCE module, DWORD reason, LPVOID reserved);
HRESULT WINAPI samp_d3d_present(IDirect3DDevice9* device, const RECT* source,
                                const RECT* destination, HWND window, const RGNDATA* dirty);

namespace samp::client {
class SelectionDialog final {
public:
    friend struct SelectionDialogTestAccess;
    friend class ChatHook;
    friend HRESULT WINAPI ::samp_d3d_reset(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
    friend BOOL WINAPI ::DllMain(HINSTANCE, DWORD, LPVOID);
    friend HRESULT WINAPI ::samp_d3d_present(IDirect3DDevice9*, const RECT*, const RECT*,
                                              HWND, const RGNDATA*);
    ~SelectionDialog() = default;
    std::function<void(SelectionAction)> action_;
private:
    bool mouse_mode(bool enabled,bool immediate_restore=false,bool scoreboard=false);
    void restore_mouse();
    std::array<SelectionButton,3> buttons_{
        SelectionButton{6,"<<",{10,5,100,35},true,true,false,false,false,kDefaultButtonElements},
        SelectionButton{5,">>",{110,5,200,35},true,true,false,false,false,kDefaultButtonElements},
        SelectionButton{4,"Spawn",{210,5,300,35},true,true,false,false,false,kDefaultButtonElements}};
    UiRect rectangle_{};
    HMODULE library_=nullptr;
    HWND window_=nullptr;
    IDirect3DDevice9* device_=nullptr;
    IDirect3DTexture9* texture_=nullptr;
    IDirect3DTexture9* cursor_=nullptr;
    POINT cursor_position_{};
    bool cursor_inside_=false;
    void* font_=nullptr;
    void* sprite_=nullptr;
    bool visible_=false,mouse_enabled_=false,text_input_=false;
    int restore_frames_=-1;
    std::vector<std::uint8_t> original_541df5_,original_53f417_;
};
}
