#include "samp/client/client_commands.hpp"
#include "samp/client/frame_timing.hpp"
#include <cstdio>
#include <fstream>
#include <iterator>
#include <chrono>

namespace {
int failures=0;
#define CHECK(x) do {if(!(x)) {std::printf("FAIL %d: %s\n",__LINE__,#x);++failures;}} while(false)
std::string contents(const std::filesystem::path& path) {
    std::ifstream file(path,std::ios::binary);return {std::istreambuf_iterator<char>(file),{}};
}
void commands(const std::filesystem::path& directory) {
    using namespace samp::client;
    ClientCommandContext context;context.samp_directory=directory;context.game_directory=directory;
    context.settings.file=directory/"sa-mp.cfg";context.network_present=true;
    std::vector<ClientCommandEvent> events;std::vector<std::pair<std::string,std::uint32_t>> messages;
    ClientCommandSnapshot snapshot{true,true,false,265,123456,14,1.25f,-2.5f,3.75f,90.f,5,6};
    unsigned quits=0;
    context.quit=[&]{++quits;};context.snapshot=[&]{return snapshot;};
    context.message=[&](auto text,auto colour){messages.emplace_back(text,colour);};
    context.emit=[&](auto event){events.push_back(std::move(event));};
    ChatInput input;register_official_commands(input,context);
    CHECK(input.commands_.size()==21);
    for(const auto name:{"q","quit","save","rs","rcon","mem","fpslimit","pagesize","fontsize","nametagstatus","timestamp","headmove","hudscalefix","testdw","interior","togobjlight","cmpstat","dl","ctd","audiomsg","logurls"}) CHECK(static_cast<bool>(input.find_command(name)));
    for(const auto name:{"v","vehicle","vsel","player_skin","set_weather","set_time","help","car","p2day","p2vcreate"}) CHECK(!input.find_command(name));
    const auto submit=[&](std::string text) {input.begin();input.text_=text;std::string output;const auto sent=input.submit(output);return std::pair{sent,output};};
    auto result=submit("/help");CHECK(result.first && result.second=="/help");
    CHECK(!submit("/Q").first && quits==1);CHECK(!submit("/quit").first && quits==2);
    const auto before=events.size();submit("/pagesize 9");CHECK(events.size()==before && messages.back().first=="pagesize [10-20] (lines)");
    submit("/pagesize 20");CHECK(context.page_size==20 && events.back().values[0]==20);
    submit("/fontsize -3");CHECK(context.font_size==-3 && context.settings.get_int("fontsize")==-3);
    submit("/fpslimit 91");CHECK(messages.back().first=="-> Frame Limiter: valid amounts are 20-90");
    submit("/fpslimit 60");CHECK(context.frame_limit==60 && context.settings.get_int("fpslimit")==60);
    const auto message_count=messages.size();submit("/fpslimit");CHECK(messages.size()==message_count);
    submit("/timestamp");CHECK(context.timestamps && context.settings.get_int("timestamp")==1);
    submit("/headmove");CHECK(!context.head_movement && context.settings.get_int("disableheadmove")==1);
    submit("/nametagstatus");CHECK(!context.name_tag_status && context.settings.get_int("nonametagstatus")==1);
    submit("/audiomsg");CHECK(context.settings.get_int("audiomsgoff")==1 && messages.back().first=="Audio messages: Off");
    submit("/logurls");CHECK(context.settings.get_int("logurls")==1 && messages.back().first=="URL messages: On");
    submit("/mem");CHECK(messages.back().first=="Memory: 123456");
    submit("/interior");CHECK(messages.back().first=="Current Interior: 14");
    submit("/save locker");CHECK(contents(directory/"savedpositions.txt")=="AddPlayerClass(265,1.2500,-2.5000,3.7500,90.0000,0,0,0,0,0,0); // locker\n" || contents(directory/"savedpositions.txt")=="AddPlayerClass(265,1.2500,-2.5000,3.7500,90.0000,0,0,0,0,0,0); // locker\r\n");
    snapshot.in_vehicle=true;snapshot.model=411;submit("/save car");
    CHECK(contents(directory/"savedpositions.txt").find("AddStaticVehicle(411,1.2500,-2.5000,3.7500,90.0000,5,6); // car")!=std::string::npos);
    submit("/rs raw");CHECK(contents(directory/"rawvehicles.txt").find("411,1.2500,-2.5000,3.7500,90.0000,5,6 ; raw")!=std::string::npos);
    submit("/rcon login password");CHECK(events.back().action==ClientCommandAction::Rcon && events.back().text=="login password");
    context.network_present=false;const auto count=events.size();submit("/rcon echo ignored");CHECK(events.size()==count);
    const auto no_op_events=events.size(),no_op_messages=messages.size();submit("/cmpstat");CHECK(events.size()==no_op_events && messages.size()==no_op_messages);
    submit("/testdw");CHECK(events.back().action==ClientCommandAction::TestDeathWindow);
    submit("/dl");CHECK(context.vehicle_labels);submit("/ctd");CHECK(context.camera_target_debug);
    submit("/togobjlight");CHECK(!context.object_lighting);submit("/hudscalefix");CHECK(!context.hud_scale_fix);
    context.debug=true;ChatInput debug;register_official_commands(debug,context);CHECK(debug.commands_.size()==27);
    debug.find_command("set_time")("abc");CHECK(events.back().action==ClientCommandAction::Time && events.back().values[0]==0 && events.back().values[1]==0);
    debug.find_command("set_time")("23 59");CHECK(events.back().values[0]==23 && events.back().values[1]==59);
    const auto time_count=events.size();debug.find_command("set_time")("24 00");CHECK(events.size()==time_count);
    debug.find_command("vehicle")("411");CHECK(events.back().action==ClientCommandAction::Vehicle && events.back().values[0]==411);
    snapshot.loaded=false;debug.find_command("v")("411");CHECK(messages.back().first=="game not loaded.");
    snapshot.loaded=true;snapshot.actor=false;debug.find_command("v")("411");CHECK(messages.back().first=="I couldn't find the player actor.");
    debug.find_command("vsel")({});CHECK(events.back().action==ClientCommandAction::VehicleSelector);
    ClientSettings reloaded;reloaded.file=context.settings.file;CHECK(reloaded.load());CHECK(reloaded.get_int("PAGESIZE")==20 && reloaded.get_int("fpslimit")==60 && reloaded.get_int("fontsize")==-3);
    CHECK(reloaded.set_int("locked",7,true));CHECK(!reloaded.set_int("locked",8));CHECK(reloaded.get_int("locked")==7);
}
void timing() {
    using namespace samp::client;
    FrameTimingState state;FrameTimingHost host;std::uint32_t now=1000;
    std::vector<std::uint32_t> sleeps;bool limiter=false,special=false,updated=false;
    host.milliseconds=[&]{return now;};host.sleep=[&](auto delay){sleeps.push_back(delay);};
    host.frame_limiter=[&]{return limiter;};host.special_task_268=[&]{return special;};
    host.apply=[&](float,float,auto,bool update){updated=update;};
    process_frame_timing(state,host);CHECK(updated && state.last_frame==1000 && sleeps.empty());
    now=1005;process_frame_timing(state,host);CHECK(!updated && sleeps.back()==5);
    // Native's strict elapsed<11 branch still invokes Sleep(0) at10ms.
    sleeps.clear();now=1015;process_frame_timing(state,host);CHECK(sleeps.size()==1 && sleeps.back()==0);
    limiter=true;state.limit=20;now=1020;process_frame_timing(state,host);CHECK(sleeps.back()==44);
    special=true;state.limit=90;now=1025;process_frame_timing(state,host);CHECK(sleeps.back()==16);
    state.limit=20;now=1030;process_frame_timing(state,host);CHECK(sleeps.back()==44);
    now=1250;process_frame_timing(state,host);CHECK(!updated);
    now=1251;process_frame_timing(state,host);CHECK(updated && state.time_step>0);
}
}
int main() {
    const auto directory=std::filesystem::temp_directory_path()/("samp-command-unit-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    std::filesystem::create_directories(directory);commands(directory);timing();
    // Only this newly created unit-test directory is removed.
    std::filesystem::remove_all(directory);
    std::printf("official commands/settings/timing: %d failures\n",failures);return failures!=0;
}
