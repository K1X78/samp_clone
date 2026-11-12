#include "chat_hook.hpp"
#include "scoreboard_dialog.hpp"
#include "samp/client/render/font_draw.hpp"
#include <algorithm>
#include <cstring>

namespace samp::client {
ChatHook* ChatHook::current_=nullptr;

}
