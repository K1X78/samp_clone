#include "samp/client/client_commands.hpp"
#include <cstdio>
#include <cstdlib>
#include <fstream>

namespace samp::client {

// Each callback below names its original0.3.DL entry. Six debug commands are
// registered only for the original -d mode. Unregistered names fall through
// ChatInput::submit unchanged to the server/Pawn command path.
// source adapter only; no established separate native entry
void register_official_commands(ChatInput& input,ClientCommandContext& context) {
    constexpr std::uint32_t info=0x88aa62ff,debug=0xa9c4e4ff;
    const auto number=[](std::string_view arguments) {return std::atoi(std::string(arguments).c_str());};
    const auto event=[&context](ClientCommandAction action,int first=0,int second=0,std::string_view text={}) {
        context.emit({action,{first,second,0},std::string(text)});
    };
    // Official callbacks10068420 ->100c5550.
    input.register_command("quit",[&context](auto){context.quit();});
    input.register_command("q",[&context](auto){context.quit();});
    // Official callback10068440.
    input.register_command("save",[&context](std::string_view arguments) {
        const auto position=context.snapshot();
        std::ofstream file(context.samp_directory/"savedpositions.txt",std::ios::app);
        if(!file) {context.message("I can't open the savepositions.txt file for append.",debug);return;}
        if(!position.actor) return;
        char line[2048];const std::string comment(arguments);
        if(position.in_vehicle) {
            std::snprintf(line,sizeof(line),"AddStaticVehicle(%u,%.4f,%.4f,%.4f,%.4f,%u,%u); // %s\n",
                position.model,position.x,position.y,position.z,position.angle,position.colour1,position.colour2,comment.c_str());
        } else std::snprintf(line,sizeof(line),"AddPlayerClass(%u,%.4f,%.4f,%.4f,%.4f,0,0,0,0,0,0); // %s\n",
            position.model,position.x,position.y,position.z,position.angle,comment.c_str());
        file<<line;file.close();context.message(position.in_vehicle?"-> InCar position saved":"-> OnFoot position saved",info);
    });
    // Official callback100685c0. Raw vehicle output is in the game CWD;
    // the on-foot output uses the SAMP user-files folder, as in the binary.
    input.register_command("rs",[&context](std::string_view arguments) {
        const auto position=context.snapshot();if(!position.actor) return;
        std::ofstream file(position.in_vehicle?context.game_directory/"rawvehicles.txt":context.samp_directory/"rawpositions.txt",std::ios::app);
        if(!file) {context.message("I can't open the rawvehicles.txt file for append.",debug);return;}
        char line[2048];const std::string comment(arguments);
        if(position.in_vehicle) std::snprintf(line,sizeof(line),"%u,%.4f,%.4f,%.4f,%.4f,%u,%u ; %s\n",
            position.model,position.x,position.y,position.z,position.angle,position.colour1,position.colour2,comment.c_str());
        else std::snprintf(line,sizeof(line),"%.4f,%.4f,%.4f,%.4f ; %s\n",position.x,position.y,position.z,position.angle,comment.c_str());
        file<<line;file.close();context.message(position.in_vehicle?"-> InCar pos saved":"-> OnFoot pos saved",debug);
    });
    // Official callback10068a70 sends direct packet201, not command RPC50.
    input.register_command("rcon",[&context,event](auto arguments){if(context.network_present) event(ClientCommandAction::Rcon,0,0,arguments);});
    // Official callback100682f0 reads GTA8a5a80 without unit conversion.
    input.register_command("mem",[&context](auto) {char line[64];std::snprintf(line,sizeof(line),"Memory: %u",context.snapshot().memory);context.message(line,debug);});
    // Official callback10068310. Empty arguments intentionally have no output.
    input.register_command("fpslimit",[&context,number,event](std::string_view arguments) {
        if(arguments.empty()) return;const auto limit=static_cast<unsigned>(number(arguments));
        if(limit<20 || limit>90) {context.message("-> Frame Limiter: valid amounts are 20-90",info);return;}
        context.frame_limit=static_cast<int>(limit);context.settings.set_int("fpslimit",context.frame_limit);event(ClientCommandAction::FrameLimit,context.frame_limit);
        char line[64];std::snprintf(line,sizeof(line),"-> Frame Limiter: %u",limit);context.message(line,info);
    });
    // Official callback10068060.
    input.register_command("pagesize",[&context,number,event](std::string_view arguments) {
        const int lines=number(arguments);
        if(arguments.empty() || lines<10 || lines>20) {context.message("pagesize [10-20] (lines)",debug);return;}
        context.page_size=lines;context.settings.set_int("pagesize",lines);event(ClientCommandAction::PageSize,lines);
    });
    // Official callback100680e0.
    input.register_command("fontsize",[&context,number,event](std::string_view arguments) {
        const int size=number(arguments);
        if(arguments.empty() || size<-3 || size>5) {context.message("Valid fontsize: -3 to 5",debug);return;}
        context.settings.set_int("fontsize",size);context.font_size=context.settings.get_int("fontsize");event(ClientCommandAction::FontSize,context.font_size);
    });
    // Official callback10068190 ->10008b80.
    input.register_command("nametagstatus",[&context,event](auto) {
        if(!context.network_present) return;
        context.name_tag_status=!context.name_tag_status;context.settings.set_int("nonametagstatus",context.name_tag_status?0:1);
        event(ClientCommandAction::NameTagStatus,context.name_tag_status);
        context.message(context.name_tag_status?"NameTag Player Status: ON":"NameTag Player Status: OFF",info);
    });
    // Official callback100681a0.
    input.register_command("timestamp",[&context,event](auto) {
        context.timestamps=!context.timestamps;context.settings.set_int("timestamp",context.timestamps?1:0);event(ClientCommandAction::Timestamp,context.timestamps);
    });
    // Official callback100683a0.
    input.register_command("headmove",[&context,event](auto) {
        context.head_movement=!context.head_movement;context.settings.set_int("disableheadmove",context.head_movement?0:1);
        event(ClientCommandAction::HeadMove,context.head_movement);
        context.message(context.head_movement?"-> Head movements enabled":"-> Head movements disabled",info);
    });
    // Official callback100682e0.
    input.register_command("hudscalefix",[&context,event](auto) {context.hud_scale_fix=!context.hud_scale_fix;event(ClientCommandAction::HudScaleFix,context.hud_scale_fix);});
    // Official callback10067f70. Original shipped diagnostic command;
    // it runs only when explicitly entered, never automatically at startup.
    input.register_command("testdw",[event](auto){event(ClientCommandAction::TestDeathWindow);});
    if(context.debug) {
        // Official callback100688f0.
        input.register_command("vsel",[event](auto){event(ClientCommandAction::VehicleSelector,10);});
        // Official callback100687b0, aliases v and vehicle.
        const auto vehicle=[&context,number,event](std::string_view arguments) {
            if(arguments.empty()) {context.message("Usage: /v (vehicle id).",debug);return;}
            const auto position=context.snapshot();
            if(!position.loaded) {context.message("game not loaded.",debug);return;}
            if(!position.actor) {context.message("I couldn't find the player actor.",debug);return;}
            event(ClientCommandAction::Vehicle,number(arguments));
        };
        input.register_command("v",vehicle);input.register_command("vehicle",vehicle);
        // Official callback10068740.
        input.register_command("player_skin",[&context,number,event](std::string_view arguments) {
            if(arguments.empty()) {context.message("Usage: player_skin (skin number).",debug);return;}
            const auto position=context.snapshot();if(position.loaded && position.actor) event(ClientCommandAction::PlayerSkin,number(arguments));
        });
        // Official callback10068910.
        input.register_command("set_weather",[&context,number,event](std::string_view arguments) {
            if(arguments.empty()) {context.message("Usage: set_weather (weather number)",debug);return;}
            event(ClientCommandAction::Weather,number(arguments));
        });
        // Official callback10068960 initializes both numbers to0 and ignores
        // sscanf's return. A nonnumeric nonempty argument therefore sets00:00.
        input.register_command("set_time",[&context,event](std::string_view arguments) {
            if(arguments.empty()) {context.message("Usage: set_time (hour) (minute)",debug);return;}
            int hour=0,minute=0;std::sscanf(std::string(arguments).c_str(),"%d%d",&hour,&minute);
            if(hour<0 || hour>23 || minute<0 || minute>59) {context.message("Invalid Time. Use /set_time (hour 0-23) (minute 0-59)",debug);return;}
            event(ClientCommandAction::Time,hour,minute);
        });
    }
    // Official callback10068a10.
    input.register_command("interior",[&context](auto) {char line[64];std::snprintf(line,sizeof(line),"Current Interior: %u",context.snapshot().interior);context.message(line,debug);});
    // Official callback10068a40; its data flag has no further consumer in
    // the shipped image. Preserve the actual toggle without inventing output.
    input.register_command("togobjlight",[&context,event](auto) {context.object_lighting=!context.object_lighting;event(ClientCommandAction::ObjectLighting,context.object_lighting);});
    // Official callback10068430 is exactly RET in the supplied0.3.DL image.
    input.register_command("cmpstat",[](auto){});
    // Official callback10068a60.
    input.register_command("dl",[&context,event](auto) {context.vehicle_labels=!context.vehicle_labels;event(ClientCommandAction::VehicleLabels,context.vehicle_labels);});
    // Official callback10068050 controls the10004710 local sync diagnostics.
    input.register_command("ctd",[&context,event](auto) {context.camera_target_debug=!context.camera_target_debug;event(ClientCommandAction::CameraTargetDebug,context.camera_target_debug);});
    // Official callback10068200; audiomsgoff is the inverse setting.
    input.register_command("audiomsg",[&context,event](auto) {
        const bool was_off=context.settings.get_int("audiomsgoff")==1;
        context.settings.set_int("audiomsgoff",was_off?0:1);event(ClientCommandAction::AudioMessages,was_off);
        context.message(was_off?"Audio messages: On":"Audio messages: Off",info);
    });
    // Official callback10068270.
    input.register_command("logurls",[&context,event](auto) {
        const bool was_on=context.settings.get_int("logurls")==1;
        context.settings.set_int("logurls",was_on?0:1);event(ClientCommandAction::LogUrls,!was_on);
        context.message(was_on?"URL messages: Off":"URL messages: On",info);
    });
}
}
