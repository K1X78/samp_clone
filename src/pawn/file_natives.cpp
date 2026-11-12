#include "pawn/file_natives.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_string_api.hpp"
#include "pawn/amx_set_string_api.hpp"
#include "pawn/amx_host_api.hpp"
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#ifdef _WIN32
#include <windows.h>
#include <io.h>
#else
#include <unistd.h>
#endif

namespace samp::pawn::file_natives {

// EAX=cells, ESI=FILE, stack argument=UTF-8 flag; returns cells, not bytes.
// Official: FUN_00405120 @ 0x00405120 (samp-server.exe)
cell write_cells(FILE* file, const cell* source, bool utf8) {
    cell count = 0;
    for (; *source; ++source, ++count) {
        const cell value = *source;
        if (!utf8 || value < 0x80) {
            std::putc(static_cast<unsigned char>(value), file);
            continue;
        }
        const int bytes = value < 0x800 ? 2 : value < 0x10000 ? 3 :
            value < 0x200000 ? 4 : value < 0x4000000 ? 5 : 6;
        constexpr unsigned prefixes[]{0,0,0xc0,0xe0,0xf0,0xf8,0xfc};
        const auto bits = static_cast<std::uint32_t>(value);
        std::putc(prefixes[bytes] | (bits >> (6 * (bytes - 1))), file);
        for (int shift = 6 * (bytes - 2); shift >= 0; shift -= 6)
            std::putc(0x80 | ((bits >> shift) & 0x3f), file);
    }
    return count;
}

// The first non-LF byte after CR is both included and pushed back.
// Official: FUN_00405340 @ 0x00405340 (samp-server.exe)
cell read_bytes(FILE* file, char* destination, int capacity) {
    cell count = 0;
    bool carriage = false;
    while (count != capacity - 1) {
        const int character = std::getc(file);
        if (character == EOF) break;
        destination[count++] = static_cast<char>(character);
        if (character == '\n') break;
        if (carriage) { std::ungetc(character, file); break; }
        carriage = character == '\r';
    }
    destination[count] = 0;
    return count;
}

// EDI=destination. Invalid UTF-8 rewinds the entire read and retries as bytes.
// Official: FUN_00404ef0 @ 0x00404ef0 (samp-server.exe)
cell read_cells(FILE* file, cell* destination, int capacity, bool utf8) {
    if (capacity == 0) return 0;
    fpos_t saved;
    std::fgetpos(file, &saved);
    cell count = 0;
    int pending = 0, minimum = 0;
    bool carriage = false;
    while (count != capacity - 1) {
        const int character = std::getc(file);
        if (character == EOF) {
            if (!utf8 || pending == 0) break;
            count = 0;
            std::fsetpos(file, &saved);
            continue;
        }
        if (!utf8) {
            destination[count++] = character;
            if (character == '\n') break;
            if (carriage) { std::ungetc(character, file); break; }
            carriage = character == '\r';
            continue;
        }
        if (pending > 0 && (character & 0xc0) == 0x80) {
            const auto bits = (static_cast<std::uint32_t>(destination[count]) << 6) | (character & 0x3f);
            destination[count] = static_cast<cell>(bits);
            if (--pending == 0) {
                const cell value = destination[count++];
                if (value < minimum || (value >= 0xd800 && value <= 0xdfff) || value == 0xfffe || value == 0xffff)
                    utf8 = false;
            }
        } else if (pending == 0 && character < 0x80) {
            destination[count++] = character;
            if (character == '\n') break;
        } else if (pending == 0) {
            if ((character & 0xe0) == 0xc0) { pending = 1; minimum = 0x80; }
            else if ((character & 0xf0) == 0xe0) { pending = 2; minimum = 0x800; }
            else if ((character & 0xf8) == 0xf0) { pending = 3; minimum = 0x10000; }
            else if ((character & 0xfc) == 0xf8) { pending = 4; minimum = 0x200000; }
            else if ((character & 0xfe) == 0xfc) { pending = 5; minimum = 0x4000000; }
            else utf8 = false;
            if (utf8) destination[count] = character & ((1u << (6 - pending)) - 1);
        } else utf8 = false;
        if (!utf8) { count = 0; std::fsetpos(file, &saved); }
    }
    destination[count] = 0;
    return count;
}

// Packed-input reference branch reads an uninitialized stack buffer; see P3_REPORT.
// Official: FUN_004056e0 @ 0x004056e0 (samp-server.exe)
cell write(samp::amx::Amx* state, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    cell* source = nullptr;
    amx_memory::get_address(state, args[1], &source);
    if (!source) return 0;
    int count = 0;
    amx_string::length(source, count);
    if (!count) return 0;
    auto* file = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0])));
    if (static_cast<std::uint32_t>(*source) < 0x1000000u) return write_cells(file, source, true);
    // Preserve the clone's defined packed-string output until that undefined
    // reference path has an evidence-backed compatibility policy.
    std::vector<char> text(static_cast<std::size_t>(count) + 1);
    amx_string::get_string(text.data(), source, 0, static_cast<std::uint32_t>(text.size()));
    return std::fputs(text.data(), file);
}

