#include<stdio.h>
int main()
{
int i,n,a=1,b=4,c;
printf("Enter number :");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	printf("%d\n",a);
	c=(b-a)*4;
	a=b;
	b=c;
	
}
return 0;
}