// What is pointer ?
// intx; : x is the name of a variable that holds data which is of 
// type intger , Similarly float; double d; and char c;


// Pointer variable is a variable whose value is an address.
// Syntax: data-type:
// data-type * var-name;

// Example:
// int *ptr; // ptr is declared tp be a variable that can hold the address of an integer variable.
// For instance , it can hold the address 65524 which will be the address of the variable i.
//  |  i   |   -- location name
//  |  5   |   -- value
//  |65524 |   -- address of location

#include<stdio.h>
main(){
  char *ptr1;
  int *ptr2;
  printf("%lu %lu\n", sizeof(ptr1),sizeof(ptr2));
}
// Demo 1: Initializing and dereferencing
// int var = 10;
//int *p;
// p = &var
//          p           |        var
// Ox7fff5ed98c4c       | 10
// Ox7fffed98c50        | Ox7fff5ed98c4c
// Pis a pointer that stores the address of variable var.
// The data type of pointer p and variable var should match because.
// an intger pointer can only hold the address of intger variable.

//  Example 1: : Initializing and dereferencing
// Example::
int x,y, *ptr1;
ptr1 = &x; // initializing ptr1
x = 10;
y = *ptr1; Dereferencing ptr1
x++;
// What are the values of x , y, *ptr1?
// after this, in the same program.....
// suppose we add
ptr1 = &key;
(*ptr1)++;
// What are the values of x,y , *ptr1?

