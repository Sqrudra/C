#include<stdio.h>
int main()
{
    FILE *ptr;
    char string[50];
    ptr=fopen("file.txt","a");
    gets(string);
    fprintf(ptr,"%s",string);

    ptr=fopen("file.txt","r");
    while(fscanf(ptr,"%s",string)!=EOF)
    {printf("%s\n",string);}
    fclose(ptr);




    return 0;
}