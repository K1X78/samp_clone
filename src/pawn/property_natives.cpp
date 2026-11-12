#include "pawn/property_natives.hpp"

#include "pawn/amx_host_api.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_set_string_api.hpp"
#include "pawn/amx_string_api.hpp"

#include <bit>
#include <cstdlib>
#include <cstring>

#ifndef _WIN32
#include <strings.h>
#endif

namespace samp::pawn::property_natives {
namespace {
struct Property {
    Property* next;
    cell id;
    char* name;
    cell value;
};

// Official global 0x4ED050: one property list shared by all script VMs.
Property root{};

// Official: FUN_00404480 @ 0x00404480 (samp-server.exe)
Property* allocate(Property& head) {
    auto* item = static_cast<Property*>(std::malloc(sizeof(Property)));
    if (item == nullptr) return nullptr;
    item->id = 0;
    item->name = nullptr;
    item->value = 0;
    item->next = head.next;
    head.next = item;
    return item;
}

// Official: FUN_004044b0 @ 0x004044b0 (samp-server.exe)
void erase(Property& previous, Property* item) {
    previous.next = item->next;
    std::free(item->name);
    std::free(item);
}

// Allocation failure preserves the old record and does not raise an error.
// Official: FUN_004044d0 @ 0x004044d0 (samp-server.exe)
void update(Property& item, const char* text, cell id, cell value) {
    const auto length = std::strlen(text) + 1u;
    auto* replacement = static_cast<char*>(std::malloc(length));
    if (replacement == nullptr) return;
    std::free(item.name);
    std::memcpy(replacement, text, length);
    item.name = replacement;
    item.id = id;
    item.value = value;
}

// A nonempty name ignores VALUE and compares case-insensitively. Empty
// names instead match ID/VALUE, which is the library's string-property path.
// Official: FUN_00404530 @ 0x00404530 (samp-server.exe)
Property* find(Property& head, cell id, const char* name, cell value,
               Property** previous = nullptr) {
    Property* before = &head;
    Property* item = head.next;
    while (item != nullptr) {
        bool matches = item->id == id;
        if (matches && name[0] != '\0') {
#ifdef _WIN32
            matches = _stricmp(item->name, name) == 0;
#else
            matches = strcasecmp(item->name, name) == 0;
#endif
        } else if (matches) {
            matches = item->value == value;
        }
        if (matches) break;
        before = item;
        item = item->next;
    }
    if (previous != nullptr) *previous = before;
    return item;
}

// Official: FUN_004047d0 @ 0x004047d0 (samp-server.exe)
char* narrow(const cell* source) {
    int length = 0;
    amx_string::length(source, length);
    auto* text = static_cast<char*>(std::malloc(static_cast<std::uint32_t>(length) + 4u));
    amx_string::get_string(text, source, 0, 0x7fffffffu);
    return text;
}

}  // namespace

// Returns the previous value. With an empty name, STRING supplies the stored
// text while ID/VALUE identifies the record, exactly as in the core library.
// Official: FUN_00404910 @ 0x00404910 (samp-server.exe)
cell set(samp::amx::Amx* state, std::span<const cell> args) {
    cell* script_name = nullptr;
    amx_memory::get_address(state, args[1], &script_name);
    char* name = narrow(script_name);
    Property* item = find(root, args[0], name, args[2]);
    if (item == nullptr) item = allocate(root);
    if (item == nullptr) {
        amx_host::raise_error(*state, 16);
        std::free(name);
        return 0;
    }
    const cell previous = item->value;
    if (name[0] == '\0') {
        std::free(name);
        cell* script_string = nullptr;
        amx_memory::get_address(state, args[3], &script_string);
        name = narrow(script_string);
    }
    update(*item, name, args[0], args[2]);
    std::free(name);
    return previous;
}

// Official: FUN_00404a00 @ 0x00404a00 (samp-server.exe)
cell remove(samp::amx::Amx* state, std::span<const cell> args) {
    cell* script_name = nullptr;
    amx_memory::get_address(state, args[1], &script_name);
    char* name = narrow(script_name);
    Property* previous = nullptr;
    Property* item = find(root, args[0], name, args[2], &previous);
    cell result = 0;
    if (item != nullptr) {
        result = item->value;
        erase(*previous, item);
    }
    std::free(name);
    return result;
}

// Official: FUN_00404a70 @ 0x00404a70 (samp-server.exe)
cell exists(samp::amx::Amx* state, std::span<const cell> args) {
    cell* script_name = nullptr;
    amx_memory::get_address(state, args[1], &script_name);
    char* name = narrow(script_name);
    const bool found = find(root, args[0], name, args[2]) != nullptr;
    std::free(name);
    return found ? 1 : 0;
}

// Anonymous property strings are written packed, with the original endpoint
// validation arithmetic (the rounded cell count is added as a byte offset).
// Official: FUN_00404810 @ 0x00404810 (samp-server.exe)
cell get(samp::amx::Amx* state, std::span<const cell> args) {
    cell* script_name = nullptr;
    amx_memory::get_address(state, args[1], &script_name);
    char* name = narrow(script_name);
    Property* item = find(root, args[0], name, args[2]);
    if (item != nullptr && item->value == args[2] && name[0] == '\0') {
        const auto length = static_cast<std::uint32_t>(std::strlen(item->name));
        const auto endpoint = std::bit_cast<cell>(static_cast<std::uint32_t>(args[3]) + ((length + 3u) >> 2));
        if (amx_memory::validate(state, endpoint) != 0) {
            std::free(name);
            return 0;
        }
        cell* destination = nullptr;
        amx_memory::get_address(state, args[3], &destination);
        amx_string::set_string(destination, item->name, 1, 0, 0x7fffffffu);
    }
    std::free(name);
    return item != nullptr ? item->value : 0;
}

}
