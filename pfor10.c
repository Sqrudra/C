#include<stdio.h>
int main()
{
	int i,j,x=1;
	for(i=0;i<=4;i++)
	{
	for(j=0;j<=i;j++)
	{
		if((i+j)%2==0)
		{
		printf("1");
		}else
		{
			printf("0");
		}
	}
		printf("\n");
	}
	


return 0;
}