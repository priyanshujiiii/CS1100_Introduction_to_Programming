// First loop construct: while

// Our task today: One-Time mini calculator
// Desired Behaviour
// Prompts for operator, and two operands the result.
// Repeats the above, unless asked to quit.
repeat{
  // Take operator , opoerands.
  //Comput result and print
} //untill (quit command is given)
//repeat untill is not available in C!
// available loop constructs: while, for,do-while


// The while construct
// syntax
// while(expressions){statments;}
// semantics
// as long as expression is true, execute statements.
// if expression is false, exit the loop.
// value of expression must be changes by the body of the loop, otherwise we have an infinite loop.
// expression can contain relitional logical or equailty operators.
// Relational : '<=', '<','>','>='
// equaility '==',!=
// logical '&&' , '||'


// mimi calculator using while loop
// first attempt.
#include<stdio.h>
int main(){
  int x, int y; char op;
  
  printf("Input the operand\t";scanf("%c",&op));
  printf("Input the first intger\t";scanf("%d",&x));
  printf("Input the second intger\t";scanf("%d",&y));
  while (op!= 'q'){
    switch(op){
        case '+': printf("x+y = %d",x+y);break;
        case '-': printf("x-y = %d",x-y);break;
        case '*': printf("x*y = %d",x*y);break;
        case '/': printf("x/y = %d",x/y);break;
        case '%': printf("x mod y = %d",x%y);break;
        case 'q': printf("invalid operator\n");break;
        default: printf("error\n");
    }
  }
}
// second attempt
#include<stdio.h>
int main(){
  int x, int y; char op;
  
  printf("Input the operand\t";scanf("%c",&op));
  
  while (op!= 'q'){
    printf("Input the first intger\t";scanf("%d",&x));
    printf("Input the second intger\t";scanf("%d",&y));
    switch(op){
        case '+': printf("x+y = %d",x+y);break;
        case '-': printf("x-y = %d",x-y);break;
        case '*': printf("x*y = %d",x*y);break;
        case '/': printf("x/y = %d",x/y);break;
        case '%': printf("x mod y = %d",x%y);break;
        case 'q': printf("invalid operator\n");break;
        default: printf("error\n");
    }
    getchar(); peintf("Input the operand \t");scanf("%c",&op)
  }
}


// Mini calculator : using a true expression
// let the while loop run forever and break it when needed.
while{
  printf("Input the operand \t"):scanf("%d",&x);
  if (op == 'q' || op == 'Q'){
    break;
  }
  printf("input the first intger\t");scanf("%d",&x);
  printf("input the second intger\t");scanf("%d",&y);
  switch(op){
      case '+': printf("x+y = %d",x+y);break;
      case '-': printf("x-y = %d",x-y);break;
      case '*': printf("x*y = %d",x*y);break;
      case '/': printf("x/y = %d",x/y);break;
      case '%': printf("x mod y = %d",x%y);break;
      case 'q': printf("invalid operator\n");break;
      default: printf("error\n");
   }
   getchar(); peintf("Input the operand \t");scanf("%c",&op);
}
      
// How does the program terminiate?

#include<stdio.h>
main(){
  // takes input n -- which is an intger
  //accepts n intger as input and outputs the
  // min of three intgers
  int n, int currInt;
  int min;
  int a;
  scanf("%d", &currint); // take in the first integer
  min = currInt; // initiliaze min to be curr Int
  
  while(a<n){
    scanf("%d",&currInt);
    if(currInt<min){
      min = currInt
    }
    a++
  }
  printf("min = %d\n", min)
}
//n =2
