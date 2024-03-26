#include "shared.h"
#include "static.h"
#include <greetings.h>
#include <stdio.h>

int main()
{
    printf("---------------------------------------------\n");
    printf(" Hello, World! - OSII Lab0 Enviroment setup.\n");
    printf("---------------------------------------------\n\n");

    // Call the function from the include library
    greetings();
    printf("\n");

    // Call the function from the shared library
    printf("The lenght of the message is: %d\n", shared_lib_function("Hello from main.c!"));
    printf("\n");

    // Call the function from the static library
    printf("The lenght of the message is: %d\n", static_lib_function("Bye from main.c!"));
    printf("\n");

    return 0;
}
