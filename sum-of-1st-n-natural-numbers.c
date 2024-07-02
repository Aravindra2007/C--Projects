//write a c programe to print 1st sum of the n natural numbers
#include<stdio.h>
void main()
{
        int i,n,sum=1;
        printf("\n enter how many numbers you to sum :");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum*=i;
        }
        printf("\n the sum of 1st n natural numbers are %d",sum);
    }





