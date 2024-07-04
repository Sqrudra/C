#include<stdio.h>
int main()
{ 
int a=40;
int b=10;
int c=50;
 if (a>b&&a>c)
 { if (c>a&&c>b)
 {printf("C is big.");}
 else {printf("A is big.");}
 }
 else {if(b>a&&b>c)
 {printf("B is big.");
}
else{}
}
return 0;
}