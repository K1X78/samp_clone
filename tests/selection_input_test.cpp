#include "chat_hook.hpp"
#include "selection_dialog.hpp"
#include <cstdio>

namespace samp::client {
struct SelectionDialogTestAccess {
    static void prepare(SelectionDialog& dialog,HWND window) {
        dialog.window_=window;dialog.visible_=dialog.mouse_enabled_=true;
        dialog.rectangle_={500,900,810,940};
    }
    static const SelectionButton& spawn(const SelectionDialog& dialog) {return dialog.buttons_[2];}
};
}
namespace {
int failures=0;
#define CHECK(x) do {if(!(x)){std::printf("FAIL %d: %s\n",__LINE__,#x);++failures;}} while(false)
}
int main() {
    using namespace samp::client;
    volatile unsigned char controls_disabled=0;
    HWND window=CreateWindowExW(0,L"STATIC",L"selection unit fixture",WS_POPUP,0,0,100,100,nullptr,nullptr,GetModuleHandleW(nullptr),nullptr);
    if(!window) return 2;
    ChatHook hook;SelectionDialog dialog;SelectionDialogTestAccess::prepare(dialog,window);
    hook.window_=window;hook.previous_=DefWindowProcW;hook.selection_=&dialog;hook.enabled_=true;
    hook.controls_disabled_=&controls_disabled;ChatHook::current_=&hook;
    unsigned spawns=0;dialog.action_=[&](SelectionAction action) {CHECK(action==SelectionAction::Spawn);++spawns;};
    const auto send=[&](UINT message,int x=750,int y=920) {return ChatHook::window_proc(window,message,0,MAKELPARAM(x,y));};
    send(WM_MOUSEMOVE);CHECK(SelectionDialogTestAccess::spawn(dialog).hovered);
    send(WM_LBUTTONDOWN);CHECK(SelectionDialogTestAccess::spawn(dialog).pressed);
    // Native89900 ignores215; native84930 retains the press until button-up.
    // The Win32 adapter must not discard an otherwise valid release-inside.
    send(WM_CAPTURECHANGED);send(WM_LBUTTONUP);CHECK(spawns==1);
    send(WM_LBUTTONDOWN);send(WM_LBUTTONUP,900,920);CHECK(spawns==1);
    send(WM_LBUTTONUP);CHECK(spawns==1); // no duplicate activation
    send(WM_MOUSEMOVE,900,920);CHECK(!SelectionDialogTestAccess::spawn(dialog).hovered);
    controls_disabled=1;
    send(WM_LBUTTONDOWN);send(WM_LBUTTONUP);CHECK(spawns==1);
    ChatHook::current_=nullptr;ReleaseCapture();DestroyWindow(window);
    std::printf("Win32 selection input: %d failures\n",failures);return failures!=0;
}
