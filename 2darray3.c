#include<stdio.h>
int main()
{
	int i,j,arr[3][3],ut=0,lt=0,d=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Enter element of position %d and %d : ",i,j);
				scanf("%d",&arr[i][j]);
				
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i<j)
				{
					ut+=arr[i][j];
				}else if(i==j)
				{
					d+=arr[i][j];
				}else
				{
						lt+=arr[i][j];
				}
				
				
			}
		}
		printf("sum of upper triangle element =%d\n",ut);
		printf("sum of digonal element =%d\n",d);
		printf("sum of lower triangle element =%d\n",lt);
return 0;
} 