#pragma once
#define ADD_WAITER 1
#define REMOVE_WAITER 2
#include "includeAll.h"

typedef unsigned char BYTE;

void            checkAllocaiton(void* ptr);
void            optionChoosing(int* option, char* waiterFileName);
        