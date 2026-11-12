#include "samp/server/game_layer.hpp"
#include "samp/server/console.hpp"
#include "samp/client/render/world_labels.hpp"
#include <cstdio>
#include <cstring>
#include <chrono>
#include <fstream>
#include <filesystem>
#include <stdexcept>
#include <bit>

using samp::amx::cell;
namespace samp::pawn {
struct PawnNativeTestAccess {
    static void init(PawnVm& vm,std::function<cell(std::string_view,std::span<const cell>)> hook={}) {
        std::vector<cell> code{0x78,0};
        for(const char* name:{"OnRconLoginAttempt","OnPlayerPickUpPickup","Tick","TimerEx"}) {
            const auto native=static_cast<cell>(vm.natives_.size());
            vm.publics_.push_back({name,static_cast<unsigned>(code.size()*4)});vm.natives_.push_back({name});
            vm.native_functions_[name]=[&vm,hook,name](auto)->cell {
                std::array<cell,8> args{};
                cell bytes=0;std::memcpy(&bytes,vm.image_.data()+vm.header_.dat+vm.frm_+8,4);
                std::memcpy(args.data(),vm.image_.data()+vm.header_.dat+vm.frm_+12,static_cast<std::size_t>(std::min(bytes,32)));
                return hook?hook(name,std::span<const cell>(args.data(),static_cast<std::size_t>(std::clamp(bytes,0,32)/4))):0;
            };
            const cell body[]{0x2e,0x27,0,0x7b,native,0x2c,4,0x30};code.insert(code.end(),std::begin(body),std::end(body));
        }
        const auto timer_native=static_cast<cell>(vm.natives_.size());
        vm.natives_.push_back({"SetTimerEx"});
        vm.publics_.push_back({"ScheduleEx",static_cast<unsigned>(code.size()*4)});
        const cell schedule[]{0x2e,0x27,804,0x27,800,0x27,700,0x27,0,0x27,10,0x27,512,0x27,24,0x7b,timer_native,0x2c,28,0x30};
        code.insert(code.end(),std::begin(schedule),std::end(schedule));
        vm.header_.cod=sizeof(samp::amx::AmxHeader);vm.header_.dat=vm.header_.cod+static_cast<int>(code.size()*4);
        vm.header_.hea=vm.header_.dat+1024;vm.header_.stp=vm.header_.dat+8192;
        vm.image_.assign(vm.header_.stp,0);std::memcpy(vm.image_.data(),&vm.header_,sizeof(vm.header_));
        std::memcpy(vm.image_.data()+vm.header_.cod,code.data(),code.size()*4);
        vm.amx_.base=vm.image_.data();vm.amx_.flags=0x8000;vm.amx_.stk=vm.amx_.stp=vm.stk_=8188;
        vm.amx_.hea=vm.amx_.hlw=vm.hea_=vm.hlw_=1024;vm.ok_=true;
    }
    static cell call(PawnVm& vm,const char* name,std::initializer_list<cell> args) {return vm.native_functions_.at(name)({args.begin(),args.size()});}
    static cell call(PawnVm& vm,const char* name,std::span<const cell> args) {return vm.native_functions_.at(name)(args);}
    static void text(PawnVm& vm,int address,const char* text) {
        do {const cell value=static_cast<unsigned char>(*text);std::memcpy(vm.image_.data()+vm.header_.dat+address,&value,4);address+=4;} while(*text++);
    }
    static std::string text(PawnVm& vm,int address) {
        std::string result;for(;;address+=4) {cell value;std::memcpy(&value,vm.image_.data()+vm.header_.dat+address,4);if(!value) return result;result+=static_cast<char>(value);}
    }
    static cell schedule(PawnVm& vm) {cell result=0;return vm.execute("ScheduleEx",{},result)==0?result:0;}
    static void write_cell(PawnVm& vm,int address,cell value) {std::memcpy(vm.image_.data()+vm.header_.dat+address,&value,4);}
    static cell read_cell(PawnVm& vm,int address) {cell value=0;std::memcpy(&value,vm.image_.data()+vm.header_.dat+address,4);return value;}

};
}
namespace samp::server {
struct RakNetTransportTestAccess {
    static std::vector<samp::proto::BitStream> messages(RakNetPeer& peer) {
        std::vector<samp::proto::BitStream> result;for(auto& queue:peer.send_state_.unsent) for(auto& frame:queue) result.push_back(frame.data);return result;
    }
    static void clear(RakNetPeer& peer) {peer.send_state_={};}
    static void pings(RakNetPeer& peer) {peer.send_state_.lowest_ping=0;peer.send_state_.ping_samples={0,10,0,0,0};peer.send_state_.ping_valid={true,true,false,false,false};}
};
}
namespace {
int failures=0;
#define CHECK(x) do {if(!(x)) {std::printf("FAIL %d: %s\n",__LINE__,#x);++failures;}} while(false)
using Access=samp::pawn::PawnNativeTestAccess;
using Wire=samp::server::RakNetTransportTestAccess;
using samp::proto::BitStream;
void rpc(samp::server::GameLayer& game,samp::server::RakNetPeer& peer,unsigned char id,const BitStream& payload={}) {
    BitStream frame;const unsigned char prefix[]{20,id};frame.write(prefix,2);
    const auto bits=static_cast<unsigned>(payload.numberOfBitsUsed_);frame.writeCompressed(reinterpret_cast<const unsigned char*>(&bits),32,true);
    if(bits) frame.writeBits(payload.data_.data(),bits,false);game.on_user_message(peer,frame);
}
BitStream payload(BitStream frame,unsigned char expected) {
    unsigned char prefix[2];unsigned bits=0;
    CHECK(frame.read(prefix,2) && prefix[0]==20 && prefix[1]==expected);
    CHECK(frame.readCompressed(reinterpret_cast<unsigned char*>(&bits),32,true));
    std::vector<unsigned char> bytes((bits+7)/8);CHECK(frame.readBits(bytes.data(),bits,false));
    BitStream result;result.writeBits(bytes.data(),bits,false);return result;
}
std::string message(samp::server::RakNetPeer& peer) {
    auto frames=Wire::messages(peer);CHECK(!frames.empty());if(frames.empty()) return {};
    auto data=payload(frames.back(),93);unsigned colour=0,size=0;CHECK(data.read(&colour,4) && data.read(&size,4));
    std::string text(size,'\0');CHECK(data.read(text.data(),size));return text;
}
void rcon(samp::server::GameLayer& game,samp::server::RakNetPeer& peer,std::string_view text) {
    BitStream packet;const unsigned char id=201;const auto size=static_cast<unsigned>(text.size());
    packet.write(&id,1);packet.write(&size,4);packet.write(text.data(),size);game.on_user_message(peer,packet);
}
void server() {
    samp::server::GameLayer game;samp::server::Config config;game.config_=&config;config.values_["rcon_password"]="secret";
    samp::server::RakNetPeer one,two;game.players_.resize(2);
    for(int i=0;i<2;++i) {auto& p=game.players_[i];p.id=i;p.in_use=p.joined=true;p.name=i?"Second":"First";p.peer=i?&two:&one;p.ipv4_address=0x0100007f;p.streamed_to.resize(2);}
    std::vector<std::string> trace;int ticks=0,timer_argument=0;std::vector<cell> timer_arguments;
    Access::init(game.vm_,[&](auto name,auto args)->cell {
        if(name=="Tick") {++ticks;return 1;}
        if(name=="TimerEx") {timer_arguments.assign(args.begin(),args.end());timer_argument=static_cast<int>(args[0]);return 1;}
        trace.push_back("gm:"+std::string(name));
        if(name=="OnRconLoginAttempt") {CHECK(Access::text(game.vm_,args[0])=="127.0.0.1");CHECK(!game.players_[0].is_admin);}
        if(name=="OnPlayerPickUpPickup") CHECK(args[0]==0 && args[1]==3);
        return 1;
    });
    auto fs=std::make_unique<samp::pawn::PawnVm>();Access::init(*fs,[&](auto name,auto)->cell {trace.push_back("fs:"+std::string(name));return 1;});
    samp::pawn::register_server_natives(*fs,game);
    game.filterscripts_.push_back(std::move(fs));samp::pawn::register_server_natives(game.vm_,game);
    auto& vm=game.vm_;
    CHECK(Access::call(vm,"GetPlayerName",{0,128,4})==3 && Access::text(vm,128)=="Fir");
    CHECK(Access::call(vm,"GetPlayerName",{2,128,24})==0);
    CHECK(Access::call(vm,"SetPlayerScore",{0,-123})==1 && Access::call(vm,"GetPlayerScore",{0})==-123);
    CHECK(Access::call(vm,"SetPlayerScore",{1000,123})==0 && Access::call(vm,"GetPlayerScore",{1000})==0);
    Access::text(vm,256,"all players");Wire::clear(one);Wire::clear(two);
    CHECK(Access::call(vm,"SendClientMessageToAll",{-1,256})==1);CHECK(message(one)=="all players" && message(two)=="all players");
    Wire::clear(one);Wire::clear(two);CHECK(Access::call(vm,"SendDeathMessage",{65535,1,24})==1);
    auto death=payload(Wire::messages(one).back(),55);std::array<unsigned char,5> bytes{};CHECK(death.read(bytes.data(),5));CHECK((bytes==std::array<unsigned char,5>{255,255,1,0,24}));
    CHECK(Wire::messages(two).size()==1);
    Wire::clear(one);Wire::clear(two);
    CHECK(Access::call(vm,"AddStaticPickup",{371,15,std::bit_cast<cell>(1.f),std::bit_cast<cell>(2.f),std::bit_cast<cell>(3.f)})==1);
    game.update_streaming();auto pickup_wire=payload(Wire::messages(one).back(),95);
    unsigned pickup_slot=99;int model=0,type=0;float position[3]{};
    CHECK(pickup_wire.read(&pickup_slot,4) && pickup_wire.read(&model,4) && pickup_wire.read(&type,4) && pickup_wire.read(position,12));
    CHECK(pickup_slot==0 && model==371 && type==15 && position[0]==1 && position[1]==2 && position[2]==3);
    Wire::clear(one);game.players_[0].x=201;game.players_[0].y=2;game.update_streaming();
    auto removed=payload(Wire::messages(one).back(),63);CHECK(removed.read(&pickup_slot,4) && pickup_slot==0);
    game.players_[0].x=game.players_[0].y=0;
    Access::text(vm,512,"Tick");const auto timer=Access::call(vm,"SetTimer",{512,10,1});CHECK(timer>0);
    game.process_script_timers(9);CHECK(ticks==0);game.process_script_timers(1);CHECK(ticks==1);
    game.process_script_timers(35);CHECK(ticks==2); // one callback per server tick
    CHECK(Access::call(vm,"KillTimer",{timer})==1);game.process_script_timers(1);CHECK(ticks==2 && game.script_timers_.empty());
    Access::call(vm,"SetTimer",{512,10,0});game.process_script_timers(10);CHECK(ticks==3 && game.script_timers_.empty());
    Access::text(vm,512,"TimerEx");Access::text(vm,700,"if");
    const cell scalar=42, floating=std::bit_cast<cell>(3.5f);
    Access::write_cell(vm,800,scalar);
    Access::write_cell(vm,804,floating);
    const auto ex_timer=Access::schedule(vm);CHECK(ex_timer>0);
    CHECK((game.script_timers_.at(static_cast<std::uint32_t>(ex_timer)).arguments==std::vector<cell>{42,std::bit_cast<cell>(3.5f)}));
    game.process_script_timers(10);CHECK(timer_argument==42 && timer_arguments[1]==std::bit_cast<cell>(3.5f) && game.script_timers_.empty());
    Access::text(vm,700,"");
    for (const auto [size,accepted] : {std::pair{259,true},std::pair{260,true},std::pair{261,false}}) {
        std::vector<cell> call_args(static_cast<std::size_t>(size),0);
        call_args[0]=512;call_args[1]=10;call_args[2]=0;call_args[3]=700;
        const auto id=Access::call(vm,"SetTimerEx",std::span<const cell>(call_args));
        CHECK((id>0)==accepted);
        if(id>0) Access::call(vm,"KillTimer",{id});
    }
    Access::text(vm,700,"ai");
    const cell array[]{10,20,30}, array_length=2;
    for(int i=0;i<3;++i) Access::write_cell(vm,900+i*4,array[i]);
    Access::write_cell(vm,912,array_length);
    const auto array_timer=Access::call(vm,"SetTimerEx",{512,10,0,700,900,912});CHECK(array_timer>0);
    CHECK(game.script_timers_.at(static_cast<std::uint32_t>(array_timer)).arguments.size()==2);
    const auto copied_array=game.script_timers_.at(static_cast<std::uint32_t>(array_timer)).arguments[0];
    CHECK(game.script_timers_.at(static_cast<std::uint32_t>(array_timer)).arguments[1]==2);
    CHECK(copied_array>=1024);
    CHECK(Access::read_cell(vm,static_cast<int>(copied_array))==10 && Access::read_cell(vm,static_cast<int>(copied_array+4))==20);
    game.process_script_timers(10);
    CHECK(timer_arguments.size()==2 && timer_arguments[0]==copied_array && timer_arguments[1]==2);
    Access::text(vm,700,"aii");
    const auto mixed_timer=Access::call(vm,"SetTimerEx",{512,10,0,700,900,912,800});CHECK(mixed_timer>0);
    const auto mixed=game.script_timers_.at(static_cast<std::uint32_t>(mixed_timer)).arguments;
    CHECK(mixed.size()==3 && mixed[0]>=1024 && mixed[1]==2 && mixed[2]==42);
    CHECK(Access::read_cell(vm,static_cast<int>(mixed[0]))==10 && Access::read_cell(vm,static_cast<int>(mixed[0]+4))==20);
    game.process_script_timers(10);
    CHECK(timer_arguments.size()==3 && timer_arguments[0]==mixed[0] && timer_arguments[1]==2 && timer_arguments[2]==42);
    Access::text(vm,700,"s");Access::text(vm,960,"saved text");
    const auto string_timer=Access::call(vm,"SetTimerEx",{512,10,0,700,960});CHECK(string_timer>0);
    const auto string_args=game.script_timers_.at(static_cast<std::uint32_t>(string_timer)).arguments;
    CHECK(string_args.size()==1 && string_args[0]>=1024);
    if(string_args.size()==1 && string_args[0]>=1024 && string_args[0]<8192)
        CHECK(Access::text(vm,static_cast<int>(string_args[0]))=="saved text");
    game.process_script_timers(10);
    CHECK(timer_arguments.size()==1 && timer_arguments[0]==string_args[0]);
    Access::text(vm,700,"ai");Access::write_cell(vm,912,2000);
    CHECK(Access::call(vm,"SetTimerEx",{512,10,0,700,900,912})==0);
    Access::call(vm,"SetTimer",{512,100,1});game.remove_script_timers(&vm);CHECK(game.script_timers_.empty());
    Wire::clear(one);trace.clear();rcon(game,one,"login wrong");CHECK(!game.players_[0].is_admin && message(one)=="SERVER: Bad admin password. Repeated attempts will get you banned.");
    CHECK((trace==std::vector<std::string>{"fs:OnRconLoginAttempt","gm:OnRconLoginAttempt"}));
    trace.clear();rcon(game,one,"LoGiN secret");CHECK(game.players_[0].is_admin && message(one)=="SERVER: You are logged in as admin.");
    CHECK(Access::call(vm,"IsPlayerAdmin",{0})==1 && Access::call(vm,"IsPlayerAdmin",{1})==0);
    std::string executed;game.execute_remote_console_=[&](int player,std::string_view command) {CHECK(player==0);executed=command;};
    rcon(game,one,"echo exact text");CHECK(executed=="echo exact text");
    executed.clear();rcon(game,two,"echo forbidden");CHECK(executed.empty());
    BitStream truncated;const unsigned char id=201;const unsigned size=99;truncated.write(&id,1);truncated.write(&size,4);game.on_user_message(one,truncated);CHECK(executed.empty());
    Wire::clear(one);CHECK(Access::call(vm,"EnablePlayerCameraTarget",{0,1})==1);
    auto enable=payload(Wire::messages(one).back(),170);CHECK(enable.readBit());
    const std::array<unsigned short,4> targets{4,5,6,7};BitStream report;report.write(targets.data(),8);rpc(game,one,168,report);
    CHECK(Access::call(vm,"GetPlayerCameraTargetObject",{0})==4 && Access::call(vm,"GetPlayerCameraTargetVehicle",{0})==5);
    CHECK(Access::call(vm,"GetPlayerCameraTargetPlayer",{0})==6 && Access::call(vm,"GetPlayerCameraTargetActor",{0})==7);
    Access::call(vm,"EnablePlayerCameraTarget",{0,0});rpc(game,one,168,report);CHECK(Access::call(vm,"GetPlayerCameraTargetObject",{0})==65535);
    BitStream picked;const int pickup=3;picked.write(&pickup,4);trace.clear();rpc(game,one,131,picked);
    CHECK((trace==std::vector<std::string>{"gm:OnPlayerPickUpPickup","fs:OnPlayerPickUpPickup"}));
    Wire::clear(one);Wire::pings(one);game.players_[0].score=-123;game.players_[1].score=456;rpc(game,one,155);
    auto scores=payload(Wire::messages(one).back(),155);
    for(unsigned short i=0;i<2;++i) {unsigned short player=9;int score=0;unsigned ping=0;CHECK(scores.read(&player,2) && scores.read(&score,4) && scores.read(&ping,4));CHECK(player==i && score==(i?456:-123) && ping==(i?0xffffffffu:5));}
    unsigned short addresses=0;CHECK(scores.read(&addresses,2) && addresses==1);
    const auto count=Wire::messages(one).size();rpc(game,one,155);CHECK(Wire::messages(one).size()==count);
}
void labels() {
    using namespace samp::client::render;WorldLabelHost host;std::array<float,3> point{};
    unsigned draws=0,statuses=0;TextRect rect{};unsigned flags=0;
    host.project=[&](auto position)->std::optional<std::array<float,3>> {point=position;return std::array<float,3>{100,200,.5f};};
    host.line_of_sight=[](auto){return false;};host.measure=[](auto){return std::array<int,2>{40,15};};
    host.draw=[&](auto,auto rectangle,auto,unsigned format,bool){++draws;rect=rectangle;flags=format;};
    host.measure_status=[] {return std::array<int,2>{20,22};};host.status=[&](bool,auto,auto){++statuses;};
    draw_world_label(host,{1,2,3},"literal",0xff358bd4,true,true);CHECK(draws==0);
    draw_world_label(host,{1,2,3},"literal",0xff358bd4,true,false);CHECK(draws==1 && rect.left==100 && rect.top==200 && flags==0x101);
    draw_name_tag(host,{1,2,3},"Name (1)",-1,20,false,2);CHECK(draws==2 && statuses==0 && point[2]>4.14f && point[2]<4.16f && rect.left==80 && flags==0x100);
    draw_name_tag(host,{1,2,3},"Name (1)",-1,20,true,2);CHECK(statuses==2);
    host.project=[](auto)->std::optional<std::array<float,3>> {return std::array<float,3>{100,200,1.01f};};
    draw_name_tag(host,{1,2,3},"Name (1)",-1,20,true,2);CHECK(draws==3 && statuses==2);
}
void console() {
    struct Host:samp::server::ConsoleHost {
        std::vector<std::string> lines;
        void print(std::string_view line) override {lines.emplace_back(line);}
        void say_to_players(std::string_view) override {}
        bool reload_log() override {return true;}
    } host;
    const auto directory=std::filesystem::temp_directory_path()/("samp-console-unit-"+std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    std::filesystem::create_directories(directory);
    for(const char* name:{"bare.amx","lvdm.amx"}) {std::ofstream file(directory/name,std::ios::binary);file.put('\0');}
    samp::server::GameLayer game;samp::server::Config config;game.config_=&config;game.gamemodes_directory_=directory.string();
    config.values_["gamemode0"]="bare 1";config.values_["gamemode1"]="lvdm 1";
    bool running=true;samp::server::Console console{&host,&game,&config,&running,true};
    samp::server::RakNetPeer peer;game.players_.resize(1);
    game.players_[0].in_use=game.players_[0].joined=true;game.players_[0].peer=&peer;
    CHECK(console.execute("gravity 0.01234567") && game.gravity_==0.01234567f);
    auto gravity_wire=payload(Wire::messages(peer).back(),146);float gravity=0;
    CHECK(gravity_wire.read(&gravity,4) && gravity==game.gravity_);
    CHECK(console.execute("ECHO Exact message") && host.lines.back()=="Exact message");
    CHECK(console.execute("gmx") && game.gamemode_exit_requested_ && game.next_gamemode_=="lvdm");
    game.gamemode_exit_requested_=false;
    CHECK(console.execute("changemode bare") && game.gamemode_exit_requested_ && game.next_gamemode_=="bare");
    game.gamemode_exit_requested_=false;console.execute("changemode missing");CHECK(!game.gamemode_exit_requested_);
    CHECK(console.execute("exit") && !running); // deferred state only, no server is started/stopped
    std::filesystem::remove_all(directory);
}

// Official: samp-server.exe 0x004740f0/0x00474b30, 0x0047a230, 0x0047d130,
// 0x0047d2c0, 0x004771a0..0x00477480; client samp.dll 0x1001a3e0.
void world() {
    samp::server::GameLayer game; samp::server::Config config; game.config_ = &config; config.values_["rcon_password"] = "secret";
    samp::server::RakNetPeer one, two; game.players_.resize(2);
    for (int i = 0; i < 2; ++i) {
        auto& p = game.players_[i];
        p.id = i; p.in_use = p.joined = true; p.name = i ? "Second" : "First";
        p.peer = i ? &two : &one; p.ipv4_address = 0x0100007f; p.streamed_to.resize(2);
    }
    Access::init(game.vm_, [&](auto, auto) { return 1; });
    samp::pawn::register_server_natives(game.vm_, game);
    auto& vm = game.vm_;

    CHECK(Access::call(vm,"EnableZoneNames",{1})==1 && !game.zone_names_enabled_);
    CHECK(Access::call(vm,"DisableInteriorEnterExits",{})==1 && game.interior_enter_exits_disabled_);
    CHECK(Access::call(vm,"SetNameTagDrawDistance",{std::bit_cast<cell>(123.5f)})==1 && game.name_tag_draw_distance_==123.5f);
    game.initialize_player(game.players_[0]);
    auto init=payload(Wire::messages(one).back(),139);
    for(int i=0;i<4;++i) init.readBit();
    float init_number=0;CHECK(init.read(&init_number,4));init.readBit();
    CHECK(init.read(&init_number,4) && init_number==123.5f && init.readBit());
    CHECK(Access::call(vm, "GetGravity", {}) == std::bit_cast<cell>(0.008f));
    CHECK(Access::call(vm, "SetWorldTime", {14}) == 1);
    CHECK(Access::call(vm, "SetWeather", {7}) == 1);

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "SetGravity", {std::bit_cast<cell>(1.5f)}) == 1);
    CHECK(Access::call(vm, "GetGravity", {}) == std::bit_cast<cell>(1.5f));

