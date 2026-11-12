#include "pawn/format_cells.hpp"
#include "samp/server/game_layer.hpp"
#include "samp/proto/amx.hpp"
#include "sqlite3.h"
#include <windows.h>
#include <io.h>
#include <array>
#include <algorithm>
#include <filesystem>
#include <bit>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iterator>
#include <limits>
#include <stdexcept>
#include <string>
#include <vector>

using samp::amx::cell;
void require(bool value,const char* reason) {if(!value) throw std::runtime_error(reason);}
namespace samp::server {
struct RakNetTransportTestAccess {
    static std::vector<samp::proto::BitStream> messages(RakNetPeer& peer) {
        std::vector<samp::proto::BitStream> messages;
        for(auto& queue:peer.send_state_.unsent) for(auto& frame:queue) messages.push_back(frame.data);
        return messages;
    }
    static void clear(RakNetPeer& peer) {peer.send_state_={};}
};
}

// Only the original formatter and its pure helpers execute in this unit-test
// process. No executable entrypoint, server, game, network or UI is started.
// The CRT decimal parser and SQLite allocator are explicit test boundaries.
class ReferenceFormatter {
    std::uint8_t* memory_=nullptr;
public:
    using Format=int(__cdecl*)(char*,int,const cell*,samp::amx::Amx*,const cell*,int*);
    using Native=cell(__cdecl*)(samp::amx::Amx*,const cell*);
    Format format=nullptr;
    Native native_format=nullptr;
    ReferenceFormatter() {
        std::ifstream stream(SAMP_OFFICIAL_SERVER_PATH,std::ios::binary);
        std::vector<char> file{std::istreambuf_iterator<char>(stream),{}};
        require(file.size()>0x1000,"Missing reference PE");
        const auto* dos=reinterpret_cast<const IMAGE_DOS_HEADER*>(file.data());
        const auto* nt=reinterpret_cast<const IMAGE_NT_HEADERS32*>(file.data()+dos->e_lfanew);
        require(nt->Signature==IMAGE_NT_SIGNATURE && nt->OptionalHeader.ImageBase==0x400000,"Wrong reference PE");
        memory_=static_cast<std::uint8_t*>(VirtualAlloc(nullptr,nt->OptionalHeader.SizeOfImage,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE));
        require(memory_!=nullptr,"Reference allocation failed");
        std::memcpy(memory_,file.data(),nt->OptionalHeader.SizeOfHeaders);
        const auto* sections=IMAGE_FIRST_SECTION(nt);
        for(WORD i=0;i<nt->FileHeader.NumberOfSections;++i) {
            const auto& section=sections[i];
            require(std::uint64_t(section.PointerToRawData)+section.SizeOfRawData<=file.size(),"Invalid reference section");
            std::memcpy(memory_+section.VirtualAddress,file.data()+section.PointerToRawData,section.SizeOfRawData);
        }
        const auto operand=[&](std::uint32_t instruction,std::uint32_t expected) {
            std::uint32_t value;std::memcpy(&value,memory_+instruction-0x400000,4);
            require(value==expected,"Reference operand differs");
            value=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(memory_)+expected-0x400000);
            std::memcpy(memory_+instruction-0x400000,&value,4);
        };
        operand(0x46d3f2,0x4b26f0);operand(0x46d47f,0x4b2708);operand(0x46d91d,0x4bc034);
        operand(0x46fd12,0x4fb400);operand(0x46fd39,0x4fb400);operand(0x46fd4d,0x4fb400);
        const auto jump=[&](std::uint32_t entry,auto function) {
            auto* at=memory_+entry-0x400000;at[0]=0xe9;
            const auto displacement=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(function)-reinterpret_cast<std::uintptr_t>(at+5));
            std::memcpy(at+1,&displacement,4);
        };
        jump(0x49f7f0,+[](const char* text)->int {return std::atoi(text);});
        jump(0x4189d0,+[](const char* spec,const char* text)->char* {return sqlite3_mprintf(spec,text);});
        jump(0x4080d0,+[](void* pointer) {sqlite3_free(pointer);});
        DWORD previous;require(VirtualProtect(memory_,nt->OptionalHeader.SizeOfImage,PAGE_EXECUTE_READ,&previous)!=FALSE,"Reference protection failed");
        require(VirtualProtect(memory_+0xfb000,8192,PAGE_READWRITE,&previous)!=FALSE,"Reference buffer protection failed");
        FlushInstructionCache(GetCurrentProcess(),memory_,nt->OptionalHeader.SizeOfImage);
        format=reinterpret_cast<Format>(memory_+0x6d680);
        native_format=reinterpret_cast<Native>(memory_+0x73140);
    }
    ~ReferenceFormatter() {if(memory_) VirtualFree(memory_,0,MEM_RELEASE);}
};

