#include "config.h"
#include "game/custommodels.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// 0x002aca0c
CConfig* g_pConfig;

// 0x00065e60
// Official: FUN_10065e60 @ 0x10065e60 (samp.dll)
CConfig::CConfig(const char* file)
{
    for (int i = 0; i < MAX_ENTRIES; ++i)
    {
        memset(&entries[i], 0, sizeof(ConfigEntry));
        occupied[i] = FALSE;
    }
    upperBound = 0;
    // Native leaves filename untouched when no nonempty filename is supplied.
    if (file && strlen(file))
    {
        strcpy(filename, file);
        Load();
    }
}
// 0x00065680
// Official: FUN_10065680 @ 0x10065680 (samp.dll)
CConfig::~CConfig()
{
    for (int i = 0; i < MAX_ENTRIES; ++i)
    {
        if (occupied[i] && entries[i].stringValue)
            free(entries[i].stringValue);
        occupied[i] = FALSE;
    }
}
// 0x000656c0
// Official: FUN_100656c0 @ 0x100656c0 (samp.dll)
void CConfig::FindFirstFree()
{
    int last = 0;
    for (int i = 0; i < MAX_ENTRIES; ++i)
        if (occupied[i])
            last = i;
    upperBound = last + 1;
}
// 0x00065710
// Official: FUN_10065710 @ 0x10065710 (samp.dll)
int CConfig::GetIndex(const char* name)
{
    // Native mutates the supplied key despite the const signature in references.
    _strlwr((char*)name);
    for (int i = 0; i < upperBound; ++i)
        if (occupied[i] && !strcmp(name, entries[i].name))
            return i;
    return -1;
}
// 0x000657b0
// Official: FUN_100657b0 @ 0x100657b0 (samp.dll)
bool CConfig::DoesExist(const char* name)
{
    return GetIndex(name) >= 0;
}
// 0x000657d0
// Official: FUN_100657d0 @ 0x100657d0 (samp.dll)
int CConfig::CreateEntry(const char* name)
{
    int index = 0;
    while (index < MAX_ENTRIES && occupied[index])
        ++index;
    if (index == MAX_ENTRIES || strlen(name) >= 41)
        return -1;
    _strlwr((char*)name);
    strcpy(entries[index].name, name);
    entries[index].readOnly = FALSE;
    entries[index].type = VALUE_TYPE_NONE;
    occupied[index] = TRUE;
    FindFirstFree();
    return index;
}
// 0x00065890
// Official: FUN_10065890 @ 0x10065890 (samp.dll)
int CConfig::GetIntValue(const char* name)
{
    int i = GetIndex(name);
    return i >= 0 && entries[i].type == VALUE_TYPE_INT ? entries[i].intValue : 0;
}
// 0x000658c0
// Official: FUN_100658c0 @ 0x100658c0 (samp.dll)
const char* CConfig::GetStringValue(const char* name)
{
    int i = GetIndex(name);
    return i >= 0 && entries[i].type == VALUE_TYPE_STRING ? entries[i].stringValue : 0;
}
// 0x000658f0
// Official: FUN_100658f0 @ 0x100658f0 (samp.dll)
float CConfig::GetFloatValue(const char* name)
{
    int i = GetIndex(name);
    return i >= 0 && entries[i].type == VALUE_TYPE_FLOAT ? entries[i].floatValue : 0.0f;
}
// 0x00065920
// Official: FUN_10065920 @ 0x10065920 (samp.dll)
BOOL CConfig::Free(const char* name)
{
    int i = GetIndex(name);
    if (i < 0)
        return FALSE;
    if (entries[i].stringValue)
        free(entries[i].stringValue);
    memset(&entries[i], 0, sizeof(ConfigEntry));
    occupied[i] = FALSE;
    FindFirstFree();
    return TRUE;
}
// 0x00065980
// Official: FUN_10065980 @ 0x10065980 (samp.dll)
int CConfig::GetValueType(const char* name)
{
    int i = GetIndex(name);
    return i < 0 ? VALUE_TYPE_NONE : entries[i].type;
}
// 0x000659b0
// Official: FUN_100659b0 @ 0x100659b0 (samp.dll)
CConfig::ConfigEntry* CConfig::GetEntry(int index)
{
    return index >= 0 && index < MAX_ENTRIES && occupied[index] ? &entries[index] : 0;
}
// 0x000659e0
// Official: FUN_100659e0 @ 0x100659e0 (samp.dll)
int CConfig::GetType(const char* text)
{
    if (!text || !strlen(text))
        return VALUE_TYPE_NONE;
    if (text[0] == '"' && text[strlen(text) - 1] == '"')
        return VALUE_TYPE_STRING;
    return strchr(text, '.') ? VALUE_TYPE_FLOAT : VALUE_TYPE_INT;
}
// 0x00065a50
// Official: FUN_10065a50 @ 0x10065a50 (samp.dll)
BOOL CConfig::Save()
{
    FILE* file = fopen(filename, "w");
    if (!file)
        return FALSE;
    for (int i = 0; i < MAX_ENTRIES; ++i)
        if (occupied[i])
        {
            ConfigEntry& entry = entries[i];
            if (entry.type == VALUE_TYPE_INT)
                fprintf(file, "%s=%d\n", entry.name, entry.intValue);
            else if (entry.type == VALUE_TYPE_STRING && entry.stringValue)
                fprintf(file, "%s=\"%s\"\n", entry.name, entry.stringValue);
            else if (entry.type == VALUE_TYPE_FLOAT)
                fprintf(file, "%s=%f\n", entry.name, (double)entry.floatValue);
        }
    fclose(file);
    return TRUE;
}
// 0x00065b00
// Official: FUN_10065b00 @ 0x10065b00 (samp.dll)
BOOL CConfig::WriteIntValue(const char* name, int value, BOOL readOnly)
{
    int i = GetIndex(name);
    if (i < 0)
        i = CreateEntry(name);
    if (i < 0)
        return FALSE;
    if (readOnly)
        entries[i].readOnly = TRUE;
    else if (entries[i].readOnly)
        return FALSE;
    entries[i].intValue = value;
    entries[i].type = VALUE_TYPE_INT;
    Save();
    return TRUE;
}
// 0x00065b60
// Official: FUN_10065b60 @ 0x10065b60 (samp.dll)
BOOL CConfig::WriteStringValue(const char* name, const char* value, BOOL readOnly)
{
    int i = GetIndex(name);
    if (i < 0)
        i = CreateEntry(name);
    if (i < 0)
        return FALSE;
    if (readOnly)
        entries[i].readOnly = TRUE;
    else if (entries[i].readOnly)
        return FALSE;
    entries[i].type = VALUE_TYPE_STRING;
    if (entries[i].stringValue)
        free(entries[i].stringValue);
    entries[i].stringValue = (char*)calloc(1, strlen(value) + 1);
    strcpy(entries[i].stringValue, value);
    Save();
    return TRUE;
}
// 0x00065c00
// Official: FUN_10065c00 @ 0x10065c00 (samp.dll)
BOOL CConfig::WriteFloatValue(const char* name, float value, BOOL readOnly)
{
    int i = GetIndex(name);
    if (i < 0)
        i = CreateEntry(name);
    if (i < 0)
        return FALSE;
    if (readOnly)
        entries[i].readOnly = TRUE;
    else if (entries[i].readOnly)
        return FALSE;
    entries[i].floatValue = value;
    entries[i].type = VALUE_TYPE_FLOAT;
    Save();
    return TRUE;
}
// 0x00065c60
// Official: FUN_10065c60 @ 0x10065c60 (samp.dll)
void CConfig::Write(const char* name, char* value)
{
    int type = GetType(value);
    if (type == VALUE_TYPE_INT)
        WriteIntValue(name, atol(value), FALSE);
    else if (type == VALUE_TYPE_STRING)
    {
        int length = (int)strlen(value);
        strncpy(value, value + 1, length - 1);
        value[length - 2] = 0;
        WriteStringValue(name, value, FALSE);
    }
    else if (type == VALUE_TYPE_FLOAT)
        WriteFloatValue(name, (float)atof(value), FALSE);
}
// 0x00065cf0
// Official: FUN_10065cf0 @ 0x10065cf0 (samp.dll)
BOOL CConfig::Load()
{
    FILE* file = fopen(filename, "r");
    if (!file)
        return FALSE;
    char line[260], name[260], value[260];
    while (!feof(file))
    {
        fgets(line, 256, file); // Native ignores the return value, including at EOF.
        char* p = line;
        int nameLength = 0, valueLength = 0;
        while (*p == ' ' || *p == '\t')
            ++p;
        if (!*p || *p == ';' || *p == '\n' || *p == '[')
            continue;
        while (*p && *p != ' ' && *p != '=' && *p != '\n' && *p != '\t' && *p != ';')
            name[nameLength++] = (char)toupper(*p++);
        if (!nameLength)
            continue;
        name[nameLength] = 0;
        while (*p == ' ' || *p == '\t')
            ++p;
        if (*p != '=')
            continue;
        do
        {
            ++p;
        }
        while (*p == ' ' || *p == '\t');
        if (!*p)
            continue;
        while (*p && *p != '\n')
            value[valueLength++] = *p++;
        if (!valueLength)
            continue;
        value[valueLength] = 0;
        p = value + valueLength - 1;
        while (*p == ' ' || *p == '\t' || *p == '\r')
            *p-- = 0;
        Write(name, value);
    }
    fclose(file);
    return TRUE;
}

