// Recursive Functions part 1, introduction

// Call by values for all data types in C
// int , char , float
//>> CHANGES MADE TO THE PARAMETERS PASSEDDO NOT GET REFLECTED IN THE CALLER.
//>> swap function for intgers does nt work!
//>> we need pointers to write a correct swap function.

// arrays.
//>> Recall: array name is address of the first array location.
//>> Modification made to array elements inside the function are reflected in the caller.
//>> string modification functions rely on this.

// Global vs local variable.
//>> Global variable
//>>>> Lifetime: complete program.
//>>>> Scope: Anywhere in the program including all functions unless masked by a local variable of the same name.
int g = 10;
int fun(int x ){
  int g = 20;
  printf("%d\n",g);
}
//>> Local variable:
//>>>> Lifetime and scope:
//     Block or function.
char* mycopy(char input[]){
  char str[100];
  // code to copy
  // input to str
  return str;
}
//>>>> this is incorrect.
//>>>> str is local to mycopy.
//>>>> its address should
//>>>> not be passed.

// Static variable
//>> A variable can be defined as static. For example: static int x;
//>>>> Such a variable is creaed once at the beginning of the program, even if it is defined inside a function.
//>>>> The variable is initialized only at the beginning of the program.
//>>>> Lifetime of the static variable is not accesible outside the function in which it is defined.

// Static variable
#include "stdio.h"
void DoSomething(){
  static int x = 5;
  {
    static int y = 6;
    x++;
    y++;
    printf("x=%d = y%d\n",x,y);
  }
}
int main (){
  int i;
  for (i=1;i<10;i++){
    DoSomething();
  }
}

// Recursion
//>>>> The function knows how to solve the simplest case. This is also called the base case.
//>>>> If the function is invoked using a complex case, it breaks the input into
//>>>>>> a part that the function knows how to do.
//>>>>>> a part that it does not lnow how to do.
//>>>> for (ii) it again invokes th same function - this step is called the recursive step.

// Factorial 
//>> Mathematical formulation
//  f(n) = n*f(n-1) if n>1
//       = 1        otherwise

int fact(int n ){
  if(1==n){
    return 1 ;
  }
  else{
    return (n* fact(n-1));
  }
}

// Multiplication using repeated addition 
// Mathematical formulation.
//Assume x,y are positive intgers.
// f(x,y) = y+ f(x-1,y)  if x > 1
//        = y            otherwise.
int mult(intx,inty){
  if(x==1){
    return 1;
  }
  else{
    return (y + mult(x-1,y))
  }
}

int mult(intx,inty){
  if(x==1){
    return y;            // notice the change from previous pseudo code
  }     
  else{
    return (y + mult(x-1,y))
  }
}

// Length of a string : recursively
// Base case: if str[0] == 0 return 0;
// Else add 1 to the length of string starting at str + 1
int reclen(char str[]){
  if(str[0]==0){
    return 0 ;
  }
  else{
    return (1 + reclen(str+1));
  }
}
// note the usage of str + 1.
// why is accessing str + 1 valid?
// we know that str[0] =!=0, hence we will find at least one more character after str[0]

// Palindrome
// Conceptual formulization
// Assume inputs are a string str , start index , end index end.
// Assume start <= end.
//>>>> base case 1: if the str is of length 1 it is a palindrome.
//>>>> base case 2: if str is of length 2 and str[start] == str [end],it is a palindrome.
//>>>> Recursive step: if str[start] == str[end] and 
//     str[start+1,end-1] is a palindrome, then str is a palindrome

// Counting Digits of  non-negative intger
//>>>> Base case: if n==0 return ______
//>>>> Recursive step: return 1 + number of digits in n\10
//>>>> if return value is 0, then answer is incorrect for n = 0
//>>>> if return value is 1, then answer is incorrect for n = 123
int digits(int n ){
  if (n/10 == 0) return 1;
  else return 1 + digits(n/10);
}
