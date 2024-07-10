#include<stdio.h>
void main ()
{
    int numbers[100],i,sum=0,t,number;


    //printf("\n the array value is %d",numbers[0]);
     //printf("\n the array value is %d",numbers[1]);
    //printf("\n the array value is %d",numbers[2]);
    //printf("\n the array value is %d",numbers[3]);
    //printf("\n the array value is %d",numbers[4]);
    printf("\n how many numbers u want ");
    scanf("%d",&number);
    for(i=0;i<=number;i++)
    {
        printf("\n you have given [%d]",i++);
    }


        for(t=0;t<=number;t++)
        {
         printf(" \n enter [%d] elemnet ",t);
         scanf("%d",&numbers[t]);

            sum+=numbers[t];
        }
         printf("\n sum value is %d",sum);




}

