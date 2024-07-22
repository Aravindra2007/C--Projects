#include<stdio.h>
void main()
{
    int i;

    for(i = 1;i <= 10;i++)
    {
        if(i == 6)
        {
            break ;
        }
        printf("%d ", i);
    }
    printf("\n outside the loop is %d", i);

}

