#include<stdio.h>
void main()
{
  int a,b,c;
    printf("\n\n enter A value");
    scanf("%d",&a);
    printf("\n\n enter B value");
    scanf("%d",&b);
    printf("\n\n enter c value");
    scanf("%d",&c);

     if(a>b && a>c)
        printf("\n\n A is big");
  else if(b>c && b>a)
   printf("\n\n B is big %d",b);
  else
  printf("\n\n c is big %d",c);


}
