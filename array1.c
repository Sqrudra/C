#include<stdio.h>
int main()
{
	int arr[5],i;
	
	for( i=0;i<5;i++)
	{
		printf("Enter element of position %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Element of position %d is %d.\n",i,arr[i]);
	}
return 0;
}