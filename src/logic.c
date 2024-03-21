#include "logic.h"

/**
 * @brief Add two numbers
 * @param a First number
 * @param b Second number
 * @return Sum of a and b
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * @brief Subtract two numbers
 * @param a First number
 * @param b Second number
 * @return Difference of a and b
 */
int subtract(int a, int b)
{
    return a - b;
}

/**
 * @brief Multiply two numbers
 * @param a First number
 * @param b Second number
 * @return Product of a and b
 */
int multiply(int a, int b)
{
    return a * b;
}

/**
 * @brief Divide two numbers
 * @param a First number
 * @param b Second number
 * @return Quotient of a and b
 */
double divide(int a, int b)
{
    if (b != 0)
        return (double) a / b;
    return -1.0;
}
