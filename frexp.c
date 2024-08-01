#include<stdio.h>
#include<math.h>
void main ()
{
    double value = 25.00;
    int exponent;
    double significand = frexp(value,&exponent);
    printf("\n significand is %.2lf  is %.2lf and the exponent %.2lf ",value,significand,exponent);

}
