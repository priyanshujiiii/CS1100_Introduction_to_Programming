// swap : last class
// does the program without temporary work for characters?
#include<stdio.h>
int main(){
  char x = 'x',y='y';
  printf("ascii code for x = %d\n",x);
  printf("ascii code for y = %d\n",y);
  
  x = x + y;
  y = x - y;
  x = x - y;
  
  printf("variable x conatins = %c\n",x);
  printf("variable y contains = %c\n",y);
}

// Typecasting: last class
// int-var = float = some-float value
#include<stdio.h>
int main(){
  int x;
  float y,z;
  y = x =10.234;
  printf("x = %d\n",x);
  printf("y = %f\n",y);
}

// task for today 
// task marks in a course based on input.

         
