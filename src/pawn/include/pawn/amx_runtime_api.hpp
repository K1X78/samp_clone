#pragma once

#include "samp/proto/amx.hpp"

namespace samp::pawn::amx_runtime {
int clone(samp::amx::Amx* destination, const samp::amx::Amx* source, void* data) noexcept;
int memory_info(const samp::amx::Amx* state, samp::amx::cell* code_bytes,
                samp::amx::cell* data_bytes, samp::amx::cell* stack_bytes) noexcept;
int name_length(const samp::amx::Amx* state, int* length) noexcept;
int cleanup(samp::amx::Amx* state) noexcept;
samp::amx::AmxNativeInfo* native_info(const char* name,
                                    decltype(samp::amx::AmxNativeInfo::func) function) noexcept;

int push_array(samp::amx::Amx* state, samp::amx::cell* address,
               samp::amx::cell** physical, const samp::amx::cell* source, int cells) noexcept;
int push_string(samp::amx::Amx* state, samp::amx::cell* address,
                samp::amx::cell** physical, const void* source,
                int pack, int use_wide_characters) noexcept;
}
