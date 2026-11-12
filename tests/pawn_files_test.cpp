#include "pawn/file_natives.hpp"
#include "pawn/amx_set_string_api.hpp"
#include "samp/server/game_layer.hpp"
#include <array>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <stdexcept>
#include <windows.h>

using samp::amx::cell;
void require(bool value, const char* description) {
    if (!value) throw std::runtime_error(description);
}

// Execute only recovered file helpers, with explicit host-CRT boundaries.
// Never call the original PE entrypoint or initialize its server/network code.
class ReferenceFiles {
    unsigned char* memory_ = nullptr;
public:
    ReferenceFiles() {
        std::ifstream stream(SAMP_OFFICIAL_SERVER_PATH,std::ios::binary);
        std::vector<char> bytes{std::istreambuf_iterator<char>(stream),{}};
        require(bytes.size()>4096,"reference PE missing");
        const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(bytes.data());
        const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS32*>(bytes.data()+dos->e_lfanew);
        require(nt->Signature == IMAGE_NT_SIGNATURE && nt->OptionalHeader.ImageBase == 0x400000,"reference PE identity");
        memory_ = static_cast<unsigned char*>(VirtualAlloc(nullptr,nt->OptionalHeader.SizeOfImage,MEM_COMMIT|MEM_RESERVE,PAGE_READWRITE));
        require(memory_ != nullptr,"reference allocation");
        const auto* sections = IMAGE_FIRST_SECTION(nt);
        for (WORD i=0;i<nt->FileHeader.NumberOfSections;++i) {
            const auto& section = sections[i];
            require(std::uint64_t(section.PointerToRawData)+section.SizeOfRawData <= bytes.size(),"reference section extent");
            std::memcpy(memory_+section.VirtualAddress,bytes.data()+section.PointerToRawData,section.SizeOfRawData);
        }
        const auto jump = [&](unsigned address, auto function) {
            auto* entry = memory_+address-0x400000;
            entry[0] = 0xe9;
            const auto displacement = static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(function)-reinterpret_cast<std::uintptr_t>(entry+5));
            std::memcpy(entry+1,&displacement,4);
        };
        jump(0x49fa47,+[](FILE* file)->int {return std::getc(file);});
        jump(0x49fa97,+[](FILE* file,fpos_t* position)->int {return std::fgetpos(file,position);});
        jump(0x49fa2f,+[](FILE* file,const fpos_t* position)->int {return std::fsetpos(file,position);});
        jump(0x49f9ea,+[](int character,FILE* file)->int {return std::ungetc(character,file);});
        jump(0x49fab9,+[](int character,FILE* file)->int {return std::putc(character,file);});
        DWORD previous;
        require(VirtualProtect(memory_,nt->OptionalHeader.SizeOfImage,PAGE_EXECUTE_READ,&previous)!=FALSE,"reference executable protection");
        FlushInstructionCache(GetCurrentProcess(),memory_,nt->OptionalHeader.SizeOfImage);
    }
    ~ReferenceFiles() {if(memory_) VirtualFree(memory_,0,MEM_RELEASE);}
    int read(FILE* file,cell* destination,int capacity,bool utf8) {
        auto* entry = memory_+0x4ef0;
        int result, mode = utf8;
        __asm {
            push edi
            mov edi,destination
            push mode
            push capacity
            push file
            call entry
            add esp,12
            mov result,eax
            pop edi
        }
        return result;
    }
};

