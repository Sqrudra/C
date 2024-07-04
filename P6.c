#include<stdio.h>
int main()
{
int a;

    printf("Enter number :");
	scanf("%d",&a);
	if(a<2000||a>3000)
	printf("%d",a);
	else if(100<a&&a<500)
	{
	printf("%d",a);
	}else{
	printf("Enter valid number and try again.");
	}

return 0;
}
