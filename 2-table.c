#include<stdio.h>
void main()
{
    int i,j,table,end;
    printf("\n enter many tables u want ");
    scanf("%d",&table);

    for(i=1;i<=table;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d",i,j,i*j);
            printf("");
        }
        printf("\n");
    }
}
