#include<stdio.h>
void main()
{
    int i,j;
int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int matrix2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
int resultmatrix[3][3];


for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
        {
          resultmatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
}

    printf("\n enter matrix1 values (3*3) \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n enter matrix2 values (3*3) \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n sum of two matrix is (3*3) \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {

            printf("%d",resultmatrix[i][j] );
        }
        printf("\n");
    }
}
