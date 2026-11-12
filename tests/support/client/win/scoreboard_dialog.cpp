#include "chat_hook.hpp"
#include "selection_dialog.hpp"
#include "scoreboard_dialog.hpp"
#include "scoreboard_dialog_impl.hpp"
#include "samp/client/render/font_draw.hpp"
#include "samp/client/render/gui_list_mouse.hpp"
#include "samp/client/render/scoreboard_layout.hpp"
#include "samp/client/render/scoreboard_list.hpp"

#include <algorithm>
#include <array>
#include <bit>
#include <cmath>
#include <filesystem>
#include <string>
#include <vector>

namespace samp::client {
namespace { using namespace render; }
LRESULT CALLBACK ChatHook::window_proc(HWND window,UINT message,WPARAM wparam,LPARAM lparam) {
    auto* self=current_;
    if(!self || !self->previous_) return DefWindowProcW(window,message,wparam,lparam);
    if(self->scoreboard_ && self->scoreboard_available_ && self->controls_disabled_ &&
       self->scoreboard_available_->load(std::memory_order_acquire) && !*self->controls_disabled_) {
        if(!self->input_.open_ && wparam==VK_TAB &&
           (message==WM_KEYDOWN || message==WM_KEYUP || message==WM_CHAR)) {
            if(message==WM_KEYUP) self->scoreboard_->visible_=!self->scoreboard_->visible_;
            return 0;
        }
        if(self->scoreboard_->visible_ && !self->input_.open_ && self->scoreboard_->impl_) {
            auto& scoreboard=*self->scoreboard_;
            auto& data=*scoreboard.impl_;
            auto& input=data.input;
            input.visible=1;input.enabled=1;input.parent=&data;input.flags=0;
            input.items={data.selection_item_ptrs.data(),data.selection_item_count};
            input.scrollbar.minimum=0;
            input.scrollbar.maximum=static_cast<std::int32_t>(data.items.size());
            input.scrollbar.page_size=data.page;input.scrollbar.position=data.top;
            input.selected=data.selected;input.anchor=data.selected<0?0:data.selected;
            input.hit_rectangle={data.text_bounds.left-5,data.text_bounds.top,
                                 data.text_bounds.right+5,data.text_bounds.bottom};
            input.text_top=data.text_bounds.top;
            input.row_height=std::max(1,data.row_height);
            if(message==WM_KEYDOWN) {
                if(wparam==VK_ESCAPE) {
                    scoreboard.visible_=false;
                    return 0;
                }
                const bool handled=render::gui_list_keyboard(input,
                    static_cast<std::uint32_t>(message),static_cast<std::uint32_t>(wparam),
                    static_cast<std::uint32_t>(lparam),data.selection_host);
                data.selected=input.selected;data.top=input.scrollbar.position;
                if(handled) return 0;
            } else {
                if(message==WM_LBUTTONDOWN) input.dragging=1;
                else if(message==WM_MOUSEMOVE) input.dragging=GetCapture()!=nullptr;
                if(message==WM_MOUSEWHEEL || message==WM_LBUTTONDOWN ||
                   message==WM_LBUTTONUP || message==WM_LBUTTONDBLCLK ||
                   message==WM_MOUSEMOVE) {
                    std::int32_t x=static_cast<short>(LOWORD(lparam));
                    std::int32_t y=static_cast<short>(HIWORD(lparam));
                    if(message==WM_MOUSEWHEEL) {
                        if(const auto active_window=static_cast<HWND>(GetActiveWindow())) {
                            POINT point{x,y};
                            if(ScreenToClient(active_window,&point)) {x=point.x;y=point.y;}
                        }
                    }
                    const bool handled=render::gui_list_mouse(input,
                        static_cast<std::uint32_t>(message),x,y,
                        static_cast<std::uint32_t>(wparam),
                        static_cast<std::uint32_t>(lparam),data.mouse_host);
                    data.selected=input.selected;data.top=input.scrollbar.position;
                    if(handled || message==WM_LBUTTONUP || message==WM_LBUTTONDBLCLK) return 0;
                }
            }
        }
    }
    auto* selection=self->selection_;
    const bool selection_controls_enabled=
        !self->controls_disabled_ || !*self->controls_disabled_;
    if(selection && selection->mouse_enabled_ && selection_controls_enabled &&
       message==WM_SETCURSOR && LOWORD(lparam)==HTCLIENT) {
        SetCursor(nullptr);
        return TRUE;
    }
    if(selection && selection->visible_ && selection_controls_enabled) {
        if(message==WM_MOUSEMOVE || message==WM_LBUTTONDOWN || message==WM_LBUTTONUP ||
           message==WM_LBUTTONDBLCLK) {
            const int x=static_cast<short>(LOWORD(lparam))-selection->rectangle_.left;
            const int y=static_cast<short>(HIWORD(lparam))-selection->rectangle_.top;
            SelectionMouseHost mouse_host;
            mouse_host.capture=[selection] {SetCapture(selection->window_);};
            mouse_host.release_capture=[] {ReleaseCapture();};
            mouse_host.clear_focus=[selection] {
                for(auto& button:selection->buttons_) button.focused=false;
            };
            mouse_host.request_focus=[selection](SelectionButton& button) {
                for(auto& item:selection->buttons_) item.focused=false;
                button.focused=true;
            };
            mouse_host.event=[selection](std::uint32_t event,SelectionButton& button) {
                SelectionAction action=SelectionAction::None;
                if(event==0x101) {
                    switch(button.id) {
                        case 4: action=SelectionAction::Spawn; break;
                        case 5: action=SelectionAction::Next; break;
                        case 6: action=SelectionAction::Previous; break;
                        default: break;
                    }
                }
                if(action!=SelectionAction::None && selection->action_)
                    selection->action_(action);
            };
            for(auto& button:selection->buttons_) {
                button.hovered=x>=button.bounds.left && x<button.bounds.right &&
                               y>=button.bounds.top && y<button.bounds.bottom;
                if(selection_button_mouse(button,message,x,y,false,mouse_host)) return 0;
            }
            if(message==WM_MOUSEMOVE) return 0;
        }
        // Original dialog89900 ignores WM_CAPTURECHANGED (215), and button
        // 84930 retains its press until WM_LBUTTONUP. Clearing it here loses
        // release-inside activation when GTA/D3D changes mouse capture.
    }
    if(!self->input_.open_) {
        if(message==WM_CHAR && self->swallow_char_==SwallowChar::after_close &&
           (wparam==VK_RETURN || wparam==VK_ESCAPE)) {
            self->swallow_char_=SwallowChar::none;return 0;
        }
        if(message==WM_KEYDOWN && self->enabled_ && !(lparam&(1u<<30)) &&
           (wparam=='T' || wparam==VK_F6)) {
            self->input_.begin();
            self->swallow_char_=wparam=='T'?SwallowChar::after_open:SwallowChar::none;
            return 0;
        }
        return CallWindowProcW(self->previous_,window,message,wparam,lparam);
    }
    const bool shift=GetKeyState(VK_SHIFT)<0,control=GetKeyState(VK_CONTROL)<0;
    std::string pending_text;
    bool insert_pending=false;
    if(message==WM_KEYDOWN) {
        switch(wparam) {
        case VK_RETURN: {
            std::string line;
            if(self->input_.submit(line) && self->outbox_mutex_ && self->outbox_) {
                const std::lock_guard lock(*self->outbox_mutex_);
                self->outbox_->push_back(line);
            }
            self->swallow_char_=SwallowChar::after_close;return 0;
        }
        case VK_ESCAPE:case VK_F6:
            self->input_.cancel();self->swallow_char_=SwallowChar::after_close;return 0;
        case VK_BACK:
            if(self->input_.caret_==self->input_.anchor_) {
                if(self->input_.caret_==0) return 0;
                self->input_.text_.erase(--self->input_.caret_,1);
                self->input_.anchor_=self->input_.caret_;
            } else {
                const auto first=std::min(self->input_.caret_,self->input_.anchor_);
                self->input_.text_.erase(first,std::max(self->input_.caret_,self->input_.anchor_)-first);
                self->input_.caret_=self->input_.anchor_=first;
            }
            self->input_.history_cursor_=self->input_.history_.size();return 0;
        case VK_DELETE:
            if(self->input_.caret_==self->input_.anchor_) {
                if(self->input_.caret_>=self->input_.text_.size()) return 0;
                self->input_.text_.erase(self->input_.caret_,1);
            } else {
                const auto first=std::min(self->input_.caret_,self->input_.anchor_);
                self->input_.text_.erase(first,std::max(self->input_.caret_,self->input_.anchor_)-first);
                self->input_.caret_=self->input_.anchor_=first;
            }
            self->input_.history_cursor_=self->input_.history_.size();return 0;
        case VK_LEFT: {
            auto next=self->input_.caret_;
            if(control) {
                while(next && self->input_.text_[next-1]==' ') --next;
                while(next && self->input_.text_[next-1]!=' ') --next;
            } else if(next) --next;
            self->input_.caret_=std::min(next,self->input_.text_.size());
            if(!shift) self->input_.anchor_=self->input_.caret_;
            return 0;
        }
        case VK_RIGHT: {
            auto next=self->input_.caret_;
            if(control) {
                while(next<self->input_.text_.size() && self->input_.text_[next]!=' ') ++next;
                while(next<self->input_.text_.size() && self->input_.text_[next]==' ') ++next;
            } else if(next<self->input_.text_.size()) ++next;
            self->input_.caret_=std::min(next,self->input_.text_.size());
            if(!shift) self->input_.anchor_=self->input_.caret_;
            return 0;
        }
        case VK_HOME:
            self->input_.caret_=0;if(!shift) self->input_.anchor_=self->input_.caret_;return 0;
        case VK_END:
            self->input_.caret_=self->input_.text_.size();if(!shift) self->input_.anchor_=self->input_.caret_;return 0;
        case VK_UP:self->input_.history_previous();return 0;
        case VK_DOWN:self->input_.history_next();return 0;
        case VK_INSERT:
            if(control) {
                const auto first=std::min(self->input_.caret_,self->input_.anchor_);
                const std::string selected=self->input_.text_.substr(first,std::max(self->input_.caret_,self->input_.anchor_)-first);
                if(!selected.empty() && OpenClipboard(window)) {
                    const int count=MultiByteToWideChar(CP_ACP,0,selected.data(),static_cast<int>(selected.size()),nullptr,0);
                    const auto memory=GlobalAlloc(GMEM_MOVEABLE,(count+1)*sizeof(wchar_t));
                    if(memory) {
                        auto* output=static_cast<wchar_t*>(GlobalLock(memory));
                        if(output) {
                            MultiByteToWideChar(CP_ACP,0,selected.data(),static_cast<int>(selected.size()),output,count);
                            output[count]=0;GlobalUnlock(memory);EmptyClipboard();
                            if(!SetClipboardData(CF_UNICODETEXT,memory)) GlobalFree(memory);
                        } else GlobalFree(memory);
                    }
                    CloseClipboard();
                }
                return 0;
            }
            if(shift) {
                if(OpenClipboard(window)) {
                    const auto memory=GetClipboardData(CF_UNICODETEXT);
                    if(memory) {
                        const auto* source=static_cast<const wchar_t*>(GlobalLock(memory));
                        if(source) {
                            const int count=WideCharToMultiByte(CP_ACP,0,source,-1,nullptr,0,nullptr,nullptr);
                            if(count>0) {
                                pending_text.resize(count);
                                WideCharToMultiByte(CP_ACP,0,source,-1,pending_text.data(),count,nullptr,nullptr);
                                pending_text.pop_back();
                            }
                            GlobalUnlock(memory);
                        }
                    }
                    CloseClipboard();
                }
                insert_pending=true;break;
            }
            self->input_.insert_mode_=!self->input_.insert_mode_;return 0;
        default:return 0;
        }
    } else if(message==WM_CHAR) {
        if(self->swallow_char_==SwallowChar::after_open && (wparam=='t' || wparam=='T')) {
            self->swallow_char_=SwallowChar::none;return 0;
        }
        self->swallow_char_=SwallowChar::none;
        if(wparam==1) {self->input_.anchor_=0;self->input_.caret_=self->input_.text_.size();return 0;}
        else if(wparam==3) {
            const auto first=std::min(self->input_.caret_,self->input_.anchor_);
            const std::string selected=self->input_.text_.substr(first,std::max(self->input_.caret_,self->input_.anchor_)-first);
            if(!selected.empty() && OpenClipboard(window)) {
                const int count=MultiByteToWideChar(CP_ACP,0,selected.data(),static_cast<int>(selected.size()),nullptr,0);
                const auto memory=GlobalAlloc(GMEM_MOVEABLE,(count+1)*sizeof(wchar_t));
                if(memory) {
                    auto* output=static_cast<wchar_t*>(GlobalLock(memory));
                    if(output) {
                        MultiByteToWideChar(CP_ACP,0,selected.data(),static_cast<int>(selected.size()),output,count);
                        output[count]=0;GlobalUnlock(memory);EmptyClipboard();
                        if(!SetClipboardData(CF_UNICODETEXT,memory)) GlobalFree(memory);
                    } else GlobalFree(memory);
                }
                CloseClipboard();
            }
            return 0;
        }
        else if(wparam==22) {
            if(OpenClipboard(window)) {
                const auto memory=GetClipboardData(CF_UNICODETEXT);
                if(memory) {
                    const auto* source=static_cast<const wchar_t*>(GlobalLock(memory));
                    if(source) {
                        const int count=WideCharToMultiByte(CP_ACP,0,source,-1,nullptr,0,nullptr,nullptr);
                        if(count>0) {
                            pending_text.resize(count);
                            WideCharToMultiByte(CP_ACP,0,source,-1,pending_text.data(),count,nullptr,nullptr);
                            pending_text.pop_back();
                        }
                        GlobalUnlock(memory);
                    }
                }
                CloseClipboard();
            }
            insert_pending=true;
        }
        else if(wparam==24) {
            const auto first=std::min(self->input_.caret_,self->input_.anchor_);
            const std::string selected=self->input_.text_.substr(first,std::max(self->input_.caret_,self->input_.anchor_)-first);
            if(!selected.empty() && OpenClipboard(window)) {
                const int count=MultiByteToWideChar(CP_ACP,0,selected.data(),static_cast<int>(selected.size()),nullptr,0);
                const auto memory=GlobalAlloc(GMEM_MOVEABLE,(count+1)*sizeof(wchar_t));
                if(memory) {
                    auto* output=static_cast<wchar_t*>(GlobalLock(memory));
                    if(output) {
                        MultiByteToWideChar(CP_ACP,0,selected.data(),static_cast<int>(selected.size()),output,count);
                        output[count]=0;GlobalUnlock(memory);EmptyClipboard();
                        if(!SetClipboardData(CF_UNICODETEXT,memory)) GlobalFree(memory);
                    } else GlobalFree(memory);
                }
                CloseClipboard();
            }
            if(self->input_.caret_!=self->input_.anchor_) {
                self->input_.text_.erase(first,std::max(self->input_.caret_,self->input_.anchor_)-first);
                self->input_.caret_=self->input_.anchor_=first;
                self->input_.history_cursor_=self->input_.history_.size();
            }
            return 0;
        }
        else if(wparam>=0x20 && wparam!=0x7f) {
            const wchar_t character=static_cast<wchar_t>(wparam);char bytes[8]{};
            const int count=WideCharToMultiByte(CP_ACP,0,&character,1,bytes,sizeof(bytes),nullptr,nullptr);
            if(count>0) {pending_text.assign(bytes,static_cast<std::size_t>(count));insert_pending=true;}
        }
    } else if(message==WM_KEYUP) {
        return 0;
    } else if(message==WM_LBUTTONDOWN) {
        const int x=static_cast<short>(LOWORD(lparam)),y=static_cast<short>(HIWORD(lparam));
        if(x>=self->bounds_.left && x<self->bounds_.right && y>=self->bounds_.top && y<self->bounds_.bottom) {
            const auto& text=self->input_.text_;
            const int local=x-self->hit_test_text_left_;
            std::size_t hit=self->hit_test_first_visible_;
            if(local>0) {
                int previous=0;
                for(auto index=self->hit_test_first_visible_;index<text.size();++index) {
                    const auto prefix=std::string_view(text).substr(self->hit_test_first_visible_,
                                                                   index-self->hit_test_first_visible_+1);
                    render::TextRect measured{};render::D3DXFontDrawHost host;
                    host.draw(self->hit_test_font_,nullptr,prefix.data(),static_cast<int>(prefix.size()),
                              measured,DT_CALCRECT|DT_SINGLELINE,0xffffffff);
                    const int next=measured.right-measured.left;
                    if(local<(previous+next)/2) {hit=index;break;}
                    previous=next;
                    hit=text.size();
                }
            }
            self->input_.caret_=std::min(hit,self->input_.text_.size());
            if(!shift) self->input_.anchor_=self->input_.caret_;
            self->dragging_=true;SetCapture(window);
        }
        return 0;
    } else if(message==WM_MOUSEMOVE) {
        if(self->dragging_) {
            const int x=static_cast<short>(LOWORD(lparam));
            const auto& text=self->input_.text_;
            const int local=x-self->hit_test_text_left_;
            std::size_t hit=self->hit_test_first_visible_;
            if(local>0) {
                int previous=0;
                for(auto index=self->hit_test_first_visible_;index<text.size();++index) {
                    const auto prefix=std::string_view(text).substr(self->hit_test_first_visible_,
                                                                   index-self->hit_test_first_visible_+1);
                    render::TextRect measured{};render::D3DXFontDrawHost host;
                    host.draw(self->hit_test_font_,nullptr,prefix.data(),static_cast<int>(prefix.size()),
                              measured,DT_CALCRECT|DT_SINGLELINE,0xffffffff);
                    const int next=measured.right-measured.left;
                    if(local<(previous+next)/2) {hit=index;break;}
                    previous=next;
                    hit=text.size();
                }
            }
            self->input_.caret_=std::min(hit,self->input_.text_.size());
        }
        return 0;
    } else if(message==WM_LBUTTONUP) {
        if(self->dragging_) {self->dragging_=false;ReleaseCapture();}return 0;
    } else if(message==WM_CAPTURECHANGED) {
        self->dragging_=false;return CallWindowProcW(self->previous_,window,message,wparam,lparam);
    }
    if(message==WM_CHAR && !insert_pending) return 0;
    if(!insert_pending) return CallWindowProcW(self->previous_,window,message,wparam,lparam);
    bool changed=false;
    for(char c:pending_text) {
        const auto byte=static_cast<unsigned char>(c);
        if(byte<0x20 || byte==0x7f) continue;
        if(self->input_.caret_==self->input_.anchor_ && self->input_.text_.size()>=ChatInput::kMaxLength &&
           (self->input_.insert_mode_ || self->input_.caret_==self->input_.text_.size())) break;
        if(self->input_.caret_!=self->input_.anchor_) {
            const auto first=std::min(self->input_.caret_,self->input_.anchor_);
            self->input_.text_.erase(first,std::max(self->input_.caret_,self->input_.anchor_)-first);
            self->input_.caret_=self->input_.anchor_=first;
        }
        if(!self->input_.insert_mode_ && self->input_.caret_<self->input_.text_.size()) self->input_.text_[self->input_.caret_]=c;
        else self->input_.text_.insert(self->input_.caret_,1,c);
        self->input_.anchor_=++self->input_.caret_;
        changed=true;
    }
    if(changed) self->input_.history_cursor_=self->input_.history_.size();
    return 0;
}

ScoreboardDialog::ScoreboardDialog() = default;
// Official: FUN_1008c6b0 @ 0x1008c6b0 (samp.dll)
ScoreboardDialog::~ScoreboardDialog() {
    if(!impl_) return;
    auto& data=*impl_;
    render::D3DXFontDrawHost draw;
    if(data.font) {draw.release(data.font);data.font=nullptr;}
    if(data.sprite) {draw.release(data.sprite);data.sprite=nullptr;}
    if(data.texture) {data.texture->Release();data.texture=nullptr;}
    if(data.library) {FreeLibrary(data.library);data.library=nullptr;}
}
// Official: FUN_1008d200 @ 0x1008d200 (samp.dll)
void ScoreboardDialog::draw(IDirect3DDevice9* device,std::string_view server,std::uint16_t local,
    std::span<const ScoreboardPlayerView> players,int width,int height,render::FontDrawState* fonts) {
    if(!impl_) {
        impl_=std::make_unique<Impl>();

            auto& data=*impl_;
            data.state.dialog=&data;data.state.list=&data;data.pool.local_name="";
            data.layout_host.client_rectangle=[this](ScoreboardRect& rect) {
                auto& data=*impl_;
                rect={0,0,data.client_width,data.client_height};
            };
            data.list_host.selected_index=[this](void*) {
                auto& data=*impl_;
                data.input.selected=data.selected;
                return render::gui_list_selected_index(data.input,-1);
            };
            data.list_host.scrollbar=[this](void*) -> void* {return impl_.get();};
            data.list_host.scroll_position=[this](void*) {return impl_->top;};
            data.list_host.clear_list=[this](void*) {
                auto& data=*impl_;
                data.items.clear();data.selection_item_count=0;data.top=0;
            };
            data.list_host.local_colour=[this](void*) {
                const auto& data=*impl_;
                return data.colours[data.pool.local_id];
            };
            data.list_host.player_name=[this](std::uint16_t id) {return impl_->names[id].c_str();};
            data.list_host.remote_colour=[this](void* player) {
                const auto& data=*impl_;
                const auto* entry=static_cast<render::ScoreboardParticipant*>(player);
                return data.colours[static_cast<std::size_t>(entry-data.records.data())];
            };
            data.list_host.add_row=[this](void*,const char* text,std::uint32_t id,std::uint32_t colour) {
                auto& data=*impl_;
                data.items.push_back({id,colour,text,{}});
                if(data.selection_item_count<data.selection_items.size()) {
                    const auto slot=data.selection_item_count++;
                    data.selection_item_ptrs[slot]=&data.selection_items[slot];
                }
            };
            data.list_host.row_exists=[this](void*,std::int32_t index) {
                const auto& data=*impl_;
                return index>=0 && static_cast<std::size_t>(index)<data.items.size();
            };
            data.list_host.set_cell=[this](void*,std::int32_t row,std::int32_t column,const char* text) {
                auto& data=*impl_;
                data.items[row].cells[column]=text;
            };
            data.list_host.select_index=[this](void*,std::int32_t index) {
                auto& data=*impl_;
                data.input.items={data.selection_item_ptrs.data(),data.selection_item_count};
                data.input.visible=1;data.input.enabled=1;data.input.flags=0;
                data.input.scrollbar.minimum=0;
                data.input.scrollbar.maximum=static_cast<std::int32_t>(data.items.size());
                data.input.scrollbar.page_size=data.page;data.input.scrollbar.position=data.top;
                data.input.selected=data.selected;data.input.anchor=data.selected<0?0:data.selected;
                render::set_gui_list_selected_index(data.input,index,data.selection_host);
                data.selected=data.input.selected;data.top=data.input.scrollbar.position;
            };
            data.list_host.set_scroll_position=[this](void*,std::int32_t position) {
                auto& data=*impl_;
                data.top=position;data.input.scrollbar.position=position;
            };
            data.list_host.clamp_scrollbar=[this](void*) {
                auto& data=*impl_;
                data.input.scrollbar.minimum=0;
                data.input.scrollbar.maximum=static_cast<std::int32_t>(data.items.size());
                data.input.scrollbar.page_size=data.page;data.input.scrollbar.position=data.top;
                render::clamp_gui_scrollbar_position(data.input.scrollbar);
                data.top=data.input.scrollbar.position;
            };
            data.list_host.update_scrollbar=[](void*) {};
            data.list_host.set_dialog_visible=[](void*,bool) {};
            data.list_host.set_list_visible=[](void*,bool) {};
            data.list_host.set_list_enabled=[](void*,bool) {};
            data.list_host.update_list_geometry=[](void*) {};
            data.list_host.cursor_mode=[](std::int32_t,std::int32_t) {};
            data.input.parent=&data;
            data.selection_host.scrollbar_keyboard=[](render::GuiListSelection&,std::uint32_t,
                std::uint32_t,std::uint32_t) {return false;};
            data.selection_host.key_state=[](std::int32_t key) {
                return static_cast<std::int16_t>(GetKeyState(key));
            };
            data.selection_host.event=[this](void*,std::uint32_t,bool,
                render::GuiListSelection& selected_state) {
                auto& data=*impl_;
                data.selected=selected_state.selected;data.top=selected_state.scrollbar.position;
            };
            data.mouse_host.focus=[](void*,render::GuiListMouse& mouse_state) {
                mouse_state.focused=1;
            };
            data.mouse_host.scrollbar_mouse=[](render::GuiListMouse&,std::uint32_t,std::int32_t,
                std::int32_t,std::uint32_t,std::uint32_t) {return false;};
            data.mouse_host.main_window=[]() -> void* {return GetActiveWindow();};
            data.mouse_host.capture=[](void* window) {
                if(window) SetCapture(static_cast<HWND>(window));
            };
            data.mouse_host.release_capture=[] {ReleaseCapture();};
            data.mouse_host.wheel_scroll_lines=[](std::uint32_t& value) {
                UINT lines=value;
                if(SystemParametersInfo(SPI_GETWHEELSCROLLLINES,0,&lines,0)) value=lines;
            };
            data.mouse_host.scroll_by=[this](render::GuiListMouse& mouse_state,std::int32_t delta) {
                auto& data=*impl_;
                mouse_state.scrollbar.position=std::bit_cast<std::int32_t>(
                    static_cast<std::uint32_t>(mouse_state.scrollbar.position)+
                    static_cast<std::uint32_t>(delta));
                render::clamp_gui_scrollbar_position(mouse_state.scrollbar);
                data.top=mouse_state.scrollbar.position;
            };
            data.mouse_host.event=[this](void*,std::uint32_t,bool,
                render::GuiListMouse& mouse_state) {
                auto& data=*impl_;
                data.selected=mouse_state.selected;data.top=mouse_state.scrollbar.position;
            };
            for(std::size_t id=0;id<data.records.size();++id) {
                data.pool.participants[id]=&data.records[id];
                data.records[id].player=&data.records[id];
            }

    }

    auto& data=*impl_;
    if(!device) return;
    if(visible_) {
        if(!data.state.visible && data.state.dialog) {
            data.list_host.set_dialog_visible(data.state.dialog,true);
            data.list_host.set_list_visible(data.state.list,true);
            data.list_host.update_list_geometry(data.state.list);
            data.list_host.set_list_enabled(data.state.list,true);
            render::refresh_scoreboard_rows(data.state,data.context,data.list_host);
            data.list_host.cursor_mode(3,0);
            data.state.visible=1;
        }
    } else {
        if(data.state.visible && data.state.dialog) {
            data.list_host.set_dialog_visible(data.state.dialog,false);
            data.list_host.set_list_visible(data.state.list,false);
            data.list_host.set_list_enabled(data.state.list,false);
            data.list_host.cursor_mode(0,0);
            data.state.visible=0;
        }
        return;
    }
    if(!data.font || !data.sprite || !data.texture) {
        if(!data.library)
            data.library=LoadLibraryExW(L"d3dx9_25.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);
        if(!data.library) return;
        using Font=HRESULT(WINAPI*)(IDirect3DDevice9*,INT,UINT,UINT,UINT,BOOL,DWORD,DWORD,DWORD,DWORD,LPCSTR,void**);
        using Sprite=HRESULT(WINAPI*)(IDirect3DDevice9*,void**);
        using Texture=HRESULT(WINAPI*)(IDirect3DDevice9*,LPCWSTR,IDirect3DTexture9**);
        const auto make_font=reinterpret_cast<Font>(GetProcAddress(data.library,"D3DXCreateFontA"));
        const auto make_sprite=reinterpret_cast<Sprite>(GetProcAddress(data.library,"D3DXCreateSprite"));
        const auto make_texture=reinterpret_cast<Texture>(GetProcAddress(data.library,"D3DXCreateTextureFromFileW"));
        if(!make_font || !make_sprite || !make_texture) return;
        wchar_t path[MAX_PATH]{};
        if(!GetModuleFileNameW(nullptr,path,MAX_PATH)) return;
        const auto atlas=std::filesystem::path(path).parent_path()/L"sampgui.png";
        // 0x1008d1c0 configures font sizes; 0x1008d200 uses type-8 atlas draws.
        if(FAILED(make_font(device,18,0,700,1,FALSE,1,0,0,0,"Arial",&data.font)) ||
           FAILED(make_sprite(device,&data.sprite)) ||
           FAILED(make_texture(device,atlas.c_str(),&data.texture))) {
            render::D3DXFontDrawHost draw;
            if(data.font) {draw.release(data.font);data.font=nullptr;}
            if(data.sprite) {draw.release(data.sprite);data.sprite=nullptr;}
            if(data.texture) {data.texture->Release();data.texture=nullptr;}
            return;
        }
        render::D3DXFontDrawHost measure_draw;
        render::TextRect measure{};
        measure_draw.draw(data.font,nullptr,"W",1,measure,DT_CALCRECT,0xffffffff);
        data.row_height=std::max(1,measure.bottom-measure.top);
    }
    data.update_layout(width,height);
    const auto local_row=std::find_if(players.begin(),players.end(),
        [&](const auto& row) {return row.id==local;});
    if(local_row==players.end() || local>=data.pool.connected.size()) return;
    std::uint64_t fingerprint=14695981039346656037ull;
    const auto byte=[&](std::uint8_t value) {
        fingerprint=(fingerprint^value)*1099511628211ull;
    };
    const auto word=[&](std::uint32_t value) {
        for(unsigned shift=0;shift<32;shift+=8)
            byte(static_cast<std::uint8_t>(value>>shift));
    };
    word(local);
    for(const auto& view:players) {
        word(view.id);word(view.colour);word(static_cast<std::uint32_t>(view.score));
        word(view.ping);byte(view.npc);
        word(static_cast<std::uint32_t>(view.name.size()));
        for(unsigned char c:view.name) byte(c);
    }
    if(!data.model_ready || fingerprint!=data.model_hash) {
        data.pool.connected.fill(0);data.pool.local_id=local;
        for(const auto& view:players) {
            if(view.id>=data.pool.connected.size()) continue;
            const auto id=view.id;
            data.names[id].assign(view.name.substr(0,24));data.colours[id]=view.colour;
            data.records[id].score=view.score;data.records[id].ping=view.ping;
            data.records[id].npc=view.npc?1:0;
            if(id!=local) data.pool.connected[id]=1;
        }
        data.pool.local_name=data.names[local].c_str();
        data.pool.local_player=&data.records[local];
        data.pool.local_score=local_row->score;data.pool.local_ping=local_row->ping;
        render::refresh_scoreboard_rows(data.state,data.context,data.list_host);
        data.model_hash=fingerprint;data.model_ready=true;
    }
    // 0x100c6ce0 configures all four scoreboard panel corners identically.
    if(data.bounds.right>data.bounds.left && data.bounds.bottom>data.bounds.top) {
        struct Vertex {float x,y,z,rhw;DWORD colour;};
        const auto& rect=data.bounds;
        const float left=float(rect.left)-.5f,top=float(rect.top)-.5f;
        const float right=float(rect.right)-.5f,bottom=float(rect.bottom)-.5f;
        const Vertex vertices[]{{left,top,0,1,0x960a0a0a},{right,top,0,1,0x960a0a0a},
                                {left,bottom,0,1,0x960a0a0a},{right,bottom,0,1,0x960a0a0a}};
        device->SetVertexShader(nullptr);device->SetPixelShader(nullptr);
        device->SetFVF(D3DFVF_XYZRHW|D3DFVF_DIFFUSE);device->SetTexture(0,nullptr);
        device->SetRenderState(D3DRS_ZENABLE,FALSE);device->SetRenderState(D3DRS_ALPHABLENDENABLE,TRUE);
        device->SetRenderState(D3DRS_SRCBLEND,D3DBLEND_SRCALPHA);
        device->SetRenderState(D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA);
        device->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_SELECTARG1);
        device->SetTextureStageState(0,D3DTSS_COLORARG1,D3DTA_DIFFUSE);
        device->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_SELECTARG1);
        device->SetTextureStageState(0,D3DTSS_ALPHAARG1,D3DTA_DIFFUSE);
        device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP,2,vertices,sizeof(Vertex));
    }
    render::D3DXFontDrawHost row_draw;
    row_draw.begin(data.sprite,0x10);
    // Exact type8 source rectangles from 0x1008d200.
    {
        const RECT source{13,124,241,265};
        const ScoreboardRect destination{data.bounds.left,data.bounds.top+60,
                                         data.bounds.right,data.bounds.bottom};
        const float sx=float(destination.right-destination.left)/float(source.right-source.left);
        const float sy=float(destination.bottom-destination.top)/float(source.bottom-source.top);
        if(sx>0 && sy>0) {
            D3DMATRIX matrix{};matrix._11=sx;matrix._22=sy;matrix._33=matrix._44=1;
            using SetTransform=HRESULT(WINAPI*)(void*,const D3DMATRIX*);
            reinterpret_cast<SetTransform>((*static_cast<void***>(data.sprite))[5])(data.sprite,&matrix);
            const float position[]{float(destination.left)/sx,float(destination.top)/sy,0};
            using Draw=HRESULT(WINAPI*)(void*,IDirect3DTexture9*,const RECT*,const void*,const void*,DWORD);
            reinterpret_cast<Draw>((*static_cast<void***>(data.sprite))[9])(
                data.sprite,data.texture,&source,nullptr,position,0xffffffff);
        }
    }
    row_draw.end(data.sprite);
    row_draw.begin(data.sprite,0x10);
    const RECT scissor{data.text_bounds.left-5,data.text_bounds.top,
                       data.text_bounds.right+5,data.text_bounds.bottom};
    device->SetScissorRect(&scissor);
    device->SetRenderState(D3DRS_SCISSORTESTENABLE,TRUE);
    const int name_offset=int(data.layout.width*data.layout.columns[1]);
    const int score_offset=name_offset+int(data.layout.width*data.layout.columns[3]);
    const int offsets[]{0,name_offset,score_offset,
                        score_offset+int(data.layout.width*data.layout.columns[2])};
    const auto last=std::min(data.items.size(),static_cast<std::size_t>(data.top+data.page));
    for(auto index=static_cast<std::size_t>(data.top);index<last;++index) {
        const int y=data.text_bounds.top+(static_cast<int>(index)-data.top)*data.row_height;
        const bool is_selected=static_cast<int>(index)==data.selected;
        if(is_selected) {
            const RECT source{17,269,241,287};
            const ScoreboardRect destination{data.text_bounds.left-5,y,
                                             data.text_bounds.right+5,y+data.row_height};
            const float sx=float(destination.right-destination.left)/float(source.right-source.left);
            const float sy=float(destination.bottom-destination.top)/float(source.bottom-source.top);
            if(sx>0 && sy>0) {
                D3DMATRIX matrix{};matrix._11=sx;matrix._22=sy;matrix._33=matrix._44=1;
                using SetTransform=HRESULT(WINAPI*)(void*,const D3DMATRIX*);
                reinterpret_cast<SetTransform>((*static_cast<void***>(data.sprite))[5])(data.sprite,&matrix);
                const float position[]{float(destination.left)/sx,float(destination.top)/sy,0};
                using Draw=HRESULT(WINAPI*)(void*,IDirect3DTexture9*,const RECT*,const void*,const void*,DWORD);
                reinterpret_cast<Draw>((*static_cast<void***>(data.sprite))[9])(
                    data.sprite,data.texture,&source,nullptr,position,0xffb92228);
            }
        }
        D3DMATRIX identity{};identity._11=identity._22=identity._33=identity._44=1;
        using SetTransform=HRESULT(WINAPI*)(void*,const D3DMATRIX*);
        reinterpret_cast<SetTransform>((*static_cast<void***>(data.sprite))[5])(data.sprite,&identity);
        const auto& item=data.items[index];
        const char* text[]{item.id_text.c_str(),item.cells[0].c_str(),
                           item.cells[1].c_str(),item.cells[2].c_str()};
        const auto colour=is_selected?0xffffffffu:item.colour?item.colour:0xc8ffffffu;
        for(unsigned column=0;column<4;++column) {
            render::TextRect rectangle{data.text_bounds.left+offsets[column],y,
                                       data.text_bounds.right,y+data.row_height};
            row_draw.draw(data.font,data.sprite,text[column],-1,rectangle,0x40,colour);
        }
    }
    row_draw.end(data.sprite);
    device->SetRenderState(D3DRS_SCISSORTESTENABLE,FALSE);
    if(fonts && fonts->fonts[1] && fonts->scratch) {
        render::D3DXFontDrawHost header_draw;
        const std::string title(server);
        const int right=int(data.layout.x+data.layout.width);
        const int bottom=int(data.layout.y+60);
        render::draw_text(*fonts,header_draw,nullptr,title.c_str(),
            {int(data.layout.x+5),int(data.layout.y+5),right,bottom},0x120,0xffbebebe,true);
        render::TextExtent extent{};
        render::measure_small_text(*fonts,header_draw,&extent,"Players: 10000",0);
        const std::string count="Players: "+std::to_string(data.items.size());
        render::draw_text(*fonts,header_draw,nullptr,count.c_str(),
            {int(data.layout.width-extent.width+data.layout.x),int(data.layout.y+5),right,bottom},
            0x120,0xffbebebe,true);
        int left=int(data.layout.x+10*data.layout.scale);
        int edge=int(data.layout.x+56*data.layout.scale);
        const int heading_top=int(data.layout.y+
            (int(data.layout.inset_1c)-fonts->small_height-3));
        render::draw_text(*fonts,header_draw,nullptr,"id",
            {left,heading_top,edge,bottom},0x120,0xff95b0d0,true);
        const int increments[]{int(data.layout.columns[1]*data.layout.width),
                               int(data.layout.columns[3]*data.layout.width),
                               int(data.layout.columns[2]*data.layout.width)};
        const char* column_labels[]{"name","score","ping"};
        for(unsigned i=0;i<3;++i) {
            left+=increments[i];edge+=increments[i];
            render::draw_text(*fonts,header_draw,nullptr,column_labels[i],
                {left,heading_top,edge,bottom},0x120,0xff95b0d0,true);
        }
    }
}
} // namespace samp::client
