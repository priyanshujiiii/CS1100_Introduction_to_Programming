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
