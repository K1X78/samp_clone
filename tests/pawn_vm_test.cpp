#include "pawn/pawn_vm.hpp"
#include "pawn/amx_control_api.hpp"

#include <windows.h>

#include <array>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <memory>
#include <stdexcept>

using samp::amx::cell;

void require(bool condition, const std::string& message) {
    if (!condition) throw std::runtime_error(message);
}

// IDIV's INT_MIN/-1 cases raise an x86 exception in the shipped function.
// Catch it at the test boundary so those cases can be compared as well.
int invoke(void* function, void* instance, cell* result, int entry, DWORD* exception) {
    using Execute = int (__cdecl*)(void*, cell*, int);
    __try {
        return reinterpret_cast<Execute>(function)(instance, result, entry);
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        *exception = GetExceptionCode();
        return -1;
    }
}

// Execute only the recovered interpreter body inside this test process.
// Its three absolute jump-table references and all 149 table entries need
// rebasing. Relative branches and calls through AMX callbacks remain intact.
// No PE entrypoint, game, server startup, networking or file natives run.
class OfficialInterpreter {
public:
    using Execute = int (__cdecl*)(samp::amx::Amx*, cell*, int);
    OfficialInterpreter() {
        std::ifstream input(SAMP_OFFICIAL_SERVER_PATH, std::ios::binary);
        require(input.good(), "Cannot read official 0.3.DL server");
        const std::vector<char> image{std::istreambuf_iterator<char>(input), {}};
        require(image.size() >= sizeof(IMAGE_DOS_HEADER), "Truncated reference PE");
        const auto* dos = reinterpret_cast<const IMAGE_DOS_HEADER*>(image.data());
        require(dos->e_magic == IMAGE_DOS_SIGNATURE && dos->e_lfanew > 0 &&
                    static_cast<std::size_t>(dos->e_lfanew) + sizeof(IMAGE_NT_HEADERS32) <= image.size(),
                "Invalid reference DOS header");
        const auto* nt = reinterpret_cast<const IMAGE_NT_HEADERS32*>(image.data() + dos->e_lfanew);
        require(nt->Signature == IMAGE_NT_SIGNATURE && nt->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR32_MAGIC &&
                    nt->OptionalHeader.ImageBase == 0x400000, "Unexpected reference PE identity");
        const auto* section = IMAGE_FIRST_SECTION(nt);
        constexpr std::uint32_t start = 0x1c90;
        constexpr std::uint32_t bytes = 0x1440;
        const char* source = nullptr;
        for (WORD index = 0; index < nt->FileHeader.NumberOfSections; ++index) {
            require(reinterpret_cast<const char*>(section + index + 1) <= image.data() + image.size(),
                    "Truncated PE section table");
            const auto& item = section[index];
            if (start >= item.VirtualAddress && start + bytes <= item.VirtualAddress + item.SizeOfRawData) {
                const auto offset = item.PointerToRawData + start - item.VirtualAddress;
                require(static_cast<std::size_t>(offset) + bytes <= image.size(), "Truncated reference interpreter");
                source = image.data() + offset;
                break;
            }
        }
        require(source != nullptr, "Reference interpreter section missing");
        memory_ = VirtualAlloc(nullptr, bytes, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
        require(memory_ != nullptr, "Cannot allocate reference interpreter");
        std::memcpy(memory_, source, bytes);
        auto* code = static_cast<std::uint8_t*>(memory_);
        const auto relocated = reinterpret_cast<std::uintptr_t>(memory_);
        for (std::uint32_t operand : {0x401e2bu, 0x40219au, 0x402217u}) {
            std::uint32_t target;
            std::memcpy(&target, code + operand - 0x401c90u, 4);
            require(target >= 0x402e74u && target < 0x4030c8u, "Unexpected original jump table operand");
            target = static_cast<std::uint32_t>(relocated + target - 0x401c90u);
            std::memcpy(code + operand - 0x401c90u, &target, 4);
        }
        for (std::uint32_t entry = 0x402e74; entry < 0x4030c8; entry += 4) {
            std::uint32_t target;
            std::memcpy(&target, code + entry - 0x401c90u, 4);
            require(target >= 0x401c90u && target < 0x402e74u, "Unexpected original dispatch target");
            target = static_cast<std::uint32_t>(relocated + target - 0x401c90u);
            std::memcpy(code + entry - 0x401c90u, &target, 4);
        }
        DWORD previous;
        require(VirtualProtect(memory_, bytes, PAGE_EXECUTE_READ, &previous) != FALSE,
                "Cannot protect reference interpreter");
        FlushInstructionCache(GetCurrentProcess(), memory_, bytes);
        execute = reinterpret_cast<Execute>(memory_);
    }
    ~OfficialInterpreter() { if (memory_ != nullptr) VirtualFree(memory_, 0, MEM_RELEASE); }
    OfficialInterpreter(const OfficialInterpreter&) = delete;
    OfficialInterpreter& operator=(const OfficialInterpreter&) = delete;
    Execute execute = nullptr;
private:
    void* memory_ = nullptr;
};

struct CaseOptions {
    std::vector<std::size_t> relocations{};
    int entry = -1;
    int flags = 0x9000;
    bool callback = true;
    cell stack = 1020;
    cell heap = 256;
    cell main = 8;
    int parameters = 0;
    bool separate_image = false;
    cell public_address = 8;
    int definition_size = 8;
    bool sdk_callback = false;
    int repeats = 1;
};

int main(int, char**) {
    try {
        OfficialInterpreter official;
        std::size_t compared_cases = 0;
        const auto run = [&](const char* name, std::initializer_list<cell> instructions,
                             bool continue_after_sleep = false, bool debug = false,
                             bool external = false, int callback_status = 0,
                             CaseOptions options = {}) {
            std::vector<cell> code{0x78, 0};
            code.insert(code.end(), instructions);
            samp::pawn::PawnVm vm;
            vm.header_.defsize = static_cast<std::int16_t>(options.definition_size);
            vm.header_.publics = 56;
            vm.header_.natives = 56 + options.definition_size;
            vm.header_.libraries = vm.header_.natives + (options.sdk_callback ? options.definition_size : 0);
            vm.header_.cod = vm.header_.libraries;
            vm.header_.dat = vm.header_.cod + static_cast<cell>(code.size() * 4);
            vm.header_.hea = vm.header_.dat + 256;
            vm.header_.stp = vm.header_.dat + 1024;
            vm.header_.cip = options.main;
            vm.image_.assign(static_cast<std::size_t>(vm.header_.stp), 0);
            std::memcpy(vm.image_.data(), &vm.header_, sizeof(vm.header_));
            const std::array<cell, 2> public_entry{options.public_address, 0};
            std::memcpy(vm.image_.data() + 56, public_entry.data(), sizeof(public_entry));
            std::memcpy(vm.image_.data() + vm.header_.cod, code.data(), code.size() * 4);
            if (options.sdk_callback) {
                const auto native = static_cast<cell>(reinterpret_cast<std::uintptr_t>(
                    +[](samp::amx::Amx* state, const cell* parameters) -> cell {
                        ++state->usertags[3];
                        return parameters[1] + 4;
                    }));
                std::memcpy(vm.image_.data() + vm.header_.natives, &native, 4);
            }
            vm.publics_ = {samp::amx::AmxPublic{"probe", 8}};
            vm.ok_ = true;
            vm.hlw_ = vm.amx_.hlw = 256;
            vm.hea_ = vm.amx_.hea = options.heap;
            vm.stk_ = vm.amx_.stk = options.stack;
            vm.amx_.stp = 1020;
            vm.amx_.flags = options.flags;
            vm.amx_.paramcount = options.parameters;
            vm.amx_.callback = reinterpret_cast<void*>(+[](samp::amx::Amx* state, cell index,
                                                          cell* result, const cell* parameters) {
                *result = index + (parameters[0] >= 4 ? parameters[1] : 0);
                ++state->usertags[3];
                return state->usertags[0];
            });
            if (!options.callback) vm.amx_.callback = nullptr;
            if (options.sdk_callback) {
                vm.amx_.callback = reinterpret_cast<void*>(&samp::pawn::amx_control::callback);
                vm.amx_.sysreq_d = 0x87;
            }
            vm.amx_.usertags[0] = callback_status;
            if (debug) vm.amx_.debug = reinterpret_cast<void*>(+[](samp::amx::Amx* state) {
                ++state->usertags[3];
                return state->usertags[0];
            });
            vm.amx_.base = vm.image_.data();
            auto actual_image = vm.image_;
            if (options.separate_image) vm.amx_.base = actual_image.data();
            auto reference_image = vm.image_;
            for (std::size_t index : options.relocations) {
                require(index < code.size(), "Invalid test relocation index");
                auto address = static_cast<std::uint32_t>(code[index]);
                address += static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(reference_image.data()) + vm.header_.cod);
                std::memcpy(reference_image.data() + vm.header_.cod + index * 4, &address, 4);
            }
            std::array<cell, 256> actual_data{};
            std::array<cell, 256> expected_data{};
            if (external) vm.amx_.data = actual_data.data();
            auto reference = vm.amx_;
            reference.base = reference_image.data();
            if (external) reference.data = expected_data.data();
            cell expected = 0x12345678;
            cell actual = expected;
            const auto invocations = continue_after_sleep ? 2 : options.repeats;
            for (int invocation = 0; invocation < invocations; ++invocation) {
            if (invocation != 0) reference.usertags[0] = vm.amx_.usertags[0] = 0;
            const auto entry = invocation == 0 || !continue_after_sleep ? options.entry : -2;
            DWORD expected_exception = 0;
            DWORD actual_exception = 0;
            const int expected_error = invoke(reinterpret_cast<void*>(official.execute), &reference,
                                                &expected, entry, &expected_exception);
            const auto clone = +[](void* context, cell* result, int index) {
                return static_cast<samp::pawn::PawnVm*>(context)->execute({}, {}, *result, index);
            };
            const int actual_error = invoke(reinterpret_cast<void*>(clone), &vm, &actual, entry, &actual_exception);
            const std::string label = name;
            require(actual_exception == expected_exception, label + ": x86 exception differs from official interpreter");
            require(actual_error == expected_error, label + ": error differs from official interpreter");
            require(actual == expected, label + ": result differs from official interpreter");
            require(vm.amx_.stk == reference.stk && vm.amx_.hea == reference.hea &&
                        vm.amx_.frm == reference.frm && vm.amx_.cip == reference.cip &&
                        vm.amx_.pri == reference.pri && vm.amx_.alt == reference.alt &&
                        vm.amx_.reset_stk == reference.reset_stk && vm.amx_.reset_hea == reference.reset_hea &&
                        vm.amx_.usertags[3] == reference.usertags[3] && vm.amx_.error == reference.error &&
                        vm.amx_.paramcount == reference.paramcount && vm.amx_.flags == reference.flags,
                    label + ": saved registers differ from official interpreter");
            const auto* actual_image_data = options.separate_image ? actual_image.data() : vm.image_.data();
            require(std::memcmp(actual_image_data + vm.header_.dat,
                                reference_image.data() + vm.header_.dat, 1024) == 0,
                    label + ": DATA writes differ from official interpreter");
            require(actual_data == expected_data, label + ": separate DATA writes differ from official interpreter");
            if (options.sdk_callback)
                require(std::memcmp(actual_image_data + vm.header_.cod,
                                    reference_image.data() + vm.header_.cod, code.size() * 4) == 0,
                        label + ": native quickening differs from official interpreter");
            ++compared_cases;
            }
        };
        run("constant HALT", {0x0b, 17, 0x78, 0});
        run("signed division", {0x0b, -7, 0x0c, 3, 0x49, 0x78, 0});
        run("division error preserves result", {0x0b, 17, 0x0c, 0, 0x49, 0x78, 0});
        run("bounds error preserves result", {0x0b, -1, 0x79, 5, 0x78, 0});
        run("invalid opcode preserves result", {0});
        run("sleep HALT", {0x2e, 0x0b, 17, 0x0c, 23, 0x78, 12});
        run("HALT continuation", {0x0b, 17, 0x0c, 23, 0x78, 12, 0x57, 4, 0x78, 0}, true);
        run("debug continuation", {0x2e, 0x0b, 17, 0x0c, 23, 0x89, 0x57, 4, 0x30}, true, true, false, 12);
        run("debug abort", {0x2e, 0x0b, 17, 0x89, 0x30}, false, true, false, 3);
        run("callback continuation", {0x2e, 0x27, 13, 0x27, 4, 0x7b, 4, 0x2c, 8,
                                       0x57, 1, 0x30}, true, false, false, 12);
        run("callback abort", {0x2e, 0x27, 13, 0x27, 4, 0x7b, 4, 0x2c, 8, 0x30}, false, false, false, 3);
        run("separate DATA", {0x2e, 0x0b, 0x12345678, 0x0f, 0, 0x01, 0, 0x30}, false, false, true);
        run("STACK guard after heap changes", {0x2e, 0x2d, 4, 0x2c, -800, 0x30});
        run("HEAP guard after heap changes", {0x2e, 0x2d, 4, 0x2d, -8, 0x30});
        run("signed division wrap", {0x0b, 0x7ffffffe, 0x0c, 0x7fffffff, 0x49, 0x78, 0});
        const std::array<cell, 10> values{0, 1, -1, 2, -3, 31, 32, 0x12345678,
                                         std::numeric_limits<cell>::min(), std::numeric_limits<cell>::max()};
        for (cell opcode : {0x21, 0x22, 0x23, 0x41, 0x42, 0x43, 0x48, 0x49, 0x4a,
                            0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53,
                            0x54, 0x55, 0x56, 0x59, 0x5a, 0x5d, 0x5e, 0x5f, 0x60,
                            0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x6b,
                            0x6c, 0x70, 0x71}) {
            for (cell primary : values) for (cell alternate : values) {
                const auto label = "arithmetic opcode " + std::to_string(opcode) +
                    " PRI=" + std::to_string(primary) + " ALT=" + std::to_string(alternate);
                run(label.c_str(), {0x0b, primary, 0x0c, alternate, opcode, 0x78, 0});
            }
        }
        for (cell opcode : {0x1d, 0x1e, 0x44, 0x45, 0x46, 0x47, 0x57, 0x58, 0x69, 0x6a}) {
            for (cell value : values) for (cell operand : values) {
                const auto label = "immediate opcode " + std::to_string(opcode) +
                    " value=" + std::to_string(value) + " operand=" + std::to_string(operand);
                run(label.c_str(), {0x0b, value, 0x0c, value, opcode, operand, 0x78, 0});
            }
        }
        run("register pushes and pops", {0x2e, 0x0b, 17, 0x0c, 23, 0x24, 0x25, 0x2a, 0x2b, 0x30});
        run("repeat PRI push", {0x2e, 0x0b, 17, 0x26, 3, 0x2a, 0x2c, 8, 0x30});
        run("DATA loads and reference loads", {0x2e, 0x0b, 17, 0x0f, 0, 0x0b, 0, 0x0f, 4,
                                                 0x05, 4, 0x06, 4, 0x30});
        run("stack loads and reference loads", {0x2e, 0x2c, -8, 0x0b, 17, 0x11, -4,
                                                  0x0d, -4, 0x11, -8, 0x07, -8, 0x08, -8,
                                                  0x2c, 8, 0x30});
        run("DATA reference stores", {0x2e, 0x0b, 4, 0x0f, 0, 0x0b, 17, 0x0c, 23,
                                         0x13, 0, 0x14, 0, 0x01, 4, 0x30});
        run("stack reference stores", {0x2e, 0x2c, -8, 0x0d, -4, 0x11, -8, 0x0b, 17,
                                          0x0c, 23, 0x15, -8, 0x16, -8, 0x03, -4,
                                          0x2c, 8, 0x30});
        run("indirect store and load", {0x2e, 0x0b, 0x12345678, 0x0c, 0, 0x17,
                                          0x0b, 0, 0x09, 0x30});
        for (cell width : {0, 1, 2, 3, 4, 5})
            run("indirect byte widths", {0x2e, 0x0b, 0x12345678, 0x0c, 0, 0x18, width,
                                           0x0b, 0, 0x0a, width, 0x30});
        run("indirect memory error", {0x2e, 0x0b, 300, 0x09, 0x30});
        run("indexed load", {0x2e, 0x0b, 17, 0x0f, 12, 0x0c, 4, 0x0b, 2, 0x19, 0x30});
        run("indexed byte load", {0x2e, 0x0b, 17, 0x0f, 12, 0x0c, 4, 0x0b, 2, 0x1a, 2, 0x30});
        run("index address", {0x2e, 0x0b, 17, 0x0c, 4, 0x1b, 0x1c, 1, 0x30});
        for (cell selector = 0; selector <= 7; ++selector)
            run("LCTRL selectors", {0x2e, 0x1f, selector, 0x30});
        run("zero DATA and frame cells", {0x2e, 0x2c, -4, 0x0b, 17, 0x0f, 0, 0x11, -4,
                                            0x5b, 0, 0x5c, -4, 0x03, -4, 0x2c, 4, 0x30});
        run("increment/decrement DATA", {0x2e, 0x0b, 0, 0x6d, 0, 0x6f, 0x72, 0,
                                            0x74, 0x01, 0, 0x30});
        run("increment/decrement frame", {0x2e, 0x2c, -4, 0x6e, -4, 0x73, -4,
                                             0x03, -4, 0x2c, 4, 0x30});
        run("memory fill and forward copy", {0x2e, 0x0b, 0x12345678, 0x0c, 0, 0x77, 16,
                                                0x0b, 0, 0x0c, 4, 0x75, 12, 0x30});
        run("memory comparison", {0x2e, 0x0b, 0x12345678, 0x0f, 0, 0x0b, 0, 0x0c, 4,
                                     0x76, 4, 0x30});
        run("SYSREQ PRI", {0x2e, 0x27, 13, 0x27, 4, 0x0b, 4, 0x7a, 0x2c, 8, 0x30});
        const auto native_address = static_cast<cell>(reinterpret_cast<std::uintptr_t>(
            +[](samp::amx::Amx* state, const cell* parameters) -> cell {
                state->error = 12;
                return parameters[1] + 4;
            }));
        // The successful SYSREQ.C seeds the original dispatch scratch slot.
        // SYSREQ.D's sleep exit returns that zero even while saving a suspension.
        run("SYSREQ D continuation", {0x2e, 0x27, 13, 0x27, 4, 0x7b, 4, 0x2c, 8,
                                         0x27, 13, 0x27, 4, 0x87, native_address,
                                         0x2c, 8, 0x57, 1, 0x30}, true);
        run("stack swaps and frame address", {0x2e, 0x0b, 17, 0x0c, 23, 0x27, 31,
                                               0x83, 0x84, 0x2c, 4, 0x85, 0, 0x2a, 0x30});
        run("metadata no-ops", {0x2e, 0x7d, 0x123, 0x456, 0x7f, 0x123, 0x456,
                                  0x88, 0x123, 0x86, 0x89, 0x30});
        for (cell invalid : {0, 0x32, 0x7c, 0x80, 0x82, 0x8a, -1}) run("invalid dispatch", {invalid});
        run("missing callback", {0x78, 0}, false, false, false, 0, {.callback = false});
        run("unbound natives", {0x78, 0}, false, false, false, 0, {.flags = 0x8000});
        run("uninitialized image", {0x78, 0}, false, false, false, 0, {.flags = 0x1000});
        run("missing main", {0x78, 0}, false, false, false, 0, {.main = -1});
        run("indexed public", {0x2e, 0x0b, 17, 0x30}, false, false, false, 0, {.entry = 0});
        run("missing indexed public", {0x78, 0}, false, false, false, 0, {.entry = 1});
        run("invalid entry index", {0x78, 0}, false, false, false, 0, {.entry = -3});
        run("initial STACK error", {0x78, 0}, false, false, false, 0, {.stack = 1024});
        run("initial HEAP error", {0x78, 0}, false, false, false, 0, {.heap = 252});
        for (cell stack : {324, 328, 332})
            run("entry STACK margin", {0x2e, 0x30}, false, false, false, 0, {.stack = stack});
        run("pre-pushed arguments", {0x2e, 0x03, 8, 0x30}, false, false, false, 0,
            {.stack = 1012, .parameters = 2});
        for (cell opcode : {0x33, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c,
                            0x3d, 0x3e, 0x3f, 0x40}) {
            for (cell primary : values) for (cell alternate : values) {
                const auto label = "branch opcode " + std::to_string(opcode) +
                    " PRI=" + std::to_string(primary) + " ALT=" + std::to_string(alternate);
                run(label.c_str(), {0x2e, 0x0b, primary, 0x0c, alternate, opcode, 48,
                                      0x0b, 17, 0x30, 0x0b, 23, 0x30},
                    false, false, false, 0, {.relocations = {8}});
            }
        }
        run("nested CALL and RETN", {0x2e, 0x31, 40, 0x57, 4, 0x30, 0x86, 0x86,
                                       0x2e, 0x0b, 17, 0x30}, false, false, false, 0, {.relocations = {4}});
        for (cell opcode : {0x34, 0x7e})
            run("relative jump", {0x2e, opcode, 8, 0x0b, 99, 0x0b, 17, 0x30});
        for (cell selector : {0, 1, 2, 3, 4, 5, 7}) {
            const auto value = selector == 4 || selector == 5 ? 1008 : 256;
            run("SCTRL selectors", {0x2e, 0x0b, value, 0x20, selector, 0x30});
        }
        run("SCTRL instruction pointer", {0x2e, 0x0b, 28, 0x20, 6, 0x0b, 17, 0x30});
        for (cell value : {0, 17, 23}) for (cell count : {-1, 0, 1})
            run("SWITCH table", {0x2e, 0x0b, value, 0x81, 52, 0x0b, 17, 0x30,
                                   0x0b, 23, 0x30, 0x82, count, 28, 17, 40},
                false, false, false, 0, {.relocations = {6, 15, 17}});
        run("live public definition", {0x0b, 17, 0x78, 0, 0x0b, 23, 0x78, 0},
            false, false, false, 0, {.entry = 0, .public_address = 24});
        run("separate AMX image", {0x2e, 0x0b, 17, 0x0f, 0, 0x01, 0, 0x30},
            false, false, false, 0, {.separate_image = true});
        run("frame PRI/ALT load/store", {0x2e, 0x2c, -8, 0x0b, 17, 0x0c, 23,
                                           0x11, -4, 0x12, -8, 0x03, -8, 0x04, -4,
                                           0x2c, 8, 0x30});
        run("frame ALT address", {0x2e, 0x2c, -4, 0x0e, -4, 0x0b, 17, 0x17,
                                     0x03, -4, 0x2c, 4, 0x30});
        run("push DATA and frame variables", {0x2e, 0x2c, -4, 0x0b, 17, 0x0f, 0,
                                                0x11, -4, 0x28, 0, 0x29, -4,
                                                0x2a, 0x2b, 0x2c, 4, 0x30});
        // This callee uses RET, leaving its argument-size cell for its caller.
        run("nested CALL and RET", {0x2e, 0x27, 0, 0x31, 44, 0x2c, 4, 0x30, 0x86,
                                      0x2e, 0x0b, 17, 0x2f}, false, false, false, 0,
            {.relocations = {6}});
        for (cell bytes : {0, 1, 2, 3, 4, 5, 7, 8, 12}) {
            run("forward copy byte counts", {0x2e, 0x0b, 0x12345678, 0x0c, 0, 0x77, 16,
                                               0x0b, 0, 0x0c, 4, 0x75, bytes, 0x30});
            run("comparison byte counts", {0x2e, 0x0b, 0x12345678, 0x0f, 0, 0x0b, 0,
                                              0x0c, 4, 0x76, bytes, 0x30});
            run("fill byte counts", {0x2e, 0x0b, 0x12345678, 0x0c, 0, 0x77, bytes, 0x30});
        }
        for (cell operation : {0x75, 0x76, 0x77}) {
            for (cell address : {-1, 252, 256, 300, 1016, 1020})
                run("memory block boundary", {0x2e, 0x0b, address, 0x0c, address,
                                                operation, 4, 0x30});
        }
        run("legacy inline public table", {0x2e, 0x0b, 17, 0x30}, false, false, false, 0,
            {.entry = 0, .definition_size = 24});
        run("SDK callback and quickened native", {0x2e, 0x27, 13, 0x27, 4, 0x7b, 0,
                                                    0x2c, 8, 0x30}, false, false, false, 0,
            {.sdk_callback = true, .repeats = 2});
        run("SDK SYSREQ PRI", {0x2e, 0x27, 13, 0x27, 4, 0x0b, 0, 0x7a,
                                  0x2c, 8, 0x30}, false, false, false, 0,
            {.sdk_callback = true, .repeats = 2});
        std::printf("Pawn interpreter matches %zu shipped 0.3.DL execution cases\n", compared_cases);
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
