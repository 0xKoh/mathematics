#include "utils.h"

double conv_or_divergence(double r)
{
    double limitvalue;

    limitvalue = r;
    for (int i = 0; i < 10; i++)
    {
        limitvalue *= r;
        printf("%lf\n", limitvalue);
    }
    return (limitvalue);
}

int main(void)
{
    // 絶対値が |r| < 1 であると convergence, |r| > 1 であると divergence.
    conv_or_divergence(1.000001);
    return (0);
}