int main(int argc,char** argv) {
    try {
        ReferenceFormatter reference;
        std::array<std::uint8_t,32768> image{};
        const std::int32_t data_offset=64;std::memcpy(image.data()+0x10,&data_offset,4);
        samp::amx::Amx state{};state.base=image.data();state.hea=state.stk=state.stp=32000;
        const auto text=[&](int address,const std::string& value,bool packed=false) {
            auto* output=reinterpret_cast<cell*>(image.data()+data_offset+address);
            if(!packed) for(std::size_t i=0;i<=value.size();++i) output[i]=i<value.size()?static_cast<unsigned char>(value[i]):0;
            else {
                std::memset(output,0,(value.size()/4+1)*4);
                for(std::size_t i=0;i<value.size();++i) output[i/4]|=static_cast<cell>(static_cast<std::uint32_t>(static_cast<unsigned char>(value[i]))<<(24-8*(i%4)));
            }
        };
        const auto value=[&](int address,cell number) {std::memcpy(image.data()+data_offset+address,&number,4);};
        text(256,"O'Brien");text(512,"packed'quote",true);text(768,"");value(64,-12);value(68,0x123abcd);value(72,5);value(76,3);value(80,std::bit_cast<cell>(-1.25f));
        value(84,std::numeric_limits<cell>::min());value(88,-1);value(92,0);value(96,std::bit_cast<cell>(.1f));value(100,std::bit_cast<cell>(std::numeric_limits<float>::quiet_NaN()));
        std::size_t checked=0;
        const auto compare=[&](const std::string& spec,std::vector<cell> args) {
            text(1024,spec);const auto* format=reinterpret_cast<const cell*>(image.data()+data_offset+1024);
            std::vector<cell> parameters{static_cast<cell>((args.size()+1)*4),1024};parameters.insert(parameters.end(),args.begin(),args.end());
            std::array<char,4097> expected{};int next=2;
            reference.format(expected.data(),4095,format,&state,parameters.data(),&next);
            const auto actual=samp::pawn::format_cells(&state,format,args);
            ++checked;
            if(actual!=expected.data()) {
                std::printf("Mismatch format=%s\n actual=[%s]\n original=[%s]\n",spec.c_str(),actual.c_str(),expected.data());
                throw std::runtime_error("Formatter differs from original");
            }
        };
        compare("Official help text",{});compare("%d|%i|%x|%h|%b",{64,64,68,88,72});
        compare("%05d|%-5d|%08x|%08b|%d",{64,64,68,72,84});
        compare("%s|%.3s|%12s|%-12s|%.0s",{256,256,256,256,256});
        compare("%q|%.5q|%20q|%q",{256,256,256,512});
        compare("[%10q][%10s]",{768,768});
        compare("%*.*s|%*d",{72,76,256,72,64});
        compare("%f|%.0f|%.2f|%08.3f|%f",{80,80,80,80,100});
        compare("%c|%%|%u|%z|end%",{72});
        compare("missing%d%i%s",{});
        for(int width:{0,1,4,10,70}) for(int precision:{0,1,3,6,12}) {
            compare("%0"+std::to_string(width)+"d|%"+std::to_string(width)+"x",{64,68});
            compare("%"+std::to_string(width)+"."+std::to_string(precision)+"f",{96});
        }
        for(const float sample:{0.f,-0.f,1.f,-1.f,.0000001234567f,123456.f,123.456789f,16777216.f,3000000000.f,
            std::numeric_limits<float>::infinity(),-std::numeric_limits<float>::infinity()}) {
            value(104,std::bit_cast<cell>(sample));
            for(const int precision:{0,3,6,12,18,60}) compare("%."+std::to_string(precision)+"f",{104});
        }
        compare(std::string(5000,'A'),{});
        std::printf("Original 0.3.DL formatter: %zu differential cases passed\n",checked);
        samp::server::GameLayer game;samp::server::Config config;game.config_=&config;
        auto& vm=game.vm_;vm.image_.assign(image.begin(),image.end());vm.header_.dat=data_offset;
        vm.amx_=state;vm.amx_.base=vm.image_.data();vm.ok_=true;
        samp::pawn::register_server_natives(vm,game);
        const auto native_text=[&](int address,const std::string& source) {
            auto* cells=reinterpret_cast<cell*>(vm.image_.data()+data_offset+address);
            for(std::size_t i=0;i<=source.size();++i) cells[i]=i<source.size()?static_cast<unsigned char>(source[i]):0;
        };
        native_text(1024,"%05d/%s");
        const auto actual_native=vm.native_functions_.at("format");
        for(const cell capacity:{1,5,16,64}) {
            std::array<cell,6> args{12000,capacity,1024,64,256,0};
            std::vector<cell> params{20};params.insert(params.end(),args.begin(),args.begin()+5);
            auto expected_image=vm.image_;auto expected_state=vm.amx_;expected_state.base=expected_image.data();
            const auto expected=reference.native_format(&expected_state,params.data());
            require(actual_native(std::span<const cell>(args.data(),5))==expected,"format native return mismatch");
            require(vm.image_==expected_image,"format native memory mismatch");
        }
        FILE* capture=nullptr;require(tmpfile_s(&capture)==0 && capture,"Cannot capture printf");
        std::fflush(stdout);const auto saved=_dup(_fileno(stdout));
        require(saved>=0 && _dup2(_fileno(capture),_fileno(stdout))==0,"Cannot redirect printf");
        const std::array<cell,3> print_args{1024,64,256};
        const auto printed=vm.native_functions_.at("printf")(print_args);
        std::fflush(stdout);_dup2(saved,_fileno(stdout));_close(saved);
        std::rewind(capture);std::array<char,128> printed_text{};std::fread(printed_text.data(),1,printed_text.size()-1,capture);std::fclose(capture);
        require(printed==0 && std::string(printed_text.data())=="-00012/O'Brien\n","printf native output differs");
        std::puts("Registered format native: original return/memory match at4 capacities; printf substitutes real referenced arguments");
        if(argc==3 && std::string_view(argv[1])=="--official-lvdm") {
            std::ifstream file(argv[2],std::ios::binary);std::vector<std::uint8_t> bytes{std::istreambuf_iterator<char>(file),{}};
            samp::pawn::AmxImage amx;require(samp::pawn::AmxImage::load_from_memory(bytes.data(),bytes.size(),amx),"Cannot load original LVDM");
            vm.image_=std::move(amx.data_);vm.header_=amx.header_;vm.publics_=amx.publics_;vm.natives_=amx.natives_;
            vm.amx_.base=vm.image_.data();vm.amx_.stk=vm.amx_.stp=vm.header_.stp-vm.header_.dat-4;
            vm.amx_.hea=vm.amx_.hlw=vm.header_.hea-vm.header_.dat;vm.amx_.flags=0x8000;vm.ok_=true;
            samp::server::RakNetPeer peer;game.players_.resize(1);auto& player=game.players_[0];
            player.id=0;player.in_use=player.joined=true;player.peer=&peer;player.name="OriginalScriptPlayer";
            require(game.start_gamemode()==0,"Unmodified LVDM cannot initialize through production bindings");
            const auto cars=std::count_if(game.vehicles_.begin(),game.vehicles_.end(),[](const auto& car){return car.active;});
            std::printf("Original LVDM initialized: cars=%zu timers=%zu pickups=%zu\n",static_cast<std::size_t>(cars),game.script_timers_.size(),
                static_cast<std::size_t>(std::count_if(game.pickups_.begin(),game.pickups_.end(),[](const auto& pickup){return pickup.active;})));
            // Packaged source has206 active calls;27 other vehicle lines are comments.
            require(game.script_timers_.size()==1 && cars==206,
                "Original LVDM initialization did not create its actual timer/vehicle state");
            require(std::any_of(game.pickups_.begin(),game.pickups_.end(),[](const auto& pickup){return pickup.active && pickup.model==371 && pickup.type==15;}),
                "Original LVDM static pickups were not registered");
            const std::array<cell,1> connected{0};cell connect_result=0;
            require(vm.execute("OnPlayerConnect",connected,connect_result)==0,"Original connect callback failed");
            samp::server::RakNetTransportTestAccess::clear(peer);
            // Reserve heap cells so the callback's local arrays cannot overwrite its input.
            const cell command=vm.amx_.hea;vm.amx_.hea+=256;auto* cells=reinterpret_cast<cell*>(vm.image_.data()+vm.header_.dat+command);
            const char help[]="/help";for(std::size_t i=0;i<sizeof(help);++i) cells[i]=help[i];
            const std::array<cell,2> args{0,command};cell result=0;
            for(const auto& native:vm.natives_) require(vm.native_functions_.contains(native.name),"Original script has an unresolved production native");
            require(vm.amx_.callback==nullptr,"Full script checks must not use an isolated resolver");
            const auto status=vm.execute("OnPlayerCommandText",args,result);
            if(status || result!=1) std::printf("LVDM callback status=%d result=%d\n",status,result);
            require(status==0 && result==1,"Original LVDM help callback failed");
            std::vector<std::string> messages;
            for(auto frame:samp::server::RakNetTransportTestAccess::messages(peer)) {
                std::uint8_t marker=0,rpc=0;std::uint32_t bits=0;frame.read(&marker,1);frame.read(&rpc,1);
                require(frame.readCompressed(reinterpret_cast<std::uint8_t*>(&bits),32,true),"Bad RPC framing");
                if(rpc!=93) continue;
                std::vector<std::uint8_t> wire_bytes((bits+7)/8);require(frame.readBits(wire_bytes.data(),bits,false),"Bad client-message RPC");
                samp::proto::BitStream payload;payload.writeBits(wire_bytes.data(),bits,false);
                std::uint32_t colour=0,length=0;require(payload.read(&colour,4) && payload.read(&length,4),"Bad client-message header");
                std::string message(length,'\0');require(payload.read(message.data(),length),"Bad client-message text");messages.push_back(message);
            }
            require(messages.size()==4 && messages[0]=="Las Venturas Deathmatch: Money Grub Coded By Jax and the SA-MP Team." &&
                messages[1]=="Type: /objective : to find out what to do in this gamemode." &&
                messages[2]=="Type: /givecash [playerid] [money-amount] to send money to other players." &&
                messages[3]=="Type: /tips : to see some tips from the creator of the gamemode.","Original help text was not emitted on RPC93");
            player.money=54321;game.process_script_timers(999);require(player.score==0,"Timer fired early");
            game.process_script_timers(1);require(player.score==54321,"Original score timer did not update real player score");
            require(game.script_timers_.size()==1 && game.script_timers_.begin()->second.remaining==1000,"Repeating timer did not reset");
            game.gamemodes_directory_=std::filesystem::path(argv[2]).parent_path().string();
            config.values_["gamemode0"]="lvdm 1";config.values_["gamemode1"]="bare 1";
            require(vm.native_functions_.at("GameModeExit")({})==0 && game.gamemode_exit_requested_ && game.next_gamemode_=="bare","GameModeExit did not select actual next script");
            game.begin_gamemode_restart();require(game.script_timers_.empty() && game.gamemode_restarting_,"Gamemode timer cleanup failed");
            game.finish_gamemode_restart();require(!game.gamemode_restarting_ && config.get("gamemodetext")=="Bare Script","Original next gamemode did not initialize");
            std::puts("Unmodified LVDM initialized with all production native bindings, original help RPCs and working score timer; GameModeExit rotated to unmodified Bare Script");
        }
        return 0;
    } catch(const std::exception& error) {std::printf("format failure: %s\n",error.what());return 1;}
}
