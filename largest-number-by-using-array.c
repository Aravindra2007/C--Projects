#include<stdio.h>
void main()
{
    int arr[] = {35,45,23,56,123};

    printf("\n array values are \n");
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    printf("\n");


    int max =arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]>max);
        {
            max = arr[i];
        }
    }

    printf("\n largest element in array %d ",max);
}
