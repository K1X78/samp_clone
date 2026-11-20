#include "pawn/db_natives.hpp"

#include "pawn/natives.hpp"
#include "pawn/variable_natives.hpp"

#include <sqlite3.h>

#include <algorithm>
#include <bit>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <initializer_list>
#include <limits>
#include <memory>
#include <new>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace samp::pawn {
namespace {

using samp::amx::cell;
using ScriptStringReader = std::function<const char*(cell)>;
using ScriptStringWriter = std::function<void(cell, const char*, cell)>;

// 0x00482330 exposes this record to Win32 plugins through db_get_result_mem_handle.
struct ResultSet {
    int rows = 0;
    int columns = 0;
    char** table = nullptr;
    char* error = nullptr;
    int row = 0;
};
#if defined(_M_IX86) || defined(__i386__)
static_assert(sizeof(ResultSet) == 0x14 && offsetof(ResultSet, row) == 0x10);
#endif

using HandleTable = std::vector<void*>;
HandleTable databases;
HandleTable results;

constexpr auto release_result = [](ResultSet* result) {
    if (result->table) sqlite3_free_table(result->table);
    if (result->error) sqlite3_free(result->error);
    delete result;
};

// Official: FUN_004818a0 @ 0x004818a0 (samp-server.exe)
bool resize_handles(HandleTable& table, std::size_t count) {
    if (count == 0) {
        HandleTable{}.swap(table);
        return true;
    }
    try {
        table.resize(count, nullptr);
        return true;
    } catch (const std::bad_alloc&) {
        return false;
    }
}

// Official: FUN_00481910 @ 0x00481910 (samp-server.exe)
void trim_handles(HandleTable& table) {
    const auto last = std::find_if(table.rbegin(), table.rend(), [](const void* value) {
        return value != nullptr;
    });
    resize_handles(table, static_cast<std::size_t>(last.base() - table.begin()));
}

// Official: FUN_00482100 @ 0x00482100 (samp-server.exe)
int insert_handle(HandleTable& table, void* value) {
    const auto index = static_cast<std::size_t>(std::find(table.begin(), table.end(), nullptr) - table.begin());
    if (index == table.size()) {
        if (index >= static_cast<std::size_t>(std::numeric_limits<cell>::max()) ||
            !resize_handles(table, index + 1)) return -1;
    }
    table[index] = value;
    return static_cast<int>(index);
}

// Official: FUN_00482160 @ 0x00482160 (samp-server.exe)
bool remove_handle(HandleTable& table, std::size_t index) {
    if (index >= table.size()) return false;
    table[index] = nullptr;
    trim_handles(table);
    return true;
}

// no standalone native entry
void* handle_value(const HandleTable& table, cell handle) {
    const auto index = static_cast<std::uint32_t>(handle) - 1u;
    return index < table.size() ? table[index] : nullptr;
}

// no standalone native entry
void log_database_message(NativeHost& host, std::string_view variable, std::string_view message) {
    std::string setting;
    if (host.log_message_ && host.read_console_variable(variable, setting) &&
        std::strtol(setting.c_str(), nullptr, 10) != 0) {
        host.log_message_(message);
    }
}

// no standalone native entry
void* checked_handle(const HandleTable& table, NativeHost& host, cell handle,
                     std::string_view native) {
    auto* resource = handle_value(table, handle);
    if (!resource) {
        const std::string_view kind = &table == &databases ? "database" : "result";
        log_database_message(host, "db_logging", "[Error] " + std::string(native) +
            ": invalid " + std::string(kind) + " handle " +
            std::to_string(static_cast<std::uint32_t>(handle)));
    }
    return resource;
}

// no standalone native entry
const char* field_value(const ResultSet& result, int column) {
    if (column < 0 || column >= result.columns || result.row < 0 || result.row >= result.rows)
        return nullptr;
    const auto offset = (static_cast<std::size_t>(result.row) + 1) * result.columns + column;
    return result.table[offset];
}

// no standalone native entry
int field_index(const ResultSet& result, const char* name) {
    if (!name) return -1;
    for (int index = 0; index < result.columns; ++index) {
        if (result.table[index] && std::strcmp(result.table[index], name) == 0) return index;
    }
    return -1;
}

// Official: FUN_00482190 @ 0x00482190 (samp-server.exe)
cell db_open(NativeHost& host, std::span<const cell> args, const ScriptStringReader& read_string) {
    if (args.empty()) return 0;
    const char* name = read_string(args[0]);
    if (!name || !*name) return 0;
    const std::string_view filename(name);
    if (filename.front() == '/' || filename.front() == '\\' ||
        filename.find("..") != std::string_view::npos || filename.find(':') != std::string_view::npos)
        return 0;
    const auto path = "scriptfiles/" + std::string(filename);
    sqlite3* database = nullptr;
    if (sqlite3_open(path.c_str(), &database) != SQLITE_OK) {
        log_database_message(host, "db_logging", "[Error] Can't open sqlite database " + path + ".");
        if (database) sqlite3_close(database);
        return 0;
    }
    const int index = insert_handle(databases, database);
    if (index < 0) sqlite3_close(database);
    return index + 1;
}

// Official: FUN_004822d0 @ 0x004822d0 (samp-server.exe)
cell db_close(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    auto* database = static_cast<sqlite3*>(checked_handle(databases, host, args[0], "db_close"));
    if (!database) return 0;
    const bool closed = sqlite3_close(database) == SQLITE_OK;
    remove_handle(databases, static_cast<std::uint32_t>(args[0]) - 1u);
    return closed;
}

// Official: FUN_00482330 @ 0x00482330 (samp-server.exe)
cell db_query(NativeHost& host, std::span<const cell> args, const ScriptStringReader& read_string) {
    if (args.size() < 2) return 0;
    auto* database = static_cast<sqlite3*>(checked_handle(databases, host, args[0], "db_query"));
    if (!database) return 0;
    const char* query = read_string(args[1]);
    if (!query) return 0;
    const std::string_view query_text(query);
    log_database_message(host, "db_log_queries", "[db_log_queries]: " +
        std::string(query_text.substr(0, 1024)));
    auto result = std::unique_ptr<ResultSet, decltype(release_result)>(new (std::nothrow) ResultSet);
    if (!result) return 0;
    if (sqlite3_get_table(database, query, &result->table, &result->rows,
                          &result->columns, &result->error) != SQLITE_OK) {
        log_database_message(host, "db_logging", "[Warning] db_query: Query failed: " +
            std::string(result->error ? result->error : ""));
        return 0;
    }
    const int index = insert_handle(results, result.get());
    if (index >= 0) result.release();
    return index + 1;
}

// Official: FUN_004824c0 @ 0x004824c0 (samp-server.exe)
cell db_free_result(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    auto* result = static_cast<ResultSet*>(checked_handle(results, host, args[0], "db_free_result()"));
    if (!result) return 0;
    remove_handle(results, static_cast<std::uint32_t>(args[0]) - 1u);
    release_result(result);
    return 1;
}

// Official: FUN_00481950 @ 0x00481950 (samp-server.exe)
cell db_num_rows(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto* result = static_cast<const ResultSet*>(checked_handle(results, host, args[0], "db_num_rows()"));
    return result ? result->rows : 0;
}

// Official: FUN_00481990 @ 0x00481990 (samp-server.exe)
cell db_next_row(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    auto* result = static_cast<ResultSet*>(checked_handle(results, host, args[0], "db_next_row()"));
    if (!result || result->row == result->rows - 1) return 0;
    result->row = std::bit_cast<int>(static_cast<std::uint32_t>(result->row) + 1u);
    return 1;
}

// Official: FUN_004819e0 @ 0x004819e0 (samp-server.exe)
cell db_num_fields(NativeHost& host, std::span<const cell> args) {
    if (args.empty()) return 0;
    const auto* result = static_cast<const ResultSet*>(checked_handle(results, host, args[0], "db_num_fields()"));
    return result ? result->columns : 0;
}

// Official: FUN_00481a20 @ 0x00481a20 (samp-server.exe)
cell db_field_name(NativeHost& host, std::span<const cell> args, const ScriptStringWriter& write_string) {
    if (args.size() < 4) return 0;
    const auto* result = static_cast<const ResultSet*>(checked_handle(results, host, args[0], "db_field_name()"));
    if (!result) return 0;
    const bool found = args[1] >= 0 && args[1] < result->columns;
    const char* value = found ? result->table[args[1]] : nullptr;
    write_string(args[2], value ? value : "", args[3]);
    return found;
}

// Official: FUN_00481ac0 @ 0x00481ac0 (samp-server.exe)
cell db_get_field(NativeHost& host, std::span<const cell> args, const ScriptStringWriter& write_string) {
    if (args.size() < 4) return 0;
    const auto* result = static_cast<const ResultSet*>(checked_handle(results, host, args[0], "db_get_field()"));
    if (!result) return 0;
    const char* value = field_value(*result, args[1]);
    write_string(args[2], value ? value : "", args[3]);
    return args[1] >= 0 && args[1] < result->columns;
}

// Official: FUN_00481b70 @ 0x00481b70 (samp-server.exe)
cell db_get_field_int(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* result = static_cast<const ResultSet*>(checked_handle(results, host, args[0], "db_get_field_int()"));
    const auto* value = result ? field_value(*result, args[1]) : nullptr;
    return value ? static_cast<cell>(std::strtol(value, nullptr, 10)) : 0;
}

// Official: FUN_00481be0 @ 0x00481be0 (samp-server.exe)
cell db_get_field_float(NativeHost& host, std::span<const cell> args) {
    if (args.size() < 2) return 0;
    const auto* result = static_cast<const ResultSet*>(checked_handle(results, host, args[0], "db_get_field_int()"));
    const auto* value = result ? field_value(*result, args[1]) : nullptr;
    return value ? std::bit_cast<cell>(static_cast<float>(std::atof(value))) : 0;
}

// Official: FUN_00481c60 @ 0x00481c60 (samp-server.exe)
cell db_get_field_assoc(NativeHost& host, std::span<const cell> args,
                        const ScriptStringReader& read_string, const ScriptStringWriter& write_string) {
    if (args.size() < 4) return 0;
    const auto* result = static_cast<const ResultSet*>(checked_handle(results, host, args[0], "db_get_field_assoc()"));
    if (!result) return 0;
    const int column = field_index(*result, read_string(args[1]));
    const char* value = field_value(*result, column);
    write_string(args[2], value ? value : "", args[3]);
    return column >= 0;
}

// Official: FUN_00481df0 @ 0x00481df0 (samp-server.exe)
cell db_get_field_assoc_int(NativeHost& host, std::span<const cell> args,
                            const ScriptStringReader& read_string) {
    if (args.size() < 2) return 0;
    const auto* result = static_cast<const ResultSet*>(checked_handle(results, host, args[0], "db_get_field_assoc_int()"));
    const auto* value = result ? field_value(*result, field_index(*result, read_string(args[1]))) : nullptr;
    return value ? static_cast<cell>(std::strtol(value, nullptr, 10)) : 0;
}

// Official: FUN_00481f40 @ 0x00481f40 (samp-server.exe)
cell db_get_field_assoc_float(NativeHost& host, std::span<const cell> args,
                              const ScriptStringReader& read_string) {
    if (args.size() < 2) return 0;
    const auto* result = static_cast<const ResultSet*>(checked_handle(results, host, args[0], "db_get_field_assoc_float()"));
    const auto* value = result ? field_value(*result, field_index(*result, read_string(args[1]))) : nullptr;
    return value ? std::bit_cast<cell>(static_cast<float>(std::atof(value))) : 0;
}

// Official: FUN_004820a0 @ 0x004820a0 (samp-server.exe)
cell db_debug_openfiles() {
    return static_cast<cell>(databases.size());
}

// Official: FUN_004820b0 @ 0x004820b0 (samp-server.exe)
cell db_debug_openresults() {
    return static_cast<cell>(results.size());
}

// Official: FUN_004820c0 @ 0x004820c0 (samp-server.exe)
cell db_get_mem_handle(std::span<const cell> args) {
    return args.empty() ? 0 : static_cast<cell>(reinterpret_cast<std::intptr_t>(handle_value(databases, args[0])));
}

// Official: FUN_004820e0 @ 0x004820e0 (samp-server.exe)
cell db_get_result_mem_handle(std::span<const cell> args) {
    return args.empty() ? 0 : static_cast<cell>(reinterpret_cast<std::intptr_t>(handle_value(results, args[0])));
}

}  // namespace

