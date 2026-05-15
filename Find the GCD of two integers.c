// Find the GCD of two numbers.

#include<stdio.h>

int main()
{
 int num1, num2, i;
 
 printf("Enter two integers: ");
 scanf("%d %d", &num1, &num2);
 
 // If any number is negative:
 num1 = (num1>=0)?  num1 : -num1;
 num2 = (num2>=0)?  num2 : -num2;
 
 // If any number is zero:
 if(num1==0 && num2==0) 
 { printf("GCD = Undefined!"); 
   return 0; 
 }
 else if(num1==0) { i=num2; }
 else if(num2==0) { i=num1; }
 
 // If both numbers are positive:
 else if(num1>num2) { i=num2; }
 else if(num2>num1) { i=num1; }
 else { i=num1; }

 for(i; i>=1; i=i-1)
 {
   if((num1%i==0) && (num2%i==0))
   { printf("GCD = %d", i);
      break; 
   }
 }

 return 0;
}