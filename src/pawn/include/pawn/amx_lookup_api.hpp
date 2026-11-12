#pragma once

#include "samp/proto/amx.hpp"

namespace samp::pawn::amx_lookup {
// Raw SDK getters copy a complete NUL-terminated name into caller storage.
// Index comparison is signed and only checks index < table_count; a negative
// index is not rejected if its computed record/name storage is accessible.
int get_native(const samp::amx::Amx* state, int index, char* name) noexcept;
int get_public(const samp::amx::Amx* state, int index, char* name) noexcept;
int get_public_variable(const samp::amx::Amx* state, int index, char* name,
                        samp::amx::cell* address) noexcept;
int get_tag(const samp::amx::Amx* state, int index, char* name,
            samp::amx::cell* tag) noexcept;

int find_native(const samp::amx::Amx* state, const char* name, int* index) noexcept;
int find_public(const samp::amx::Amx* state, const char* name, int* index) noexcept;
int find_public_variable(const samp::amx::Amx* state, const char* name,
                         samp::amx::cell* address) noexcept;
int find_tag_id(const samp::amx::Amx* state, samp::amx::cell tag, char* name) noexcept;
}
