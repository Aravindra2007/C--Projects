#include<stdio.h>
void main ()
{
    int numbers[100],i,j,sum=0,number;

    printf("\n enter the array  value [0] %d ",numbers[0]);
    printf("\n enter the array value  [1] %d ",numbers[1]);
    printf("\n enter the array value  [2] %d ",numbers[1]);
    printf("\n enter the array value  [3] %d ",numbers[3]);
    printf("\n enter the array value  [4] %d ",numbers[4]);
    printf("\n enter the array value  [5] %d ",numbers[5]);
    printf("\n enter how many numbers u want ");
    scanf("%d",&number);
    for (i=0;i<number;i++)
    {
        printf("\n you have given [%d] ",i++);
    }

    for(j=0;j<number;j++)
    {
        printf("\n enter [%d] values ",j);
        scanf("%d",&numbers[j]);

        sum+=numbers[j];
        printf("\n sum is %d ",sum);
    }

}
