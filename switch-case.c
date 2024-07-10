//
#include<stdio.h>
void main()
{
    int  option,a,b,c;

    printf("\n Choose any option ");
    printf("\n 1. Addition ");
    printf("\n 2.substraction");
    printf("\n 3.multiplication");
    printf("\n 4.divison");

    printf("\n\n\n\n enter any age  ");
    scanf("%d",&option);



    switch(option)
    {
    case 1:
        printf("\n\n addition ");
        printf("\n Enter a vlaue");
        scanf("%d",&a);
        printf("\n Enter B vlaue");
        scanf("%d",&b);
        c=a+b;
        printf("\n The sum of three values are %d ",c);
        break;
    case 2:
        printf("\n\n substracion");
        printf("\n\ enter  a value  ");
        scanf("%d",&a);
        printf("\n\n enter b value");
        scanf("%d",&b);
        c=a-b;
        printf("\n the substraction value is %d",c);
        break;
    case 3:
        printf("\n\n multiplication ");
        printf("\n\ enter  a value  ");
        scanf("%d",&a);
        printf("\n\n enter b value");
        scanf("%d",&b);
        c=a*b;
        printf("\n multiplication value is %d",c);
        break;
    case 4:
        printf("\n\n divison ");
        printf("\n\ enter  a value  ");
        scanf("%d",&a);
        printf("\n\n enter b value");
        scanf("%d",&b);
        c=a/b;
        printf("\n\n divison is %d",c);
        break;
    default:
        printf("\n\n\n dont have");
        break;
    }
}