// Official: FUN_00405770 @ 0x00405770 (samp-server.exe)
cell read(samp::amx::Amx* state, std::span<const cell> args) {
    if (args.size() < 4 || args[2] <= 0) return 0;
    cell* destination = nullptr;
    amx_memory::get_address(state, args[1], &destination);
    if (!destination) { amx_host::raise_error(*state, 10); return 0; }
    auto* file = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0])));
    if (!args[3]) return read_cells(file, destination, args[2], true);
    const auto capacity = static_cast<std::uint32_t>(args[2]) * 4u;
    std::vector<char> buffer(capacity);
    const auto count = read_bytes(file, buffer.data(), static_cast<int>(capacity));
    amx_string::set_string(destination, buffer.data(), args[3], 0, capacity);
    return count;
}

// Raw mode returns the params block address, not putc's result.
// Official: FUN_00405830 @ 0x00405830 (samp-server.exe)
cell put_character(samp::amx::Amx*, std::span<const cell> args) {
    if (args.size() < 3) return 0;
    auto* file = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0])));
    if (args[2]) { const cell text[]{args[1], 0}; return write_cells(file, text, true); }
    std::putc(args[1], file);
    return static_cast<cell>(reinterpret_cast<std::uintptr_t>(args.data()) - 4u);
}

// Official: FUN_00405880 @ 0x00405880 (samp-server.exe)
cell get_character(samp::amx::Amx*, std::span<const cell> args) {
    if (args.size() < 3) return -1;
    auto* file = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0])));
    if (!args[2]) return std::getc(file);
    cell text[2];
    return read_cells(file, text, 2, true) ? text[0] : -1;
}

// Official: FUN_00405a40 @ 0x00405a40 (samp-server.exe)
cell exists(samp::amx::Amx* state, std::span<const cell> args) {
    if (args.empty()) return 0;
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &source);
    if (!source) return 0;
    int count = 0;
    amx_string::length(source, count);
    if (count <= 0) return 0;
    std::vector<char> name(static_cast<std::size_t>(count) + 1);
    amx_string::get_string(name.data(), source, 0, static_cast<std::uint32_t>(name.size()));
    char path[260];
    if (!resolve_path(name.data(), path, sizeof(path))) return 0;
#ifdef _WIN32
    return _access(path, 0) == 0;
#else
    return ::access(path, 0) == 0;
#endif
}

// Official: FUN_00405ae0 @ 0x00405ae0 (samp-server.exe)
cell remove(samp::amx::Amx* state, std::span<const cell> args) {
    if (args.empty()) return 0;
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &source);
    if (!source) return 0;
    int count = 0;
    amx_string::length(source, count);
    if (count <= 0) return 0;
    std::vector<char> name(static_cast<std::size_t>(count) + 1);
    amx_string::get_string(name.data(), source, 0, static_cast<std::uint32_t>(name.size()));
    char path[260];
    return resolve_path(name.data(), path, sizeof(path)) && std::remove(path) == 0;
}

// Filename arrives in EAX in the reference; destination/capacity are on stack.
// Official: FUN_004053d0 @ 0x004053d0 (samp-server.exe)
char* resolve_path(const char* name, char* destination, std::size_t capacity) {
    std::string root;
    for (const auto* variable : {"AMXFILE", "tmp", "temp", "tmpdir"}) {
#ifdef _WIN32
        char buffer[260]{};
        GetEnvironmentVariableA(variable, buffer, sizeof(buffer));
        if (*buffer) { root = buffer; break; }
#else
        const auto* value = std::getenv(variable);
        if (value && *value) { root = value; break; }
#endif
    }
    if (root.empty() || root.size() + 1 >= capacity) return nullptr;
    if (root.back() != '\\' && root.back() != '/' && root.size() + 1 < capacity)
        root += '\\';
    if (const auto* colon = std::strrchr(name, ':')) {
        name = colon + 1;
        if (const auto* pipe = std::strchr(name, '|')) name = pipe + 1;
        while (*name == '\\' || *name == '/') ++name;
    }
    if ((*name == '\\' || *name == '/') && (name[1] == '\\' || name[1] == '/')) {
        name += 2;
        if (const auto* separator = std::strpbrk(name, "\\/")) name = separator + 1;
    } else if (*name == '\\' || *name == '/') ++name;
    for (const auto* at = name; *at; ++at)
        if (*at == '.' && (at[1] == '\\' || at[1] == '/')) return nullptr;
    root += name;
    if (root.size() >= capacity) return nullptr;
    std::replace(root.begin(), root.end(), '/', '\\');
    std::memcpy(destination, root.c_str(), root.size() + 1);
    return destination;
}

