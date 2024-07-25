#include<stdio.h>
void main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr = &arr;

    for (int i=0;i<5;i++)
    {
        printf("%d",i,*(ptr+i));
        printf("\n");
    }

}
