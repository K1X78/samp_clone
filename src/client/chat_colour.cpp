#include "runutil.h"
#include "include/samp/client/render/colour_tags.hpp"

#include <cstddef>
#include <stdlib.h>
#include <string.h>

// Official: FUN_100b5950 @ 0x100b5950 (samp.dll)
int ChatIsHexDigit(char value)
{
    if ((value >= '0' && value <= '9') || (value >= 'A' && value <= 'F') ||
        (value >= 'a' && value <= 'f'))
        return 1;
    return 0;
}

// Official: FUN_100b59c0 @ 0x100b59c0 (samp.dll)
unsigned long ChatParseColorTag(char* text)
{
    if (text[0] && text[0] == '{' && text[1] && ChatIsHexDigit(text[1]) && text[2] &&
        ChatIsHexDigit(text[2]) && text[3] && ChatIsHexDigit(text[3]) && text[4] &&
        ChatIsHexDigit(text[4]) && text[5] && ChatIsHexDigit(text[5]) && text[6] &&
        ChatIsHexDigit(text[6]) && text[7] && text[7] == '}')
    {
        char digits[17];
        memset(digits, 0, sizeof(digits));
        strncpy(digits, text + 1, 6);
        return strtoul(digits, 0, 16);
    }
    return 0xffffffff;
}

// Official: FUN_100b5c00 @ 0x100b5c00 (samp.dll)
void ChatStripColorTags(char* text)
{
    while (*text)
    {
        if (ChatParseColorTag(text) != 0xffffffff)
        {
            const char* suffix = text + 8;
            char* destination = text;
            char value;
            do
            {
                value = *suffix++;
                *destination++ = value;
            }
            while (value != '\0');
        }
        else
            ++text;
    }
    *text = 0;
}


// Official: FUN_100b5980 @ 0x100b5980 (samp.dll)
int FontIsWideHexDigit(unsigned short value)
{
    return (value >= '0' && value <= '9') || (value >= 'A' && value <= 'F') ||
           (value >= 'a' && value <= 'f');
}

// Official: FUN_100b5ad0 @ 0x100b5ad0 (samp.dll)
std::uint32_t samp::client::render::parse_colour_tag(const void* text)
{
    const auto* bytes = static_cast<const unsigned char*>(text);
    const auto read_code_unit = [bytes](std::size_t index) {
        unsigned short value = 0;
        memcpy(&value, bytes + index * sizeof(value), sizeof(value));
        return value;
    };
    if (!read_code_unit(0) || read_code_unit(0) != '{') return 0xffffffff;
    std::uint32_t colour = 0;
    for (int i = 1; i <= 6; ++i) {
        const auto digit = read_code_unit(static_cast<std::size_t>(i));
        if (!digit || !FontIsWideHexDigit(digit)) return 0xffffffff;
        colour = (colour << 4) | static_cast<std::uint32_t>(
            digit <= '9' ? digit - '0' : digit <= 'F' ? digit - 'A' + 10 : digit - 'a' + 10);
    }
    const auto end = read_code_unit(7);
    return end && end == '}' ? colour : 0xffffffff;
}
