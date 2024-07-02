//write a c programme to calucalute sum of digits of anumber
#include<stdio.h>
void main()
{
int i,sum=0,t;
printf(" \n\n enter any number ");
scanf("%d",&i);
do
{
t=i%10;
sum+=t;
i/=10;
}while(i!=0);
printf("\n%d",sum);
i++;

return 0;
}
