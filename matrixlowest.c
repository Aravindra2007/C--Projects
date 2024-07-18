#include<stdio.h>
void main()
{
    int i,j;
    int matrix1[3][3];
     printf("\n enter matrix1 values (3*3) \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        scanf("%d",&matrix1[i][j]);

    }
    printf("\n");
    }

     printf("%d ",matrix1[i][j]);
}
