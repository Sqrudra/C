#include<stdio.h>
int main()
{
    char str1[50];
    char str2[50];
    char str3[100];
    int i,j;
    printf("Enter string1:");
    gets(str1);
    printf("Enter string2:");
    gets(str2);
    for(  i=0;str1[i]!='\0';i++)
    {  
       str3[i]=str1[i];
    }
    for(j=0;str2[j]!='\0';j++)
    {
          str3[i]=str1[j];
        i++;
    }
    str3[i]='\0';
    puts(str3);
return 0;
}