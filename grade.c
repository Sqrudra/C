#include<stdio.h>
int main()
{
	int hin;
	int eng;
	int guj;
	printf("Enter your marks\nHindi\tEnglish\tGujarati");
	scanf("\n%d\t%d\t%d",&hin,&eng,&guj);
	int total;
	int per;
	total=hin+eng+guj;
	per=total/3;
	if(per>75)
	{
		printf("Your grade is A.");
	}else if(60<per<=75)
	{
		printf("Your grade is B.");
	}else if(45<per<=60)
	{
		printf("Your grade is C.");
	}else if(35<=per<=45)
	{
		printf("Your grade is D.");
	}else if(per<35)
	{
		printf("You are fail.");
	}else {}
return 0;
}