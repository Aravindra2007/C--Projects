#include<stdio.h>
int a=520;
void b()
{
    printf("\n number is %d ",a);

}
void main ()
{
    printf("\n number %d ",a);

    a=230;
    b();
    printf("\n modified number is %d ",a);
}
