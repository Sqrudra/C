#include<stdio.h>
int main()
{
int income;
int tax;
printf("Enter your income :");
scanf("%d",&income);
if(income>=0&&income<=2500)
{
tax=income*0;
printf("Your tax amount is = Rs.%d",tax);
} else if(income>2500&&income<=5000)
{
tax=income*10/100;
printf("Your tax amount is = Rs.%d",tax);
} else if(income>5000&&income<=10000)
{
tax=income*20/100;
printf("Your tax amount is = Rs.%d",tax);
} else if(income>10000)
{
tax=income*30/100;
printf("Your tax amount is = Rs.%d",tax);
}  
return 0;
}