    auto frame = [&](samp::server::RakNetPeer& peer, unsigned char expected) -> samp::proto::BitStream {
        auto frames = Wire::messages(peer);
        CHECK(!frames.empty());
        return payload(frames.back(), expected);
    };

    auto g1 = frame(one, 146); float gv = 0;
    CHECK(g1.read(&gv, 4) && gv == 1.5f);
    auto g2 = frame(two, 146);
    CHECK(g2.read(&gv, 4) && gv == 1.5f);

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "SetPlayerWorldBounds", {0, std::bit_cast<cell>(100.f), std::bit_cast<cell>(200.f), std::bit_cast<cell>(-100.f), std::bit_cast<cell>(-200.f)}) == 1);
    auto b = frame(one, 17); float vv[4] = {};
    CHECK(b.read(vv, 16));
    CHECK(vv[0] == 100.f && vv[1] == 200.f && vv[2] == -100.f && vv[3] == -200.f);
    CHECK(Wire::messages(two).empty());

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "SetPlayerMapIcon", {0, 7, std::bit_cast<cell>(1.f), std::bit_cast<cell>(2.f), std::bit_cast<cell>(3.f), 1, std::bit_cast<cell>(0xAABBCCDDu), 2}) == 1);
    auto m = frame(one, 56); std::uint8_t icon = 0, type = 0, style = 0; float x = 0, y = 0, z = 0; std::uint32_t colour = 0;
    CHECK(m.read(&icon, 1) && m.read(&x, 4) && m.read(&y, 4) && m.read(&z, 4) && m.read(&type, 1) && m.read(&colour, 4) && m.read(&style, 1));
    CHECK(icon == 7 && x == 1.f && y == 2.f && z == 3.f && type == 1 && colour == 0xAABBCCDDu && style == 2);
    CHECK(Access::call(vm, "RemovePlayerMapIcon", {0, 7}) == 1);
    auto r = frame(one, 144); std::uint8_t rid = 0; CHECK(r.read(&rid, 1) && rid == 7);
    CHECK(Access::call(vm, "SetPlayerMapIcon", {0, 200, std::bit_cast<cell>(1.f), std::bit_cast<cell>(2.f), std::bit_cast<cell>(3.f), 1, 0, 0}) == 0);
    CHECK(Access::call(vm, "RemovePlayerMapIcon", {0, 200}) == 0);
    CHECK(Access::call(vm, "SetPlayerMapIcon", {0, 256, std::bit_cast<cell>(1.f), std::bit_cast<cell>(2.f), std::bit_cast<cell>(3.f), 1, 0, 0}) == 1);
    auto wrapped = frame(one, 56); CHECK(wrapped.read(&icon,1) && icon==0);
    CHECK(Access::call(vm, "RemovePlayerMapIcon", {0, 0}) == 1);
    auto wrapped_remove=frame(one,144);CHECK(wrapped_remove.read(&rid,1) && rid==0);

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "GangZoneCreate", {std::bit_cast<cell>(1.f), std::bit_cast<cell>(2.f), std::bit_cast<cell>(3.f), std::bit_cast<cell>(4.f)}) == 0);
    CHECK(Access::call(vm, "GangZoneCreate", {std::bit_cast<cell>(5.f), std::bit_cast<cell>(6.f), std::bit_cast<cell>(7.f), std::bit_cast<cell>(8.f)}) == 1);
    CHECK(Access::call(vm, "GangZoneShowForPlayer", {0, 0, std::bit_cast<cell>(0xAABBCCDDu)}) == 1);
    auto zs = frame(one, 108); std::uint16_t zid = 0; float zb[4] = {}; std::uint32_t zcol = 0;
    CHECK(zs.read(&zid, 2) && zs.read(zb, 16) && zs.read(&zcol, 4));
    CHECK(zid == 0 && zb[0] == 1.f && zb[1] == 2.f && zb[2] == 3.f && zb[3] == 4.f && zcol == 0xDDCCBBAAu);
    CHECK(Wire::messages(two).empty());

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "GangZoneShowForAll", {1, std::bit_cast<cell>(0x11223344u)}) == 1);
    auto za = frame(one, 108); float zba[4] = {}; std::uint32_t zca = 0;
    CHECK(za.read(&zid, 2) && za.read(zba, 16) && za.read(&zca, 4));
    CHECK(zid == 1 && zba[0] == 5.f && zba[1] == 6.f && zba[2] == 7.f && zba[3] == 8.f && zca == 0x44332211u);
    auto zb2 = frame(two, 108); CHECK(zb2.read(&zid, 2) && zid == 1);

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "GangZoneHideForPlayer", {0, 0}) == 1);
    auto h = frame(one, 120); std::uint16_t hid = 0; CHECK(h.read(&hid, 2) && hid == 0);
    CHECK(Wire::messages(two).empty());

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "GangZoneFlashForAll", {0, std::bit_cast<cell>(0x11223344u)}) == 1);
    auto f = frame(one, 121); std::uint32_t fcol = 0; CHECK(f.read(&zid, 2) && f.read(&fcol, 4) && fcol == 0x44332211u);
    auto f2 = frame(two, 121); CHECK(f2.read(&zid, 2) && f2.read(&fcol, 4) && fcol == 0x44332211u);

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "GangZoneHideForAll", {1}) == 1);
    auto hide_all=frame(one,120);CHECK(hide_all.read(&hid,2) && hid==1);
    auto hide_all_two=frame(two,120);CHECK(hide_all_two.read(&hid,2) && hid==1);

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "GangZoneFlashForPlayer", {0,1,std::bit_cast<cell>(0xAABBCCDDu)}) == 1);
    auto flash_player=frame(one,121);CHECK(flash_player.read(&zid,2) && zid==1 && flash_player.read(&fcol,4) && fcol==0xDDCCBBAAu);
    CHECK(Wire::messages(two).empty());

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "GangZoneStopFlashForPlayer", {0, 0}) == 1);
    auto s = frame(one, 85); std::uint16_t sid = 0; CHECK(s.read(&sid, 2) && sid == 0);
    CHECK(Wire::messages(two).empty());

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "GangZoneStopFlashForAll", {1}) == 1);
    auto stop_all=frame(one,85);CHECK(stop_all.read(&sid,2) && sid==1);
    auto stop_all_two=frame(two,85);CHECK(stop_all_two.read(&sid,2) && sid==1);

    Wire::clear(one); Wire::clear(two);
    CHECK(Access::call(vm, "GangZoneDestroy", {0}) == 1);
    auto d = frame(one, 120); std::uint16_t did = 0; CHECK(d.read(&did, 2) && did == 0);
    CHECK(Wire::messages(two).size() == 1);

    CHECK(Access::call(vm,"SetGravity",{std::bit_cast<cell>(1.5f)})==1);
    game.begin_gamemode_restart();
    CHECK(Access::call(vm,"GetGravity",{})==std::bit_cast<cell>(0.008f));
    CHECK(Access::call(vm,"GangZoneCreate",{0,0,0,0})==0);
    for(int i=1;i<1024;++i) CHECK(Access::call(vm,"GangZoneCreate",{0,0,0,0})==i);
    CHECK(Access::call(vm,"GangZoneCreate",{0,0,0,0})==-1);
    CHECK(Access::call(vm,"GangZoneDestroy",{17})==1);
    CHECK(Access::call(vm,"GangZoneCreate",{0,0,0,0})==17);
}
}
int main(int,char**) {server();labels();console();world();std::printf("P2 official host/wire/rendering: %d failures\n",failures);return failures!=0;}
