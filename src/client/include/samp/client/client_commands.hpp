#pragma once
#include "samp/client/chat_input.hpp"
#include "samp/client/client_settings.hpp"
#include <array>
#include <functional>

namespace samp::client {
enum class ClientCommandAction {
    PageSize,FontSize,FrameLimit,Timestamp,NameTagStatus,HeadMove,HudScaleFix,
    CameraTargetDebug,ObjectLighting,VehicleLabels,AudioMessages,LogUrls,
    Rcon,TestDeathWindow,PlayerSkin,Vehicle,VehicleSelector,Weather,Time
};
struct ClientCommandEvent {
    ClientCommandAction action{};
    std::array<std::int32_t,3> values{};
    std::string text;
};
struct ClientCommandSnapshot {
    bool loaded=false,actor=false,in_vehicle=false;
    std::uint32_t model=0,memory=0,interior=0;
    float x=0,y=0,z=0,angle=0;
    unsigned colour1=0,colour2=0;
};
struct ClientCommandContext {
    bool debug=false,network_present=false;
    bool camera_target_debug=false,hud_scale_fix=true,object_lighting=true,vehicle_labels=false;
    bool timestamps=false,name_tag_status=true,head_movement=true;
    int page_size=10,font_size=0,frame_limit=90;
    ClientSettings settings;
    std::filesystem::path samp_directory,game_directory;
    std::function<void()> quit;
    std::function<ClientCommandSnapshot()> snapshot;
    std::function<void(std::string_view,std::uint32_t)> message;
    std::function<void(ClientCommandEvent)> emit;
};
void register_official_commands(ChatInput&,ClientCommandContext&);
}
