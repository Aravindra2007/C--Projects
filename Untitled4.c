#include<stdio.h>
void main ()
{
int a,b,multiplication=1;
printf("which number u want to multply ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
  multiplication*=a;
}
printf("\n the sum of 1st n natural numbers are %d" );
}
