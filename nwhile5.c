#include<stdio.h>
int main()
{
int i=2;
while(i<=10)
	{	
		int j=1;
		while(j<=5)
			{
				printf("%d\t",i);
				j++;
			}i+=2;
		printf("\n");
	}

return 0;
}