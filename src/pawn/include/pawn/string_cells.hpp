#pragma once

#include "samp/proto/amx.hpp"

namespace samp::pawn::string_cells {
using samp::amx::cell;
int pack(cell* destination, const cell* source, cell offset, cell count);
int unpack(cell* destination, const cell* source, cell count);
const std::uint8_t* packed_byte(const cell* source, std::uint32_t index);
cell character(const cell* source, cell index, bool ignore_case);
cell compare(const cell* left, const cell* right, cell count,
              cell left_offset, bool ignore_case);
cell uu_decode(std::uint8_t* destination, const char* source);
int uu_encode(char* destination, const std::uint8_t* source, cell bytes);
}
