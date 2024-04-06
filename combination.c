#include "utils.h"

int factorial(int x)
{
    int fac;

    fac = 1;
    while (0 < x)
        fac *= x--;
    return (fac);
}

int combination(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int main(void)
{
    printf("%d", combination(6, 4));
    return (0);
}
