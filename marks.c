#include<stdio.h>
void main()
{
 float tel,eng,hin,math,sci,soc,total,avg;
 printf(" enter the tel marks:");
 scanf("%f",&tel);
 printf(" enter the eng marks:");
 scanf("%f",&eng);
 printf(" enter the hin marks:");
 scanf("%f",&hin);
 printf(" enter math marks :");
 scanf("%f",&math);
 priintf(" enter the sci marks:");
 scanf("%f",&sci);
 printf(" enter the soc marks:");
 scanf("%f",&soc);

total=tel+eng+hin+math+sci+soc;

 avg=(tel+eng+hin+math+sci+soc)/6;

 printf(" the sum of all subject total=%f",total);

 printf(" the avg of all subjects avg=%f",avg);
}


