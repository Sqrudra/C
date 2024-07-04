#include<stdio.h>
int main()
{
	int i,j,x=65;
	for(i=0;i<5;i++)
	{
	for(j=0;j<=i;j++)
	{
		if(i%2==0)
		{
	printf("%c\t",x);
	}
	else
	{
		printf("%c\t",x+32);
	}x++;
	}
	printf("\n");
	}
return 0;
}