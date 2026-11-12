// Injected client integration. The 0.3.DL device table is at 0x1011fa10;
// its Present handler (0x100751b0) draws before forwarding Present.
// The current scene renderer and startup integration are still incomplete.

#include <windows.h>

#include <atomic>
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <cwchar>
#include <cmath>
#include <map>
#include <mutex>
#include <new>
#include <string>
#include <vector>

#include "samp/client/cli.hpp"
#include "samp/client/client_commands.hpp"
#include "samp/client/connection_flow.hpp"
#include "samp/client/network_client.hpp"
#include <d3d9.h>
#include "samp/client/render/font_draw.hpp"
#include "samp/client/render/font_resources.hpp"
#include "samp/client/render/font_settings.hpp"
#include "samp/client/render/colour_font.hpp"
#include "samp/client/render/death_window.hpp"
#include "samp/client/render/world_labels.hpp"
#include "game_runtime.hpp"
#include "samp/client/remote_motion.hpp"
#include "samp/client/dl_archive.hpp"
#include "../archive_hash.hpp"
#include "selection_dialog.hpp"
#include "chat_hook.hpp"
#include "chat_dialog.hpp"
#include "scoreboard_dialog.hpp"
#include "scoreboard_dialog_impl.hpp"

namespace {

// The address GTA:SA keeps its Direct3D 9 device pointer at.
constexpr std::uint32_t kRwD3DDeviceAddress = 0x00C97C28u;
constexpr std::size_t kD3D9DeviceMethodCount = 119;
constexpr std::size_t kD3D9TrampolineSize = 32;
constexpr std::size_t kD3D9ResetSlot = 16;
constexpr std::size_t kD3D9PresentSlot = 17;

// The worker thread state.
std::atomic<bool> g_running{true};
std::atomic<bool> g_world_ready{false};
samp::client::NetworkClient g_network;
void* g_original_device = nullptr;
void* g_fake_device = nullptr;
void** g_proxy_vtable = nullptr;
std::uint8_t* g_trampoline_memory = nullptr;
// Use the reconstructed D3DX draw routines in the injected client. The
// spectator's bitmap atlas is a separate diagnostic renderer.
struct ClientText {
    HMODULE library_=nullptr;
    samp::client::render::FontDrawState state_;
    samp::client::render::D3DXFontDrawHost host_;
    std::array<samp::client::render::ColourFontProxy,3> colour_fonts_;
    std::array<char,100001> scratch_{};
    int requested_font_height_=16;
    int requested_small_font_height_=14;
    int line_height_=15;
};
ClientText g_text;
samp::client::render::FontSettingsHost g_font_settings{};
std::size_t g_font_wrap_index=0;
samp::client::render::FontResourceHost g_font_resource_host=[] {
    using namespace samp::client::render;
    FontResourceHost host;
    host.font_lost=[](void* font) {
        if(font) {
            using Method=HRESULT(__stdcall*)(void*);
            reinterpret_cast<Method>((*static_cast<void***>(font))[16])(font);
        }
    };
    host.font_reset=[](void* font) {
        if(font) {
            using Method=HRESULT(__stdcall*)(void*);
            reinterpret_cast<Method>((*static_cast<void***>(font))[17])(font);
        }
    };
    host.sprite_lost=[](void* sprite) {
        if(sprite) {
            using Method=HRESULT(__stdcall*)(void*);
            reinterpret_cast<Method>((*static_cast<void***>(sprite))[12])(sprite);
        }
    };
    host.sprite_reset=[](void* sprite) {
        if(sprite) {
            using Method=HRESULT(__stdcall*)(void*);
            reinterpret_cast<Method>((*static_cast<void***>(sprite))[13])(sprite);
        }
    };
    host.configured_height=[] {return g_text.requested_font_height_;};
    host.configured_small_height=[] {return g_text.requested_small_font_height_;};
    host.configured_weight=[] {
        return static_cast<std::uint32_t>(g_font_settings.weight_mode == 1 ? 400 : 700);
    };
    host.configured_face=[]() -> const char* {
        if (g_font_settings.configuration_available && g_font_settings.configured_face != nullptr)
            return g_font_settings.configured_face;
        return "Arial";
    };
    host.create_font=[](void* device,const FontSpecification& specification,void** output) {
        using CreateFont=HRESULT(WINAPI*)(IDirect3DDevice9*,INT,UINT,UINT,UINT,BOOL,
                                          DWORD,DWORD,DWORD,DWORD,LPCSTR,void**);
        const auto create=g_text.library_?reinterpret_cast<CreateFont>(
            GetProcAddress(g_text.library_,"D3DXCreateFontA")):nullptr;
        if(!create) {if(output)*output=nullptr;return static_cast<std::int32_t>(E_FAIL);}
        if(output)*output=nullptr;
        return static_cast<std::int32_t>(create(static_cast<IDirect3DDevice9*>(device),
            specification.height,specification.width,specification.weight,specification.mip_levels,
            specification.italic?TRUE:FALSE,specification.character_set,
            specification.output_precision,specification.quality,
            specification.pitch_and_family,specification.face,output));
    };
    host.create_sprite=[](void* device,void** output) {
        using CreateSprite=HRESULT(WINAPI*)(IDirect3DDevice9*,void**);
        const auto create=g_text.library_?reinterpret_cast<CreateSprite>(
            GetProcAddress(g_text.library_,"D3DXCreateSprite")):nullptr;
        if(!create) {if(output)*output=nullptr;return static_cast<std::int32_t>(E_FAIL);}
        if(output)*output=nullptr;
        return static_cast<std::int32_t>(create(static_cast<IDirect3DDevice9*>(device),output));
    };
    host.wrap_font=[](void* font) -> void* {
        const auto index=g_font_wrap_index++;
        if(index>=g_text.colour_fonts_.size()) return font;
        if(font==nullptr) return nullptr;
        auto& proxy=g_text.colour_fonts_[index];
        proxy.font_=font;
        return &proxy;
    };
    host.allocate_zeroed_scratch=[](std::size_t size) -> char* {
        if(size>g_text.scratch_.size()) return nullptr;
        g_text.scratch_.fill('\0');
        return g_text.scratch_.data();
    };
    return host;
}();
samp::client::render::DeathWindow g_death_window;
std::size_t g_death_message_cursor=0;
samp::client::render::DeathWindowHost g_death_host{
    [](void* resource) {g_text.host_.release(resource);},
    [](void* sprite,std::uint32_t flags) {g_text.host_.begin(sprite,flags);},
    [](void* sprite) {g_text.host_.end(sprite);},
    [](void* font,void* sprite,const char* text,std::int32_t count,
       samp::client::render::DeathRect& rect,std::uint32_t flags,std::uint32_t colour) {
        samp::client::render::TextRect text_rect{rect.left,rect.top,rect.right,rect.bottom};
        g_text.host_.draw(font,sprite,text,count,text_rect,flags,colour);
        rect={text_rect.left,text_rect.top,text_rect.right,text_rect.bottom};
    },
    [] {return static_cast<std::int32_t>(g_text.line_height_);},
    [] {return 700u;},
    [] {return "Arial";},
    [](void* device,const samp::client::render::DeathFont& font,void*& output) {
        using CreateFont=HRESULT(WINAPI*)(IDirect3DDevice9*,INT,UINT,UINT,UINT,BOOL,
                                          DWORD,DWORD,DWORD,DWORD,LPCSTR,void**);
        const auto create=g_text.library_?reinterpret_cast<CreateFont>(
            GetProcAddress(g_text.library_,"D3DXCreateFontA")):nullptr;
        if(!create) {output=nullptr;return;}
        output=nullptr;
        create(static_cast<IDirect3DDevice9*>(device),font.height,font.width,font.weight,
               font.mip_levels,font.italic?TRUE:FALSE,font.charset,font.output_precision,
               font.quality,font.pitch_and_family,font.face,&output);
    },
    [](void* device,void*& output) {
        using CreateSprite=HRESULT(WINAPI*)(IDirect3DDevice9*,void**);
        const auto create=g_text.library_?reinterpret_cast<CreateSprite>(
            GetProcAddress(g_text.library_,"D3DXCreateSprite")):nullptr;
        if(!create) {output=nullptr;return;}
        output=nullptr;
        create(static_cast<IDirect3DDevice9*>(device),&output);
    }
};
samp::client::ChatDialog g_chat_dialog;
samp::client::ScoreboardDialog g_scoreboard;
std::atomic<bool> g_scoreboard_available{false};
std::mutex g_network_mutex;

// The chat input line: the window procedure collects the submitted lines and
// the network tick sends them, so the socket is only ever used from the tick.
samp::client::ChatHook g_chat;
std::mutex g_chat_mutex;
std::vector<std::string> g_chat_outbox;
samp::client::ClientCommandContext g_commands;
samp::client::ClientCommandSnapshot g_command_snapshot;
std::vector<samp::client::ClientCommandEvent> g_command_events;
std::vector<samp::client::ClientMessage> g_command_messages;
unsigned g_test_death_windows=0;
std::atomic<bool> g_log_urls{false};

samp::client::GameRuntime g_game;
samp::client::SelectionDialog g_selection;
bool g_quit_requested = false;
std::uint32_t g_quit_started = 0;

// Draw on the game's rendering thread, using the real device throughout.
// Calling EndScene through the fake device from a hooked EndScene recurses.
}  // namespace

