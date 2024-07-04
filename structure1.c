#include<stdio.h>
struct student
{
    int adNum;
    char name[50];
    int marks[3];
};

int main()
{
    int i;
    struct student obj[3];
    for( i=0;i<3;i++)
    {
        obj[i].adNum=i+1;
        scanf("%s",&obj[i].name);
        for(int j=0;j<3;j++)
        {
            printf("Enter the marks : ");
            scanf("%d",&obj[i].marks[j]);

        }
        
        printf("Admission number :%d\n",obj[i].adNum);
        printf("Student's name is : %s\n",obj[i].name);
        for(int k=0;k<3;k++)
        {
            printf("%d\n",obj[i].marks[k]);
        }
    }
    
    

    return 0;
}