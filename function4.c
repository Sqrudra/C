#include<stdio.h>
void p1(int a,int b)
{
    int i,j;
    for(i=a;i<=b;i++)
    {
        for(j=a;j<=i;j++)
        {
        printf("%d\t",j);
        }
        printf("\n");
    }
}
int p2(int c,int d)
{
     int i,j;
    for(i=c;i<=d;i++)
    {
        for(j=c;j<=i;j++)
        {
        printf("%c\t",j);
        }
        printf("\n");
    }
    return j;

}
int main()
{ 
    int a,b,c,d;
    printf("Enter value of a :");
    scanf("%d",&a);
     printf("Enter value of b :");
    scanf("%d",&b);
     printf("Enter value of c :");
    scanf("%d",&c);
     printf("Enter value of d :");
    scanf("%d",&d);
 p1(a,b);
 p2(c,d);
    return 0;
}