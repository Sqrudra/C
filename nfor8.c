#include<stdio.h>
int main()
{
int i,j;
for(i=65;i<=85;i+=5)
{
for(j=i;j<=i+4;j++)
{
	printf("%c\t",j);
}
printf("\n");
}

return 0;
}