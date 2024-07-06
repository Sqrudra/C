#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==7)
        {
            goto next;
        }
        printf("%d\t",i);
    }
   next:
    for(int j=1;j<=10;j++)
    {
        printf("%d\t",j);
    }
    return 0;
}