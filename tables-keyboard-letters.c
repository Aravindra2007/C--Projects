#include<stdio.h>
//2*1=2
void main()
{
    //int i,j;
    int i,j,table,end;
    printf("\n enter which table you want");
    scanf("%d",&table);
    printf("enter how many numbers you want");
    scanf("%d",&end);

        for(i=table;i<=table;i++)

            for(j=1;j<=end;j++)
    {
        printf("%d * %d =%d",i,j,i*j);
        printf("\n");
    }
    printf("\n");
}
