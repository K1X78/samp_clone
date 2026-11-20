#include "pawn/amx_set_string_api.hpp"
#include "samp/server/game_layer.hpp"

#include <array>
#include <bit>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <initializer_list>
#include <stdexcept>

namespace samp::pawn {
struct PawnNativeTestAccess {
    static void initialize(PawnVm& vm) {
        vm.image_.assign(4096, 0);
        vm.header_.dat = 64;
        std::memcpy(vm.image_.data(), &vm.header_, sizeof(vm.header_));
        vm.amx_.base = vm.image_.data();
        vm.amx_.hea = 2048;
        vm.amx_.stk = 3072;
        vm.amx_.stp = 4032;
        vm.ok_ = true;
    }

    static samp::amx::cell* script_cells(PawnVm& vm, samp::amx::cell address) {
        return reinterpret_cast<samp::amx::cell*>(vm.image_.data() + vm.header_.dat + address);
    }

    static samp::amx::cell call(PawnVm& vm, const char* name, std::initializer_list<samp::amx::cell> args) {
        return vm.native_functions_.at(name)({args.begin(), args.size()});
    }
};
}

namespace {
using samp::amx::cell;
using samp::pawn::PawnNativeTestAccess;

void check(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

class ScriptFiles {
public:
    ScriptFiles() : previous_(std::filesystem::current_path()) {
        const auto id = std::chrono::steady_clock::now().time_since_epoch().count();
        directory_ = std::filesystem::temp_directory_path() / ("samp-db-" + std::to_string(id));
        check(std::filesystem::create_directory(directory_), "database fixture directory unavailable");
        std::filesystem::create_directory(directory_ / "scriptfiles");
        std::filesystem::current_path(directory_);
    }

    ~ScriptFiles() {
        std::error_code error;
        std::filesystem::current_path(previous_, error);
        if (!error) std::filesystem::remove_all(directory_, error);
    }

private:
    std::filesystem::path previous_;
    std::filesystem::path directory_;
};

void database_lifecycle() {
    const ScriptFiles scriptfiles;
    samp::server::GameLayer host;
    samp::server::Config config;
    config.values_["db_logging"] = "1";
    config.values_["db_log_queries"] = "1";
    host.config_ = &config;
    std::vector<std::string> output;
    host.log_message_ = [&output](std::string_view line) { output.emplace_back(line); };
    PawnNativeTestAccess::initialize(host.vm_);
    samp::pawn::register_server_natives(host.vm_, host);
    const auto call = [&](const char* name, std::initializer_list<cell> args = {}) {
        return PawnNativeTestAccess::call(host.vm_, name, args);
    };
    const auto write_text = [&](const char* text, cell address = 0, bool packed = false) {
        samp::pawn::amx_string::set_string(
            PawnNativeTestAccess::script_cells(host.vm_, address), text, packed, 0, 256);
    };

    for (const auto* name : {"", "../outside.db", "/absolute.db", "C:external.db"}) {
        write_text(name);
        check(call("db_open", {0}) == 0, "database path validation differs");
    }
    write_text("one.db");
    const auto first = call("db_open", {0});
    write_text("two.db", 0, true);
    const auto second = call("db_open", {0});
    check(first == 1 && second == 2 && call("db_get_mem_handle", {first}) != 0 &&
        std::filesystem::is_regular_file("scriptfiles/one.db") &&
        std::filesystem::is_regular_file("scriptfiles/two.db"), "database open and memory handle differ");
    check(call("db_close", {first}) == 1 && call("db_debug_openfiles") == 2 &&
        call("db_get_mem_handle", {first}) == 0, "database hole and high-slot count differ");
    write_text("one.db");
    check(call("db_open", {0}) == first, "database should reuse the first free slot");

    write_text("CREATE TABLE sample (value TEXT, amount REAL);"
               "INSERT INTO sample VALUES ('abcdef', 1.25);"
               "INSERT INTO sample VALUES (NULL, 7);"
               "SELECT value AS Name, amount FROM sample ORDER BY amount;");
    const auto result = call("db_query", {first, 0});
    check(result == 1 && call("db_num_rows", {result}) == 2 &&
        call("db_num_fields", {result}) == 2, "database must execute the whole SQL batch");
    const auto memory = call("db_get_result_mem_handle", {result});
    check(memory != 0 && memory != result, "expected the native result memory handle");
#if defined(_M_IX86) || defined(__i386__)
    const auto* pointer = reinterpret_cast<const void*>(static_cast<std::uintptr_t>(static_cast<std::uint32_t>(memory)));
    std::array<cell, 5> record{};
    std::memcpy(record.data(), pointer, sizeof(record));
    check(record[0] == 2 && record[1] == 2 && record[2] != 0 && record[3] == 0 &&
        record[4] == 0, "PE32 result record offsets differ");
#endif

    auto* destination = PawnNativeTestAccess::script_cells(host.vm_, 1280);
    check(call("db_field_name", {result, 0, 1280, 3}) == 1 &&
          destination[0] == 'N' && destination[1] == 'a' && destination[2] == 'm' && destination[3] == 0,
          "field name limit must count characters before the terminator");
    check(call("db_get_field", {result, 0, 1280, 4}) == 1 && destination[0] == 'a' &&
          destination[3] == 'd' && destination[4] == 0, "field value truncation differs");
    write_text("amount", 1024, true);
    check(call("db_get_field_assoc_float", {result, 1024}) == std::bit_cast<cell>(1.25f),
        "packed column name or float conversion differs");
    write_text("name", 1024);
    check(call("db_get_field_assoc", {result, 1024, 1280, 20}) == 0 && destination[0] == 0,
        "missing case-sensitive column must clear the destination");
    check(call("db_next_row", {result}) == 1 && call("db_num_rows", {result}) == 2 &&
        call("db_next_row", {result}) == 0 && call("db_get_field_int", {result, 1}) == 7 &&
        call("db_get_field", {result, 0, 1280, 20}) == 1 && destination[0] == 0,
        "row count, cursor, numeric data, or SQL NULL behavior differs");

    write_text("SELECT amount FROM sample WHERE 0;");
    const auto empty = call("db_query", {first, 0});
    check(empty == 2 && call("db_num_rows", {empty}) == 0 && call("db_next_row", {empty}) == 1,
        "empty result must preserve the reference cursor transition");
    check(call("db_free_result", {result}) == 1 && call("db_debug_openresults") == 2 &&
        call("db_get_result_mem_handle", {result}) == 0, "result hole or debug count differs");
    check(call("db_free_result", {empty}) == 1 && call("db_debug_openresults") == 0,
        "releasing the last result must shrink the slot table");
    write_text("not SQL");
    check(call("db_query", {first, 0}) == 0 && output.back().starts_with("[Warning] db_query: Query failed: "),
        "invalid SQL status or log differs");
    check(call("db_close", {second}) == 1 && call("db_debug_openfiles") == 1 &&
        call("db_close", {first}) == 1 && call("db_debug_openfiles") == 0, "database cleanup differs");
}
}

int main(int, char**) {
    try {
        database_lifecycle();
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}
