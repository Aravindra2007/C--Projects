#include<stdio.h>
void main()
{
int a,b,factorial=1;
printf("enter any value ");
scanf("%d",&b);
for(a=1;a<=b;a++)
{
    factorial *=a;
}
printf(" \n factorial value is %d",factorial);
}
