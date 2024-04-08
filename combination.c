#include "utils.h"

// n! = 全ての順列, r! = 選んだ要素の順列, (n - r)! = 選択していない要素の順列。
int combination(int const n, int const r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int main(void)
{
    printf("%d\n", combination(6, 4));
    return (0);
}
