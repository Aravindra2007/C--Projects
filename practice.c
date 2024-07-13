#include<stdio.h>
void main()
{
    int i,j,option,c;
    printf("\n given options ");
    printf("\n 1.addition ");
    printf("\n 2.substraction ");
    printf("\n 3.multiplication ");

    printf("\n choose which option u want \n ");
    scanf("%d",&option);

    switch(option)
    {
    case 1:
        printf("\n enter i value ");
        scanf("%d",&i);
        printf("\n enter j value ");
        scanf("%d",&j);
        i+j;
        printf("\n sum is %d ",i+j);
        break;
    case 2:
        printf("\n enter i value ");
        scanf("%d",&i);
        printf("\n enter j value ");
        scanf("%d",&j);
        i-j;
        printf("\n substraction is %d ",i-j);
        break;
    case 3:
        printf("\n enter i value ");
        scanf("%d",&i);
        printf("\n enter j value ");
        scanf("%d",&j);
        c=i*j;
        printf("\n multiplication is %d ",c);
        break;
    }
}
