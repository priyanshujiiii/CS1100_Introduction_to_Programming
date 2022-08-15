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

// desired behavior input to marks mapping
// input :  a single charcter - one W,A,B
// OUTPUT: A MESSAGE BASED ON THE Rules below.
// W: low attendance.
// A: Marks between 90-100
// B; marks batween 80-90
// any other : invalid input
// double selection : if - else construct
// decide to execute a aprt of the program based on a condition is true and some other part if condition false.
// syntax:
// if(test condition){body of if}
// else{body of else}

// input :  a single charcter - one W,A,B
// OUTPUT: A MESSAGE BASED ON THE Rules below.
// W: low attendance.
// A: Marks between 90-100
// B; marks batween 80-90
// any other : invalid input
// if (input=='w' or input == 'a' or input ==  'b'){ do something}
// else {//output error message}
#include<stdio.h>
int main(){
  char input; 
  printf("input a character:\t");
  scanf("%c",&input);
  if (input == 'w'){
    printf("attendance in below 85%%\n");
  }
  if (input == 'A'){
    printf("marks between 90-100");
  }
  if (input == 'w'){
    printf("marks between 80-90");
  }
  else{
    printf("invalid character, enter one of w,a,b\n");
  }
}
// alternative way
#include<stdio.h>
int main(){
  char input; 
  printf("input a character:\t");
  scanf("%c",&input);
  if (input == 'w' || input == 'a' || input == 'b'){
    if (input == 'w'){
      printf("attendance in below 85%%\n");
  }
    if (input == 'A'){
      printf("marks between 90-100");
  }
    if (input == 'w'){
      printf("marks between 80-90");
  }
  else{
    printf("invalid character, enter one of w,a,b\n");
  }
}
//Relational operators and logical operators
if(input =='w' || input == 'A'){
  // do something
}
else{
  // do something
}
// precedence of '==' is higher that '||'
// the test expression is ((input == 'w') || (input == 'a'))
// the parenthesis can therefore be avoided. add if it improves readability.
// if (exp1 || exp2)
// test is true if even one of exp is true .
// evaluates exp1, if true , then does NOT evaluate exp2.
// This is called short-circuiting.
// How do it affect the program ?
// if the exp2 has a side effect , or is a funaction call which changes something , the shor circuting , may lead to undesirable behaviour.
// is useful too espcially when dealing with pointers.
  
// Remark 5 : assignment and ==
// if (input = 'w'){do}
// else print error.
// note the incorrect usage of assignment operator
// what is the behaviour of the program ?
// assignment operator retuen the value of the assignment.
// How do it affect the program?
// any non-zero value is trated as true and hence the program executes "do W"
// No syntax error , no execution error these are nasy bugs!
