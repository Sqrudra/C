#include<stdio.h>
int main()
{
int n;
printf("Enter number :");
scanf("%d",&n);
 int i=-n;
while(i<=n)
{
printf("%d\n",i);
i++;
}
return 0;
}