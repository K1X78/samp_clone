#pragma once

// Preload production headers before substituting only this fixture's C
// allocation calls. The client DLL is compiled without these substitutions.
#include "net/gangzonepool.h"
#include "game/game.h"
#include "main.h"
#include <stdlib.h>
#include <string.h>

void* gangzone_test_malloc(size_t size);
void gangzone_test_free(void* pointer);
#define malloc gangzone_test_malloc
#define free gangzone_test_free
