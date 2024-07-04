#include<stdio.h>
int main()
{
	int i,n,oddsum=0,evensum=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element of array of position %d :",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	
		if(arr[i]%2==0)
		{
		evensum+=arr[i];
		
		}
	
		else
		{
			oddsum+=arr[i];
		}
		
	}
	
	
	printf("Sum of even element=%d\n",evensum);
	printf("Sum of odd  element=%d",oddsum);

	
	
	return 0;
	
}