// Modes are numeric and masked to 15 bits. Read/write retries with creation.
// Official: FUN_004055a0 @ 0x004055a0 (samp-server.exe)
cell open(samp::amx::Amx* state, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto mode = static_cast<std::uint32_t>(args[1]) & 0x7fffu;
    if (mode > 3) return 0;
    cell* source = nullptr;
    amx_memory::get_address(state, args[0], &source);
    if (!source) return 0;
    int count = 0;
    amx_string::length(source, count);
    if (count <= 0) return 0;
    std::vector<char> name(static_cast<std::size_t>(count) + 1);
    amx_string::get_string(name.data(), source, 0, static_cast<std::uint32_t>(name.size()));
    char path[260];
    if (!resolve_path(name.data(), path, sizeof(path))) return 0;
    constexpr const char* modes[]{"rb", "wb", "r+b", "ab"};
    auto* file = std::fopen(path, modes[mode]);
    if (!file && mode == 2) file = std::fopen(path, "w+b");
    return static_cast<cell>(reinterpret_cast<std::uintptr_t>(file));
}

// Official: FUN_004056c0 @ 0x004056c0 (samp-server.exe)
cell close(samp::amx::Amx*, std::span<const cell> args) {
    if (args.empty()) return 0;
    return std::fclose(reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0])))) == 0;
}

// 00401020 is an identity operation; disk cells retain little-endian order.
// Official: FUN_004058d0 @ 0x004058d0 (samp-server.exe)
cell block_write(samp::amx::Amx* state, std::span<const cell> args) {
    if (args.size() < 3) return 0;
    cell* source = nullptr;
    amx_memory::get_address(state, args[1], &source);
    if (!source) return 0;
    auto* file = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0])));
    cell count = 0;
    while (count < args[2]) {
        cell value;
        std::memcpy(&value, reinterpret_cast<const char*>(source) + count * 4, 4);
        if (std::fwrite(&value, 4, 1, file) != 1) break;
        ++count;
    }
    return count;
}

// Partial trailing cells are consumed without overwriting the destination.
// Official: FUN_00405950 @ 0x00405950 (samp-server.exe)
cell block_read(samp::amx::Amx* state, std::span<const cell> args) {
    if (args.size() < 3) return 0;
    cell* destination = nullptr;
    amx_memory::get_address(state, args[1], &destination);
    if (!destination) return 0;
    auto* file = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0])));
    cell count = 0;
    while (count < args[2]) {
        cell value;
        if (std::fread(&value, 4, 1, file) != 1) break;
        std::memcpy(reinterpret_cast<char*>(destination) + count * 4, &value, 4);
        ++count;
    }
    return count;
}

// This entry is a JMP to CRT tmpfile, not a second copy of that CRT body.
// Official: FUN_004059d0 @ 0x004059d0 (samp-server.exe)
cell temporary(samp::amx::Amx*, std::span<const cell>) {
    return static_cast<cell>(reinterpret_cast<std::uintptr_t>(std::tmpfile()));
}

// Returns CRT status, not the resulting byte offset. Invalid origins do nothing.
// Official: FUN_004059e0 @ 0x004059e0 (samp-server.exe)
cell seek(samp::amx::Amx*, std::span<const cell> args) {
    if (args.size() < 3 || args[2] < 0 || args[2] > 2) return 0;
    auto* file = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0])));
    return std::fseek(file, args[1], args[2]);
}

// Descriptor seeks deliberately preserve the FILE buffer and physical offset.
// Official: FUN_00405b80 @ 0x00405b80 (samp-server.exe)
cell length(samp::amx::Amx*, std::span<const cell> args) {
    if (args.empty()) return -1;
    auto* file = reinterpret_cast<FILE*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(args[0])));
#ifdef _WIN32
    const int descriptor = _fileno(file);
    const long saved = _lseek(descriptor, 0, SEEK_CUR);
    const long size = _lseek(descriptor, 0, SEEK_END);
    _lseek(descriptor, saved, SEEK_SET);
    return size;
#else
    const auto saved = std::ftell(file);
    std::fseek(file, 0, SEEK_END);
    const auto size = std::ftell(file);
    std::fseek(file, saved, SEEK_SET);
    return static_cast<cell>(size);
#endif
}
}
