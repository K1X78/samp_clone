#include "pawn/natives.hpp"
#include <cstdlib>
#include <cstring>
#include <new>

namespace samp::pawn {

// Official: FUN_00465160 @ 0x00465160 (samp-server.exe)
MenuPool::MenuPool() {
    std::memset(data.data(),0,0x400);
    std::memset(data.data()+0x400,0xff,1000);
}

// Official: FUN_004652b0 @ 0x004652b0 (samp-server.exe)
MenuPool::~MenuPool() {
    for(std::size_t id=0;id<objects.size();++id) {
        std::free(objects[id]);objects[id]=nullptr;
        std::memset(data.data()+id*4,0,4);
    }
}

// Official: FUN_004651a0 @ 0x004651a0 (samp-server.exe)
std::uint8_t MenuPool::create(char* title,const std::array<std::int32_t,4>& position,std::uint8_t columns) {
    for(std::size_t id=1;id<128;++id) {
        std::uint32_t active=0;std::memcpy(&active,data.data()+0x200+id*4,4);
        if(active) continue;
        auto* memory=std::malloc(sizeof(MenuNativeState));if(!memory) return 0xff;
        auto* menu=new(memory) MenuNativeState(title,position[0],position[1],columns,position[2],position[3]);
        objects[id]=menu;menu->data[0]=static_cast<std::uint8_t>(id);
        const std::uint32_t pointer=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(menu)),used=1;
        std::memcpy(data.data()+id*4,&pointer,4);std::memcpy(data.data()+0x200+id*4,&used,4);
        return static_cast<std::uint8_t>(id);
    }
    return 0xff;
}

// Official: FUN_00465260 @ 0x00465260 (samp-server.exe)
bool MenuPool::destroy(std::uint8_t id) {
    std::uint32_t active=0;std::memcpy(&active,data.data()+0x200+std::size_t(id)*4,4);
    MenuNativeState* menu=nullptr;
    if(id<128) menu=objects[id];
    else {
        std::uint32_t pointer=0;std::memcpy(&pointer,data.data()+std::size_t(id)*4,4);
        menu=reinterpret_cast<MenuNativeState*>(static_cast<std::uintptr_t>(pointer));
    }
    if(!active || !menu) return false;
    std::memset(data.data()+0x200+std::size_t(id)*4,0,4);
    std::free(menu);
    if(id<128) objects[id]=nullptr;
    std::memset(data.data()+std::size_t(id)*4,0,4);
    return true;
}

// Official: FUN_00493340 @ 0x00493340 (samp-server.exe)
void MenuPool::reset_player(std::uint16_t player) {
    if(player>=1000) return;
    for(auto* menu:objects) if(menu) std::memset(menu->data.data()+0x361+std::size_t(player)*4,0,4);
}

} // namespace samp::pawn
