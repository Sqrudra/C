#include<stdio.h>
int main()
{
int i,n;
printf("Enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(i*i<=n)
	{
printf("%d\n",i*i);
	}
}

return 0;
}