#include<stdio.h>
int main()
{
 float unit;
 float bill;
 printf("Enter your electricity unit :");
 scanf("%f",&unit);
 if(unit<=100)
 {
 
 bill=unit*0.60+50;
   printf("your bill is = Rs.%.2f",bill);
   
 }else if(100<=unit&&unit<300)
 {
 bill=unit*0.80+50;
   printf("your bill is = Rs.%.2f",bill);
   
   } else 
   { 
bill=unit*0.9+50;
if(bill>300)
{
	printf("Your bill is = Rs.%.2f",bill+=bill*15/100);
}else{
   printf("Bill not found.");
   }
   }
   return 0;
   }