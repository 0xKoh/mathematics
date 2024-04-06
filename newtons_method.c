#include "utils.h"

double newtons_method(double x, double target)
{
    while (x * x >= target)
    {
        x -= (x * x - target) / (2 * x);
    }
    return (x);
}

int main(void)
{
    printf("%f", newtons_method(82, 89));
    return (0);
}
