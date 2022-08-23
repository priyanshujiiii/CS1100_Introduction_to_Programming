//  Evaluating a polynomial, searching in an array

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

// Searching for an element
//  15 | 8 | 3 | 12 | 30 | 7 | 9 | 17 | 32 | 19
// Task :  Search for a key in the array.
int n ,key;
for (int i = 0; i < n; i++){
  if (A[i]==key){
    printf("Found %d at index %d\n",key , i);
    break;
  }
}
// A linar pass over the array.
// Can this be avoided?
  // no! if the input has no other assumptions.
  // yes! for example if input is sorted.

// Seraching for an element in a sorted array.
// 32 | 30 | 19 | 17 | 15 | 12 | 9 | 8 | 7 | 3
// task :  Search for a key in a sorted array.
// Binary search:
               // Check the middle element . If found break.
               // Else decide which part of the array is relevant and repeat.
// can be done since array is sorted!

