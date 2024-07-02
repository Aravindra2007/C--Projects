//write a c programme to print  a N natural numbers by using do while
# include<stdio.h>
int main()
{
 int i=1,j;
 printf("enter how numbers u want ");
 scanf("%d",&j);
do
{
printf("\n%d ",i);
i++;
}while(i<=j);
return 0;
}
