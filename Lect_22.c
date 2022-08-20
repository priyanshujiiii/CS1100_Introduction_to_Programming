/ swap function: 

#include<stdio.h>
void swap(int a , int b){
  int temp = a;
  a = b;
  b = temp;
  return ;
}
void main(){
  int x = 20;
  int y = 40;
  swap (x,y);
  printf("x=%d;y=%d\n",x,y);
}
// what is the input of the program ?
// what is the output if we print a and binside the function swap ? (at the end of the function)
// variables are passed are passed by value in c always?

// Take - away : this is an incorrect swap program.
// How do we wrie a correct swap program?
