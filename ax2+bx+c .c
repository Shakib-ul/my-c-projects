// Solve the equation: ax^2 + bx + c = 0

#include<stdio.h>
#include<math.h>

int main()
{
 int a, b, c, d;
 float e, f, x1, x2;
 
 printf("Enter a, b and c value: ");
 scanf("%d %d %d", &a, &b, &c);
 
 d = b*b-4*a*c;  // discriminant
 
 if (d<0) {
  e = (float) -b/(2*a);  // real part
  f = sqrt(-d)/(2*a);  // imaginary part
  
  printf("The values of x are complex:\n%.2f + %.2fi, %.2f - %.2fi", e,f,e,f);
 }
 
 else {
  x1 = (-b+sqrt(d))/(2*a);
  x2 = (-b-sqrt(d))/(2*a);
 
  printf("The values of x are: %.2f, %.2f", x1, x2);
 }
 
 return 0;
}