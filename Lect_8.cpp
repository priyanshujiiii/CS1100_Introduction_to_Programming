// Today: use multiple selection switch statement.
// Syntax 
switch(expression){
  case const-expr-1: statements-1;break;
  case const-expr-2: statements-2;break;
  .
  .
  default: statements-def;
}
//• Semantics
//• Evaluate expression.
//• If it matches the const-expr-i, execute statements-i and
//following as long as an explicit break is not encountered.
//• If none of the const-expr-i match, execute the statements-def.
// LAST TASK USING SWITCH
#include<stdio.h>
int main(){
  char input; printf("Input a character:\t");scanf ("%c".&input);
  scanf("%c",&input);
  
  switch(input){
      
    case 'W':
      printf("Attendance in below 85%%\n");break;
      
    case 'A':
      printf("Attendance in below 90-100%%\n");break;
      
    case 'B':
      printf("Attendance in below 80-90%%\n");break;
    
     default: printf("Invalid character. Enter one OF W,A,B)
      
}
                     
