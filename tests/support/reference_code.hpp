#pragma once

#include <cstdint>
#include <cstring>
#include <fstream>
#include <iterator>
#include <stdexcept>
#include <vector>
#include <windows.h>

// Test-owned copies of explicitly verified function bytes. No PE entrypoint runs.
class ReferenceCode {
    std::uint8_t* code_=nullptr;
    std::uint32_t address_=0;
    std::size_t size_=0;
public:
    ReferenceCode(const char* path,std::uint32_t address,std::size_t size):address_(address),size_(size) {
        std::ifstream input(path,std::ios::binary);
        const std::vector<std::uint8_t> bytes{std::istreambuf_iterator<char>(input),{}};
        if(bytes.size()<sizeof(IMAGE_DOS_HEADER)) throw std::runtime_error("reference PE unavailable");
        const auto* dos=reinterpret_cast<const IMAGE_DOS_HEADER*>(bytes.data());
        if(dos->e_magic!=IMAGE_DOS_SIGNATURE || dos->e_lfanew<=0 ||
           std::size_t(dos->e_lfanew)+sizeof(IMAGE_NT_HEADERS32)>bytes.size()) throw std::runtime_error("reference DOS header invalid");
        const auto* nt=reinterpret_cast<const IMAGE_NT_HEADERS32*>(bytes.data()+dos->e_lfanew);
        if(nt->Signature!=IMAGE_NT_SIGNATURE || nt->OptionalHeader.Magic!=IMAGE_NT_OPTIONAL_HDR32_MAGIC ||
           nt->OptionalHeader.ImageBase!=0x400000) throw std::runtime_error("reference must be server PE32");
        const auto rva=address-nt->OptionalHeader.ImageBase;
        const auto* sections=IMAGE_FIRST_SECTION(nt);std::size_t offset=bytes.size();
        for(unsigned i=0;i<nt->FileHeader.NumberOfSections;++i)
            if(rva>=sections[i].VirtualAddress && std::uint64_t(rva-sections[i].VirtualAddress)+size<=sections[i].SizeOfRawData)
                offset=sections[i].PointerToRawData+rva-sections[i].VirtualAddress;
        if(offset+size>bytes.size()) throw std::runtime_error("reference code extent invalid");
        code_=static_cast<std::uint8_t*>(VirtualAlloc(nullptr,size,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE));
        if(!code_) throw std::runtime_error("reference code allocation failed");
        std::memcpy(code_,bytes.data()+offset,size);
    }
    ~ReferenceCode() {if(code_) VirtualFree(code_,0,MEM_RELEASE);}
    void redirect(std::uint32_t site,const void* target) {
        if(site<address_ || std::uint64_t(site-address_)+5>size_ || code_[site-address_]!=0xe8)
            throw std::runtime_error("reference callsite mismatch");
        auto* call=code_+site-address_;
        const auto relative=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(target)-reinterpret_cast<std::uintptr_t>(call+5));
        std::memcpy(call+1,&relative,4);
    }
    void executable() {
        DWORD previous=0;
        if(!VirtualProtect(code_,size_,PAGE_EXECUTE_READ,&previous)) throw std::runtime_error("reference protection failed");
        FlushInstructionCache(GetCurrentProcess(),code_,size_);
    }
    void* entry(std::uint32_t address) const {
        if(address<address_ || address-address_>=size_) throw std::runtime_error("reference entry outside copy");
        return code_+address-address_;
    }
};
