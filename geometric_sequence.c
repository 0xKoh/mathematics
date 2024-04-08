#include "utils.h"

// S - Sr = a - ar^n
// S(1 - r) = a(1 - r^n)
// S = a(1 - r^n)/(1 - r)
int partial_sum(int first_term, int common_ratio, int n)
{
    return ((first_term - first_term * power(common_ratio, n)) / (1 - common_ratio));
}

int main(void)
{
    printf("%d\n", partial_sum(1, 2, 10));
    return (0);
}
