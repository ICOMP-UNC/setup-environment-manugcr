#include "static.h"
#include <stdio.h>
#include <string.h>

int static_lib_function(char* msg)
{
    printf("Im the static lib and I received the following message: %s\n", msg);
    return strlen(msg);
}
