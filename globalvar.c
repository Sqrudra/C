#include<stdio.h>
int phy,chem,maths,eng,com,total=0;
float per=0.0;
void total1()
{ 
    printf("Enter marks below\n");
    printf("Physics :");
    scanf("%d",&phy);
     printf("Chemistry :");
    scanf("%d",&chem);
     printf("Maths :");
    scanf("%d",&maths);
     printf("English :");
    scanf("%d",&eng);
     printf("Computer :");
    scanf("%d",&com);
    total=phy+chem+maths+eng+com;
    printf("Total marks = %d",total);
}
float per1()
{ 
    per=total/5;
    return per;
}
int main()
{ 
   
    total1();
    printf("\nYour percentage is = %.2f",per1());
    

    return 0;
}