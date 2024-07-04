#include<stdio.h>
int main()
{
    char str[50];
    int i;
    printf("Enter String:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {}
    for( str[i]='\0';i>=0;i--)
    {
        printf("%c",str[i]);
    }

return 0;
}