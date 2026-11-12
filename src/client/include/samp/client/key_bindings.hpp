#pragma once

#include <functional>

namespace samp::client {

// The game routine at 0x0069e160 expands ~k~ markers in place. Its return
// register is ignored by samp.dll; only the rewritten, NUL-terminated text matters.
using KeyBindingExpander = std::function<void(char*)>;

// samp.dll 0.3.DL 0x100b5c40. The caller supplies max_length + 1 writable
// bytes when expansion can grow the text. Input must be NUL-terminated.
// The game expander must leave a terminated string in the 2049-byte scratch buffer.
int expand_key_bindings(char* text, int max_length, const KeyBindingExpander& expander);

}  // namespace samp::client
