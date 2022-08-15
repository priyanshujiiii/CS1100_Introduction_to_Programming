//calculator
#include<stdio.h>
int main(){
  char input;
  const char z = 'Z'
  scanf("%c",&input);
  switch (input){
    case 'A': printf("the input is A\n");break;
    case 'B': printf("the input is B\n");break;
    case z : printf("input is Z\n");break;
    default: printf("error\n");
  }
}
////
#include<stdio.h>
int main(){
  char op;
  int x; int y;
  
  printf("enter the operator\t");
  scanf("%c",&op);
  
  printf("enter the first input \t");
  scanf("%d",&x);
  
  printf("enter the second input\t");
  scanf("%d",&y);

  switch (op){
    case '+': printf("x+y = %d",x+y);break;
    case '-': printf("x-y = %d",x-y);break;
    case '*': printf("x*y = %d",x*y);break;
    case '/': printf("x/y = %d",x/y);break;
    case '%': printf("x mod y = %d",x%y);break;
    default: printf("error\n");
  }
}
