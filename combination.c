#include "utils.h"

int combination(int const n, int const r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int main(void)
{
    printf("%d\n", combination(6, 4));
    return (0);
}