// source adapter only; no established separate native entry
HRESULT WINAPI samp_d3d_present(IDirect3DDevice9* present_device, const RECT* present_source, const RECT* destination,
                       HWND window, const RGNDATA* dirty) {
    auto* real = static_cast<IDirect3DDevice9*>(g_original_device);
    bool world_ready=false;
    {
        const std::lock_guard lock(g_network_mutex);
        std::vector<samp::client::ClientCommandEvent> commands;
        {
            const std::lock_guard chat_lock(g_chat_mutex);
            commands.swap(g_command_events);
            for(auto& message:g_command_messages) g_network.world_.messages_.push_back(std::move(message));
            g_command_messages.clear();
        }
        for(const auto& command:commands) {
            using A=samp::client::ClientCommandAction;
            switch(command.action) {
            case A::PageSize:case A::Timestamp:case A::NameTagStatus:
            case A::CameraTargetDebug:case A::ObjectLighting:case A::VehicleLabels:
            case A::AudioMessages:
                break; // Consumers below read the command context's recovered flags.
            case A::LogUrls:g_log_urls.store(command.values[0]!=0);break;
            case A::FontSize:
                g_font_settings.size_adjustment=command.values[0];
                samp::client::render::release_font_resources(g_text.state_,g_text.host_);
                g_text.state_.device=nullptr;break;
            case A::FrameLimit: {
                g_game.frame_timing_.limit=command.values[0];
                DWORD protection=0,ignored=0;
                if(VirtualProtect(reinterpret_cast<void*>(0xc1704c),4,PAGE_READWRITE,&protection)) {
                    *reinterpret_cast<std::uint32_t*>(0xc1704c)=200;
                    VirtualProtect(reinterpret_cast<void*>(0xc1704c),4,protection,&ignored);
                }
                break;
            }
            case A::HeadMove:g_game.head_movement_=command.values[0]!=0;break;
            case A::HudScaleFix:g_game.hud_scale_fix_=command.values[0]!=0;break;
            case A::TestDeathWindow:++g_test_death_windows;break;
            case A::Rcon: {
                samp::proto::BitStream message;const std::uint8_t id=201;
                const auto size=static_cast<std::uint32_t>(command.text.size());
                message.write(&id,1);message.write(&size,4);message.write(command.text.data(),size);
                samp::proto::ReliabilityFrame frame;frame.message_number=g_network.next_message_number_++;
                frame.reliability=samp::proto::Reliability::Reliable;frame.data=std::move(message);
                samp::proto::ConnectedDatagram datagram;datagram.frames.push_back(std::move(frame));
                const auto encoded=samp::proto::encode_connected_datagram(datagram);
                g_network.pending_.emplace_back(encoded.data_.data(),encoded.data_.data()+((encoded.numberOfBitsUsed_+7u)>>3));
                break;
            }
            case A::PlayerSkin:
                g_game.apply_player_skin(*reinterpret_cast<std::uint8_t**>(0xb7cd98),static_cast<std::uint32_t>(command.values[0]));break;
            case A::Vehicle: {
                static std::uint16_t next_vehicle=1;
                const auto* ped=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
                if(!ped) break;
                const auto* matrix=*reinterpret_cast<const std::uint8_t* const*>(ped+0x14);
                const auto* position=matrix?matrix+0x30:ped+4;
                samp::client::VehicleSpawnCommand vehicle;vehicle.id=next_vehicle++;
                vehicle.model=static_cast<std::uint32_t>(command.values[0]);
                std::memcpy(&vehicle.x,position,12);vehicle.x-=5;vehicle.y-=5;vehicle.z+=1;
                g_game.stream_vehicle(vehicle);break;
            }
            case A::VehicleSelector:g_game.vehicle_selector_active_=true;break;
            case A::Weather:
                *reinterpret_cast<std::int32_t*>(0xc81318)=command.values[0];
                *reinterpret_cast<std::int32_t*>(0xc8131c)=command.values[0];
                *reinterpret_cast<std::int32_t*>(0xc81320)=command.values[0];break;
            case A::Time:g_game.set_world_clock(static_cast<std::uint8_t>(command.values[0]),static_cast<std::uint8_t>(command.values[1]));break;
            }
        }
        if(g_network.death_reported_ && g_network.state_==samp::client::ConnectionState::Connected) {
            const auto* ped=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
            if(ped && ped[0x530]!=54 && ped[0x530]!=55) {
                g_network.death_reported_=false;
                if(g_network.world_.stream.force_class_selection) {
                    g_network.world_.stream.force_class_selection=false;
                    g_network.class_selection_started_=false;
                } else g_network.spawn_accepted_=true;
            }
        }
        g_game.assets_=&g_network.assets_;g_game.world_=&g_network.world_;
        g_game.local_player_id_=g_network.player_id_;g_game.lag_compensation_mode_=g_network.lag_compensation_mode_;
        g_game.tick((g_network.state_ == samp::client::ConnectionState::Connected),
                    g_network.spawn_accepted_,g_network.class_ready_,g_network.local_spawn_,
                    g_network.game_commands_);
        if(g_game.loading_ && *reinterpret_cast<std::uint32_t*>(0xc8d4c0)==9) {
            g_game.process_vehicle_selector();g_game.process_head_movement();g_game.collect_camera_targets();
        }
        for(const auto& [pickup,polling]:g_game.pickup_notices_) {
            if(g_network.state_!=samp::client::ConnectionState::Connected) break;
            samp::proto::BitStream payload;payload.write(&pickup,4);
            samp::proto::BitStream message;const std::uint8_t prefix[]{samp::proto::kRaknetIdRpc,131};message.write(prefix,2);
            const std::uint32_t bits=32;message.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits),32,true);
            message.writeBits(payload.data_.data(),32,false);
            samp::proto::ReliabilityFrame frame;frame.message_number=g_network.next_message_number_++;
            frame.reliability=polling?samp::proto::Reliability::ReliableSequenced:samp::proto::Reliability::ReliableOrdered;
            frame.ordering_channel=0;frame.ordering_index=g_network.next_ordering_index_[0]++;frame.data=std::move(message);
            samp::proto::ConnectedDatagram datagram;datagram.frames.push_back(std::move(frame));
            const auto encoded=samp::proto::encode_connected_datagram(datagram);
            g_network.pending_.emplace_back(encoded.data_.data(),encoded.data_.data()+((encoded.numberOfBitsUsed_+7u)>>3));
        }
        g_game.pickup_notices_.clear();
        // 100045c0 sends changed camera targets at strictly more than100ms.
        static std::uint32_t target_tick=0;
        static std::array<std::uint16_t,4> reported_targets{0xffff,0xffff,0xffff,0xffff};
        if(g_network.in_game_ && g_network.world_.stream.camera_targeting && GetTickCount()-target_tick>100) {
            target_tick=GetTickCount();
            if(reported_targets!=g_game.camera_targets_) {
                reported_targets=g_game.camera_targets_;
                samp::proto::ReliabilityFrame frame;frame.message_number=g_network.next_message_number_++;
                frame.reliability=samp::proto::Reliability::ReliableOrdered;
                frame.ordering_channel=0;frame.ordering_index=g_network.next_ordering_index_[0]++;
                const std::uint8_t prefix[]{samp::proto::kRaknetIdRpc,168};frame.data.write(prefix,2);
                const std::uint32_t bits=64;frame.data.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits),32,true);
                frame.data.write(reported_targets.data(),8);
                samp::proto::ConnectedDatagram datagram;datagram.frames.push_back(std::move(frame));
                const auto encoded=samp::proto::encode_connected_datagram(datagram);
                g_network.pending_.emplace_back(encoded.data_.data(),encoded.data_.data()+((encoded.numberOfBitsUsed_+7u)>>3));
            }
        } else if(!g_network.world_.stream.camera_targeting) reported_targets.fill(0xffff);
        // Original663e0 prints at request time, before its BASS worker starts.
        static std::uint32_t audio_revision=0;
        const auto& audio=g_network.world_.stream.audio_stream;
        if(audio_revision!=audio.revision) {
            audio_revision=audio.revision;
            if(audio.active && g_commands.settings.get_int("audiomsgoff")==0)
                g_network.world_.messages_.push_back({0x88aa62ff,"Audio stream: "+audio.url});
        }
        world_ready=g_game.loading_ && *reinterpret_cast<std::uint32_t*>(0xc8d4c0)==9 &&
                    *reinterpret_cast<void**>(0xb7cd98)!=nullptr;
        g_world_ready.store(world_ready,std::memory_order_release);
        // Engine queries are captured on the render/game thread. The edit
        // callback only reads this snapshot and never executes GTA opcodes.
        samp::client::ClientCommandSnapshot snapshot;snapshot.loaded=world_ready;
        snapshot.memory=*reinterpret_cast<const std::uint32_t*>(0x8a5a80);
        const auto* actor=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
        snapshot.actor=world_ready && actor;
        if(snapshot.actor) {
            snapshot.in_vehicle=(*reinterpret_cast<const std::uint32_t*>(actor+0x46c)&0x100)!=0;
            const auto* entity=snapshot.in_vehicle?*reinterpret_cast<const std::uint8_t* const*>(actor+0x58c):actor;
            if(entity) {
                snapshot.model=*reinterpret_cast<const std::uint16_t*>(entity+0x22);
                const auto* matrix=*reinterpret_cast<const std::uint8_t* const*>(entity+0x14);
                std::memcpy(&snapshot.x,matrix?matrix+0x30:entity+4,12);
                if(snapshot.in_vehicle) {
                    using Reference=std::uint32_t(__thiscall*)(void*,const void*);
                    const auto handle=reinterpret_cast<Reference>(0x424160)(*reinterpret_cast<void**>(0xb74494),entity);
                    g_game.script_.command(0x0174,"iv",handle,&snapshot.angle);
                    snapshot.colour1=entity[0x434];snapshot.colour2=entity[0x435];
                } else g_game.script_.command(0x0172,"iv",1u,&snapshot.angle);
            }
            g_game.script_.command(0x077e,"v",&snapshot.interior);
        }
        {const std::lock_guard chat_lock(g_chat_mutex);g_command_snapshot=snapshot;}
        // 0x10005f40 starts the first class request here. Starting it during
        // the loading screen lets GTA's startup scene overwrite its camera.
        if(g_game.selecting_ && g_network.state_==samp::client::ConnectionState::Connected &&
           !g_network.class_selection_started_ && g_network.class_count_!=0) {
            g_network.class_selection_started_=true;
            g_network.request_class(0);
        }
        // Official 0x10005f40: two seconds before input, arrows repeat only
        // after >250ms, Shift requests spawn.
        if(g_game.selecting_ && g_network.class_ready_ &&
           GetForegroundWindow()==*reinterpret_cast<HWND*>(0xc97c1c) &&
           !*reinterpret_cast<const std::uint8_t*>(0xba67a4) &&
           GetTickCount()-g_game.selection_started_>1999) {
            static DWORD navigation=0;
            const auto now=GetTickCount();
            if(!g_network.spawn_requested_ && GetAsyncKeyState(VK_SHIFT)<0) {
                if(g_network.class_ready_ && g_network.state_==samp::client::ConnectionState::Connected &&
                   !g_network.spawn_accepted_ && !g_network.in_game_) {
                    samp::proto::BitStream request;
                    request.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
                    request.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(129)}.data(),1);
                    const std::uint8_t empty_bit_count[4]{};
                    request.writeCompressed(empty_bit_count,32,true);
                    {
                        const auto outgoing_message = std::span<const std::uint8_t>(request.data_.data(),(request.numberOfBitsUsed_+7u)>>3);
                        const auto outgoing_reliability = samp::proto::Reliability::Reliable;
                        const auto outgoing_channel = 0;
                        samp::proto::ReliabilityFrame frame;
                        frame.message_number = g_network.next_message_number_++;
                        frame.reliability = outgoing_reliability;
                        if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                            outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                            outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                            frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                            frame.ordering_index = g_network.next_ordering_index_[frame.ordering_channel]++;
                        }
                        frame.data.write(outgoing_message.data(), outgoing_message.size());
                        samp::proto::ConnectedDatagram datagram;
                        datagram.frames.push_back(frame);
                        const samp::proto::BitStream encoded = samp::proto::encode_connected_datagram(datagram);
                        const std::size_t byte_count = (encoded.numberOfBitsUsed_ + 7u) >> 3;
                        if (byte_count != 0) g_network.pending_.emplace_back(encoded.data_.data(), encoded.data_.data() + byte_count);
                    }
                    g_network.spawn_requested_=true;
                }
            } else if(now-navigation>250 && g_network.class_ready_ && !g_network.spawn_requested_) {
                int direction=0;
                if(GetAsyncKeyState(VK_LEFT)<0) {navigation=now;direction=-1;}
                else if(GetAsyncKeyState(VK_RIGHT)<0) {navigation=now;direction=1;}
                if(direction!=0 && g_network.state_==samp::client::ConnectionState::Connected &&
                   !g_network.in_game_ && !g_network.spawn_accepted_ && g_network.class_count_!=0) {
                    const auto next=direction<0?
                        (g_network.requested_class_==0?g_network.class_count_-1:g_network.requested_class_-1):
                        (g_network.requested_class_+1==g_network.class_count_?0:g_network.requested_class_+1);
                    g_network.request_class(next);
                }
            }
        }
        if(g_game.playing_ && g_network.spawn_accepted_ && !g_network.in_game_) {
            samp::proto::BitStream confirmation;
            confirmation.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
            confirmation.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(52)}.data(),1);
            const std::uint8_t empty_bit_count[4]{};
            confirmation.writeCompressed(empty_bit_count,32,true);
            {
                const auto outgoing_message = std::span<const std::uint8_t>(confirmation.data_.data(),
                                                         (confirmation.numberOfBitsUsed_+7u)>>3);
                const auto outgoing_reliability = samp::proto::Reliability::ReliableOrdered;
                const auto outgoing_channel = 0;
                samp::proto::ReliabilityFrame frame;
                frame.message_number = g_network.next_message_number_++;
                frame.reliability = outgoing_reliability;
                if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                    outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                    outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                    frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                    frame.ordering_index = g_network.next_ordering_index_[frame.ordering_channel]++;
                }
                frame.data.write(outgoing_message.data(), outgoing_message.size());
                samp::proto::ConnectedDatagram datagram;
                datagram.frames.push_back(frame);
                const samp::proto::BitStream encoded = samp::proto::encode_connected_datagram(datagram);
                const std::size_t byte_count = (encoded.numberOfBitsUsed_ + 7u) >> 3;
                if (byte_count != 0) g_network.pending_.emplace_back(encoded.data_.data(), encoded.data_.data() + byte_count);
            }
            g_network.spawned_=true;
            g_network.spawn_requested_=false;
            g_network.in_game_=true;
            g_network.last_foot_sync_ms_=0;
        }
        // The chat subclass is installed once the game window exists and is
        // only enabled while the player is in the game, so the keys used
        // before joining still belong to the game.
        const HWND chat_window=*reinterpret_cast<HWND*>(0xc97c1c);
        if(!g_chat.window_ && chat_window && !g_chat.current_) {
            const auto previous=reinterpret_cast<WNDPROC>(SetWindowLongPtrW(
                chat_window,GWLP_WNDPROC,
                reinterpret_cast<LONG_PTR>(&samp::client::ChatHook::window_proc)));
            if(previous) {
                g_chat.window_=chat_window;
                g_chat.previous_=previous;
                g_chat.outbox_mutex_=&g_chat_mutex;
                g_chat.outbox_=&g_chat_outbox;
                g_chat.current_=&g_chat;
                OutputDebugStringA("chat input hooked on the game window");
            }
        }
        g_scoreboard_available.store((g_network.state_ == samp::client::ConnectionState::Connected),std::memory_order_release);
        g_chat.scoreboard_=&g_scoreboard;
        g_chat.selection_=&g_selection;
        g_chat.scoreboard_available_=&g_scoreboard_available;
        g_chat.controls_disabled_=reinterpret_cast<const volatile std::uint8_t*>(0xba67a4);
        if(!(g_network.state_ == samp::client::ConnectionState::Connected)) g_scoreboard.visible_=false;
        // Local commands, particularly /q, also work while connecting and
        // selecting a class. Only outgoing server chat remains spawn-gated.
        g_chat.enabled_=world_ready || g_network.spawn_accepted_;
        if(!g_chat.enabled_ && g_chat.input_.open_) g_chat.input_.cancel();
        {
            std::vector<std::string> lines;
            {
                const std::lock_guard chat_lock(g_chat_mutex);
                lines.swap(g_chat_outbox);
            }
            for(const auto& line:lines) {
                if(!g_network.spawn_accepted_) continue;
                if(line.front() == '/') g_network.send_command(line);
                else g_network.send_chat(line);
            }
        }
        samp::proto::own::FootSync motion;
        if(g_game.playing_) {
            const auto* ped=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
            if(ped!=nullptr) {
                const auto* actor_matrix=*reinterpret_cast<const std::uint8_t* const*>(ped+0x14);
                const auto* position=actor_matrix!=nullptr?actor_matrix+0x30:ped+4;
                std::memcpy(&motion.x,position,4);
                std::memcpy(&motion.y,position+4,4);
                std::memcpy(&motion.z,position+8,4);
                const auto* matrix=*reinterpret_cast<const samp::client::PedMatrix* const*>(ped+0x14);
                if(matrix) {
                    const auto quaternion=samp::client::ped_quaternion(*matrix);
                    motion.qw=quaternion.w;motion.qx=quaternion.x;
                    motion.qy=quaternion.y;motion.qz=quaternion.z;
                    std::memcpy(&motion.vx,ped+0x44,12);
                    motion.health=static_cast<std::uint8_t>(std::clamp(
                        *reinterpret_cast<const float*>(ped+0x540),0.f,255.f));
                    motion.armour=static_cast<std::uint8_t>(std::clamp(
                        *reinterpret_cast<const float*>(ped+0x548),0.f,255.f));
                    // NewState fields inverted from the on-foot branches of 0x100aef40.
                    const auto* pad=reinterpret_cast<const std::int16_t*>(0xb73458);
                    motion.left_right=static_cast<std::uint16_t>(pad[0]);
                    motion.up_down=static_cast<std::uint16_t>(pad[1]);
                    constexpr unsigned fields[]{4,18,17,16,15,14,7,6,5,19,21};
                    for(unsigned bit=0;bit<11;++bit)
                        if(pad[fields[bit]]) motion.keys|=static_cast<std::uint16_t>(1u<<bit);
                    if(pad[3]>0) motion.keys|=2u<<11;
                    else if(pad[3]<0) motion.keys|=1u<<11;
                    if(pad[2]>0) motion.keys|=2u<<13;
                    else if(pad[2]<0) motion.keys|=1u<<13;
                    const auto slot=ped[0x718];
                    if(slot<13) motion.weapon=static_cast<std::uint8_t>(*reinterpret_cast<const std::uint32_t*>(ped+0x5a0+slot*28));
                    if(g_network.in_game_ && (motion.health==0 || ped[0x530]==54)) {
                        std::uint16_t killer=0xffff;
                        const auto reason=g_game.death_info(ped,killer);
                        g_network.send_death_notification(reason,killer);
                    }
                    auto& aim=g_network.local_aim_;aim[0]=*reinterpret_cast<const std::uint8_t*>(0xb6f1a8);
                    std::memcpy(aim.data()+1,reinterpret_cast<const void*>(0xb6f32c),24);
                    const auto* player_data=*reinterpret_cast<const std::uint8_t* const*>(ped+0x480);
                    const float height=player_data?*reinterpret_cast<const float*>(player_data+0x54):0.f;
                    std::memcpy(aim.data()+25,&height,4);
                    const auto zoom=static_cast<std::uint8_t>(std::clamp((*reinterpret_cast<const float*>(0xb6f250)-35.f)/35.f*63.f,0.f,63.f));
                    std::uint32_t state=0,clip=0;
                    if(slot<13) {std::memcpy(&state,ped+0x5a4+slot*28,4);std::memcpy(&clip,ped+0x5a8+slot*28,4);}
                    aim[29]=static_cast<std::uint8_t>(zoom | (state==2?0xc0:std::min(clip,2u)<<6));
                    aim[30]=static_cast<std::uint8_t>(std::clamp((*reinterpret_cast<const float*>(0xc3efa4)-1.f)*255.f,0.f,255.f));
                    g_network.local_aim_provided_=true;
                    g_network.local_money_=*reinterpret_cast<const std::int32_t*>(0xb7ce50);
                    for(unsigned index=0;index<13;++index) {
                        g_network.local_weapons_[index]=static_cast<std::uint8_t>(*reinterpret_cast<const std::uint32_t*>(ped+0x5a0+index*28));
                        g_network.local_ammo_[index]=static_cast<std::uint16_t>(*reinterpret_cast<const std::uint32_t*>(ped+0x5ac+index*28));
                    }
                    g_network.local_stats_provided_=true;
                    g_network.send_interior(ped[0x2f]);
                    for(const auto& shot:g_game.shots_) g_network.send_bullet_sync(shot);
                    g_game.shots_.clear();
                    g_network.local_vehicle_mode_=0;
                    if(g_game.local_vehicle_id_!=0xffff && g_game.local_vehicle_entity_) {
                        auto* vehicle=static_cast<const std::uint8_t*>(g_game.local_vehicle_entity_);
                        const auto* matrix=*reinterpret_cast<const samp::client::PedMatrix* const*>(vehicle+0x14);
                        if(matrix) {
                            const auto id=g_game.local_vehicle_id_;
                            const auto seat=g_game.local_vehicle_seat_;
                            const auto rotation=samp::client::ped_quaternion(*matrix);
                            auto& driver=g_network.local_driver_;driver.fill(0);
                            std::memcpy(driver.data(),&id,2);
                            std::memcpy(driver.data()+2,&motion.left_right,2);std::memcpy(driver.data()+4,&motion.up_down,2);
                            std::memcpy(driver.data()+6,&motion.keys,2);std::memcpy(driver.data()+8,&rotation,16);
                            std::memcpy(driver.data()+24,matrix->data()+12,12);std::memcpy(driver.data()+36,vehicle+0x44,12);
                            std::memcpy(driver.data()+48,vehicle+0x4c0,4);
                            driver[52]=motion.health;driver[53]=motion.armour;driver[54]=motion.weapon;
                            auto& passenger=g_network.local_passenger_;passenger.fill(0);
                            std::memcpy(passenger.data(),&id,2);passenger[2]=seat;passenger[3]=motion.weapon;
                            passenger[4]=motion.health;passenger[5]=motion.armour;
                            std::memcpy(passenger.data()+6,&motion.left_right,2);std::memcpy(passenger.data()+8,&motion.up_down,2);
                            std::memcpy(passenger.data()+10,&motion.keys,2);std::memcpy(passenger.data()+12,&motion.x,12);
                            g_network.local_vehicle_mode_=seat==0?2:3;
                            if(seat==0) g_network.last_vehicle_driven_=id;
                            if(*reinterpret_cast<const float*>(vehicle+0x4c0)<=0) g_network.send_vehicle_death(id);
                        }
                    }
                    const auto current_vehicle=g_network.local_vehicle_mode_?g_game.local_vehicle_id_:std::uint16_t{0xffff};
                    if(g_network.reported_vehicle_id_!=current_vehicle || g_network.reported_vehicle_mode_!=g_network.local_vehicle_mode_) {
                        if(g_network.reported_vehicle_id_!=0xffff) g_network.send_exit_vehicle(g_network.reported_vehicle_id_);
                        if(current_vehicle!=0xffff) g_network.send_enter_vehicle(current_vehicle,g_network.local_vehicle_mode_==3);
                        g_network.reported_vehicle_id_=current_vehicle;g_network.reported_vehicle_mode_=g_network.local_vehicle_mode_;
                    }
                    g_network.local_motion_=motion;
                    g_network.local_motion_provided_=true;
                    g_network.local_x_=motion.x;
                    g_network.local_y_=motion.y;
                    g_network.local_z_=motion.z;
                }
            }
        }
    }
    if(world_ready) {
        auto& selection=g_selection;
        const bool selection_visible=g_game.selecting_&&!g_scoreboard.visible_;
        const bool text_input=g_chat.input_.open_;
        const bool scoreboard_visible=g_scoreboard.visible_;
        const bool active=selection_visible||text_input||scoreboard_visible;
        bool selection_ok=true;
        selection.device_=real;
        if(active && !selection.sprite_) {
            if(!selection.library_)
                selection.library_=LoadLibraryExW(L"d3dx9_25.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);
            if(!selection.library_) selection_ok=false;
            if(selection_ok) {
                using Font=HRESULT(WINAPI*)(IDirect3DDevice9*,INT,UINT,UINT,UINT,BOOL,
                    DWORD,DWORD,DWORD,DWORD,LPCSTR,void**);
                using Sprite=HRESULT(WINAPI*)(IDirect3DDevice9*,void**);
                using Texture=HRESULT(WINAPI*)(IDirect3DDevice9*,LPCWSTR,IDirect3DTexture9**);
                const auto make_font=reinterpret_cast<Font>(
                    GetProcAddress(selection.library_,"D3DXCreateFontA"));
                const auto make_sprite=reinterpret_cast<Sprite>(
                    GetProcAddress(selection.library_,"D3DXCreateSprite"));
                const auto make_texture=reinterpret_cast<Texture>(
                    GetProcAddress(selection.library_,"D3DXCreateTextureFromFileW"));
                if(!make_font || !make_sprite || !make_texture) selection_ok=false;
                if(selection_ok) {
                    wchar_t executable[MAX_PATH]{};
                    if(!GetModuleFileNameW(nullptr,executable,MAX_PATH)) {
                        selection_ok=false;
                    } else {
                        const auto folder=std::filesystem::path(executable).parent_path();
                        // 0x1008d1c0 / 0x100c69e0: default GUI font is 20px Arial bold.
                        if(FAILED(make_font(real,20,0,700,1,FALSE,1,0,0,0,"Arial",&selection.font_)) ||
                           FAILED(make_sprite(real,&selection.sprite_)) ||
                           FAILED(make_texture(real,(folder/L"sampgui.png").c_str(),&selection.texture_)) ||
                           FAILED(make_texture(real,(folder/L"mouse.png").c_str(),&selection.cursor_))) {
                            samp::client::render::D3DXFontDrawHost host;
                            if(selection.font_) {host.release(selection.font_);selection.font_=nullptr;}
                            if(selection.sprite_) {host.release(selection.sprite_);selection.sprite_=nullptr;}
                            if(selection.texture_) {selection.texture_->Release();selection.texture_=nullptr;}
                            if(selection.cursor_) {selection.cursor_->Release();selection.cursor_=nullptr;}
                            selection_ok=false;
                        }
                    }
                }
                if(selection_ok && !selection.window_)
                    selection.window_=*reinterpret_cast<HWND*>(0xc97c1c);
            }
        }
        if(selection_ok && ((!active || !*reinterpret_cast<const std::uint8_t*>(0xba67a4)) &&
           !selection.mouse_mode(active,selection.text_input_&&!text_input,
                                scoreboard_visible&&!selection_visible&&!text_input)))
            selection_ok=false;
        if(selection_ok) {
            selection.text_input_=text_input;
            selection.visible_=selection_visible;
            selection.cursor_inside_=false;
            if(selection.window_) {
                RECT client{};GetClientRect(selection.window_,&client);
                const auto left=client.right/2-155;
                const auto top=client.bottom-40-50;
                selection.rectangle_={left,top,left+310,top+40};
                POINT mouse{};
                if(active && GetForegroundWindow()==selection.window_ && GetCursorPos(&mouse) &&
                   ScreenToClient(selection.window_,&mouse)) {
                    selection.cursor_position_=mouse;
                    selection.cursor_inside_=PtInRect(&client,mouse)!=FALSE;
                }
            }
            selection.restore_mouse();
        } else {
        static bool logged=false;
        if(!logged) {logged=true;OutputDebugStringA("selection dialog resources or cursor mode could not be initialized");}
        }
    }
    if (*reinterpret_cast<const volatile std::uint32_t*>(0xc8d4c0)==9 &&
        !*reinterpret_cast<const std::uint8_t*>(0xba67a4)) {
        {
            IDirect3DDevice9* const overlay_device=real;

                const std::lock_guard lock(g_network_mutex);
                // The size of the screen.
                D3DVIEWPORT9 viewport{};
                if (overlay_device->GetViewport(&viewport) != D3D_OK) {
                    goto present_overlay_done;
                }
                if(!g_text.state_.sprite) {
                    if(!g_text.library_)
                        g_text.library_=LoadLibraryExW(L"d3dx9_25.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);
                    if(!g_text.library_ ||
                       !GetProcAddress(g_text.library_,"D3DXCreateFontA") ||
                       !GetProcAddress(g_text.library_,"D3DXCreateSprite")) {
                        static bool logged=false;
                        if(!logged) {logged=true;OutputDebugStringA("D3DX text resources could not be created");}
                        goto present_overlay_done;
                    }
                    const auto screen_width=static_cast<std::int32_t>(viewport.Width);
                    const auto size_adjustment=g_font_settings.size_adjustment;
                    const auto base_height=screen_width<1024?14:screen_width<1400?16:
                                           screen_width<1600?18:20;
                    g_text.requested_font_height_=static_cast<std::int32_t>(
                        static_cast<std::uint32_t>(base_height)+
                        static_cast<std::uint32_t>(size_adjustment)*2u);
                    const auto base_small_height=screen_width<1024?12:14;
                    const auto small_height=static_cast<std::int32_t>(
                        static_cast<std::uint32_t>(base_small_height)+
                        static_cast<std::uint32_t>(size_adjustment)*2u);
                    g_text.requested_small_font_height_=
                        small_height<base_small_height?base_small_height:small_height;
                    g_font_wrap_index=0;
                    samp::client::render::initialize_font_resources(
                        g_text.state_,g_font_resource_host,overlay_device);
                    if(!g_text.state_.sprite || !g_text.state_.fonts[0] || !g_text.state_.fonts[1]) {
                        samp::client::render::release_font_resources(g_text.state_,g_text.host_);
                        g_text.state_.device=nullptr;
                        static bool logged=false;
                        if(!logged) {logged=true;OutputDebugStringA("D3DX text resources could not be created");}
                        goto present_overlay_done;
                    }
                    TEXTMETRICA metrics{};
                    using Metrics=BOOL(WINAPI*)(void*,TEXTMETRICA*);
                    const auto get_metrics=reinterpret_cast<Metrics>(
                        (*static_cast<void***>(g_text.state_.fonts[0]))[6]);
                    g_text.line_height_=(get_metrics(g_text.state_.fonts[0],&metrics)?
                                         metrics.tmHeight:g_text.requested_font_height_)+1;
                    g_text.state_.main_height=g_text.line_height_-1;
                    metrics={};
                    const auto small_metrics=reinterpret_cast<Metrics>(
                        (*static_cast<void***>(g_text.state_.fonts[1]))[6]);
                    g_text.state_.small_height=small_metrics(g_text.state_.fonts[1],&metrics)?
                                               metrics.tmHeight:g_text.requested_font_height_-2;
                }
                IDirect3DStateBlock9* state = nullptr;
                if (FAILED(overlay_device->CreateStateBlock(D3DSBT_ALL, &state))) goto present_overlay_done;
                const auto begun=overlay_device->BeginScene();
                if (SUCCEEDED(begun)) {
                    if(g_network.state_==samp::client::ConnectionState::Connected) g_game.draw_gang_zones(GetTickCount());
                    RECT client{};
                    GetClientRect(*reinterpret_cast<HWND*>(0xc97c1c),&client);
                    // 0x100751b0 takes the scoreboard branch before ordinary overlays.
                    if(!g_scoreboard.visible_) {
                    struct Line {std::string text;std::uint32_t colour;std::time_t time;};
                    std::vector<Line> lines;
                    const auto& notices=g_network.connection_messages_;
                    static std::vector<std::time_t> notice_times;
                    if(notice_times.size()>notices.size()) notice_times.clear();
                    notice_times.resize(notices.size(),std::time(nullptr));
                    for(std::size_t i=0;i<notices.size();++i) lines.push_back({notices[i],0xffffffff,notice_times[i]});
                    for(const auto& message:g_network.world_.messages_)
                        lines.push_back({message.message,0xff000000|(message.colour>>8),message.received_at});
                    const auto count=std::min(static_cast<std::size_t>(g_commands.page_size),lines.size());
                    int row=0;
                    for(auto i=lines.size()-count;i<lines.size();++i) {
                        if(g_commands.timestamps) {
                            std::tm local{};localtime_s(&local,&lines[i].time);char stamp[16];
                            std::strftime(stamp,sizeof(stamp),"[%H:%M:%S]",&local);
                            lines[i].text=std::string(stamp)+" "+lines[i].text;
                        }
                        samp::client::render::TextRect line_rect{45,10+row++*g_text.line_height_,
                            static_cast<std::int32_t>(viewport.Width),static_cast<std::int32_t>(viewport.Height)};
                        samp::client::render::draw_primary_text(g_text.state_,g_text.host_,nullptr,
                            lines[i].text.c_str(),line_rect,lines[i].colour,true);
                    }
                    if(g_chat.input_.open_) {
                        if(!g_chat_dialog.sprite_) {
                            if(!g_chat_dialog.library_)
                                g_chat_dialog.library_=LoadLibraryExW(L"d3dx9_25.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);
                            if(g_chat_dialog.library_) {
                                using Font=HRESULT(WINAPI*)(IDirect3DDevice9*,INT,UINT,UINT,UINT,BOOL,DWORD,DWORD,DWORD,DWORD,LPCSTR,void**);
                                using Sprite=HRESULT(WINAPI*)(IDirect3DDevice9*,void**);
                                using Texture=HRESULT(WINAPI*)(IDirect3DDevice9*,LPCWSTR,IDirect3DTexture9**);
                                const auto font=reinterpret_cast<Font>(GetProcAddress(g_chat_dialog.library_,"D3DXCreateFontA"));
                                const auto sprite=reinterpret_cast<Sprite>(GetProcAddress(g_chat_dialog.library_,"D3DXCreateSprite"));
                                const auto texture=reinterpret_cast<Texture>(GetProcAddress(g_chat_dialog.library_,"D3DXCreateTextureFromFileW"));
                                wchar_t path[MAX_PATH]{};
                                if(font && sprite && texture && GetModuleFileNameW(nullptr,path,MAX_PATH)) {
                                    const auto atlas=std::filesystem::path(path).parent_path()/L"sampgui.png";
                                    if(FAILED(font(overlay_device,20,0,700,1,FALSE,1,0,0,0,"Arial",&g_chat_dialog.font_)) ||
                                       FAILED(sprite(overlay_device,&g_chat_dialog.sprite_)) ||
                                       FAILED(texture(overlay_device,atlas.c_str(),&g_chat_dialog.texture_))) {
                                        samp::client::render::D3DXFontDrawHost cleanup;
                                        if(g_chat_dialog.font_) {cleanup.release(g_chat_dialog.font_);g_chat_dialog.font_=nullptr;}
                                        if(g_chat_dialog.sprite_) {cleanup.release(g_chat_dialog.sprite_);g_chat_dialog.sprite_=nullptr;}
                                        if(g_chat_dialog.texture_) {g_chat_dialog.texture_->Release();g_chat_dialog.texture_=nullptr;}
                                        g_chat_dialog.first_visible_=0;
                                    }
                                }
                            }
                        }
                        if(g_chat_dialog.sprite_) {
                            constexpr int gui_font_height=20;
                            const int input_width=std::min(static_cast<int>(static_cast<float>(client.right)*0.6f),800);
                            const int input_height=14-static_cast<int>(static_cast<float>(gui_font_height)*-1.5f);
                            const int chat_bottom=count==0?110:10+(static_cast<int>(count)+1)*g_text.line_height_;
                            g_chat_dialog.layout_.bounds={40,chat_bottom,40+input_width,chat_bottom+input_height};
                            const auto [l,t,r,b]=g_chat_dialog.layout_.bounds;
                            g_chat_dialog.layout_.patches={{{l+5,t+5,r-5,b-5},{l,t,l+5,t+5},{l+5,t,r-5,t+5},
                                {r-5,t,r,t+5},{l,t+5,l+5,b-5},{r-5,t+5,r,b-5},
                                {l,b-5,l+5,b},{l+5,b-5,r-5,b},{r-5,b-5,r,b}}};
                            g_chat_dialog.layout_.text={l+9,t+9,r-9,b-9};
                            samp::client::render::D3DXFontDrawHost host;host.begin(g_chat_dialog.sprite_,0x10);
                            const auto& sources=samp::client::kChatInputSources;
                            using Draw=HRESULT(WINAPI*)(void*,IDirect3DTexture9*,const RECT*,const void*,const void*,DWORD);
                            const auto draw=reinterpret_cast<Draw>((*static_cast<void***>(g_chat_dialog.sprite_))[9]);
                            for(std::size_t i=0;i<sources.size();++i) {
                                const auto s=sources[i],patch_rect=g_chat_dialog.layout_.patches[i];
                                const float sx=float(patch_rect.right-patch_rect.left)/float(s.right-s.left);
                                const float sy=float(patch_rect.bottom-patch_rect.top)/float(s.bottom-s.top);
                                D3DMATRIX matrix{};matrix._11=sx;matrix._22=sy;matrix._33=matrix._44=1;
                                using Transform=HRESULT(WINAPI*)(void*,const D3DMATRIX*);
                                reinterpret_cast<Transform>((*static_cast<void***>(g_chat_dialog.sprite_))[5])(
                                    g_chat_dialog.sprite_,&matrix);
                                const RECT source{s.left,s.top,s.right,s.bottom};
                                const float position[]{float(patch_rect.left)/sx,float(patch_rect.top)/sy,0};
                                draw(g_chat_dialog.sprite_,g_chat_dialog.texture_,&source,nullptr,position,
                                     i==0?samp::client::kChatInputBackground:0xffffffff);
                            }
                            host.end(g_chat_dialog.sprite_);
                            const auto& text=g_chat.input_.text_;
                            g_chat_dialog.first_visible_=std::min(g_chat_dialog.first_visible_,g_chat.input_.caret_);
                            const auto available=g_chat_dialog.layout_.text.right-g_chat_dialog.layout_.text.left;
                            while(g_chat_dialog.first_visible_<g_chat.input_.caret_) {
                                const auto candidate=std::string_view(text).substr(g_chat_dialog.first_visible_,
                                    g_chat.input_.caret_-g_chat_dialog.first_visible_);
                                samp::client::render::TextRect measured{};
                                host.draw(g_chat_dialog.font_,nullptr,candidate.data(),static_cast<int>(candidate.size()),
                                          measured,DT_CALCRECT|DT_SINGLELINE,0xffffffff);
                                if(measured.right-measured.left<=available) break;
                                ++g_chat_dialog.first_visible_;
                            }
                            while(g_chat_dialog.first_visible_>0) {
                                const auto candidate=std::string_view(text).substr(g_chat_dialog.first_visible_-1,
                                    g_chat.input_.caret_-g_chat_dialog.first_visible_+1);
                                samp::client::render::TextRect measured{};
                                host.draw(g_chat_dialog.font_,nullptr,candidate.data(),static_cast<int>(candidate.size()),
                                          measured,DT_CALCRECT|DT_SINGLELINE,0xffffffff);
                                if(measured.right-measured.left>available) break;
                                --g_chat_dialog.first_visible_;
                            }
                            std::vector<int> prefix_widths(text.size()+1);
                            for(std::size_t end=g_chat_dialog.first_visible_+1;end<=text.size();++end) {
                                const auto prefix=std::string_view(text).substr(g_chat_dialog.first_visible_,
                                                                                end-g_chat_dialog.first_visible_);
                                samp::client::render::TextRect measured{};
                                host.draw(g_chat_dialog.font_,nullptr,prefix.data(),static_cast<int>(prefix.size()),
                                          measured,DT_CALCRECT|DT_SINGLELINE,0xffffffff);
                                prefix_widths[end]=measured.right-measured.left;
                            }
                            const auto first=std::max(g_chat_dialog.first_visible_,
                                std::min(g_chat.input_.caret_,g_chat.input_.anchor_));
                            const auto last=std::max(g_chat.input_.caret_,g_chat.input_.anchor_);
                            const auto clip=g_chat_dialog.layout_.text;
                            const RECT scissor{clip.left,clip.top,clip.right,clip.bottom};
                            overlay_device->SetScissorRect(&scissor);overlay_device->SetRenderState(D3DRS_SCISSORTESTENABLE,TRUE);
                            const samp::client::UiRect selected{clip.left+prefix_widths[first],clip.top,
                                clip.left+prefix_widths[std::max(first,last)],clip.bottom};
                            if(first<last && selected.right>selected.left && selected.bottom>selected.top) {
                                struct Vertex {float x,y,z,rhw;DWORD colour;};
                                const auto sl=float(selected.left)-.5f,st=float(selected.top)-.5f;
                                const auto sr=float(selected.right)-.5f,sb=float(selected.bottom)-.5f;
                                const Vertex vertices[]{{sl,st,0,1,samp::client::kChatInputSelection},
                                    {sr,st,0,1,samp::client::kChatInputSelection},
                                    {sl,sb,0,1,samp::client::kChatInputSelection},
                                    {sr,sb,0,1,samp::client::kChatInputSelection}};
                                overlay_device->SetVertexShader(nullptr);overlay_device->SetPixelShader(nullptr);
                                overlay_device->SetFVF(D3DFVF_XYZRHW|D3DFVF_DIFFUSE);overlay_device->SetTexture(0,nullptr);
                                overlay_device->SetRenderState(D3DRS_ZENABLE,FALSE);overlay_device->SetRenderState(D3DRS_ALPHABLENDENABLE,TRUE);
                                overlay_device->SetRenderState(D3DRS_SRCBLEND,D3DBLEND_SRCALPHA);overlay_device->SetRenderState(D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA);
                                overlay_device->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_SELECTARG1);overlay_device->SetTextureStageState(0,D3DTSS_COLORARG1,D3DTA_DIFFUSE);
                                overlay_device->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_SELECTARG1);overlay_device->SetTextureStageState(0,D3DTSS_ALPHAARG1,D3DTA_DIFFUSE);
                                overlay_device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP,2,vertices,sizeof(Vertex));
                            }
                            host.begin(g_chat_dialog.sprite_,0x10);
                            D3DMATRIX identity_matrix{};identity_matrix._11=identity_matrix._22=identity_matrix._33=identity_matrix._44=1;
                            using Transform=HRESULT(WINAPI*)(void*,const D3DMATRIX*);
                            reinterpret_cast<Transform>((*static_cast<void***>(g_chat_dialog.sprite_))[5])(
                                g_chat_dialog.sprite_,&identity_matrix);
                            samp::client::render::TextRect rect{clip.left,clip.top,clip.right,clip.bottom};
                            host.draw(g_chat_dialog.font_,g_chat_dialog.sprite_,text.c_str()+g_chat_dialog.first_visible_,
                                      -1,rect,4,samp::client::kChatInputText);
                            if(first<last) {
                                rect={selected.left,selected.top,selected.right,selected.bottom};
                                host.draw(g_chat_dialog.font_,g_chat_dialog.sprite_,text.c_str()+first,
                                          static_cast<int>(last-first),rect,4,samp::client::kChatInputSelectedText);
                            }
                            host.end(g_chat_dialog.sprite_);
                            const int caret_x=clip.left+prefix_widths[g_chat.input_.caret_];
                            const int caret_right=g_chat.input_.insert_mode_ || g_chat.input_.caret_==text.size()
                                ?caret_x+1:clip.left+prefix_widths[g_chat.input_.caret_+1];
                            const samp::client::UiRect caret{caret_x-1,clip.top,caret_right,clip.bottom};
                            if(caret.right>caret.left && caret.bottom>caret.top) {
                                struct Vertex {float x,y,z,rhw;DWORD colour;};
                                const auto cl=float(caret.left)-.5f,ct=float(caret.top)-.5f;
                                const auto cr=float(caret.right)-.5f,cb=float(caret.bottom)-.5f;
                                const Vertex vertices[]{{cl,ct,0,1,samp::client::kChatInputCaret},
                                    {cr,ct,0,1,samp::client::kChatInputCaret},
                                    {cl,cb,0,1,samp::client::kChatInputCaret},
                                    {cr,cb,0,1,samp::client::kChatInputCaret}};
                                overlay_device->SetVertexShader(nullptr);overlay_device->SetPixelShader(nullptr);
                                overlay_device->SetFVF(D3DFVF_XYZRHW|D3DFVF_DIFFUSE);overlay_device->SetTexture(0,nullptr);
                                overlay_device->SetRenderState(D3DRS_ZENABLE,FALSE);overlay_device->SetRenderState(D3DRS_ALPHABLENDENABLE,TRUE);
                                overlay_device->SetRenderState(D3DRS_SRCBLEND,D3DBLEND_SRCALPHA);overlay_device->SetRenderState(D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA);
                                overlay_device->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_SELECTARG1);overlay_device->SetTextureStageState(0,D3DTSS_COLORARG1,D3DTA_DIFFUSE);
                                overlay_device->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_SELECTARG1);overlay_device->SetTextureStageState(0,D3DTSS_ALPHAARG1,D3DTA_DIFFUSE);
                                overlay_device->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP,2,vertices,sizeof(Vertex));
                            }
                            overlay_device->SetRenderState(D3DRS_SCISSORTESTENABLE,FALSE);
                        }
                    }
                    g_chat.bounds_=g_chat_dialog.layout_.bounds;
                    g_chat.hit_test_font_=g_chat_dialog.font_;
                    g_chat.hit_test_first_visible_=g_chat_dialog.first_visible_;
                    g_chat.hit_test_text_left_=g_chat_dialog.layout_.text.left;
                    static bool chat_was_open=false;
                    if(g_chat.input_.open_ && !chat_was_open) {
                        const auto rect=g_chat_dialog.layout_.bounds;char message[180];
                        std::snprintf(message,sizeof(message),"chat edit bounds %d,%d -> %d,%d; client %ldx%ld; viewport %lux%lu",
                                      rect.left,rect.top,rect.right,rect.bottom,client.right,client.bottom,
                                      viewport.Width,viewport.Height);
                        OutputDebugStringA(message);
                    }
                    chat_was_open=g_chat.input_.open_;
                    }
                    std::vector<samp::client::ScoreboardPlayerView> players;
                    if(g_scoreboard.visible_) {
                        g_network.request_score_pings();
                        players.push_back({static_cast<std::uint16_t>(g_network.player_id_),
                                           g_network.player_name_,0xff000000u|(g_network.player_colour_>>8),
                                           g_network.local_score_ping_.score,g_network.local_score_ping_.ping,false});
                        for(const auto& [id,player]:g_network.world_.players_) {
                            if(id==g_network.player_id_ || id<0 || id>=1004) continue;
                            players.push_back({static_cast<std::uint16_t>(id),player.name,
                                               0xff000000u|(player.colour>>8),player.score_ping.score,
                                               player.score_ping.ping,player.npc});
                        }
                    }
                    g_scoreboard.draw(overlay_device,g_network.server_name_,
                                      static_cast<std::uint16_t>(g_network.player_id_),players,
                                      client.right,client.bottom,&g_text.state_);
                    if(g_text.state_.sprite) {
                        if(g_death_window.device!=overlay_device || !g_death_window.sprite) {
                            samp::client::render::initialize_death_window(g_death_window,g_death_host,overlay_device);
                            if(g_death_window.sprite && !g_death_window.auxiliary_created) {
                                g_death_host.create_font(overlay_device,
                                    samp::client::render::DeathFont{20,0,400,1,0,2,0,0,0,"SAMPAUX3"},
                                    g_death_window.auxiliary_font);
                                g_death_host.create_font(overlay_device,
                                    samp::client::render::DeathFont{22,0,400,1,0,2,0,0,0,"SAMPAUX3"},
                                    g_death_window.auxiliary_outline_font);
                                g_death_window.auxiliary_created=1;
                            }
                            g_death_message_cursor=0;
                        }
                        g_death_window.visible=g_network.state_==samp::client::ConnectionState::Connected &&
                                               g_network.spawn_accepted_;
                        const auto& messages=g_network.world_.stream.death_messages;
                        static int death_player_id=-1;
                        if(death_player_id!=g_network.player_id_ || g_death_message_cursor>messages.size()) {
                            std::memset(g_death_window.entries.data(),0,sizeof(g_death_window.entries));
                            g_death_message_cursor=0;
                            death_player_id=g_network.player_id_;
                        }
                        const auto player_name_and_colour=[&](std::uint16_t id,std::string& storage,
                                                              std::uint32_t& colour)->const char* {
                            if(id==0xffffu) return nullptr;
                            if(g_network.player_id_>=0 && id==static_cast<std::uint16_t>(g_network.player_id_)) {
                                colour=0xff000000u|(g_network.player_colour_>>8);
                                return g_network.player_name_.c_str();
                            }
                            const auto player=g_network.world_.players_.find(id);
                            if(player==g_network.world_.players_.end()) return nullptr;
                            storage=player->second.name;
                            colour=0xff000000u|(player->second.colour>>8);
                            return storage.c_str();
                        };
                        while(g_death_message_cursor<messages.size()) {
                            const auto& message=messages[g_death_message_cursor++];
                            std::string killer_storage,victim_storage;
                            std::uint32_t killer_colour=0xffffffffu,victim_colour=0xffffffffu;
                            const char* killer=player_name_and_colour(message.killer,killer_storage,killer_colour);
                            const char* victim=player_name_and_colour(message.victim,victim_storage,victim_colour);
                            auto& entries=g_death_window.entries;
                            std::memmove(entries.data(),entries.data()+1,
                                         4*sizeof(samp::client::render::DeathEntry));
                            auto& entry=entries.back();
                            entry.reason=message.reason;
                            entry.killer_colour=killer_colour;
                            entry.victim_colour=victim_colour;
                            if(killer) std::strcpy(entry.killer,killer); else entry.killer[0]='\0';
                            if(victim) std::strcpy(entry.victim,victim); else entry.victim[0]='\0';
                        }
                        while(g_test_death_windows) {
                            --g_test_death_windows;
                            struct TestDeathEntry {const char* killer;const char* victim;std::uint8_t reason;};
                            constexpr TestDeathEntry entries[]{
                                {"Pooper","Pooper333",1},{"Pooper","Pooper",5},
                                {"Pooper","Pooper",15},{"Pooper","Pooper",14},
                                {"Pooper","Pooper",2},{nullptr,"PooperPooperPooper0001",5},
                                {nullptr,"Pooper",255},{"Pooper","PooperPooperPooper0001",0}
                            };
                            for(const auto& test:entries) {
                                auto& death_entries=g_death_window.entries;
                                std::memmove(death_entries.data(),death_entries.data()+1,
                                             4*sizeof(samp::client::render::DeathEntry));
                                auto& entry=death_entries.back();
                                entry.reason=test.reason;
                                entry.killer_colour=0xffffffffu;
                                entry.victim_colour=0xffffffffu;
                                if(test.killer) std::strcpy(entry.killer,test.killer); else entry.killer[0]='\0';
                                if(test.victim) std::strcpy(entry.victim,test.victim); else entry.victim[0]='\0';
                            }
                        }
                        samp::client::render::render_death_window(
                            g_death_window,g_death_host,client.right,client.bottom);
                    }
                    // Original Present75229 diagnostics and74dc0 nametags use
                    // the same device matrices as the game's rendered scene.
                    if(!g_scoreboard.visible_ && g_text.state_.fonts[1]) {
                        using namespace samp::client::render;
                        D3DMATRIX view{},projection{},identity{};
                        identity._11=identity._22=identity._33=identity._44=1;
                        overlay_device->GetTransform(D3DTS_VIEW,&view);
                        overlay_device->GetTransform(D3DTS_PROJECTION,&projection);
                        WorldLabelHost labels;
                        labels.project=[&](std::array<float,3> point)->std::optional<std::array<float,3>> {
                            using Project=float*(WINAPI*)(float*,const float*,const D3DVIEWPORT9*,const D3DMATRIX*,const D3DMATRIX*,const D3DMATRIX*);
                            const auto project=reinterpret_cast<Project>(GetProcAddress(g_text.library_,"D3DXVec3Project"));
                            if(!project) return {};
                            std::array<float,3> output;project(output.data(),point.data(),&viewport,&projection,&view,&identity);return output;
                        };
                        labels.line_of_sight=[&](std::array<float,3> point) {
                            const auto* camera=reinterpret_cast<const float*>(0xb6f338);
                            return g_game.script_.command(0x06bd,"ffffffiiiii",static_cast<double>(point[0]),static_cast<double>(point[1]),static_cast<double>(point[2]),
                                static_cast<double>(camera[0]),static_cast<double>(camera[1]),static_cast<double>(camera[2]),1u,0u,0u,1u,0u)!=0;
                        };
                        labels.measure=[&](std::string_view text) {
                            TextExtent extent;const std::string terminated(text);
                            measure_small_text(g_text.state_,g_text.host_,&extent,terminated.c_str(),0);
                            return std::array<int,2>{extent.width,extent.height};
                        };
                        labels.draw=[&](std::string_view text,TextRect rect,std::uint32_t colour,std::uint32_t flags,bool shadow) {
                            const std::string terminated(text);draw_text(g_text.state_,g_text.host_,nullptr,terminated.c_str(),rect,flags,colour,shadow);
                        };
                        labels.measure_status=[&] {
                            TextRect rect{};if(g_death_window.auxiliary_outline_font)
                                g_text.host_.draw(g_death_window.auxiliary_outline_font,nullptr,"C",1,rect,0x505,0);
                            return std::array<int,2>{rect.right-rect.left,rect.bottom-rect.top};
                        };
                        labels.status=[&](bool foreground,TextRect rect,std::uint32_t colour) {
                            auto* font=foreground?g_death_window.auxiliary_font:g_death_window.auxiliary_outline_font;
                            if(font) g_text.host_.draw(font,nullptr,foreground?"E":"C",1,rect,0x105,colour);
                        };
                        const auto* local=*reinterpret_cast<const std::uint8_t**>(0xb7cd98);
                        const auto* local_matrix=local?*reinterpret_cast<const float* const*>(local+0x14):nullptr;
                        if(g_commands.vehicle_labels && local_matrix) for(const auto& [id,runtime]:g_game.remote_vehicles_) {
                            const auto* entity=static_cast<const std::uint8_t*>(runtime.entity);if(!entity) continue;
                            const auto* matrix=*reinterpret_cast<const float* const*>(entity+0x14);if(!matrix) continue;
                            const float dx=matrix[12]-local_matrix[12],dy=matrix[13]-local_matrix[13],dz=matrix[14]-local_matrix[14];
                            const float distance=std::sqrt(dx*dx+dy*dy+dz*dz);if(!(distance<20.f)) continue;
                            const auto type=*reinterpret_cast<const std::uint16_t*>(entity+0x22);
                            int subtype=0;const auto table=*reinterpret_cast<const std::uintptr_t*>(entity);
                            constexpr std::pair<std::uintptr_t,int> types[]{{0x871120,1},{0x8721a0,4},{0x871360,2},{0x871948,5},{0x871680,3},{0x871528,6},{0x872370,7}};
                            for(const auto& item:types) if(item.first==table) {subtype=item.second;break;}
                            const auto known=g_network.world_.vehicles_.find(id);
                            const float sx=known==g_network.world_.vehicles_.end()?0:known->second.x;
                            const float sy=known==g_network.world_.vehicles_.end()?0:known->second.y;
                            const float sz=known==g_network.world_.vehicles_.end()?0:known->second.z;
                            const unsigned preloaded=type>=400 && type<=611?g_network.world_.stream.preloaded_vehicles[type-400]:0;
                            char text[512];std::snprintf(text,sizeof(text),"[id: %d, type: %d subtype: %d Health: %.1f preloaded: %u]\r\nDistance: %.2fm\r\nPassengerSeats: %u\r\ncPos: %.3f,%.3f,%.3f\r\nsPos: %.3f,%.3f,%.3f",id,type,subtype,
                                static_cast<double>(*reinterpret_cast<const float*>(entity+0x4c0)),preloaded,static_cast<double>(distance),entity[0x488],
                                static_cast<double>(matrix[12]),static_cast<double>(matrix[13]),static_cast<double>(matrix[14]),static_cast<double>(sx),static_cast<double>(sy),static_cast<double>(sz));
                            draw_world_label(labels,{matrix[12],matrix[13],matrix[14]},text,0xff358bd4,true,false);
                        }
                        for(const auto& [id,remote]:g_game.remote_peds_.peds_) {
                            const auto known=g_network.world_.players_.find(id);
                            if(known==g_network.world_.players_.end() || !known->second.streamed_in || !remote.ped) continue;
                            const auto hidden=g_network.world_.stream.name_tags.find(id);
                            if(!g_network.world_.stream.show_name_tags || (hidden!=g_network.world_.stream.name_tags.end() && !hidden->second)) continue;
                            std::array<float,3> head{};
                            reinterpret_cast<void(__thiscall*)(void*,float*,int,bool)>(0x5e4280)(remote.ped,head.data(),8,false);
                            const auto* camera=reinterpret_cast<const float*>(0xb6f338);
                            const float dx=head[0]-camera[0],dy=head[1]-camera[1],dz=head[2]-camera[2];
                            const float distance=std::sqrt(dx*dx+dy*dy+dz*dz);
                            if(!(distance<g_network.world_.stream.name_tag_distance) || (g_network.world_.stream.name_tag_los && !labels.line_of_sight(head))) continue;
                            const auto text=known->second.name+" ("+std::to_string(id)+")";
                            const int status=GetTickCount()-remote.updated_at>=1500?2:0;
                            draw_name_tag(labels,head,text,0xff000000|(known->second.colour>>8),distance,g_commands.name_tag_status,status);
                        }
                        if(g_commands.camera_target_debug && g_network.world_.stream.camera_targeting) {
                            constexpr const char* formats[]{"CAMERA_TARGET_TYPE_OBJECT: ID(%u)","CAMERA_TARGET_TYPE_VEHICLE: ID(%u)","CAMERA_TARGET_TYPE_PLAYER: ID(%u)","CAMERA_TARGET_TYPE_ACTOR: ID(%u)"};
                            for(unsigned kind=0;kind<4;++kind) {
                                const auto id=g_game.camera_targets_[kind];if(id==0xffff) continue;
                                std::array<float,3> position{};bool found=false;
                                if(kind==0) {const auto object=g_network.world_.objects_.find(id);if(object!=g_network.world_.objects_.end()) {position={object->second.x,object->second.y,object->second.z};found=true;}}
                                if(kind==1) {const auto vehicle=g_game.remote_vehicles_.find(id);if(vehicle!=g_game.remote_vehicles_.end() && vehicle->second.entity) {const auto* matrix=*reinterpret_cast<const float* const*>(static_cast<const std::uint8_t*>(vehicle->second.entity)+0x14);if(matrix) {std::memcpy(position.data(),matrix+12,12);found=true;}}}
                                if(kind==2) {const auto player=g_game.remote_peds_.peds_.find(id);if(player!=g_game.remote_peds_.peds_.end() && player->second.ped) {const auto* matrix=*reinterpret_cast<const float* const*>(static_cast<const std::uint8_t*>(player->second.ped)+0x14);if(matrix) {std::memcpy(position.data(),matrix+12,12);found=true;}}}
                                if(kind==3) {const auto actor=g_game.runtime_actors_.find(id);if(actor!=g_game.runtime_actors_.end() && actor->second.entity) {const auto* matrix=*reinterpret_cast<const float* const*>(static_cast<const std::uint8_t*>(actor->second.entity)+0x14);if(matrix) {std::memcpy(position.data(),matrix+12,12);found=true;}}}
                                if(found) {char text[80];std::snprintf(text,sizeof(text),formats[kind],id);draw_world_label(labels,position,text,0xffd47b75,true,false);}
                            }
                        }
                    }
                    // Draw the shared selection buttons and cursor after the scoreboard.
                    auto& selection=g_selection;
                    if((selection.visible_ || selection.mouse_enabled_) && selection.sprite_) {
                        if(selection.visible_) {
                            struct SelectionVertex {float x,y,z,rhw;DWORD colour;};
                            const auto left=float(selection.rectangle_.left)-.5f;
                            const auto top=float(selection.rectangle_.top)-.5f;
                            const auto right=float(selection.rectangle_.right)-.5f;
                            const auto bottom=float(selection.rectangle_.bottom)-.5f;
                            const SelectionVertex vertices[]{{left,top,0,1,0x960a0a0a},
                                {right,top,0,1,0x960a0a0a},{left,bottom,0,1,0x960a0a0a},
                                {right,bottom,0,1,0x960a0a0a}};
                            selection.device_->SetVertexShader(nullptr);
                            selection.device_->SetPixelShader(nullptr);
                            selection.device_->SetFVF(D3DFVF_XYZRHW|D3DFVF_DIFFUSE);
                            selection.device_->SetTexture(0,nullptr);
                            selection.device_->SetRenderState(D3DRS_ZENABLE,FALSE);
                            selection.device_->SetRenderState(D3DRS_ALPHABLENDENABLE,TRUE);
                            selection.device_->SetRenderState(D3DRS_SRCBLEND,D3DBLEND_SRCALPHA);
                            selection.device_->SetRenderState(D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA);
                            selection.device_->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_SELECTARG1);
                            selection.device_->SetTextureStageState(0,D3DTSS_COLORARG1,0);
                            selection.device_->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_SELECTARG1);
                            selection.device_->SetTextureStageState(0,D3DTSS_ALPHAARG1,0);
                            selection.device_->DrawPrimitiveUP(D3DPT_TRIANGLESTRIP,2,vertices,
                                                               sizeof(SelectionVertex));
                        }
                        samp::client::render::D3DXFontDrawHost selection_draw;
                        selection_draw.begin(selection.sprite_,0x10);
                        samp::client::SelectionDrawHost draw_host;
                        using SetTransform=HRESULT(WINAPI*)(void*,const D3DMATRIX*);
                        using DrawSprite=HRESULT(WINAPI*)(void*,IDirect3DTexture9*,const RECT*,
                                                         const void*,const void*,DWORD);
                        draw_host.sprite=[&selection](const samp::client::UiElement& element,
                                                      samp::client::UiRect& rectangle) {
                            if(element.texture_colour.current[3]==0) return;
                            const auto sx=float(rectangle.right-rectangle.left)/
                                          float(element.source.right-element.source.left);
                            const auto sy=float(rectangle.bottom-rectangle.top)/
                                          float(element.source.bottom-element.source.top);
                            D3DMATRIX matrix{};matrix._11=sx;matrix._22=sy;
                            matrix._33=matrix._44=1;
                            reinterpret_cast<SetTransform>(
                                (*static_cast<void***>(selection.sprite_))[5])(
                                    selection.sprite_,&matrix);
                            const RECT source{element.source.left,element.source.top,
                                              element.source.right,element.source.bottom};
                            const float position[]{float(rectangle.left+selection.rectangle_.left)/sx,
                                                   float(rectangle.top+selection.rectangle_.top)/sy,0};
                            const auto byte=[](float value)->std::uint32_t {
                                return value>=1?255:value<=0?0:
                                    static_cast<std::uint32_t>(static_cast<double>(value)*255.0+0.5);
                            };
                            const auto& channels=element.texture_colour.current;
                            const DWORD tint=(byte(channels[3])<<24)|(byte(channels[0])<<16)|
                                             (byte(channels[1])<<8)|byte(channels[2]);
                            reinterpret_cast<DrawSprite>(
                                (*static_cast<void***>(selection.sprite_))[9])(
                                    selection.sprite_,selection.texture_,&source,nullptr,position,tint);
                        };
                        draw_host.text=[&selection](const char* value,
                                                    const samp::client::UiElement& element,
                                                    samp::client::UiRect& rectangle) {
                            if(element.font_colour.current[3]==0) return;
                            D3DMATRIX matrix{};
                            matrix._11=matrix._22=matrix._33=matrix._44=1;
                            using SetTransform=HRESULT(WINAPI*)(void*,const D3DMATRIX*);
                            reinterpret_cast<SetTransform>(
                                (*static_cast<void***>(selection.sprite_))[5])(
                                    selection.sprite_,&matrix);
                            samp::client::render::TextRect target{
                                rectangle.left+selection.rectangle_.left,
                                rectangle.top+selection.rectangle_.top,
                                rectangle.right+selection.rectangle_.left,
                                rectangle.bottom+selection.rectangle_.top};
                            const auto byte=[](float channel)->std::uint32_t {
                                return channel>=1?255:channel<=0?0:
                                    static_cast<std::uint32_t>(static_cast<double>(channel)*255.0+0.5);
                            };
                            const auto& channels=element.font_colour.current;
                            const DWORD tint=(byte(channels[3])<<24)|(byte(channels[0])<<16)|
                                             (byte(channels[1])<<8)|byte(channels[2]);
                            samp::client::render::D3DXFontDrawHost font_host;
                            font_host.draw(selection.font_,selection.sprite_,value,-1,target,
                                           element.format,tint);
                        };
                        if(selection.visible_)
                            for(auto& button:selection.buttons_)
                                samp::client::draw_selection_button(button,1.0f,draw_host);
                        // Software cursor fallback for hosts where the D3D
                        // device cursor is invisible. Preserve the original
                        // mouse.png image and the GUI's client coordinates.
                        if(selection.cursor_inside_ && selection.cursor_) {
                            D3DMATRIX matrix{};
                            matrix._11=matrix._22=matrix._33=matrix._44=1;
                            reinterpret_cast<SetTransform>((*static_cast<void***>(selection.sprite_))[5])(
                                selection.sprite_,&matrix);
                            const RECT source{0,0,32,32};
                            const float position[]{float(selection.cursor_position_.x),float(selection.cursor_position_.y),0};
                            reinterpret_cast<DrawSprite>((*static_cast<void***>(selection.sprite_))[9])(
                                selection.sprite_,selection.cursor_,&source,nullptr,position,0xffffffff);
                        }

                        selection_draw.end(selection.sprite_);
                    }
                    overlay_device->EndScene();
                    static bool logged=false;
                    if(!logged) {logged=true;OutputDebugStringA("D3DX connection text was submitted on the game's rendering thread");}
                } else {
                    static bool logged=false;
                    if(!logged) {logged=true;char message[100];std::snprintf(message,sizeof(message),"overlay BeginScene failed: %08lx",begun);OutputDebugStringA(message);}
                }
                state->Apply();
                state->Release();

        }
    }
    present_overlay_done:
        ;
    using Present = HRESULT(WINAPI*)(IDirect3DDevice9*, const RECT*, const RECT*, HWND,
                                    const RGNDATA*);
    const auto original = reinterpret_cast<Present>(
        g_trampoline_memory + kD3D9PresentSlot * kD3D9TrampolineSize);
    return original(present_device, present_source, destination, window, dirty);
}

