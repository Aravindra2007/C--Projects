#include<stdio.h>
void main()
{
    int i,j;
    int matrix1[3][3],matrix2[3][3],resultmatrix[3][3];


    printf("\n enter matrix1 values (3*3) \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        scanf("%d",&matrix1[i][j]);
    }
    printf("\n");
    }
    printf("\n enter matrix2 value (3*3) \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

    {
    scanf("%d",&matrix2[i][j]);
    }
    printf("\n");
    }
    printf("\n sum of the two matrices \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; 0j < 3; j++)

    {
        resultmatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        printf("%d",resultmatrix[i][j]);
    }
    printf("\n");
    }
}
