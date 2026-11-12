#include "samp/client/chat_input.hpp"

#include <cstdio>
#include <string>

int main() {
    samp::client::ChatInput input;
    int handled = 0;
    std::string arguments;
    const auto quit = [&](std::string_view value) { ++handled; arguments = value; };
    input.register_command("quit", quit);
    input.register_command("q", quit);
    for (const char* command : {"/q", "/Q", "/quit", "/QUIT"}) {
        input.begin();
        input.text_ = command;
        std::string outgoing;
        const int before = handled;
        if (input.submit(outgoing) || !outgoing.empty() || handled != before + 1 || input.open_)
            return 1;
    }
    input.begin(); input.text_ = "/q  trailing parameters";
    std::string outgoing;
    if (input.submit(outgoing) || arguments != " trailing parameters") return 2;
    for (const char* text : {"/qwerty", "/servercommand value", "ordinary chat"}) {
        input.begin(); input.text_ = text;
        if (!input.submit(outgoing) || outgoing != text) return 3;
    }
    input.register_command(std::string(32, 'x'), quit);
    if (input.commands_.size() != 2) return 4;
    for (int index = 0; index < 150; ++index)
        input.register_command("command" + std::to_string(index), quit);
    if (input.commands_.size() != 144) return 5;
    std::puts("/q and /quit local dispatch, aliases, arguments and server fallback passed");
    return 0;
}
