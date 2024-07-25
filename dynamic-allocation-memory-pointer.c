#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    int n;

    printf("\n enter number of elements ");
    scanf("%d",&n);

    ptr = (int *) malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("\n number allocation is failed ");
        return 1;
    }

     printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
    }

    printf("Elements entered:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", *(ptr + i));
    }

    free(ptr);
}
