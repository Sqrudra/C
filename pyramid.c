#include<stdio.h>
int main()
{
int i,j,n,m;
	printf("Enter number of lines :");
	scanf("%d",&n);
	m=n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=m-1;j++)
	{
		printf("  ");
		

	}
	for( int k=1;k<=i;k++)
	{
		
		printf("*   ");
		
	}	
		m--;
		printf("\n");
}


	return 0;
}