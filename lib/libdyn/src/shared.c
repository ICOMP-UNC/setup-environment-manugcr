#include "shared.h"
#include <stdio.h>
#include <string.h>

int shared_lib_function(char* msg)
{
    printf("Im the dynamic lib and I received the following message: %s\n", msg);
    return strlen(msg);
}
