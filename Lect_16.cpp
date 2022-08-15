// Here are some real life problems that we may want to solve using computers.
// Given the marks obtained by students un a class, print a histogram.
// Evaluate a polynomial a0 + a1x +....
// Encrypt and decrypt messages


// Evaluating polynomial.
// n is the degree of a polynomial.
// user provides n coffecients.
// user provides the value of x at which polynomial has to be evaluated.
// evaluate the polynomial.

// code:

#include<stdio.h>
#include<math.h>

main(){
  int x,n,i;
  int coeff[20];// maximum degrww = 20
  int value = 0;
  
  scanf("%d %d",&n,&x);
  
  for (i=0;i<=n;i++){
    scanf("%d",&coeff[i]);
    value = value + oeff [i] * pow(x,i);
  }
  printf("%d\n",value);
}

  
