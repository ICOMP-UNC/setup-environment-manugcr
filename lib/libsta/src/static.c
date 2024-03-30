#include "static.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief print a message
 * @param msg Message to print
 * @return The length of the message
 */
int static_lib_function(char *msg)
{
    printf("Im the static lib and I received the following message: %s\n", msg);
    return strlen(msg);
}
