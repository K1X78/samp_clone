#include "game_runtime.hpp"
#include "samp/client/remote_motion.hpp"
#include <cstdio>
#include <cstring>
#include <limits>
#include <memory>
#include <windows.h>

namespace samp::client {
struct GameModelPoolsTestAccess {
    static void signed_table(GameModelPools& pools) {
        pools.custom_table_installed_=true;
        pools.model_infos_[0]=0x1111;pools.model_infos_[32767]=0x2222;pools.model_infos_[65534]=0x3333;
    }
    static std::uintptr_t info(const GameModelPools& pools,std::int32_t id) {return reinterpret_cast<std::uintptr_t>(pools.model_info(id));}
};
struct GameRuntimeTestAccess {
    static void active(GameRuntime& game) {game.connected_=true;game.loading_=true;}
    static bool visible(std::uint8_t on,std::uint8_t off,std::uint8_t hour) {return GameRuntime::custom_object_visible(on,off,hour);}
    static void player(GameRuntime& game,int id,void* ped) {game.remote_peds_.peds_[id]={2,0,ped};}
    static void vehicle(GameRuntime& game,std::uint16_t id,void* entity) {game.remote_vehicles_[id]={0,entity,-1};}
};
}
namespace {
int failures=0;
#define CHECK(x) do {if(!(x)){std::printf("FAIL %d: %s\n",__LINE__,#x);++failures;}} while(false)
std::string displayed_text;
std::uint32_t displayed_time=0,displayed_style=0;
int display_calls=0;
void __cdecl capture_game_text(const char* text,std::uint32_t time,std::uint32_t style) {
    displayed_text=text;displayed_time=time;displayed_style=style;++display_calls;
}
std::vector<std::uint16_t> script_calls;
std::vector<std::uint32_t> zone_colours;
std::array<float,4> zone_rectangle{};
std::uint8_t menu_map=0;
void __cdecl capture_area(const float* rectangle,const std::uint32_t* colour,int) {
    std::copy_n(rectangle,4,zone_rectangle.begin());zone_colours.push_back(*colour);
}
void __fastcall capture_script(void* instance,void*) {
    auto* thread=static_cast<std::uint8_t*>(instance);
    const std::uint8_t* code=nullptr;std::memcpy(&code,thread+0x14,4);
    std::uint16_t opcode=0;std::memcpy(&opcode,code,2);script_calls.push_back(opcode);
    if(opcode==0x04ce || opcode==0x02a8 || opcode==0x0570 || opcode==0x02a7) {
        const std::uint32_t handle=123;std::memcpy(thread+0x3c,&handle,4);
    }
}
void game_text() {
    // Redirect only the two absolute GTA call operands in this test process.
    // Some Windows loaders reserve all low addresses below a high-base EXE.
    const auto redirect=[](auto member,std::size_t size,std::uint32_t expected,auto replacement) {
        static_assert(sizeof(member)==4);
        std::uint8_t* function=nullptr;std::memcpy(&function,&member,4);
        while(function[0]==0xe9) {
            std::int32_t displacement=0;std::memcpy(&displacement,function+1,4);
            function+=5+displacement;
        }
        std::uint8_t* operand=nullptr;
        for(std::size_t i=0;i+4<=size;++i) {
            std::uint32_t value;std::memcpy(&value,function+i,4);
            if(value==expected) {CHECK(operand==nullptr);operand=function+i;}
        }
        CHECK(operand!=nullptr);
        if(!operand) return false;
        DWORD old=0;const bool writable=VirtualProtect(operand,4,PAGE_EXECUTE_READWRITE,&old)!=FALSE;
        CHECK(writable);if(!writable)return false;
        const auto target=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(replacement));
        std::memcpy(operand,&target,4);FlushInstructionCache(GetCurrentProcess(),operand,4);
        DWORD ignored=0;VirtualProtect(operand,4,old,&ignored);return true;
    };
    const bool script=redirect(&samp::client::GameScript::command,2048,0x469eb0,&capture_script);
    const bool display=redirect(&samp::client::GameRuntime::display_game_text,256,0x69f2b0,&capture_game_text);
    if(script && display) {
        samp::client::GameRuntime runtime;
        runtime.display_game_text({5,5000,"~w~SA-MP: ~r~Bare Script"});
        CHECK(display_calls==1 && displayed_text=="~w~SA-MP: ~r~Bare Script" && displayed_time==5000 && displayed_style==5);
        CHECK(runtime.script_.opcode_==0xbe);
        runtime.display_game_text({201,5000,"ignored"});CHECK(display_calls==1);
        runtime.display_game_text({200,0,""});CHECK(display_calls==2 && displayed_text.empty() && displayed_style==200);
        runtime.display_game_text({0xffffffffu,1,"signed style"});CHECK(display_calls==3 && displayed_style==0xffffffffu);
        script_calls.clear();
        samp::client::MapIcon icon;icon.id=7;icon.type=1;icon.style=2;icon.revision=1;
        runtime.set_map_icon(icon);CHECK(script_calls.back()==0x0570);
        icon.style=1;runtime.set_map_icon(icon);
        CHECK(script_calls[1]==0x0164 && script_calls[2]==0x02a8);
        runtime.remove_map_icon(7);CHECK(script_calls.back()==0x0164);
        icon.type=0;icon.colour=0xaabbccdd;runtime.set_map_icon(icon);
        CHECK(script_calls[script_calls.size()-2]==0x0165 && script_calls.back()==0x0168);
        const bool area=redirect(&samp::client::GameRuntime::draw_gang_zones,2048,0x5853d0,&capture_area);
        const bool menu=redirect(&samp::client::GameRuntime::draw_gang_zones,2048,0xba67a4,&menu_map);
        if(area && menu) {
            samp::client::WorldState world;runtime.world_=&world;
            samp::client::GameRuntimeTestAccess::active(runtime);
            auto& zone=world.stream.gang_zones[4];zone.id=4;
            zone.min_x=1;zone.min_y=2;zone.max_x=3;zone.max_y=4;
            zone.base_colour=0xaabbccddu;zone.colour=0x11223344u;zone.flashing=true;
            runtime.draw_gang_zones(0);CHECK(zone_colours.back()==0xaabbccddu);
            CHECK((zone_rectangle==std::array<float,4>{1,4,3,2}));
            runtime.draw_gang_zones(500);CHECK(zone_colours.back()==0x11223344u);
            runtime.draw_gang_zones(1000);CHECK(zone_colours.back()==0xaabbccddu);
            zone.shown=false;const auto count=zone_colours.size();runtime.draw_gang_zones(1500);
            CHECK(zone_colours.size()==count);
        }
    }
}
template<class T,std::size_t N> void put(std::array<std::uint8_t,N>& data,std::size_t at,T value) {
    std::memcpy(data.data()+at,&value,sizeof(value));
}
void cause_and_killer() {
    samp::client::GameRuntime runtime;
    std::array<std::uint8_t,0x800> local{},remote{},vehicle{},unknown{};
    samp::client::GameRuntimeTestAccess::player(runtime,7,remote.data());
    samp::client::GameRuntimeTestAccess::vehicle(runtime,10,vehicle.data());
    std::uint16_t killer=0;
    CHECK(runtime.death_info(nullptr,killer)==0xff && killer==0xffff);
    local[0x760]=24;put(local,0x764,remote.data());
    CHECK(runtime.death_info(local.data(),killer)==24 && killer==7);
    put(local,0x764,unknown.data());
    CHECK(runtime.death_info(local.data(),killer)==0xff && killer==0xffff);
    local[0x760]=53;put(local,0x764,static_cast<void*>(nullptr));
    CHECK(runtime.death_info(local.data(),killer)==53 && killer==0xffff);
    local[0x760]=49;put(local,0x764,vehicle.data());put(vehicle,0x460,remote.data());
    CHECK(runtime.death_info(local.data(),killer)==49 && killer==7);
    put(vehicle,0x460,unknown.data());
    CHECK(runtime.death_info(local.data(),killer)==0xff && killer==0xffff);
    local[0x760]=54;put(local,0x764,unknown.data());
    CHECK(runtime.death_info(local.data(),killer)==54 && killer==0xffff);
    put(local,0x764,static_cast<void*>(nullptr));
    CHECK(runtime.death_info(local.data(),killer)==0xff && killer==0xffff);
    local[0x760]=47;put(local,0x764,remote.data());
    CHECK(runtime.death_info(local.data(),killer)==0xff);
}
void signed_model_table() {
    auto pools=std::make_unique<samp::client::GameModelPools>();
    using Access=samp::client::GameModelPoolsTestAccess;Access::signed_table(*pools);
    CHECK(Access::info(*pools,-32767)==0x1111 && Access::info(*pools,0)==0x2222 && Access::info(*pools,32767)==0x3333);
    CHECK(Access::info(*pools,-32768)==0 && Access::info(*pools,32768)==0);
    CHECK(Access::info(*pools,20001)==0 && Access::info(*pools,-1000)==0);
}
void model_time_intervals() {
    const auto visible=samp::client::GameRuntimeTestAccess::visible;
    for(unsigned hour=0;hour<24;++hour) {
        CHECK(visible(0,0,static_cast<std::uint8_t>(hour)));
        CHECK(visible(6,20,static_cast<std::uint8_t>(hour))==(hour>=6 && hour<20));
        CHECK(visible(20,6,static_cast<std::uint8_t>(hour))==(hour>=20 || hour<6));
        CHECK(!visible(6,6,static_cast<std::uint8_t>(hour)));
    }
}
void world_bounds() {
    samp::client::GameRuntime runtime;
    std::array<std::uint8_t,0x100> entity{};
    std::array<float,16> matrix{};matrix[12]=101;matrix[13]=0;matrix[14]=10;
    put(entity,0x14,matrix.data());put(entity,0x44,1.f);
    samp::client::WorldBoundsState bounds;bounds.set=true;
    bounds.min_x=100;bounds.min_y=-100;bounds.max_x=200;bounds.max_y=-200;
    CHECK(runtime.enforce_world_bounds(entity.data(),bounds));
    float velocity=0;std::memcpy(&velocity,entity.data()+0x44,4);
    CHECK(velocity==-.2f && matrix[14]>10.039f && matrix[14]<10.041f);
    matrix[12]=100;CHECK(!runtime.enforce_world_bounds(entity.data(),bounds));
    matrix[13]=-201;put(entity,0x48,-1.f);CHECK(runtime.enforce_world_bounds(entity.data(),bounds));
    std::memcpy(&velocity,entity.data()+0x48,4);CHECK(velocity==.2f);
}
void shots() {
    samp::client::GameRuntime runtime;
    std::array<std::uint8_t,0x800> ped{},vehicle{},object{};
    samp::client::PedMatrix matrix{};matrix[0]=matrix[5]=matrix[10]=matrix[15]=1;
    matrix[12]=10;matrix[13]=20;matrix[14]=30;
    put(ped,0x14,&matrix);put(vehicle,0x14,&matrix);put(object,0x14,&matrix);
    samp::client::GameRuntimeTestAccess::player(runtime,7,ped.data());
    samp::client::GameRuntimeTestAccess::vehicle(runtime,10,vehicle.data());
    const float origin[]{1,2,3},hit[]{11,22,33};
    runtime.capture_shot(origin,hit,ped.data(),24);CHECK(runtime.shots_.size()==1);
    auto record=runtime.shots_.back();std::uint16_t id=0;float offset[3];
    std::memcpy(&id,record.data()+1,2);std::memcpy(offset,record.data()+27,12);
    CHECK(record[0]==1 && id==7 && offset[0]==1 && offset[1]==2 && offset[2]==3 && record[39]==24);
    CHECK(std::memcmp(record.data()+3,origin,12)==0 && std::memcmp(record.data()+15,hit,12)==0);
    runtime.capture_shot(origin,hit,vehicle.data(),31);record=runtime.shots_.back();std::memcpy(&id,record.data()+1,2);
    CHECK(record[0]==2 && id==10 && record[39]==31);
    runtime.capture_shot(origin,hit,object.data(),24);record=runtime.shots_.back();std::memcpy(&id,record.data()+1,2);
    CHECK(record[0]==0 && id==0xffff && std::memcmp(record.data()+27,hit,12)==0);
    runtime.capture_shot(origin,hit,nullptr,34);CHECK(runtime.shots_.size()==3); // native sniper misses are not sent
    // A rotated orthonormal basis distinguishes native mode 0 from modes 1/2.
    matrix[0]=0;matrix[1]=1;matrix[4]=-1;matrix[5]=0;
    runtime.lag_compensation_mode_=0;
    runtime.capture_shot(origin,hit,ped.data(),24);record=runtime.shots_.back();
    std::memcpy(offset,record.data()+27,12);
    CHECK(offset[0]==2 && offset[1]==-1 && offset[2]==3);
    runtime.lag_compensation_mode_=2;
    runtime.capture_shot(origin,hit,ped.data(),24);record=runtime.shots_.back();
    std::memcpy(offset,record.data()+27,12);
    CHECK(offset[0]==1 && offset[1]==2 && offset[2]==3);
    float invalid[]{std::numeric_limits<float>::quiet_NaN(),0,0};
    runtime.capture_shot(invalid,hit,nullptr,24);CHECK(runtime.shots_.size()==5);
    for(int i=0;i<130;++i) runtime.capture_shot(origin,hit,nullptr,24);
    CHECK(runtime.shots_.size()==128);
}
}
int main() {static_assert(sizeof(void*)==4);cause_and_killer();shots();model_time_intervals();signed_model_table();game_text();world_bounds();std::printf("game runtime: %d failures\n",failures);return failures!=0;}
