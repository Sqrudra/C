#include<stdio.h>
int main()
{
int i=1;
while(i<=25)
	{	
		int j=i;
		while(j<=i+4)
			{
				printf("%d\t",j);
				j++;
			}i+=5;
		printf("\n");
	}

return 0;
}