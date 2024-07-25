#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);

int main()
{
    int a,b;
    printf("\n enter two numbers \n");
    scanf("%d %d", &a, &b);

    int sum = add(a,b);
    printf("sum is %d \n",sum);

    int substr = sub(a,b);
    printf("substraction is  %d \n",substr);

    int multiplies = mul(a,b);
    printf("multiplication is %d \n",multiplies);

    return 0;
}

int add(int a,int b)
{
    return a+b;
}
int sub(int a ,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
