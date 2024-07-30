#include<stdio.h>
int add(int,int);
void main()
{
    int a=23,b=45;
    int sum;

    sum = add(a,b);
    printf("\n sum of %d and %d is %d ",a,b,sum);
}

int add(int a,int b)
{
    return a+b;
}
