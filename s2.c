#include<stdio.h>
int main()
{
int i,n;
printf("Enter number:");
scanf("%d",&n);
printf("1\n");
for(i=1;i<=n;i)
{
	i*=2;
if(i<=n)
{	
	printf("%d\n",i);
}
}
return 0;
}