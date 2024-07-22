#include<stdio.h>
void main()
{
    int i ;


    for(i=1;i<=10;i++)
    {
        if(i == 6)
        {
            continue;
        }
        printf("\n %d ", i);
    }
    printf("\n outside loop %d ", i);
}