// 0x002abe78
ClientSettings g_clientSettings;

// 0x002ac7a8
char g_clientDataDirectory[261];

// 0x002ac8b0
char g_clientCacheDirectory[261];

// 0x002ac498
char g_clientConfigFilename[520];

// 0x002ac6a0
char g_clientChatFilename[264];

// Native parsers have no destination bound; missing opening quotes also have
// no terminator guard. Retain that behavior instead of silently truncating.
// 0x000c5590
// Official: FUN_100c5590 @ 0x100c5590 (samp.dll)
void Settings::GetFromCommandLine(const char* line, char* output)
{
    while (*line == ' ')
        ++line;
    while (*line && *line != ' ' && *line != '-' && *line != '/')
        *output++ = *line++;
    *output = 0;
}

// 0x000c55e0
// Official: FUN_100c55e0 @ 0x100c55e0 (samp.dll)
void Settings::GetFromQuotes(const char* line, char* output)
{
    while (*line != '"')
        ++line;
    ++line;
    while (*line && *line != '"')
        *output++ = *line++;
    *output = 0;
}

// The scanner keeps walking through argument values, including quoted paths.
// Later -c/-d occurrences overwrite earlier debug/online selection.
// 0x000c5c90
// Official: FUN_100c5c90 @ 0x100c5c90 (samp.dll)
void Settings::Initialize()
{
    const char* line = GetCommandLineA();
    memset(&g_clientSettings, 0, sizeof(g_clientSettings));
    while (*line)
    {
        if (*line == '-' || *line == '/')
        {
            ++line;
            switch (*line)
            {
                case 'd':
                    g_clientSettings.debug = TRUE;
                    g_clientSettings.online = FALSE;
                    break;
                case 'c':
                    g_clientSettings.online = TRUE;
                    g_clientSettings.debug = FALSE;
                    break;
                case 'h':
                    GetFromCommandLine(++line, g_clientSettings.host);
                    break;
                case 'p':
                    GetFromCommandLine(++line, g_clientSettings.port);
                    break;
                case 'n':
                    GetFromCommandLine(++line, g_clientSettings.nickname);
                    break;
                case 'z':
                    GetFromCommandLine(++line, g_clientSettings.password);
                    break;
                case 'l':
                    GetFromQuotes(++line, g_clientSettings.debugScript);
                    break;
            }
        }
        ++line;
    }
}

