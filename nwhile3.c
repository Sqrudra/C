#include<stdio.h>
int main()
{
int i=5;
while(i>=1)
	{	
		int j=1;
		while(j<=5)
			{
				printf("%d\t",i);
				j++;
			}i--;
		printf("\n");
	}

return 0;
}