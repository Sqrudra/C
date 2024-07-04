#include<stdio.h>
int main()
{
	 int i,j=0;
	 for(i=65;i<=90;i+=4)
	 {
	 printf("%c\n",i);
	 j=i+34;
	 if (j<122)
	 {
	 printf("%c\n",j);
	 }
	 }
return 0;
}