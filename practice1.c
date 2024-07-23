#include<stdio.h>
void increment()
{
    static a;
    ++a;
}
int main()
{
for(int a=0;a<=5;a++)
{
    printf(" increment number is %d \n",a);
}
}

