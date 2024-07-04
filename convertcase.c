#include<stdio.h>
int main()
{
char character;
printf("Enter alphabet :");
scanf("%c",&character);
if(character>=97&&character<=122)
{
	
	printf("%c",character-32);
}
else
{

	printf("%c",character+32);
}

return 0;
}