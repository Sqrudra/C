#include<stdio.h>
int main()
{
int a;
printf("Enter your salary:");
scanf("%d", &a);
if(a<5000)
{
	printf("Your gross salary is :%d",a+=a*28/100);
} else if(5000<=a<10000)
{
	printf("Your gross salary is :%d",a+=a*42/100);
	}
	else if(10000<=a<15000)
{
	printf("Your gross salary is :%d",a+=a*55/100);
	}else if(a>=15000)
{
	printf("Your gross salary is :%d",a+=a*70/100);
	}else{}
	return 0;
	}