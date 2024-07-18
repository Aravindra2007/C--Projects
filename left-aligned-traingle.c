#include <stdio.h>

void main()
{

    int size = 5;

    printf("Left-aligned Triangle Pattern:\n");
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
