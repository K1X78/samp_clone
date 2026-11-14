#include "samp/server/game_layer.hpp"
#include "pawn/variable_natives.hpp"
#include "pawn/amx_set_string_api.hpp"
#include <array>
#include <bit>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
#include "support/reference_code.hpp"
#endif

namespace samp::pawn {
using samp::amx::cell;
struct PawnNativeTestAccess {
    static void initialize(PawnVm& vm) {
        vm.header_.dat=128;vm.image_.assign(128+16384,0);
        std::memcpy(vm.image_.data(),&vm.header_,sizeof(vm.header_));
        vm.amx_={};vm.amx_.base=vm.image_.data();vm.amx_.stp=16380;vm.amx_.hea=12000;vm.amx_.stk=14000;vm.ok_=true;
    }
    static void text(PawnVm& vm,cell address,const std::string& text,bool packed=false) {
        amx_string::set_string(reinterpret_cast<cell*>(vm.image_.data()+vm.header_.dat+address),text.c_str(),packed,0,1024);
    }
    static cell call(PawnVm& vm,const char* name,std::initializer_list<cell> args) {return vm.native_functions_.at(name)({args.begin(),args.size()});}
    static void fill(PawnVm& vm,cell address) {std::memset(vm.image_.data()+vm.header_.dat+address,0xa5,256);}
    static cell at(PawnVm& vm,cell address) {cell value;std::memcpy(&value,vm.image_.data()+vm.header_.dat+address,4);return value;}
    static void disable(PawnVm& vm) {vm.ok_=false;}
};
}
namespace {
using samp::amx::cell;
using samp::pawn::PlayerVariablePool;
using Access=samp::pawn::PawnNativeTestAccess;
void require(bool value,const char* message) {if(!value)throw std::runtime_error(message);}

#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
class OfficialVariables {
    ReferenceCode upper_{SAMP_OFFICIAL_SERVER_PATH,0x468c60,0xe8};
    ReferenceCode code_{SAMP_OFFICIAL_SERVER_PATH,0x488da0,0x4f7};
    std::array<std::uint8_t,0xcb24> data_{};
    const float zero_=0;
public:
    OfficialVariables() {
        upper_.executable();code_.redirect(0x488e8c,upper_.entry(0x468d20));code_.redirect(0x488fa9,upper_.entry(0x468d20));
        for(auto site:{0x488dfd,0x48909f,0x48920d})code_.redirect(site,reinterpret_cast<const void*>(&std::free));
        code_.redirect(0x4890bd,reinterpret_cast<const void*>(&std::calloc));code_.pointer(0x4891d1,&zero_);code_.executable();
        using Constructor=void(__thiscall*)(void*);reinterpret_cast<Constructor>(code_.entry(0x488da0))(data_.data());
    }
    ~OfficialVariables() {using Destructor=void(__thiscall*)(void*);reinterpret_cast<Destructor>(code_.entry(0x488de0))(data_.data());}
    int integer(char* name,cell value,int read_only=0) {
        using Function=int(__thiscall*)(void*,char*,cell,int);return reinterpret_cast<Function>(code_.entry(0x488ff0))(data_.data(),name,value,read_only);
    }
    int string(char* name,const char* value,int read_only=0) {
        using Function=int(__thiscall*)(void*,char*,const char*,int);return reinterpret_cast<Function>(code_.entry(0x489050))(data_.data(),name,value,read_only);
    }
    int floating(char* name,cell value,int read_only=0) {
        using Function=int(__thiscall*)(void*,char*,cell,int);return reinterpret_cast<Function>(code_.entry(0x4890f0))(data_.data(),name,value,read_only);
    }
    int single(std::uint32_t address,char* name) {
        using Function=int(__thiscall*)(void*,char*);return reinterpret_cast<Function>(code_.entry(address))(data_.data(),name);
    }
    float get_float(char* name) {
        using Function=float(__thiscall*)(void*,char*);return reinterpret_cast<Function>(code_.entry(0x4891b0))(data_.data(),name);
    }
    const char* name_at(int index) {
        using Function=const char*(__thiscall*)(void*,int);return reinterpret_cast<Function>(code_.entry(0x489270))(data_.data(),index);
    }
    void compare(const PlayerVariablePool& pool) const {
        for(unsigned id=0;id<800;++id) {
            const auto* raw=data_.data()+id*61;const auto& entry=pool.entries[id];std::uint32_t active=0,read_only=0,type=0,string=0;cell integer=0,floating=0;
            std::memcpy(&active,data_.data()+0xbea0+id*4,4);std::memcpy(&read_only,raw+41,4);std::memcpy(&type,raw+45,4);
            std::memcpy(&integer,raw+49,4);std::memcpy(&floating,raw+53,4);std::memcpy(&string,raw+57,4);
            require(active==pool.active[id] && std::memcmp(raw,entry.name.data(),41)==0 && read_only==entry.read_only &&
                type==entry.type && integer==entry.integer && floating==std::bit_cast<cell>(entry.floating),"variable record differs from original instructions");
            require((string!=0)==(entry.string!=nullptr),"variable retained string ownership differs");
            if(string)require(std::strcmp(reinterpret_cast<const char*>(string),entry.string)==0,"variable string differs from original");
        }
        cell upper=0;std::memcpy(&upper,data_.data()+0xcb20,4);require(upper==pool.upper,"variable upper index differs from original");
    }
};

void storage_against_binary() {
    OfficialVariables original;PlayerVariablePool clone;original.compare(clone);
    for(const std::string key:std::array<std::string,5>{"mixedCase",std::string(40,'n'),std::string(41,'n'),std::string("high\x80\xffz"),std::string()}) {
        for(const cell value:{0,1,-1,INT32_MIN,0x7fc12345,0x7f812345}) {
            auto a=key,b=key;require(clone.set_int(a.data(),value)==original.integer(b.data(),value) && a==b,"variable name folding or integer set differs");original.compare(clone);
            a=b=key;require(clone.set_string(a.data(),"saved")==original.string(b.data(),"saved"),"variable string set differs");original.compare(clone);
            a=b=key;require(clone.set_float(a.data(),std::bit_cast<float>(value))==original.floating(b.data(),value),"variable float set differs");original.compare(clone);
            a=b=key;require(clone.get_int(a.data())==original.single(0x489150,b.data()),"typed integer getter differs");
            a=b=key;require(std::bit_cast<cell>(clone.get_float(a.data()))==std::bit_cast<cell>(original.get_float(b.data())),"typed float getter differs");
            a=b=key;require(clone.type(a.data())==original.single(0x489240,b.data()),"variable type getter differs");
            a=b=key;require(clone.erase(a.data())==original.single(0x4891e0,b.data()),"variable deletion differs");original.compare(clone);
        }
    }
    std::string a="Locked",b=a;clone.set_int(a.data(),17,1);original.integer(b.data(),17,1);
    a=b="locked";require(clone.set_string(a.data(),"denied")==0 && original.string(b.data(),"denied")==0,"read-only variable was writable");
    a=b="locked";clone.set_float(a.data(),3.f,1);original.floating(b.data(),std::bit_cast<cell>(3.f),1);original.compare(clone);
    a=b="locked";require(clone.erase(a.data())==original.single(0x4891e0,b.data()),"read-only deletion differs");
    for(int id=0;id<801;++id) {a="slot"+std::to_string(id);b=a;require(clone.set_int(a.data(),id)==original.integer(b.data(),id),"variable capacity differs");}
    original.compare(clone);
    for(const int index:{-1,0,17,799,800,INT32_MAX}) {
        const auto* c=clone.name_at(index);const auto* o=original.name_at(index);
        require((c!=nullptr)==(o!=nullptr) && (!c || std::strcmp(c,o)==0),"variable indexed name differs");
    }
    a=b="slot17";clone.erase(a.data());original.single(0x4891e0,b.data());
    a=b="replacement";clone.set_string(a.data(),"");original.string(b.data(),"");original.compare(clone);
    require(std::strcmp(clone.name_at(17),"REPLACEMENT")==0,"first free variable slot was not reused");
    a=b="slot799";clone.erase(a.data());original.single(0x4891e0,b.data());original.compare(clone);
}

void string_output_against_binary() {
    ReferenceCode code(SAMP_OFFICIAL_SERVER_PATH,0x46fcb0,0x43);code.executable();
    using Output=cell(__cdecl*)(samp::amx::Amx*,cell,const char*,cell);
    for(const cell length:{-1,0,1,3,4,5,10}) {
        std::array<std::uint8_t,512> a,b;a.fill(0xa5);b=a;const std::uint32_t data=64;
        std::memcpy(a.data()+0x10,&data,4);std::memcpy(b.data()+0x10,&data,4);
        samp::amx::Amx ca{},cb{};ca.base=a.data();cb.base=b.data();
        const char* text="A\x80\xffZ";
        const auto c=samp::pawn::variable_natives::write_string(&ca,12,text,length);
        const auto o=reinterpret_cast<Output>(code.entry(0x46fcb0))(&cb,12,text,length);
        require(c==o && a==b,"AMX string limit, terminator overwrite or signed bytes differ from original");
    }
}
#endif

void native_integration_and_lifetime() {
    samp::server::GameLayer game;game.players_.resize(1001);for(const int id:{0,999,1000}) {game.players_[id].id=id;game.players_[id].in_use=true;}
    samp::pawn::register_server_natives(game.vm_,game);Access::initialize(game.vm_);
    for(const int player:{65536,999}) {
        Access::text(game.vm_,0,"mixedCase",player==999);
        require(Access::call(game.vm_,"SetPVarInt",{player,0,0x11223344})==1 &&
            Access::call(game.vm_,"GetPVarInt",{player,0})==0x11223344 && Access::call(game.vm_,"GetPVarType",{player,0})==1,"registered integer variables failed");
        Access::fill(game.vm_,8192);
        require(Access::call(game.vm_,"GetPVarNameAtIndex",{player,0,8192,4})==4 && Access::at(game.vm_,8192)=='M' &&
            Access::at(game.vm_,8204)=='E' && Access::at(game.vm_,8208)==0,"indexed name count+terminator differs");
        Access::text(game.vm_,0,"MIXEDcase");Access::text(game.vm_,4096,"A\x80\xffZ",true);
        require(Access::call(game.vm_,"SetPVarString",{player,0,4096})==1,"packed string variable failed");
        Access::fill(game.vm_,8192);require(Access::call(game.vm_,"GetPVarString",{player,0,8192,3})==3 &&
            Access::at(game.vm_,8192)=='A' && Access::at(game.vm_,8196)==-128 && Access::at(game.vm_,8200)==-1 && Access::at(game.vm_,8204)==0,
            "variable output must sign-extend bytes and terminate after the supplied count");
        require(Access::call(game.vm_,"SetPVarFloat",{player,0,0x7fc12345})==1 && Access::call(game.vm_,"GetPVarFloat",{player,0})==0x7fc12345 &&
            Access::call(game.vm_,"GetPVarInt",{player,0})==0,"variable type replacement differs");
        Access::fill(game.vm_,8192);require(Access::call(game.vm_,"GetPVarString",{player,0,8192,4})==0 &&
            std::bit_cast<std::uint32_t>(Access::at(game.vm_,8192))==0xa5a5a5a5u,"missing string getter modified output");
        require(Access::call(game.vm_,"GetPVarsUpperIndex",{player})==1,"variable upper index differs");
        Access::fill(game.vm_,8192);require(Access::call(game.vm_,"GetPVarNameAtIndex",{player,-1,8192,0})==0 && Access::at(game.vm_,8192)==0,"missing indexed name did not clear output");
    }
    for(const int player:{1,1000,-1}) {
        Access::text(game.vm_,0,"test");require(Access::call(game.vm_,"SetPVarInt",{player,0,1})==0 && Access::call(game.vm_,"GetPVarsUpperIndex",{player})==0,"invalid variable player accepted");
    }
    for(const std::string name:{std::string(),std::string(41,'x')}) {
        Access::text(game.vm_,0,name);require(Access::call(game.vm_,"SetPVarInt",{0,0,1})==0,"empty or oversized variable name accepted");
    }
    Access::text(game.vm_,0,"mixedCase");require(Access::call(game.vm_,"DeletePVar",{0,0})==1 &&
        Access::call(game.vm_,"GetPVarsUpperIndex",{0})==0 && Access::call(game.vm_,"GetPVarsUpperIndex",{999})==1,"player variable pools were not isolated");
    Access::disable(game.vm_);game.disconnect_player(0,1);require(!game.players_[0].variables,"disconnected player retained variables");
    game.players_[1000].in_use=false;game.begin_gamemode_restart();require(!game.players_[999].variables,"player reset retained variables");
}
}

int main(int,char**) {
    try {
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
        storage_against_binary();string_output_against_binary();
#endif
        native_integration_and_lifetime();
    } catch(const std::exception& error) {std::fprintf(stderr,"%s\n",error.what());return 1;}
    return 0;
}
