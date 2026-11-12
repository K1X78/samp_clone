#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "samp/client/game_model_pools.hpp"
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <memory>
#include <set>

namespace {std::vector<std::uint8_t> memory(0x1177000);}
BOOL WINAPI model_pool_read(HANDLE,LPCVOID address,LPVOID output,SIZE_T size,SIZE_T* count) {
    const auto at=reinterpret_cast<std::uintptr_t>(address);
    if(at<0x400000 || at+size>0x1577000) return FALSE;
    std::memcpy(output,memory.data()+at-0x400000,size);if(count)*count=size;return TRUE;
}
BOOL WINAPI model_pool_write(HANDLE,LPVOID address,LPCVOID input,SIZE_T size,SIZE_T* count) {
    const auto at=reinterpret_cast<std::uintptr_t>(address);
    if(at<0x400000 || at+size>0x1577000) return FALSE;
    std::memcpy(memory.data()+at-0x400000,input,size);if(count)*count=size;return TRUE;
}
BOOL WINAPI model_pool_protect(LPVOID,SIZE_T,DWORD,PDWORD old) {if(old)*old=PAGE_READWRITE;return TRUE;}
BOOL WINAPI model_pool_flush(HANDLE,LPCVOID,SIZE_T) {return TRUE;}

namespace samp::client {
struct GameModelPoolsTestAccess {
    static bool install(GameModelPools& pools,std::vector<PatchRecord>& patches) {return pools.install_pointer_lists(patches);}
    static std::uint32_t base(const GameModelPools& pools) {return static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(pools.pointer_lists_.data()));}
};
}
int main() {
    const auto file=[](const char* name) {std::ifstream stream(name,std::ios::binary);return std::vector<std::uint8_t>{std::istreambuf_iterator<char>(stream),std::istreambuf_iterator<char>()};};
    const auto gta=file(SAMP_GTA_PATH),official=file(SAMP_OFFICIAL_CLIENT_PATH);
    const auto read=[](const auto& image,std::uint32_t address,void* output,std::size_t size) {
        const auto* dos=reinterpret_cast<const IMAGE_DOS_HEADER*>(image.data());
        const auto* nt=reinterpret_cast<const IMAGE_NT_HEADERS32*>(image.data()+dos->e_lfanew);
        const auto* sections=IMAGE_FIRST_SECTION(nt);const auto rva=address-nt->OptionalHeader.ImageBase;
        for(unsigned i=0;i<nt->FileHeader.NumberOfSections;++i) if(rva>=sections[i].VirtualAddress &&
            std::uint64_t(rva)+size<=std::uint64_t(sections[i].VirtualAddress)+sections[i].SizeOfRawData) {
            std::memcpy(output,image.data()+sections[i].PointerToRawData+rva-sections[i].VirtualAddress,size);return true;
        }
        return false;
    };
    int failures=0;
    const auto check=[&](bool valid,const char* name) {if(!valid){std::printf("FAIL: %s\n",name);++failures;}};
    struct Field {std::uint32_t address,value;};std::vector<Field> fields;
    for(const auto [table,count,offset,kind]:{
        std::array<std::uint32_t,4>{0x10154730,14,0,0},
        std::array<std::uint32_t,4>{0x101547a0,56,3,0},
        std::array<std::uint32_t,4>{0x10154960,11,3,1},
        std::array<std::uint32_t,4>{0x1015498c,4,0,2}}) {
        for(unsigned i=0;i<count;++i) {
            std::uint32_t address=0;check(read(official,table+i*4,&address,4),"official operand record");
            address+=offset;if(address==0x40914e) address+=3;
            fields.push_back({address,kind});
        }
    }
    fields.push_back({0x564dc7,3});fields.push_back({0x40936a,1});
    const auto pointer=[](std::uint32_t address) {return memory.data()+address-0x400000;};
    for(const auto& field:fields) check(read(gta,field.address-8,pointer(field.address-8),20),"GTA operand neighborhood");
    std::array<std::uint8_t,3> before{};check(read(gta,0x40914e,before.data(),3),"MOV prefix");
    std::memset(pointer(0xb7d0b8),0xaa,0x7080*4);
    auto pools=std::make_unique<samp::client::GameModelPools>();std::vector<samp::client::PatchRecord> patches;
    check(samp::client::GameModelPoolsTestAccess::install(*pools,patches),"real installer on mapped fixture");
    const auto base=samp::client::GameModelPoolsTestAccess::base(*pools);
    for(const auto& field:fields) {
        std::uint32_t actual=0;std::memcpy(&actual,pointer(field.address),4);
        const auto expected=base+(field.value==1?4:field.value==2?40000*4:field.value==3?28800*4:0);
        check(actual==expected,"relocated field matches original table's intended target");
    }
    check(std::memcmp(pointer(0x40914e),before.data(),3)==0,"instruction opcode preserved");
    check(patches.size()==88,"all native patch groups including end pointers retained");
    check(*reinterpret_cast<const std::uint32_t*>(pointer(0xb7d0b8))==0,"old sector scratch storage cleared");
    std::printf("model pool patches: %d failures\n",failures);return failures!=0;
}
