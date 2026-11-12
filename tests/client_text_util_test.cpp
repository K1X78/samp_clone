#include "runutil.h"

#include <cstdio>
#include <cstring>

int main()
{
    char text[] = "{A0B1C2}first{000000}{a1b2c3}second with a long overlapping suffix";
    ChatStripColorTags(text);
    if (std::strcmp(text, "firstsecond with a long overlapping suffix") != 0)
    {
        std::fprintf(stderr, "Unexpected stripped text: %s\n", text);
        return 1;
    }

    char malformed[] = "{FFFFFZ}keep{00ff00}{12}";
    ChatStripColorTags(malformed);
    if (std::strcmp(malformed, "{FFFFFZ}keep{12}") != 0)
    {
        std::fprintf(stderr, "Unexpected malformed-tag handling: %s\n", malformed);
        return 1;
    }
    return 0;
}
