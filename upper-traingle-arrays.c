#include<stdio.h>
void main ()
{
    int i,j;
    int size=5;

    printf("\n upper trainle is \n");
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=size;j++)
        {
            if(j>i)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
