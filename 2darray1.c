#include<stdio.h>
int main()
{
	int i,j,arr1[3][3],arr2[3][3],total=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Enter element of array1 of position %d and %d : ",i,j);
				scanf("%d",&arr1[i][j]);
				total+=arr1[i][j];
			}
			
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Enter element of array2 of position %d and %d : ",i,j);
				scanf("%d",&arr2[i][j]);
					total+=arr2[i][j];
			}
			
		}
			
			printf("Sum of all element of both array = %d ",total);
return 0;
}