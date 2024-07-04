#include<stdio.h>
int main()
{
    int x,y,*a,*b;
    a=&x;
    b=&y;
    printf("Enter value of X :");
    scanf("%d",&x);
    printf("Enter value of Y :");
    scanf("%d",&y);
    printf("Before swapping value of X : %d\n",x);
    printf("Before swapping value of Y : %d\n",y);

    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
  
    printf("After swapping value of X : %d\n",x);
    printf("After swapping value of Y : %d",y);
    return 0;

}