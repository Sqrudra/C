#include<stdio.h>
void fact()
{
    int dollar,rupees;
    printf("Enter Dollar :");
    scanf("%d",&dollar);
    rupees=dollar*80;
    printf("Rupees=%d\n",rupees);
    
    
}
int fact1()
{
    int dollar,rupees;
    printf("Enter Dollar :");
    scanf("%d",&dollar);
    rupees=dollar*80;
    
    return rupees;
}
int main()
{
    fact();
    printf("Rupees=%d",fact1());
    return 0;
    
    
}