#include "pawn/amx_runtime_api.hpp"

#include "pawn/amx_control_api.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_set_string_api.hpp"

#include <cstring>

namespace samp::pawn::amx_runtime {

// samp-server.exe 0x401410. Only the listed destination fields are reset;
// user data, error, saved/other registers and parameter count remain intact.
// Official: FUN_00401410 @ 0x00401410 (samp-server.exe)
int clone(samp::amx::Amx* destination, const samp::amx::Amx* source, void* data) noexcept {
    const auto read = []<typename Value>(std::uintptr_t address) {
        Value value;
        std::memcpy(&value, reinterpret_cast<const void*>(address), sizeof(value));
        return value;
    };
    const auto write = []<typename Value>(std::uintptr_t address, Value value) {
        std::memcpy(reinterpret_cast<void*>(address), &value, sizeof(value));
    };
    const auto difference = [](std::int32_t end, std::int32_t start) {
        return static_cast<samp::amx::cell>(static_cast<std::uint32_t>(end) -
                                            static_cast<std::uint32_t>(start));
    };
    const auto copy_words = [&](std::uintptr_t target, std::uintptr_t origin, std::uint32_t words) {
        for (std::uint32_t index = 0; index < words; ++index) {
            const auto offset = index * 4u;
            const auto value = read.operator()<std::uint32_t>(origin + offset);
            write(target + offset, value);
        }
    };
    if (source == nullptr) return 17;
    if (destination == nullptr) return 25;
    if ((static_cast<std::uint32_t>(source->flags) & 0x8000u) == 0) return 22;
    const auto image = reinterpret_cast<std::uintptr_t>(source->base);
    if (read.operator()<std::uint16_t>(image + 4) != 0xf1e0) return 17;
    if (read.operator()<std::int8_t>(image + 6) > 8 || read.operator()<std::int8_t>(image + 7) < 6) return 18;
    destination->base = reinterpret_cast<void*>(image);
    destination->hlw = difference(read.operator()<std::int32_t>(image + 0x14),
                                  read.operator()<std::int32_t>(image + 0x10));
    destination->stp = static_cast<samp::amx::cell>(static_cast<std::uint32_t>(
        difference(read.operator()<std::int32_t>(image + 0x18),
                   read.operator()<std::int32_t>(image + 0x10))) - 4u);
    destination->hea = destination->hlw;
    destination->stk = destination->stp;
    if (destination->callback == nullptr) destination->callback = source->callback;
    if (destination->debug == nullptr) destination->debug = source->debug;
    destination->flags = source->flags;
    destination->data = data;
    // Read source DATA after writing destination DATA: source==destination is
    // observable and must copy the newly assigned buffer to itself.
    const auto source_data = source->data != nullptr
        ? reinterpret_cast<std::uintptr_t>(source->data)
        : reinterpret_cast<std::uintptr_t>(source->base) + read.operator()<std::uint32_t>(image + 0x10);
    const auto bytes = static_cast<std::uint32_t>(difference(read.operator()<std::int32_t>(image + 0x14),
                                                          read.operator()<std::int32_t>(image + 0x10)));
    const auto target = reinterpret_cast<std::uintptr_t>(data);
    copy_words(target, source_data, bytes >> 2);
    const auto word_bytes = bytes & ~3u;
    for (std::uint32_t index = 0; index < (bytes & 3u); ++index)
        write(target + word_bytes + index, read.operator()<std::uint8_t>(source_data + word_bytes + index));
    write(reinterpret_cast<std::uintptr_t>(destination->data) + static_cast<std::uint32_t>(destination->stp),
          std::uint32_t{0});
    return 0;
}

// samp-server.exe 0x4014e0: failed validation preserves every optional output.
// Each size is read immediately before its store, preserving header aliases.
// Official: FUN_004014e0 @ 0x004014e0 (samp-server.exe)
int memory_info(const samp::amx::Amx* state, samp::amx::cell* code_bytes,
                samp::amx::cell* data_bytes, samp::amx::cell* stack_bytes) noexcept {
    const auto read = []<typename Value>(std::uintptr_t address) {
        Value value;
        std::memcpy(&value, reinterpret_cast<const void*>(address), sizeof(value));
        return value;
    };
    const auto difference = [](std::int32_t end, std::int32_t start) {
        return static_cast<samp::amx::cell>(static_cast<std::uint32_t>(end) -
                                            static_cast<std::uint32_t>(start));
    };
    if (state == nullptr) return 17;
    const auto image = reinterpret_cast<std::uintptr_t>(state->base);
    if (read.operator()<std::uint16_t>(image + 4) != 0xf1e0) return 17;
    if (read.operator()<std::int8_t>(image + 6) > 8 || read.operator()<std::int8_t>(image + 7) < 6) return 18;
    if (code_bytes != nullptr) *code_bytes = difference(read.operator()<std::int32_t>(image + 0x10), read.operator()<std::int32_t>(image + 0x0c));
    if (data_bytes != nullptr) *data_bytes = difference(read.operator()<std::int32_t>(image + 0x14), read.operator()<std::int32_t>(image + 0x10));
    if (stack_bytes != nullptr) *stack_bytes = difference(read.operator()<std::int32_t>(image + 0x18), read.operator()<std::int32_t>(image + 0x14));
    return 0;
}

// samp-server.exe 0x401540: offset-name capacity is an UNSIGNED table word;
// inline capacity is the signed record stride minus four, including its NUL.
// Official: FUN_00401540 @ 0x00401540 (samp-server.exe)
int name_length(const samp::amx::Amx* state, int* length) noexcept {
    const auto read = []<typename Value>(std::uintptr_t address) {
        Value value;
        std::memcpy(&value, reinterpret_cast<const void*>(address), sizeof(value));
        return value;
    };
    const auto image = reinterpret_cast<std::uintptr_t>(state->base);
    const auto stride = read.operator()<std::int16_t>(image + 0x0a);
    *length = stride == 8 ? read.operator()<std::uint16_t>(image + read.operator()<std::uint32_t>(image + 0x34))
                          : static_cast<int>(stride) - 4;
    return 0;
}

// samp-server.exe 0x407de0 is an unconditional zero return.
// Official: FUN_00407de0 @ 0x00407de0 (samp-server.exe)
int cleanup(samp::amx::Amx*) noexcept { return 0; }

// samp-server.exe 0x401c30 reuses one global two-word record. Ordered SDK
// calls retain the original singleton identity; this is not per-VM storage.
// Official: FUN_00401c30 @ 0x00401c30 (samp-server.exe)
samp::amx::AmxNativeInfo* native_info(const char* name,
                                    decltype(samp::amx::AmxNativeInfo::func) function) noexcept {
    static samp::amx::AmxNativeInfo information;
    information.name = name;
    information.func = function;
    return &information;
}

// samp-server.exe 0x4035c0: forward DWORD copies retain overlap behavior.
// Allocation/output/copy/push failures are not rolled back by the SDK body.
// Official: FUN_004035c0 @ 0x004035c0 (samp-server.exe)
int push_array(samp::amx::Amx* state, samp::amx::cell* address,
               samp::amx::cell** physical, const samp::amx::cell* source, int cells) noexcept {
    const auto read = []<typename Value>(std::uintptr_t pointer) {
        Value value;
        std::memcpy(&value, reinterpret_cast<const void*>(pointer), sizeof(value));
        return value;
    };
    const auto write = []<typename Value>(std::uintptr_t pointer, Value value) {
        std::memcpy(reinterpret_cast<void*>(pointer), &value, sizeof(value));
    };
    samp::amx::cell* allocated;
    const auto status = amx_memory::allot(state, cells, address, &allocated);
    if (status != 0) return status;
    if (physical != nullptr) *physical = allocated;
    for (std::uint32_t index = 0; index < static_cast<std::uint32_t>(cells); ++index) {
        const auto offset = index * 4u;
        write(reinterpret_cast<std::uintptr_t>(allocated) + offset,
              read.operator()<std::uint32_t>(reinterpret_cast<std::uintptr_t>(source) + offset));
    }
    return amx_control::push(state, *address);
}

// samp-server.exe 0x403610: strlen/wcslen runs BEFORE allocation. The source
// is then copied by SetString with capacity INT_MAX, followed by Push.
// Official: FUN_00403610 @ 0x00403610 (samp-server.exe)
int push_string(samp::amx::Amx* state, samp::amx::cell* address,
                samp::amx::cell** physical, const void* source,
                int pack, int use_wide_characters) noexcept {
    const auto read = []<typename Value>(std::uintptr_t pointer) {
        Value value;
        std::memcpy(&value, reinterpret_cast<const void*>(pointer), sizeof(value));
        return value;
    };
    const auto input = reinterpret_cast<std::uintptr_t>(source);
    std::uint32_t characters = 0;
    if (use_wide_characters == 0) {
        while (read.operator()<std::uint8_t>(input + characters) != 0) ++characters;
    } else {
        while (read.operator()<std::uint16_t>(input + characters * 2u) != 0) ++characters;
    }
    const auto cells = pack != 0 ? (characters + 4u) >> 2 : characters + 1u;
    samp::amx::cell* allocated;
    const auto status = amx_memory::allot(state, static_cast<int>(cells), address, &allocated);
    if (status != 0) return status;
    if (physical != nullptr) *physical = allocated;
    amx_string::set_string(allocated, source, pack, use_wide_characters, 0x7fffffffu);
    return amx_control::push(state, *address);
}
}
