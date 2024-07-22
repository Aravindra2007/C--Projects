#include<stdio.h>
void main()
{
    float money=5000,intrest=2,time=10,onemonth,totalintrest,total;

    printf(" \n given money is %f \n",money);
    printf(" \n given intrest is %f \n",intrest);
    printf(" \n given time is %f \n",time);


    printf("\n one month intrest is ");
    onemonth=money*1*2/100;
    printf("%f",onemonth);
    printf("\n");

    printf("\n total intrest is ");
    totalintrest=money*intrest*time/100;
    printf("%f",totalintrest);
    printf("\n");

    printf("\n total amount is ");
    total=totalintrest+money;
    printf("%f",total);
    printf("\n");


}
