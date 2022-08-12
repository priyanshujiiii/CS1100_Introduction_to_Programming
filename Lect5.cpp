//vARIABLE NAMING: RULES AND GOOD PRACTICES
//Rules
//Made up of letters,digits and underscore
//cannot contain any other symbol.
//are case sesitive
// valid names: age, height, ji;
// allowded but undesirable: alb2, i  j, AGe, AGE;
// NOT ALLOWED: %AGE, 1WEIGHT, &WIDTH, CHAR, FOR
//Declartrion
int age;
char mychar;
float f1;
//Memory is allocated for all of the three, but not initialized. how much memory is allocated? use sizeof
// intilization and modification:
int age = 10;
int age; age = 30;
// left and right hand of assignment.
// printf(format-string,var1,var2,.......,varn)
// output statement 
//Format specifier
//int: %d
//float: %f
// printfformat-string,var1,var2,......varn)
// Format string specifies
// how many variables to expect?
// Type of each variable.
// How many columns to use for printing? (width)
// what is the precision ? (if applicable)
// common mistakes:
// comma missing after the double quotes.
// mismatch in the actual number of variables given and those
// expected in the format string.
// Note: Unlike typical functions, printf takes variable number of arguments.
// formated output
// Output statement and sizeof
#include<stdio.h>
int main(){
  char mychar;
  int myint;
  printf("char: #of bytes=%d \n",sizeof(mychar));
  printf("int: #of bytes=%d \n",sizeof(myInt));
  printf("float: #of bytes=%d \n",sizeof(float));
}
#include <stdio.h>
int main(void){
  int x;
  printf("%ld\n",sizeof(x));
  return 0;
}
//Memory allocated and ranges of data types
// Data type: short int
// 2 bytes of memory allocated.
#include<stdio.h>
int main(){
  short int x = 10;
  short int y = 50000;
  printf("size of short int %lu\n", sizeof(x));
  printf("x=%d\n",x);
  printf("y=%d\n",y);
}      
