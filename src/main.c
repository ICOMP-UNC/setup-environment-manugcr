#include <stdio.h>
#include <greetings.h>
#include "shared.h"
#include "static.h"

int main()
{
    printf("Hello, World!\n");
    greetings();

    printf("Calling shared lib: %d\n", shared_lib_function("Hello from main.c!"));
    printf("Calling static lib: %d\n", static_lib_function("Bye from main.c!"));

    return 0;
}