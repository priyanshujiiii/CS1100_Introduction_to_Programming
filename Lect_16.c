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

// Evaluating each term separately  
//n additions.
// n + (n-1) + (n-2)..............

#include<stdio.h>
#include<math.h>

main(){
  int x,n,i;
  int coeff[20];// maximum degrww = 20
  int value = 0;
  int factor = 1;
  
  scanf("%d %d",&n,&x);
  
  for (i=0;i<=n;i++){
    scanf("%d",&coeff[i]);
    value = value + oeff [i] *factor;
    factor = factor *x;
  }
  printf("%d\n",value);
}

// evaluating polynomial using hormer rule.

#include<stdio.h>
#include<math.h>

main(){
  int x,n,i;
  int coeff[20];// maximum degrww = 20
  int value = 0;
  
  scanf("%d %d",&n,&x);
  
  for (i=0;i<=n;i++){
    scanf("%d",&coeff[i]);
  }
  
  //
  printf("%d\n",value);
}
//

#include<stdio.h>

main(){
  int x,n,i;
  int coeff[20]; // maximum degree = 20
  int value;
  
  scanf("%d %d",&n,&x);
  
  for (i=0;i<=n;i++){
    scanf("%d",&coeff[i]);
  }
  value = coeff[n];
  for (i=(n-1);i>=0;i--){
    // fill in this line
  }
  printf("%d\n",value);
}

// lEARNING FROM THE EXERCISE
// THE FIRST ATTEMPT SOLUTION ALTOUGH CORRECT CAN BE IMPROVED.
// NUMBER OF MULTIPLCATION : N^2---> 2N --> N
// REQUIRES THOUGHT BEFORE CODING


// Searching and sorting
