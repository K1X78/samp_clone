// The chat input line of the client.
//
// Provenance
//   samp.dll 0x10005860  the chat request (RPC 101, u8 length + bytes)
//   samp-server.exe 0x498340  the receive handler: 128 bytes or fewer
//   the help dialog of 0x1006b570: "T/F6 Allows you to enter a chat message"
//
// The official client owns the whole chat box; this replica keeps the input
// state here so it can be tested without the game: the Win32 hook feeds it
// key presses, the renderer draws it and the network object sends the line
// with `send_chat`.
#pragma once

#include <cstddef>
#include <functional>
#include <string>
#include <string_view>
#include <vector>

namespace samp::client {

class ChatDialog;
class ChatHook;

class ChatInput {
public:
    using Command = std::function<void(std::string_view)>;
    struct CommandEntry { std::string name; Command callback; };
    // The official server drops a chat request of 129 bytes or more
    // (samp-server.exe 0x498340 compares the length against 0x81), so the
    // input never grows past 128 characters.
    static constexpr std::size_t kMaxLength = 128;
    // 0x10069010 shifts nine 129-byte slots and caps the count at ten.
    static constexpr std::size_t kHistoryDepth = 10;

    // Compatibility backend state toggle. Native GUI lifecycle remains in CInput.
    void begin();

    // Compatibility backend state toggle. Native GUI lifecycle remains in CInput.
    void cancel();

    // The up arrow: the previous entry of the history.  Returns true when the
    // line changed.
    bool history_previous();
    // The down arrow: the next entry, or the line that was being typed.
    bool history_next();

    // Handles Enter.  Returns true and fills `line` when there is something
    // to send; an empty line only closes the input.  A sent line is pushed
    // into the history.
    bool submit(std::string& line);

    // Adds a line to the history without sending it (the client records the
    // lines the player sent while the input was open).
    void remember(std::string_view line);

    void register_command(std::string_view name, Command callback);
    Command find_command(std::string_view name) const;

public:
    bool open_ = false;
    std::string text_;
    std::size_t caret_=0,anchor_=0;
    bool insert_mode_=true;
    std::vector<std::string> history_;
    // history_.size() means "the line being typed", which is the state after
    // the newest entry.
    std::size_t history_cursor_ = 0;
    std::string draft_;
    std::vector<CommandEntry> commands_;
};

}  // namespace samp::client
