#include<stdio.h>
int main()
{
	int i,n,fac=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac*=i;
		
		
	}
	printf("factorial =%d",fac);

return 0;
}