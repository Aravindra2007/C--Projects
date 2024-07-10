#include<stdio.h>
void main ()
{
    int option,num, factorial, i, reversedNum = 0, remainder, originalNum;
    printf(" choose which option you want ");
    printf("\n 1.poline drome ");
    printf("\n 2.factorial ");
    printf("\n 3.evennumber ");

    printf("\n\n enter any option ");
    scanf("%d",&option);

    switch(option)
    {
    case 1:
         printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
    {
        printf("%d is a palindrome.\n", originalNum);
    } else
    {
        printf("%d is not a palindrome.\n", originalNum);
    }
    break;
    case 2:
        printf("enter which factorial u want \n ");
        scanf("%d",&num);
        for(i<=num;i==1;i++)
        {
          factorial *=i;
        }
        printf("factorial is %d \n ",factorial);
        break;
    case 3:
        printf("enter any number \n ");
        scanf("%d",&num);
        if(num%2 == 0)
            printf("the number is even \n %d ",num);
        else
            printf(" the nuber is odd \n %d ",num);
            break;
            default:
                printf("\n this option is non of your business \n\n ");
    }

}
