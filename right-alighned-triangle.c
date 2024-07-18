#include<stdio.h>
void main()
{
    int i,j;
    int size = 5;
    for(i = 1; i <= size; i++)
    {
        for(j = 1; j <= size - i; j++)
        {
            printf("  ");
        }
        for(j = 1; j <= i; j++)
        {
        printf("* ");
        }
        printf("\n");
    }

}

