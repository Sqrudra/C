#include<stdio.h>
int main()
{
	char character,small,capital;	
  printf("Enter character :");
  scanf("%c",&character);
  small= (character=='a'||character=='e'||character=='i'||character=='o'||character=='u');
   capital =(character=='A'||character=='E'||character=='I'||character=='O'||character=='U');
  if(small||capital)
  {
   printf("This character is vowel.");
  }
  
  else{
  printf("This character is consonant.");
  }
return 0;
}