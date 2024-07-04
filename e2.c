#include<stdio.h>
int main()
{
	int i,j,k,m=0;
	for(i=5;i>=1;i--)
	{
		for(j=m;j>0;j--)					//for printing space.
		{
			printf("\t");
		}
		for(k=i;k>=1;k--)					//for printing numbers.
		{
			printf("%d\t",k);
		}
		m++;								//for incrising space.
		printf("\n");
	}
return 0;
}