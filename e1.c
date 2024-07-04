#include<stdio.h>
int main()
{
	int sec ,min,hour ;
		printf("Enter time in second:");
		scanf("%d",&sec);
			hour=sec/3600;
			min = sec%3600/60;
			sec=sec%3600%60;
				
		printf("%d:%d:%d",hour , min , sec);
		return 0;
}