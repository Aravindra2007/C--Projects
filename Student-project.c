#include<stdio.h>
void main()
{

float tel,math,eng,total,avg;
system("cls");
printf("\n\n enter tel marks ");
scanf("%f",&tel);
printf("\n\n enter math marks ");
scanf("%f",&math);
printf("\n\n enter eng marks ");
scanf("%f",&eng);

system("cls");
printf("\n\n ============================= ");
printf("\n\n given marks obtaind in all subjects ");
printf("\n\n ============================== \n\n");
printf("\n\n given tel marks :%f",tel);
printf("\n\n given math marks :%f",math);
printf("\n\n given eng marks :%f",eng);
printf("\n\n =============================");
printf("\n\n total marks obtaind in all subjects ");
printf("\n\n ==============================");

total=tel+math+eng;
printf("\n\n tel+math+eng :%f\n",total);
avg=total/3;
printf("\n\n total/3 :%f\n",avg);


//finding highest marks
printf("\n\n =============================");
printf("\n\n highest marks obtaind in all subjects ");
printf("\n\n ==============================");
if(tel>math && tel>eng)
    printf("\n\n telugu is  highest marks  :%f",tel);
else if (math>tel && math>eng)
    printf("\n\n maths is highest marks  :%f",math);
    else if (eng>tel  &&  eng>math)
        printf("\n\n eng is the highest marks :%f",eng);



//finding lowest marks
printf("\n\n =============================");
printf("\n\n lowest marks obtaind in all subjects ");
printf("\n\n ==============================");
if(tel<math  && tel<eng)
    printf("\n\n tel is  lowest marks  :%f",tel);
else if(math<tel && math<eng)
    printf("\n\n math is lowest marks :%f",math);
else if(eng<tel && eng<math)
    printf("\n\n eng is  lowest marks :%f",eng);



//failed subjects
printf("\n\n =============================");
printf("\n\n  failed subjects  in all subjects ");
printf("\n\n ==============================");
if(tel<35)
    printf("\n\n tel is failed  :%f",tel);
if(math<35)
    printf("\n\n math is failed :%f",math);
if(eng<35)
    printf("\n\n eng is failed :%f",eng);

 getch();

}
