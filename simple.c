#include<stdio.h>

void main()
{
    float price,rate,time,toti,omi,total;
    printf("\n Enter price");
    scanf("%f",&price);

    printf("\n Enter Rate of Intreset");
    scanf("%f",&rate);


    printf("\n Enter Time");
    scanf("%f",&time);

   omi=(price*rate)/100;
   printf("\n The One Month Intreset is %f",omi);

   toti=omi*time;
   printf("\n total intrest %f ", toti);

   total=toti+price;
   printf("\n total amount is %f ", total);


}
