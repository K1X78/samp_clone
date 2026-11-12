// Small host APIs recovered from the official SA-MP 0.3.DL AMX runtime.
#pragma once

#include "samp/proto/amx.hpp"

namespace samp::pawn::amx_host {
// GetUserData leaves value unchanged on error 23. SetUserData searches all
// matching tags before taking an empty slot; a full table returns 20.
int get_user_data(const samp::amx::Amx& state, std::int32_t tag, void*& value) noexcept;
int set_user_data(samp::amx::Amx& state, std::int32_t tag, void* value) noexcept;
int raise_error(samp::amx::Amx& state, int error) noexcept;

// These native AMX APIs assume a valid initialized header and nonzero defsize.
// The output count and AMX error code are separate values.
int native_count(const samp::amx::Amx& state, int& count) noexcept;
int public_count(const samp::amx::Amx& state, int& count) noexcept;
int public_variable_count(const samp::amx::Amx& state, int& count) noexcept;
int tag_count(const samp::amx::Amx& state, int& count) noexcept;
}
