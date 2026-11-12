// The SA-MP SQLite natives.
//
// Provenance
//   reference/server-win32/pawno/include/a_sampdb.inc   the 18 natives and
//                                                       their parameter lists
//   docs/re/pipeline/queue-samp-server-exe.tsv           the db_* bodies are
//                                                       in the server queue
//   samp-server.exe embeds SQLite 3.7.0 ("SQLite format 3", the version line
//   "3.7.0"), so the natives are backed by the vendored 3.7.0 amalgamation
//   (third_party/sqlite-3.7.0), not by an external library.
//
// The observable contract the stock game modes rely on:
//
//   db_open(name[])                       -> DB handle, 0 on failure
//   db_close(db)                          -> closes the file
//   db_query(db, query[])                 -> DBResult handle, 0 on failure
//   db_free_result(result)                -> releases the result
//   db_num_rows(result)                   -> rows REMAINING from the cursor
//   db_next_row(result)                   -> advances, 1 when a row exists
//   db_num_fields(result)                 -> column count
//   db_field_name(result, field, dest[], maxlength)
//   db_get_field(result, field, dest[], maxlength)
//   db_get_field_int / db_get_field_float
//   db_get_field_assoc(result, name[], dest[], maxlength)
//   db_get_field_assoc_int / _float
//   db_get_mem_handle / db_get_result_mem_handle
//   db_debug_openfiles / db_debug_openresults
//
// The canonical script loop
//
//     result = db_query(db, "SELECT ...");
//     while (db_num_rows(result)) {
//         ... read the current row ...
//         db_next_row(result);
//     }
//     db_free_result(result);
//
// is why db_num_rows counts the rows REMAINING: it is the loop condition.

#include "pawn/db_natives.hpp"

#include <sqlite3.h>

#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <map>
#include <string>
#include <string_view>
#include <vector>

namespace samp::pawn {

namespace {

using samp::amx::cell;

// The rows of one query, materialized.  The reference implementation keeps
// the sqlite3_stmt open; materializing gives the same observable behaviour
// for the navigational API and keeps db_free_result a pure host operation.
struct ResultSet {
    std::vector<std::string> columns;
    std::vector<std::vector<std::string>> rows;
    std::size_t cursor = 0;
};

}  // namespace

// The official SQLite registration entry passes the module's native table
// (0x4cfba0) to amx_Register for every loaded AMX.
// Official: FUN_00481880 @ 0x00481880 (samp-server.exe)
void register_db_natives(PawnVm& vm) {
    static std::map<int, sqlite3*> databases;
    static std::map<int, ResultSet> result_sets;
    static int next_database_handle = 1;
    static int next_result_handle = 1;
    const auto read_script_string = [&vm](std::int32_t address) -> const char* {
        const std::uint8_t* start = nullptr;
        if (vm.ok_ && address >= 0 && static_cast<std::int64_t>(address) < vm.amx_.stp &&
            !(address >= vm.amx_.hea && address < vm.amx_.stk)) {
            const std::size_t at = static_cast<std::size_t>(vm.header_.dat + address);
            if (at < vm.image_.size()) start = vm.image_.data() + at;
        }
        if (start == nullptr) return nullptr;
        const std::size_t available = static_cast<std::size_t>(vm.amx_.stp - address);
        if (available < sizeof(cell)) return nullptr;
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
    const auto write_string = [&vm](std::int32_t address, std::string_view text,
                                    std::size_t max_cells) {
        if (max_cells == 0) return false;
        const std::size_t count = std::min<std::size_t>(text.size(), max_cells - 1);
        if (address < 0 || static_cast<std::uint64_t>(address) + (count + 1) * 4u >
                               static_cast<std::uint32_t>(vm.amx_.stp)) return false;
        for (std::size_t i = 0; i <= count; ++i) {
            const std::int32_t offset = address + static_cast<std::int32_t>(i * 4u);
            if (!vm.ok_ || offset < 0 || static_cast<std::int64_t>(offset) >= vm.amx_.stp ||
                (offset >= vm.amx_.hea && offset < vm.amx_.stk)) return false;
            const std::size_t at = static_cast<std::size_t>(vm.header_.dat + offset);
            if (at >= vm.image_.size()) return false;
            auto* cell_bytes = vm.image_.data() + at;
            const char value = i < count ? text[i] : '\0';
            cell_bytes[0] = static_cast<std::uint8_t>(value);
            cell_bytes[1] = cell_bytes[2] = cell_bytes[3] = 0;
        }
        return true;
    };

    vm.native_functions_["db_open"] = [&vm, read_script_string](std::span<const cell> args) -> cell {
        if (args.empty()) {
            return 0;
        }
        const char* name = read_script_string(args[0]);
        if (name == nullptr || *name == '\0') {
            return 0;
        }
        sqlite3* db = nullptr;
        if (sqlite3_open(name, &db) != SQLITE_OK) {
            if (db != nullptr) sqlite3_close(db);
            return 0;
        }
        const int handle = next_database_handle++;
        databases[handle] = db;
        return handle;
    };

    vm.native_functions_["db_close"] = [](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            const auto found = databases.find(args[0]);
            if (found != databases.end()) {
                sqlite3_close(found->second);
                databases.erase(found);
            }
        }
        return 0;
    };

    vm.native_functions_["db_query"] = [&vm, read_script_string](std::span<const cell> args) -> cell {
        if (args.size() < 2) {
            return 0;
        }
        const auto database = databases.find(args[0]);
        sqlite3* db = database == databases.end() ? nullptr : database->second;
        const char* query = read_script_string(args[1]);
        if (db == nullptr || query == nullptr) {
            return 0;
        }
        sqlite3_stmt* stmt = nullptr;
        if (sqlite3_prepare_v2(db, query, -1, &stmt, nullptr) != SQLITE_OK) {
            return 0;
        }
        ResultSet result;
        const int columns = sqlite3_column_count(stmt);
        result.columns.reserve(static_cast<std::size_t>(columns));
        for (int i = 0; i < columns; ++i) {
            const char* name = sqlite3_column_name(stmt, i);
            result.columns.emplace_back(name == nullptr ? "" : name);
        }
        int rc = SQLITE_OK;
        while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
            std::vector<std::string> row;
            row.reserve(static_cast<std::size_t>(columns));
            for (int i = 0; i < columns; ++i) {
                const unsigned char* text = sqlite3_column_text(stmt, i);
                row.emplace_back(text == nullptr ? "" : reinterpret_cast<const char*>(text));
            }
            result.rows.push_back(std::move(row));
        }
        sqlite3_finalize(stmt);
        // SQLITE_DONE ends a well formed statement.  Any other code is a
        // runtime error (a constraint, a missing table, ...) and the native
        // fails the way the reference does: with a null result handle.
        if (rc != SQLITE_DONE) {
            return 0;
        }
        const int handle = next_result_handle++;
        result_sets[handle] = std::move(result);
        return handle;
    };

