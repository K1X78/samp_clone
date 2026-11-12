#include "samp/client/cli.hpp"

#include <algorithm>
#include <cstdlib>

namespace samp::client {

// Official: FUN_100c45b0 @ 0x100c45b0 (samp.dll)
CommandLine parse_command_line(std::string_view command_line) {
    CommandLine out;
    std::size_t i = 0;
    while (i < command_line.size()) {
        if (command_line[i] == '\0') {
            break;
        }
        if (command_line[i] != '-' && command_line[i] != '/') {
            ++i;
            continue;
        }
        if (i + 1 >= command_line.size() || command_line[i + 1] == '\0') {
            ++i;
            continue;
        }
        const char letter = command_line[i + 1];
        switch (letter) {
            case 'c':
                out.connect = true;
                out.debug = false;
                i = std::min(i + 2, command_line.size());
                break;
            case 'd':
                out.debug = true;
                out.connect = false;
                i = std::min(i + 2, command_line.size());
                break;
            case 'h':
            case 'p':
            case 'n':
            case 'z': {
                std::size_t begin = i + 2;
                while (begin < command_line.size() && command_line[begin] == ' ') {
                    ++begin;
                }
                std::size_t end = begin;
                while (end < command_line.size() && command_line[end] != '\0' &&
                       command_line[end] != ' ' && command_line[end] != '-' &&
                       command_line[end] != '/') {
                    ++end;
                }
                const std::string value(command_line.substr(begin, end - begin));
                if (letter == 'h') {
                    out.host = value;
                } else if (letter == 'p') {
                    out.port_text = value;
                    const long parsed = std::strtol(out.port_text.c_str(), nullptr, 10);
                    out.port = static_cast<std::int32_t>(static_cast<std::uint32_t>(parsed));
                } else if (letter == 'n') {
                    out.name = value;
                } else {
                    out.password = value;
                }
                i = std::min(i + 3, command_line.size());
                break;
            }
            case 'l': {
                std::size_t quote = i + 2;
                while (quote < command_line.size() && command_line[quote] != '\0' &&
                       command_line[quote] != '"') {
                    ++quote;
                }
                if (quote >= command_line.size() || command_line[quote] == '\0') {
                    out.debug_script.clear();
                } else {
                    const std::size_t begin = quote + 1;
                    std::size_t end = begin;
                    while (end < command_line.size() && command_line[end] != '\0' &&
                           command_line[end] != '"') {
                        ++end;
                    }
                    out.debug_script.assign(command_line.substr(begin, end - begin));
                }
                i = std::min(i + 3, command_line.size());
                break;
            }
            default:
                i = std::min(i + 2, command_line.size());
                break;
        }
    }
    return out;
}

}  // namespace samp::client
