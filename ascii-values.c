#include<stdio.h>
void main ()
{
    int i;
    printf("\n asccii valuies are ");
    for(i=32;i<=126;i++)
    {
        printf("%3d %c",i,(char)i);
        printf("\n");
    }

}

