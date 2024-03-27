#include "shared.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief print a message
 * @param msg Message to print
 * @return The length of the message
 */
int shared_lib_function(char *msg)
{
    printf("Im the dynamic lib and I received the following message: %s\n", msg);
    return strlen(msg);
}
