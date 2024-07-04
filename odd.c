#include<stdio.h>
int main()
{
	int sum=0, i,n;
	printf("Enter number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2==1)
	{
	 sum+=i;
	}
	
	}
	printf("Sum of odd numbers =%d",sum);

return 0;
}