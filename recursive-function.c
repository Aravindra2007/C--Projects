#include<stdio.h>
int factorial(int);
int  main()
{
    int number = 5;

    int result;
    result = factorial(number);
    printf("%d",result);

    return 0;

}
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