    vm.native_functions_["db_free_result"] = [](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            result_sets.erase(args[0]);
        }
        return 0;
    };

    vm.native_functions_["db_num_rows"] = [](std::span<const cell> args) -> cell {
        if (args.empty()) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        if (found == result_sets.end()) return 0;
        return static_cast<cell>(found->second.rows.size() - found->second.cursor);
    };

    vm.native_functions_["db_next_row"] = [](std::span<const cell> args) -> cell {
        if (args.empty()) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        if (found == result_sets.end() || found->second.cursor + 1 >= found->second.rows.size()) return 0;
        ++found->second.cursor;
        return 1;
    };

    vm.native_functions_["db_num_fields"] = [](std::span<const cell> args) -> cell {
        if (args.empty()) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        return found == result_sets.end() ? 0 : static_cast<cell>(found->second.columns.size());
    };

    vm.native_functions_["db_field_name"] = [write_string](std::span<const cell> args) -> cell {
        if (args.size() < 4) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        if (found == result_sets.end()) return 0;
        const ResultSet* result = &found->second;
        const int column = args[1];
        if (column < 0 || static_cast<std::size_t>(column) >= result->columns.size()) {
            return 0;
        }
        const std::string& name = result->columns[static_cast<std::size_t>(column)];
        const std::size_t max_cells = static_cast<std::size_t>(std::max<cell>(args[3], 0));
        return write_string(args[2], name, max_cells) ? 1 : 0;
    };

    vm.native_functions_["db_get_field"] = [write_string](std::span<const cell> args) -> cell {
        if (args.size() < 4) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        if (found == result_sets.end()) return 0;
        const ResultSet* result = &found->second;
        const int column = args[1];
        const std::string* value = column < 0 || static_cast<std::size_t>(column) >= result->columns.size() ||
            result->cursor >= result->rows.size() ? nullptr :
            &result->rows[result->cursor][static_cast<std::size_t>(column)];
        if (value == nullptr) {
            return 0;
        }
        const std::size_t max_cells = static_cast<std::size_t>(std::max<cell>(args[3], 0));
        return write_string(args[2], *value, max_cells) ? 1 : 0;
    };

    vm.native_functions_["db_get_field_int"] = [](std::span<const cell> args) -> cell {
        if (args.empty()) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        if (found == result_sets.end()) return 0;
        const ResultSet* result = &found->second;
        const int column = args.size() > 1 ? args[1] : 0;
        const std::string* value = column < 0 || static_cast<std::size_t>(column) >= result->columns.size() ||
            result->cursor >= result->rows.size() ? nullptr :
            &result->rows[result->cursor][static_cast<std::size_t>(column)];
        return value == nullptr ? 0 : static_cast<cell>(std::strtol(value->c_str(), nullptr, 10));
    };

    vm.native_functions_["db_get_field_float"] = [](std::span<const cell> args) -> cell {
        if (args.empty()) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        if (found == result_sets.end()) return 0;
        const ResultSet* result = &found->second;
        const int column = args.size() > 1 ? args[1] : 0;
        const std::string* value = column < 0 || static_cast<std::size_t>(column) >= result->columns.size() ||
            result->cursor >= result->rows.size() ? nullptr :
            &result->rows[result->cursor][static_cast<std::size_t>(column)];
        const float number = value == nullptr ? 0.0f : std::strtof(value->c_str(), nullptr);
        cell bits = 0;
        std::memcpy(&bits, &number, sizeof(bits));
        return bits;
    };

    vm.native_functions_["db_get_field_assoc"] = [&vm, write_string, read_script_string](std::span<const cell> args) -> cell {
        if (args.size() < 4) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        if (found == result_sets.end()) return 0;
        const ResultSet* result = &found->second;
        const char* name = read_script_string(args[1]);
        if (name == nullptr) {
            return 0;
        }
        int column = -1;
        for (std::size_t i = 0; i < result->columns.size(); ++i)
            if (result->columns[i] == name) { column = static_cast<int>(i); break; }
        if (column < 0) {
            return 0;
        }
        const std::string* value = result->cursor >= result->rows.size() ? nullptr :
            &result->rows[result->cursor][static_cast<std::size_t>(column)];
        if (value == nullptr) {
            return 0;
        }
        const std::size_t max_cells = static_cast<std::size_t>(std::max<cell>(args[3], 0));
        return write_string(args[2], *value, max_cells) ? 1 : 0;
    };

    vm.native_functions_["db_get_field_assoc_int"] = [read_script_string](std::span<const cell> args) -> cell {
        if (args.size() < 2) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        if (found == result_sets.end()) return 0;
        const ResultSet* result = &found->second;
        const char* name = read_script_string(args[1]);
        if (name == nullptr) {
            return 0;
        }
        int column = -1;
        for (std::size_t i = 0; i < result->columns.size(); ++i)
            if (result->columns[i] == name) { column = static_cast<int>(i); break; }
        const std::string* value = column < 0 || result->cursor >= result->rows.size() ? nullptr :
            &result->rows[result->cursor][static_cast<std::size_t>(column)];
        return value == nullptr ? 0 : static_cast<cell>(std::strtol(value->c_str(), nullptr, 10));
    };

    vm.native_functions_["db_get_field_assoc_float"] = [read_script_string](std::span<const cell> args) -> cell {
        if (args.size() < 2) {
            return 0;
        }
        const auto found = result_sets.find(args[0]);
        if (found == result_sets.end()) return 0;
        const ResultSet* result = &found->second;
        const char* name = read_script_string(args[1]);
        if (name == nullptr) {
            return 0;
        }
        int column = -1;
        for (std::size_t i = 0; i < result->columns.size(); ++i)
            if (result->columns[i] == name) { column = static_cast<int>(i); break; }
        const std::string* value = column < 0 || result->cursor >= result->rows.size() ? nullptr :
            &result->rows[result->cursor][static_cast<std::size_t>(column)];
        const float number = value == nullptr ? 0.0f : std::strtof(value->c_str(), nullptr);
        cell bits = 0;
        std::memcpy(&bits, &number, sizeof(bits));
        return bits;
    };

    vm.native_functions_["db_get_mem_handle"] = [](std::span<const cell> args) -> cell {
        if (args.empty()) {
            return 0;
        }
        const auto found = databases.find(args[0]);
        sqlite3* db = found == databases.end() ? nullptr : found->second;
        return static_cast<cell>(reinterpret_cast<std::intptr_t>(db));
    };

    vm.native_functions_["db_get_result_mem_handle"] = [](std::span<const cell> args) -> cell {
        // The host has no sqlite3_stmt to expose (the rows are materialized),
        // so the result handle itself is the memory handle.
        return args.empty() ? 0 : args[0];
    };

    vm.native_functions_["db_debug_openfiles"] = [](std::span<const cell>) -> cell {
        return static_cast<cell>(databases.size());
    };

    vm.native_functions_["db_debug_openresults"] = [](std::span<const cell>) -> cell {
        return static_cast<cell>(result_sets.size());
    };
}

}  // namespace samp::pawn