// Official: FUN_00481880 @ 0x00481880 (samp-server.exe)
void register_db_natives(PawnVm& vm, NativeHost& host) {
    const auto available_at = [&vm](cell address) -> std::size_t {
        if (!vm.ok_ || address < 0 || address >= vm.amx_.stp ||
            (address >= vm.amx_.hea && address < vm.amx_.stk)) return 0;
        const auto at = static_cast<std::uint64_t>(vm.header_.dat) + address;
        if (at >= vm.image_.size()) return 0;
        const auto limit = address < vm.amx_.hea && vm.amx_.hea < vm.amx_.stk
            ? vm.amx_.hea : vm.amx_.stp;
        return std::min(vm.image_.size() - static_cast<std::size_t>(at),
                        static_cast<std::size_t>(limit - address));
    };
    const auto read_script_string = [&vm, available_at](cell address) -> const char* {
        const std::size_t available = available_at(address);
        if (available < sizeof(cell)) return nullptr;
        const auto* start = vm.image_.data() + vm.header_.dat + address;
        std::uint32_t first = 0;
        std::memcpy(&first, start, sizeof(first));
        const bool packed = first >= 0x1000000u;
        std::string text;
        for (std::size_t offset = 0; offset + sizeof(cell) <= available; offset += sizeof(cell)) {
            std::uint32_t value = 0;
            std::memcpy(&value, start + offset, sizeof(value));
            if (packed) {
                for (int shift = 24; shift >= 0; shift -= 8) {
                    const auto character = static_cast<unsigned char>(value >> shift);
                    if (character == 0) {
                        auto& buffer = vm.string_buffers_[address];
                        buffer = std::move(text);
                        return buffer.c_str();
                    }
                    text.push_back(static_cast<char>(character));
                }
            } else {
                if (value == 0) {
                    auto& buffer = vm.string_buffers_[address];
                    buffer = std::move(text);
                    return buffer.c_str();
                }
                text.push_back(static_cast<char>(value));
            }
        }
        return nullptr;
    };
    const auto write_string = [&vm, available_at](cell address, const char* text, cell length) {
        const std::size_t count = std::min<std::size_t>(std::strlen(text), static_cast<std::uint32_t>(length));
        if (vm.amx_.base != vm.image_.data() || available_at(address) / sizeof(cell) <= count) return;
        variable_natives::write_string(&vm.amx_, address, text, length);
    };

    vm.native_functions_["db_open"] = [&host, read_script_string](auto args) {
        return db_open(host, args, read_script_string);
    };
    vm.native_functions_["db_query"] = [&host, read_script_string](auto args) {
        return db_query(host, args, read_script_string);
    };
    vm.native_functions_["db_field_name"] = [&host, write_string](auto args) {
        return db_field_name(host, args, write_string);
    };
    vm.native_functions_["db_get_field"] = [&host, write_string](auto args) {
        return db_get_field(host, args, write_string);
    };
    vm.native_functions_["db_get_field_assoc"] = [&host, read_script_string, write_string](auto args) {
        return db_get_field_assoc(host, args, read_script_string, write_string);
    };
    vm.native_functions_["db_get_field_assoc_int"] = [&host, read_script_string](auto args) {
        return db_get_field_assoc_int(host, args, read_script_string);
    };
    vm.native_functions_["db_get_field_assoc_float"] = [&host, read_script_string](auto args) {
        return db_get_field_assoc_float(host, args, read_script_string);
    };

    for (const auto& [name, function] : std::initializer_list<std::pair<const char*,
            cell (*)(NativeHost&, std::span<const cell>)>>{
        {"db_close", db_close},
        {"db_free_result", db_free_result},
        {"db_num_rows", db_num_rows},
        {"db_next_row", db_next_row},
        {"db_num_fields", db_num_fields},
        {"db_get_field_int", db_get_field_int},
        {"db_get_field_float", db_get_field_float},
    }) {
        vm.native_functions_[name] = [&host, function](auto args) { return function(host, args); };
    }
    vm.native_functions_["db_debug_openfiles"] = [](auto) { return db_debug_openfiles(); };
    vm.native_functions_["db_debug_openresults"] = [](auto) { return db_debug_openresults(); };
    vm.native_functions_["db_get_mem_handle"] = db_get_mem_handle;
    vm.native_functions_["db_get_result_mem_handle"] = db_get_result_mem_handle;
}

}  // namespace samp::pawn
