//write a c programe to print a factorial number
#include<stdio.h>
void main()
{
int a,n,factorial=1;
printf("enter any value ");
scanf("\n %d",&n);
for(a=1;a<=n;a++)
{
factorial *=a;
}
printf("factorial value %d is : %d \n ",factorial);
}
