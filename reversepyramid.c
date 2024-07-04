#include<stdio.h>
int main()
{
int i,j,m=1,n;
printf("Enter number of line :");
scanf("%d",&n);

for(i=n;i>=1;i--)
{
for(j=m;j>=1;j--)
{
printf(" ");
}
for( int k=i;k>=1;k--)
{
printf("* ");
}m++;
printf("\n");
}
return 0;
}