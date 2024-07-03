//prime number
#include<stdio.h>
void main()
{
    int isprime=1,b,a;
    printf("enter any value ");
    scanf("\n %d",&b);
    for(a=2;a<=b;a++)
    {
      if(b%a==0)
      {
          isprime =0;
          break;
      }
    }

    if(isprime)
    {
         printf("\n it is prime %d",b);
    }
    else
    {
        printf("\n it is not prime %d",b);
    }



}