// 0x000c51a0
// Official: FUN_100c51a0 @ 0x100c51a0 (samp.dll)
const char* ClientGetDataDirectory()
{
    return g_clientDataDirectory;
}

// 0x000c51b0
// Official: FUN_100c51b0 @ 0x100c51b0 (samp.dll)
const char* ClientGetCacheDirectory()
{
    return g_clientCacheDirectory;
}

// Official: FUN_100c51c0 @ 0x100c51c0 (samp.dll)
void ClientInitializeCacheDirectory()
{
    memset(g_clientCacheDirectory, 0, 261);
    BYTE configured[261];
    memset(configured, 0, sizeof(configured));
    DWORD length = 260, type;
    HKEY key;
    sprintf(g_clientCacheDirectory, "%s\\cache", g_clientDataDirectory);
    if (RegOpenKeyExA(HKEY_CURRENT_USER, "Software\\SAMP", 0, KEY_READ, &key) == ERROR_SUCCESS)
    {
        if (RegQueryValueExA(key, "model_cache", 0, &type, configured, &length) == ERROR_SUCCESS)
            strncpy(g_clientCacheDirectory, (const char*)configured, 261);
    }
    // Native does not close key and does not validate value type or copied termination.
    if (!GameFileExists(g_clientCacheDirectory))
        CreateDirectoryA(g_clientCacheDirectory, 0);
    char local[268];
    sprintf(local, "%s\\local", g_clientCacheDirectory);
    if (!GameFileExists(local))
        CreateDirectoryA(local, 0);
}

// 0x000c5340
// Official: FUN_100c5340 @ 0x100c5340 (samp.dll)
void ClientInitializePaths()
{
    memset(g_clientDataDirectory, 0, 261);
    const char* documents = (const char*)0xc92368; // GTA SA virtual address.
    if (!strlen(documents))
    {
        GetCurrentDirectoryA(261, g_clientDataDirectory);
        return;
    }
    sprintf(g_clientDataDirectory, "%s\\SAMP", documents);
    if (!GameFileExists(g_clientDataDirectory))
        CreateDirectoryA(g_clientDataDirectory, 0);
    char screens[264];
    sprintf(screens, "%s\\screens", g_clientDataDirectory);
    if (!GameFileExists(screens))
        CreateDirectoryA(screens, 0);
    ClientInitializeCacheDirectory();
}
