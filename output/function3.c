#include<stdio.h>
void interest(int a,float b,int c)
{
    float interest=0;
   
     interest=a*b*c/100;
    printf("Your interest is = %.2f\n",interest);
}
float interest1(int a,float b,int c)
{
    float interest=0;

     interest=a*b*c/100;
    return interest;
}
int main()
{
    float interest2;
    int a,c;
    float b;
    printf("Enter principle amount :");
    scanf("%d",&a);
    printf("Enter rate of interest :");
     scanf("%f",&b);
    printf("Enter time in month :");
     scanf("%d",&c);
    interest(a,b,c);
    interest2=interest1(a,b,c);
    printf("Your interest is = %.2f",interest2);


return 0;
}