// Check if a number is Prime

#include<stdio.h>

int main()
{
 int n,i;

 printf("Enter a number: ");
 scanf("%d", &n);

 if(n<2)
 { printf("This is not a prime number.");
   return 0;
 }
   
 for(i=2; i<n; i++)
 {if(n%i==0)
  { printf("This is not a prime number.");
   return 0;
  }
 }
 
 printf("This is a prime number.");
 return 0;
} 