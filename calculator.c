#include<stdio.h>
int main()
{
int ch;
float fn,sn,result;
printf("select option from 1-4:");
printf("\n1.addition");
printf("\n2.subtraction");
printf("\n3.divison");
printf("\n4.multiplication");
printf("\nenter your choise:");
scanf("%d",&ch);
switch(ch)
{
 case 1:
printf("\nenter two numbers:");
scanf("%f%f",&fn,&sn);
result=fn+sn;
printf("sum=%.2f",result);
break;

case 2:
printf("enter two numbers:");
scanf("%f%f",&fn,&sn);
result=fn-sn;
printf("difference=%.2f",result);
break;

case 3:
printf("enter two numbers:");
scanf("%f%f",&fn,&sn);
result=fn/sn;
printf("division=%.2f",result);
break;

case 4:
printf("enter two numbers:");
scanf("%f%f",&fn,&sn);
result=fn*sn;
printf("product=%.2f",result);
break;

default:
printf("\ninvalid option");
}
return 0;
}