int main(int, char**) {
    try {
        samp::pawn::PawnVm vm;
        samp::server::GameLayer host;
        samp::pawn::register_server_natives(vm, host);
        ReferenceFiles reference;
        std::array<cell, 4096> data{};
        samp::amx::AmxHeader header{};
        vm.amx_.base = &header;
        vm.amx_.data = data.data();
        vm.amx_.hea = 12288;
        vm.amx_.stk = 14336;
        vm.amx_.stp = 16384;
        const auto call = [&](const char* name, std::initializer_list<cell> args) {
            return vm.native_functions_.at(name)(std::span<const cell>(args.begin(),args.size()));
        };
        const auto put = [&](const char* name, bool packed = false) {
            samp::pawn::amx_string::set_string(data.data(),name,packed,0,128);
        };
        const auto root = std::filesystem::current_path().string();
        SetEnvironmentVariableA("AMXFILE", root.c_str());
        put("p3-file-fixture.bin");
        call("fremove",{0});
        require(call("fopen",{0,4}) == 0,"invalid numeric mode");
        require(call("fopen",{0,0}) == 0,"missing file returns zero");
        const cell file = call("fopen",{0,2});
        require(file != 0,"read/write mode creates missing file");
        auto* stream = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(file)));
        data[128] = 0x12345678; data[129] = -1; data[130] = 0;
        require(call("fblockwrite",{file,512,3}) == 3,"block count is cells");
        require(call("fblockwrite",{file,512,-1}) == 0,"negative count performs no writes");
        require(call("flength",{file}) == 0,"length does not flush pending FILE bytes");
        std::fflush(stream);
        require(call("flength",{file}) == 12 && std::ftell(stream) == 12,"descriptor length preserves position");
        require(call("fseek",{file,0,0}) == 0,"seek returns status");
        unsigned char bytes[12]{};
        require(std::fread(bytes,1,12,stream) == 12 && bytes[0] == 0x78 && bytes[3] == 0x12 && bytes[4] == 0xff,"literal little endian cells");
        call("fseek",{file,0,0});
        data[256] = data[257] = data[258] = data[259] = 99;
        require(call("fblockread",{file,1024,4}) == 3 && data[256] == 0x12345678 && data[257] == -1 && data[258] == 0 && data[259] == 99,"EOF leaves unread cells untouched");
        require(call("fseek",{file,-4,2}) == 0 && std::ftell(stream) == 8,"end-relative seek");
        require(call("fseek",{file,100,77}) == 0 && std::ftell(stream) == 8,"invalid origin no-op");
        require(call("fclose",{file}) == 1,"close returns success");
        require(call("fexist",{0}) == 1,"path existence");
        require(call("fremove",{0}) == 1 && call("fexist",{0}) == 0,"remove and missing existence");
        put("p3-file-fixture.bin",true);
        const auto append = call("fopen",{0,0x8003});
        require(append != 0,"packed filename and masked numeric mode");
        call("fputchar",{append,0,0});
        require(call("fputchar",{append,0,1}) == 0,"UTF-8 null writes no cells");
        require(call("fclose",{append}) == 1,"close append stream");
        const auto input = call("fopen",{0,0});
        require(call("flength",{input}) == 1,"raw null is written as a byte");
        require(call("fgetchar",{input,0,0}) == 0 && call("fgetchar",{input,0,0}) == -1,"raw null and EOF");
        call("fclose",{input}); call("fremove",{0});
        const auto output = call("ftemp",{});
        data[128] = 'A'; data[129] = 0x20ac; data[130] = '\n'; data[131] = 0;
        require(call("fwrite",{output,512}) == 3,"production fwrite returns cells rather than encoded bytes");
        call("fseek",{output,0,0});
        require(call("fgetchar",{output,0,1}) == 'A' && call("fgetchar",{output,0,1}) == 0x20ac &&
            call("fgetchar",{output,0,1}) == '\n' && call("fgetchar",{output,0,1}) == -1,"production UTF-8 character roundtrip and EOF");
        call("fclose",{output});
        put("../p3-file-fixture.bin");
        require(call("fopen",{0,1}) == 0,"dot followed by slash is rejected");
        char resolved[260];
        require(samp::pawn::file_natives::resolve_path("C:\\ignored|\\name",resolved,sizeof(resolved)) && std::string(resolved) == root+"\\name","drive and pipe stripping");
        require(!samp::pawn::file_natives::resolve_path("folder./name",resolved,sizeof(resolved)),"dot separator rejection applies beyond parent components");
        const auto temporary = call("ftemp",{});
        require(temporary != 0,"temporary FILE handle");
        stream = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(temporary)));
        const cell values[]{0x7f,0x80,0x7ff,0x800,0xffff,0x10000,0x1fffff,0x200000,0x3ffffff,0x4000000,0x7fffffff,-1,0};
        require(samp::pawn::file_natives::write_cells(stream,values,true) == 12,"UTF-8 returns input cell count including signed byte path");
        std::rewind(stream);
        const unsigned char expected[]{0x7f,0xc2,0x80,0xdf,0xbf,0xe0,0xa0,0x80,0xef,0xbf,0xbf,0xf0,0x90,0x80,0x80,0xf7,0xbf,0xbf,0xbf,0xf8,0x88,0x80,0x80,0x80,0xfb,0xbf,0xbf,0xbf,0xbf,0xfc,0x84,0x80,0x80,0x80,0x80,0xfd,0xbf,0xbf,0xbf,0xbf,0xbf,0xff};
        std::array<unsigned char,sizeof(expected)> actual{};
        require(std::fread(actual.data(),1,actual.size(),stream) == actual.size() && std::memcmp(actual.data(),expected,sizeof(expected)) == 0,"literal legacy 1-6 byte encoding");
        call("fclose",{temporary});
        const auto text_file = call("ftemp",{});
        stream = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(text_file)));
        const unsigned char text[]{'A',0xc2,0xa2,'\n',0xc0,0xaf,'\r','Z'};
        std::fwrite(text,1,sizeof(text),stream); std::rewind(stream);
        require(call("fread",{text_file,512,8,0}) == 3 && data[128] == 'A' && data[129] == 0xa2 && data[130] == '\n' && data[131] == 0,"unpacked UTF-8 line and terminator");
        require(call("fread",{text_file,512,8,0}) == 4 && data[128] == 0xc0 && data[129] == 0xaf && data[130] == '\r' && data[131] == 'Z',"invalid UTF-8 rewinds into byte fallback with CR lookahead");
        require(call("fgetchar",{text_file,0,0}) == 'Z',"CR lookahead byte was pushed back");
        std::rewind(stream);
        require(call("fread",{text_file,512,1,1}) == 3 && static_cast<std::uint32_t>(data[128]) == 0x41c2a200u,"packed line capacity is cells and terminator is packed");
        vm.amx_.error = 0;
        require(call("fread",{text_file,13000,8,0}) == 0 && vm.amx_.error == 10,"invalid output raises native error");
        call("fclose",{text_file});
        unsigned comparisons = 0;
        for (const std::vector<unsigned char>& sample : std::vector<std::vector<unsigned char>>{
            {}, {'A','B','\n','Z'}, {'A','\r','Z'}, {0xc2,0xa2,10}, {0xe2,0x82,0xac},
            {0xc0,0xaf,'\n'}, {0xed,0xa0,0x80}, {0xef,0xbf,0xbe}, {0xe2,0x82},
            {0xff,10}, {0xf8,0x88,0x80,0x80,0x80}, {0xfc,0x84,0x80,0x80,0x80,0x80},
            {0,1,2,13,0xff}, {0x80,0xbf,0x7f}, {0xfe,0xfd,0xfc}}) {
            for (int capacity : {1,2,3,8,32}) for (bool utf8 : {false,true}) {
                auto* original = std::tmpfile(); auto* clone = std::tmpfile();
                require(original && clone,"differential temporary files");
                std::fwrite(sample.data(),1,sample.size(),original);
                std::fwrite(sample.data(),1,sample.size(),clone);
                std::rewind(original); std::rewind(clone);
                std::array<cell,64> expected{}, actual{};
                expected.fill(0x12345678); actual.fill(0x12345678);
                const auto wanted = reference.read(original,expected.data(),capacity,utf8);
                const auto got = samp::pawn::file_natives::read_cells(clone,actual.data(),capacity,utf8);
                require(wanted == got && actual == expected && std::ftell(original) == std::ftell(clone),"decoder differs from original bytes/state");
                std::fclose(original); std::fclose(clone); ++comparisons;
            }
        }
        std::printf("Original file decoder: %u differential comparisons passed\n",comparisons);
        std::puts("Pawn file native checks passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr,"%s\n",error.what()); return 1;
    }
}
