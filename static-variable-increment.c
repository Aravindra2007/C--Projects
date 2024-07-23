#include<stdio.h>
void increment()
{
    static a ;
    ++a;

    printf("\n number is %d ",a);
}
int main()
{
    increment();
    increment();
    increment();
    increment();
    return 0;
}
