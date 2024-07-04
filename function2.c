#include<stdio.h>
void fac()
{
    int i,n,a=0,b=1,c;

    printf("Enter number:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      printf("%d\n",a);
      c=a+b;
      a=b;
      b=c;
      
      
    }
    printf("\n");
}
int fac1()
{
    
    int i,n,a=0,b=1,c;

      printf("Enter number:");
      scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      printf("%d\n",a);
      c=a+b;
      a=b;
      b=c;
    }
    return a;

}
int main()
{
    fac();
    fac1();
    return 0;
}