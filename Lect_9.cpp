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
