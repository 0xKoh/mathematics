#include "utils.h"

int power(int const n, int pow)
{
    int result;

    result = 1;
    while (pow-- > 0)
        result *= n;
    return (result);
}

int factorial(int n)
{
    int result;

    result = 1;
    while (n > 1)
        result *= n--;
    return (result);
}

