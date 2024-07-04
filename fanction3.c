#include<stdio.h>
void sqr()
{
    int len,area;
     printf("Enter length of square:");
     scanf("%d",&len);
    area=len*len;
    printf("Area of square=%d\n",area);


}
int sqr1()
{
    int len,area;
    printf("Enter length of square:");
    scanf("%d",&len);
    area=len*len;
    return area;
    
}
int main()
{
    sqr();
    printf("%d",sqr1());
    return 0;
}
