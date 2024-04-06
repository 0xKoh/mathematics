#include "utils.h"

int count_prime(int max)
{
    bool is_prime;
    int i;
    int j;
    int count;

    i = 2;
    count = 0;
    while (i <= max)
    {
        is_prime = true;
        j = 2;
        while (i / j >= j)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break ;
            }
            j++;
        }
        if (is_prime)
            count += 1;
        i++;
    }
    return (count);
}

int main(void)
{
    printf("%d", count_prime(10));
    return (0);
}
