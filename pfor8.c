#include<stdio.h>
int main()
{
	int i,j,x=65;
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++,x++)
	{
		printf("%c\t",x);
	}
	printf("\n");
	}
return 0;
}