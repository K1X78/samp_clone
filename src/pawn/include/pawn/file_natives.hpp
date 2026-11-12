#pragma once
#include "pawn/core_natives.hpp"
#include <cstdio>

namespace samp::pawn::file_natives {
using samp::amx::cell;
char* resolve_path(const char* name, char* destination, std::size_t capacity);
cell write_cells(FILE*, const cell*, bool utf8);
cell read_cells(FILE*, cell*, int capacity, bool utf8);
cell read_bytes(FILE*, char*, int capacity);
cell write(samp::amx::Amx*, std::span<const cell>);
cell read(samp::amx::Amx*, std::span<const cell>);
cell put_character(samp::amx::Amx*, std::span<const cell>);
cell get_character(samp::amx::Amx*, std::span<const cell>);
cell exists(samp::amx::Amx*, std::span<const cell>);
cell remove(samp::amx::Amx*, std::span<const cell>);
cell open(samp::amx::Amx*, std::span<const cell>);
cell close(samp::amx::Amx*, std::span<const cell>);
cell block_write(samp::amx::Amx*, std::span<const cell>);
cell block_read(samp::amx::Amx*, std::span<const cell>);
cell temporary(samp::amx::Amx*, std::span<const cell>);
cell seek(samp::amx::Amx*, std::span<const cell>);
cell length(samp::amx::Amx*, std::span<const cell>);
inline constexpr std::pair<std::string_view, core_natives::Native> kNatives[] = {
    {"fopen", open}, {"fclose", close}, {"fwrite", write}, {"fread", read},
    {"fputchar", put_character}, {"fgetchar", get_character},
    {"fblockwrite", block_write}, {"fblockread", block_read},
    {"ftemp", temporary}, {"fseek", seek}, {"fexist", exists},
    {"fremove", remove}, {"flength", length},
};
}
