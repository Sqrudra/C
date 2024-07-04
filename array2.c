#include<stdio.h>
int main()
{
	int i,j,student[3],sub[5],total=0,grade;
	float per;
	for(i=0;i<3;i++)
	{
			total=0;
			
			printf("Enter marks of student%d:\n",i+1);
			
			for(j=0;j<5;j++)
			{
				printf("subject %d:",j+1);
				
				scanf("%d",&sub[j]);
				
				total+=sub[j];

			
			}
			
	
		
				per=total/5.0;
				printf("Your total is:%d\n",total);
				printf("Your percentage is:%f\n",per);
				if(per>75)
				
				{
					printf("Your grade is:A\n");
				}else 	if(per>60)
				
				{
					printf("Your grade is:B\n");
				}else 	if(per>45)
				
				{
					printf("Your grade is:c\n");
				}else 	if(per<=45||per>=35)
				
				{
					printf("Your grade is:d\n");
				}else 	if(per<35)
				
				{
					printf("You are fail.\n");
				}
			
			
	}		
	
	return 0;
}