#include <stdio.h>
#include <math.h>

int main()
{
    double significand = 0.7675;
    int exponent = 4;
    double result = ldexp(significand, exponent);

    printf("The value of %.4f * 2^%d is %.2f\n", significand, exponent, result);

    return 0;
}
