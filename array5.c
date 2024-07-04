#include<stdio.h>
int main()
{
	int i,n,total=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element of array of position %d :",i);
		scanf("%d",&arr[i]);
		
		total+=arr[i];
	}
	
	
	
	printf("sum of all element=%d\n",total);


	
	
	return 0;
	
}