// source adapter only; no established separate native entry
HRESULT WINAPI samp_d3d_reset(IDirect3DDevice9* device, D3DPRESENT_PARAMETERS* parameters) {
    const bool text_resources=g_text.state_.sprite!=nullptr;
    if(text_resources)
        samp::client::render::font_resources_lost(g_text.state_,g_font_resource_host);
    // The official 0x10069580 cleanup is inlined here; the portable backend
    // has no separate native cleanup entry of its own.
    if(g_death_window.name_font) {g_death_host.release(g_death_window.name_font);g_death_window.name_font=nullptr;}
    if(g_death_window.weapon_font) {g_death_host.release(g_death_window.weapon_font);g_death_window.weapon_font=nullptr;}
    if(g_death_window.outline_font) {g_death_host.release(g_death_window.outline_font);g_death_window.outline_font=nullptr;}
    if(g_death_window.sprite) {g_death_host.release(g_death_window.sprite);g_death_window.sprite=nullptr;}
    if(g_death_window.auxiliary_font) {
        g_death_host.release(g_death_window.auxiliary_font);
        g_death_window.auxiliary_font=nullptr;
    }
    if(g_death_window.auxiliary_outline_font) {
        g_death_host.release(g_death_window.auxiliary_outline_font);
        g_death_window.auxiliary_outline_font=nullptr;
    }
    g_death_window.device=nullptr;g_death_window.auxiliary_created=0;
    samp::client::render::D3DXFontDrawHost chat_cleanup;
    if(g_chat_dialog.font_) {chat_cleanup.release(g_chat_dialog.font_);g_chat_dialog.font_=nullptr;}
    if(g_chat_dialog.sprite_) {chat_cleanup.release(g_chat_dialog.sprite_);g_chat_dialog.sprite_=nullptr;}
    if(g_chat_dialog.texture_) {g_chat_dialog.texture_->Release();g_chat_dialog.texture_=nullptr;}
    g_chat_dialog.first_visible_=0;
    if(g_scoreboard.impl_) {
        auto& scoreboard=*g_scoreboard.impl_;
        samp::client::render::D3DXFontDrawHost scoreboard_cleanup;
        if(scoreboard.font) {scoreboard_cleanup.release(scoreboard.font);scoreboard.font=nullptr;}
        if(scoreboard.sprite) {scoreboard_cleanup.release(scoreboard.sprite);scoreboard.sprite=nullptr;}
        if(scoreboard.texture) {scoreboard.texture->Release();scoreboard.texture=nullptr;}
    }
    g_selection.cursor_inside_=false;
    samp::client::render::D3DXFontDrawHost selection_cleanup;
    if(g_selection.font_) {selection_cleanup.release(g_selection.font_);g_selection.font_=nullptr;}
    if(g_selection.sprite_) {selection_cleanup.release(g_selection.sprite_);g_selection.sprite_=nullptr;}
    if(g_selection.texture_) {g_selection.texture_->Release();g_selection.texture_=nullptr;}
    if(g_selection.cursor_) {g_selection.cursor_->Release();g_selection.cursor_=nullptr;}
    using Reset = HRESULT(WINAPI*)(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
    const auto result=reinterpret_cast<Reset>(
        g_trampoline_memory + kD3D9ResetSlot * kD3D9TrampolineSize)(device,parameters);
    if(SUCCEEDED(result) && text_resources)
        samp::client::render::font_resources_reset(g_text.state_,g_font_resource_host);
    return result;
}

namespace {

// The client worker thread runs startup and the game/network service loop.
// source adapter only; no established separate native entry
DWORD WINAPI worker(LPVOID) {
    char line[512];
    if (!g_game.prepare_boot()) {
        OutputDebugStringA("GTA boot preparation failed; startup stopped");
        return 1;
    }
    using OpenFile = HANDLE(WINAPI*)(LPCSTR,DWORD,DWORD,LPSECURITY_ATTRIBUTES,DWORD,DWORD,HANDLE);
    static OpenFile original_open = nullptr;
    static std::map<std::uint32_t,std::filesystem::path> asset_files;
    // Match CreateFileA's x86 WINAPI ABI: its callee removes seven arguments.
    // Unary '+' on an auto lambda selects cdecl and corrupts GTA's stack.
    static const OpenFile open_asset = [](LPCSTR name,DWORD access,DWORD share,
                                      LPSECURITY_ATTRIBUTES attributes,DWORD disposition,
                                      DWORD flags,HANDLE templ) -> HANDLE {
        if(name!=nullptr) {
            std::string normalized(name);
            char* base=normalized.data();
            const auto length=std::strlen(base);
            if(length && base[length-1]==' ') base[length-1]='\0';
            char* path_cursor=base+std::strlen(base);
            while(path_cursor>base) {
                if(path_cursor[-1]=='/' || path_cursor[-1]=='\\') {base=path_cursor;break;}
                --path_cursor;
            }
            for(char* cursor=base;*cursor!='\0';++cursor)
                if(*cursor>='A'&&*cursor<='Z') *cursor=static_cast<char>(*cursor-'A'+'a');
            const auto hash=samp::client::g_archive_hash.HashString(base);
            const auto found=asset_files.find(hash);
            if(found!=asset_files.end())
                return CreateFileW(found->second.c_str(),access,share,attributes,
                                   OPEN_EXISTING,flags,templ);
        }
        return original_open(name,access,share,attributes,disposition,flags,templ);
    };
    wchar_t executable[MAX_PATH]{};
    if(GetModuleFileNameW(nullptr,executable,MAX_PATH)==0) return 1;
    const auto game=std::filesystem::path(executable).parent_path();
    samp::client::DlArchive archive;
    if(!archive.load(game/L"samp.saa")) {
        OutputDebugStringA(archive.error_.c_str());
        return 1;
    }
    const auto cache=game/L".clone-assets";
    std::error_code error;
    std::filesystem::create_directories(cache,error);
    if(error) {
        OutputDebugStringA("could not create the decrypted game-asset cache");
        return 1;
    }
    for(const auto hash:archive.file_hashes_) {
        std::vector<std::uint8_t> data;
        if(!archive.extract(hash,data)) {
            OutputDebugStringA("could not decode an SAA resource");
            return 1;
        }
        char name[24];
        std::snprintf(name,sizeof(name),"%08x.bin",hash);
        const auto path=cache/name;
        std::ofstream out(path,std::ios::binary|std::ios::trunc);
        out.write(reinterpret_cast<const char*>(data.data()),
                  static_cast<std::streamsize>(data.size()));
        out.close();
        if(!out) {
            OutputDebugStringA("could not cache a decoded game resource");
            return 1;
        }
        asset_files.emplace(hash,path);
    }
    auto* base=reinterpret_cast<std::uint8_t*>(GetModuleHandleW(nullptr));
    const auto* dos=reinterpret_cast<const IMAGE_DOS_HEADER*>(base);
    const auto* pe=reinterpret_cast<const IMAGE_NT_HEADERS32*>(base+dos->e_lfanew);
    const auto rva=pe->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress;
    if(rva==0) return 1;
    const auto* descriptor=reinterpret_cast<const IMAGE_IMPORT_DESCRIPTOR*>(base+rva);
    bool overlay_installed=false;
    for(;descriptor->Name!=0 && !overlay_installed;++descriptor) {
        if(descriptor->OriginalFirstThunk==0) continue;
        const auto* names=reinterpret_cast<const IMAGE_THUNK_DATA32*>(base+descriptor->OriginalFirstThunk);
        auto* slots=reinterpret_cast<IMAGE_THUNK_DATA32*>(base+descriptor->FirstThunk);
        for(;names->u1.AddressOfData!=0;++names,++slots) {
            if(IMAGE_SNAP_BY_ORDINAL32(names->u1.Ordinal)) continue;
            const auto* import=reinterpret_cast<const IMAGE_IMPORT_BY_NAME*>(base+names->u1.AddressOfData);
            if(std::strcmp(reinterpret_cast<const char*>(import->Name),"CreateFileA")!=0) continue;
            original_open=reinterpret_cast<OpenFile>(slots->u1.Function);
            DWORD previous=0;
            if(!VirtualProtect(&slots->u1.Function,4,PAGE_READWRITE,&previous)) return 1;
            InterlockedExchangePointer(reinterpret_cast<void* volatile*>(&slots->u1.Function),
                                       reinterpret_cast<void*>(+open_asset));
            DWORD ignored=0;
            VirtualProtect(&slots->u1.Function,4,previous,&ignored);
            overlay_installed=true;
            break;
        }
    }
    if(!overlay_installed) {
        OutputDebugStringA("GTA's CreateFileA import was not found");
        return 1;
    }
    OutputDebugStringA("authenticated samp.saa; official game data is available to GTA");
    const samp::client::CommandLine command_line=
        samp::client::parse_command_line(GetCommandLineA());
    samp::client::ConnectionParameters parameters;
    parameters.host=command_line.host;
    parameters.port=static_cast<std::uint16_t>(command_line.port);
    parameters.name=command_line.name;
    parameters.password=command_line.password;
    const auto* user_files_directory=reinterpret_cast<const char*>(0x00C92368);
    if(user_files_directory && user_files_directory[0]!='\0')
        parameters.user_files_directory=user_files_directory;
    parameters.defer_class_selection=true;
    std::snprintf(line,sizeof(line),"host='%s' port=%d name='%s'",parameters.host.c_str(),
                  parameters.port,parameters.name.c_str());
    OutputDebugStringA(line);
    if(!command_line.debug && (parameters.host.empty() || parameters.port==0)) return 1;
    samp::client::ConnectionWait connection_wait;
    bool connection_prepared=false;
    // Original registration10068b50 and configuration10065cf0. The normal
    // network mode deliberately excludes the six -d-only command names.
    g_game.debug_mode_=g_commands.debug=command_line.debug;
    g_commands.network_present=!command_line.debug;
    g_network.assets_.initialize_user_directory(parameters.user_files_directory);
    g_commands.samp_directory=g_network.assets_.samp_root_;
    g_commands.game_directory=game;
    g_commands.settings.file=g_commands.samp_directory/"sa-mp.cfg";
    g_commands.settings.load();
    g_log_urls.store(g_commands.settings.get_int("logurls")!=0);
    g_network.assets_.url_notice_=[](std::uint32_t id,std::string_view url) {
        if(!g_log_urls.load()) return;
        char prefix[32];std::snprintf(prefix,sizeof(prefix),"[url 0x%X]: ",id);
        const std::lock_guard lock(g_chat_mutex);
        g_command_messages.push_back({0x88aa62ff,std::string(prefix)+std::string(url)});
    };
    const auto page_size=g_commands.settings.get_int("pagesize");
    if(page_size>=10 && page_size<=20) g_commands.page_size=page_size;
    g_commands.font_size=g_commands.settings.get_int("fontsize");
    const auto fps_limit=g_commands.settings.get_int("fpslimit");
    if(fps_limit>=20 && fps_limit<=90) g_commands.frame_limit=fps_limit;
    g_commands.timestamps=g_commands.settings.get_int("timestamp")!=0;
    g_commands.name_tag_status=g_commands.settings.get_int("nonametagstatus")==0;
    g_game.head_movement_=g_commands.head_movement=g_commands.settings.get_int("disableheadmove")==0;
    g_game.frame_timing_.limit=g_commands.frame_limit;
    // Original100a09f0 applies the configured limit to custom pacing and
    // raises GTA's own fixed cap to200, including the startup settings path.
    DWORD frame_cap_protection=0,frame_cap_ignored=0;
    if(VirtualProtect(reinterpret_cast<void*>(0xc1704c),4,PAGE_READWRITE,&frame_cap_protection)) {
        *reinterpret_cast<std::uint32_t*>(0xc1704c)=200;
        VirtualProtect(reinterpret_cast<void*>(0xc1704c),4,frame_cap_protection,&frame_cap_ignored);
    }
    g_font_settings.configuration_available=true;
    g_font_settings.size_adjustment=g_commands.font_size;
    // Preserve the command's delayed-exit behavior in the injected runtime.
    g_commands.quit=[] {
        const std::lock_guard lock(g_network_mutex);
        if (g_network.state_ == samp::client::ConnectionState::Connected)
            g_network.disconnect(500, 0);
        g_quit_requested = true;
        g_quit_started = GetTickCount();
    };
    g_commands.snapshot=[] {const std::lock_guard lock(g_chat_mutex);return g_command_snapshot;};
    g_commands.message=[](std::string_view text,std::uint32_t colour) {
        const std::lock_guard lock(g_chat_mutex);g_command_messages.push_back({colour,std::string(text)});
    };
    g_commands.emit=[](samp::client::ClientCommandEvent event) {
        const std::lock_guard lock(g_chat_mutex);g_command_events.push_back(std::move(event));
    };
    samp::client::register_official_commands(g_chat.input_,g_commands);

    // The main loop: the network tick and the device borrowing.
    bool device_borrowed = false;
    auto previous_state = samp::client::ConnectionState::Disconnected;
    while (g_running.load()) {
        if (!device_borrowed && g_proxy_vtable == nullptr) {
#if defined(_M_IX86) || defined(__i386__)
            static_assert(sizeof(void*)==4);
            auto* device_slot=reinterpret_cast<void**>(static_cast<std::uintptr_t>(kRwD3DDeviceAddress));
            void* device=*device_slot;
            if(device) {
                constexpr std::size_t bytes=kD3D9DeviceMethodCount*kD3D9TrampolineSize;
                auto* code=static_cast<std::uint8_t*>(VirtualAlloc(
                    nullptr,bytes,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE));
                auto** table=code?new(std::nothrow) void*[kD3D9DeviceMethodCount]:nullptr;
                if(code && table) {
                    std::memset(code,0xcc,bytes);
                    const auto device_address=static_cast<std::uint32_t>(
                        reinterpret_cast<std::uintptr_t>(&g_original_device));
                    for(std::size_t slot=0;slot<kD3D9DeviceMethodCount;++slot) {
                        auto* stub=code+slot*kD3D9TrampolineSize;
                        stub[0]=0xa1;
                        std::memcpy(stub+1,&device_address,4);
                        stub[5]=0x8b;stub[6]=0x08;
                        std::size_t at=7;
                        if(slot==29) {
                            constexpr std::uint8_t disable_msaa[]{0xc7,0x44,0x24,0x14,0,0,0,0};
                            std::memcpy(stub+at,disable_msaa,sizeof(disable_msaa));
                            at+=sizeof(disable_msaa);
                        }
                        stub[at++]=0x89;stub[at++]=0x44;stub[at++]=0x24;stub[at++]=0x04;
                        stub[at++]=0xff;
                        const auto offset=static_cast<std::uint32_t>(slot*4);
                        if(offset==0) {
                            stub[at]=0x21;
                        } else if(offset<128) {
                            stub[at++]=0x61;stub[at]=static_cast<std::uint8_t>(offset);
                        } else {
                            stub[at++]=0xa1;std::memcpy(stub+at,&offset,4);
                        }
                        table[slot]=stub;
                    }
                    DWORD old_protection=0;
                    if(VirtualProtect(code,bytes,PAGE_EXECUTE_READ,&old_protection) &&
                       FlushInstructionCache(GetCurrentProcess(),code,bytes)) {
                        g_original_device=device;
                        g_trampoline_memory=code;
                        g_proxy_vtable=table;
                        g_fake_device=&g_proxy_vtable;
                        table[kD3D9PresentSlot]=reinterpret_cast<void*>(&samp_d3d_present);
                        table[kD3D9ResetSlot]=reinterpret_cast<void*>(&samp_d3d_reset);
                        *device_slot=g_fake_device;
                        device_borrowed=true;
                    } else {
                        delete[] table;
                        VirtualFree(code,0,MEM_RELEASE);
                    }
                } else if(code) {
                    VirtualFree(code,0,MEM_RELEASE);
                }
            }
            if (device_borrowed) {
                OutputDebugStringA("the Direct3D 9 device was borrowed");
            }
#endif
        }
        bool exit_ready = false;
        {
            const std::lock_guard lock(g_network_mutex);
            if (g_quit_requested) {
                // 0x100C670F..0x100C674B: strictly more than one second,
                // then tear down the connection and exit with code zero.
                if (static_cast<std::uint32_t>(GetTickCount() - g_quit_started) > 1000u) {
                    g_network.disconnect();
                    exit_ready = true;
                }
            } else {
            if(!connection_prepared && g_world_ready.load(std::memory_order_acquire)) {
                connection_prepared=true;
                connection_wait.last_attempt=GetTickCount();
            }
            if(!command_line.debug && connection_prepared && connection_wait.state==1) {
                const std::uint32_t now=GetTickCount();
                if(now-connection_wait.last_attempt>3000u) {
                    g_network.connection_messages_.push_back(
                        "Connecting to "+parameters.host+":"+
                        std::to_string(static_cast<std::int32_t>(parameters.port))+"...");
                    g_network.connect(parameters);
                    connection_wait.last_attempt=GetTickCount();
                    connection_wait.state=2;
                }
            }
            g_network.tick();
            if(g_network.retry_requested_) connection_wait.state=1;
            if (g_network.state_ != previous_state) {
                previous_state = g_network.state_;
                std::snprintf(line, sizeof(line), "connection state %d%s%s",
                              static_cast<int>(previous_state),
                              g_network.error_.empty() ? "" : ": ",
                              g_network.error_.c_str());
                OutputDebugStringA(line);
            }
            if ((g_network.state_ == samp::client::ConnectionState::Connected)) {
                static bool announced = false;
                if (!announced) {
                    announced = true;
                    std::snprintf(line, sizeof(line), "connected, player id %d, name '%s'",
                                  g_network.player_id_, g_network.player_name_.c_str());
                    OutputDebugStringA(line);
                }
            }
            }
        }
        if (exit_ready) ExitProcess(0);
        Sleep(10);
    }
    return 0;
}

}  // namespace

// Official: entry @ 0x100fdb60 (samp.dll)
// The module entry point starts our integration worker.
BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
    (void)reserved;
    if (reason == DLL_PROCESS_ATTACH) {
        g_game.logger_ = [](const char* text) { OutputDebugStringA(text); };
        g_selection.action_ = [](samp::client::SelectionAction action) {
            const std::lock_guard lock(g_network_mutex);
            if(!g_game.selecting_) return;
            switch(action) {
                case samp::client::SelectionAction::Spawn:
                    if(g_network.state_==samp::client::ConnectionState::Connected &&
                       !g_network.spawn_accepted_ && !g_network.in_game_) {
                        samp::proto::BitStream request;
                        request.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
                        request.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(129)}.data(),1);
                        const std::uint8_t empty_bit_count[4]{};
                        request.writeCompressed(empty_bit_count,32,true);
                        {
                            const auto outgoing_message = std::span<const std::uint8_t>(request.data_.data(),(request.numberOfBitsUsed_+7u)>>3);
                            const auto outgoing_reliability = samp::proto::Reliability::Reliable;
                            const auto outgoing_channel = 0;
                            samp::proto::ReliabilityFrame frame;
                            frame.message_number = g_network.next_message_number_++;
                            frame.reliability = outgoing_reliability;
                            if (outgoing_reliability == samp::proto::Reliability::UnreliableSequenced ||
                                outgoing_reliability == samp::proto::Reliability::ReliableOrdered ||
                                outgoing_reliability == samp::proto::Reliability::ReliableSequenced) {
                                frame.ordering_channel = static_cast<std::uint8_t>(outgoing_channel & 0x1F);
                                frame.ordering_index = g_network.next_ordering_index_[frame.ordering_channel]++;
                            }
                            frame.data.write(outgoing_message.data(), outgoing_message.size());
                            samp::proto::ConnectedDatagram datagram;
                            datagram.frames.push_back(frame);
                            const samp::proto::BitStream encoded = samp::proto::encode_connected_datagram(datagram);
                            const std::size_t byte_count = (encoded.numberOfBitsUsed_ + 7u) >> 3;
                            if (byte_count != 0) g_network.pending_.emplace_back(encoded.data_.data(), encoded.data_.data() + byte_count);
                        }
                        g_network.spawn_requested_=true;
                    }
                    break;
                case samp::client::SelectionAction::Next:
                case samp::client::SelectionAction::Previous: {
                    const int direction=action==samp::client::SelectionAction::Previous?-1:1;
                    if(g_network.state_==samp::client::ConnectionState::Connected &&
                       !g_network.in_game_ && !g_network.spawn_accepted_ && g_network.class_count_!=0) {
                        const auto next=direction<0?
                            (g_network.requested_class_==0?g_network.class_count_-1:g_network.requested_class_-1):
                            (g_network.requested_class_+1==g_network.class_count_?0:g_network.requested_class_+1);
                        g_network.request_class(next);
                    }
                    break;
                }
                default:break;
            }
        };
        DisableThreadLibraryCalls(module);
        HANDLE thread = CreateThread(nullptr, 0, worker, module, 0, nullptr);
        if (thread != nullptr) {
            CloseHandle(thread);
        }
    } else if (reason == DLL_PROCESS_DETACH) {
        g_running.store(false);
        auto* device_slot=reinterpret_cast<void**>(static_cast<std::uintptr_t>(kRwD3DDeviceAddress));
        if(g_fake_device && *device_slot==g_fake_device) *device_slot=g_original_device;
        if(g_trampoline_memory) VirtualFree(g_trampoline_memory,0,MEM_RELEASE);
        delete[] g_proxy_vtable;
        g_trampoline_memory=nullptr;
        g_proxy_vtable=nullptr;
        g_fake_device=nullptr;
        g_original_device=nullptr;
        if(g_text.state_.sprite)
            samp::client::render::release_font_resources(g_text.state_,g_text.host_);
        g_text.state_.device=nullptr;
        // The official 0x10069580 cleanup is inlined here; the portable backend
        // has no separate native cleanup entry of its own.
        if(g_death_window.name_font) {g_death_host.release(g_death_window.name_font);g_death_window.name_font=nullptr;}
        if(g_death_window.weapon_font) {g_death_host.release(g_death_window.weapon_font);g_death_window.weapon_font=nullptr;}
        if(g_death_window.outline_font) {g_death_host.release(g_death_window.outline_font);g_death_window.outline_font=nullptr;}
        if(g_death_window.sprite) {g_death_host.release(g_death_window.sprite);g_death_window.sprite=nullptr;}
        if(g_death_window.auxiliary_font) {
            g_death_host.release(g_death_window.auxiliary_font);
            g_death_window.auxiliary_font=nullptr;
        }
        if(g_death_window.auxiliary_outline_font) {
            g_death_host.release(g_death_window.auxiliary_outline_font);
            g_death_window.auxiliary_outline_font=nullptr;
        }
        g_death_window.device=nullptr;g_death_window.auxiliary_created=0;
        g_selection.cursor_inside_=false;
        samp::client::render::D3DXFontDrawHost selection_cleanup;
        if(g_selection.font_) {selection_cleanup.release(g_selection.font_);g_selection.font_=nullptr;}
        if(g_selection.sprite_) {selection_cleanup.release(g_selection.sprite_);g_selection.sprite_=nullptr;}
        if(g_selection.texture_) {g_selection.texture_->Release();g_selection.texture_=nullptr;}
        if(g_selection.cursor_) {g_selection.cursor_->Release();g_selection.cursor_=nullptr;}
        if(g_chat.window_) {
            if(IsWindow(g_chat.window_) &&
               reinterpret_cast<WNDPROC>(GetWindowLongPtrW(g_chat.window_,GWLP_WNDPROC))==
                   samp::client::ChatHook::window_proc) {
                SetWindowLongPtrW(g_chat.window_,GWLP_WNDPROC,
                                  reinterpret_cast<LONG_PTR>(g_chat.previous_));
            }
            if(g_chat.current_==&g_chat) g_chat.current_=nullptr;
            g_chat.window_=nullptr;
            g_chat.previous_=nullptr;
            g_chat.outbox_mutex_=nullptr;
            g_chat.outbox_=nullptr;
            g_chat.scoreboard_=nullptr;
            g_chat.selection_=nullptr;
            g_chat.scoreboard_available_=nullptr;
            g_chat.controls_disabled_=nullptr;
            g_chat.hit_test_font_=nullptr;
        }
    }
    return TRUE;
}
