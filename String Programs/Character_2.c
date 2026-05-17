// Take a character as input and display it as output.

#include<stdio.h>

int main()
{
 char ch;
 
 printf("Enter a character: ");
 ch = getchar();
 
 printf("You entered: ");
 putchar(ch);
 
 return 0;
}