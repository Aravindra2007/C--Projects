#include<stdio.h>
void main()
{
    int i,sum=0;
    int arr[] = {1,2,3,4,5};

    printf("\n array elements is ");
    for(i=0;i<5;i++)
    {
        printf("\n %d",arr[i]);
    }
    printf("\n");

    sum =0;
    for(i=0;i<5;i++)
    {
        sum +=arr[i];
    }

        printf("\n sum value is %d ",sum);

}
