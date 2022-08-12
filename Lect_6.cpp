//Take two intgers x and y from user.
// Exchange values in a and y. swap two intgers.
// Print the values of x and y.
// write a Cprogram to do the same
#include<stdio.h>
int main(){
  int x,y;
  printf("Enter x:");
  scanf("%d",&x);
  printf("Enter y:");
  scanf("%d",&y);
  
  
  printf("x=%d\n",x);
  printf("x=%d\n",y);
}
// Basic operators: +,-,*,/
// Modulus operator: %
// x%y: remainder when x is divided by y.
// assigment operator: = 
//operator precedence:
// first: parenthsized; inner-most to outer-most.
// second: *,/,%: left to right.
// third: +,-; left to right.

//increment and decrement operator

#include<stdio.h>
int main(){
  int x,y;
  int n = 10;
  
  x = n++;
  y = ++n;
  printf("x=%d\n",x);
  printf("y=%d\n",y);
  printf("n=%d\n",n);
}
// applicable to a variable only!
// useful for modifying loop indicies.
// try it for(x+y)++
// try it for character
// assigment operator = 
//form: variable-name = expression
// z = x+y (correct form)
// x+y = z (incorrect form)

// Assigment between different data types.
// what happens if you assign float to int and vice versa?
// multiple assigments.
// x = y = z = (a+b)
// evaluation happen right to left.
