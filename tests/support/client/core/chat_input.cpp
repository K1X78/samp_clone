#include "samp/client/chat_input.hpp"

#include <algorithm>
#include <cctype>
#include <cstring>
#include <utility>

namespace samp::client {

// source adapter only; no established separate native entry
// Keep insertion order and duplicates; the official table holds 144 entries
// and accepts at most 31 name bytes before the terminating NUL.
void ChatInput::register_command(std::string_view name, Command callback) {
    name = name.substr(0, name.find('\0'));
    if (commands_.size() >= 144 || name.size() >= 32) return;
    commands_.push_back({std::string(name), std::move(callback)});
}

// source adapter only; no established separate native entry
// Return the first case-insensitive match, including a registered null entry.
ChatInput::Command ChatInput::find_command(std::string_view name) const {
    const std::string key(name.substr(0, name.find('\0')));
    for (const auto& entry : commands_) {
#ifdef _WIN32
        const bool matches = _stricmp(key.c_str(), entry.name.c_str()) == 0;
#else
        const bool matches = key.size() == entry.name.size() &&
            std::equal(key.begin(), key.end(), entry.name.begin(), [](unsigned char a, unsigned char b) {
                return std::tolower(a) == std::tolower(b);
            });
#endif
        if (matches) return entry.callback;
    }
    return {};
}

// source adapter only; no established separate native entry
void ChatInput::begin() {
    open_=true;
}

// source adapter only; no established separate native entry
void ChatInput::cancel() {
    open_ = false;
}

// source adapter only; no established separate native entry
bool ChatInput::history_previous() {
    if (!open_ || history_.empty()) {
        return false;
    }
    if (history_cursor_ == history_.size()) {
        draft_ = text_;
    }
    if (history_cursor_ == 0) {
        return false;
    }
    --history_cursor_;
    text_ = history_[history_cursor_];
    caret_=anchor_=text_.size();
    return true;
}

// source adapter only; no established separate native entry
bool ChatInput::history_next() {
    if (!open_ || history_cursor_ >= history_.size()) {
        return false;
    }
    ++history_cursor_;
    text_ = history_cursor_ == history_.size() ? draft_ : history_[history_cursor_];
    caret_=anchor_=text_.size();
    return true;
}

// Dispatch registered slash commands locally, passing everything after the
// first space verbatim; preserve the complete line for server fallbacks.
// source adapter only; no established separate native entry
bool ChatInput::submit(std::string& line) {
    if (!open_) {
        return false;
    }
    open_ = false;
    history_cursor_ = history_.size();
    draft_.clear();
    if (text_.empty()) {
        text_.clear();
        return false;
    }
    line = text_;
    text_.clear();
    caret_=anchor_=0;
    remember(line);
    if (line.front() == '/') {
        const auto separator = line.find(' ', 1);
        const auto name = std::string_view(line).substr(1,
            separator == std::string::npos ? std::string::npos : separator - 1);
        if (auto command = find_command(name)) {
            const auto parameters = separator == std::string::npos ? std::string_view{}
                : std::string_view(line).substr(separator + 1);
            command(parameters);
            line.clear();
            return false;
        }
    }
    return true;
}

// source adapter only; no established separate native entry
void ChatInput::remember(std::string_view line) {
    if (line.empty()) {
        return;
    }
    history_.emplace_back(line.substr(0, kMaxLength));
    if (history_.size() > kHistoryDepth) {
        history_.erase(history_.begin());
    }
    history_cursor_ = history_.size();
    draft_.clear();
}

}  // namespace samp::client
