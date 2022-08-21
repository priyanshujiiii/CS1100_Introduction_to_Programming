// Pointers - Recap
//>> int count ; - names a memory cell called count.
//>> Throughout the program the same memory cell gets accessed when we access count.
//>> The address of count is called its l-value.
//>> The value of count (its r-value) may change during the course of the program.

//>> int *countptr; - names a memory cell called countptr.
//>> Throughout the program the same memory cell gets accessed when we access countptr as i-value.
//>> However different cells may get accessed when we access countptr as r-value

// An Application : Passing Parameters to Functions
// Incorrect Version:
#include<stdio.h>
void swap(int *p1 , int *p2){
  int *temp;
  temp = p1;
  p1 = p2;
  p2 = temp;
}
int main(){
  int a = 10,b = 20;
  swap(&a,&b);
  printf("%d %d",a,b);
}
//A correct swap function:

void swap(int *p1 , int *p2){
  int t;
  t = *p1;
  *p1 = *p2;
  *p2 = t;
}
int main(){
  int a = 10,b = 20;
  swap(&a,&b);
  printf("%d %d",a,b);
}

// More on pointers : Segmentation Fault
// int *ptr1;  ptr1 is a pointer to an integer
// what does ptr1 point to before initializtion ? garbage
// what is the output of this piece of code?

int main(){
  int count;
  int *countPtr;
  
  count = *countPtr;
  printf("%d\n", count);
}
//segmentation faultt!

// More on Pointers: Pointer to pointers
//     ptr1         |             |    ptr2      |             |    var     |
//   66x123x1       |>>>>>>>      |  xx771230    |>>>>>>>>     |    789     |
//   xx661111       |     >>>>>>>>|  66x123x1    |      >>>>>>>|  xx771230  |
// Syntax: type**ptrname           Example: int **ptr1;

int var = 789;
int *ptr2;
int **ptr1; // pointer which points to an integer pointer.
ptr2 = &var; // storing address of var in ptr2.
ptr1 = &ptr2; // storing the address of ptr2 in ptr1.
// what are the values of var, *ptr2 , **ptr1?

// Array access using pointers
int arr[4];
//    ____________________________________
//    | arr[0] |arr[1] | arr[2] | arr[3] |
//>> &arr[0] is same as arr.        >> arr[0] is same as *arr.
//>> &arr[1] is same as (arr+1).    >> arr[1] is same as *(arr+1).
//>> &arr[2] is same as (arr+2).    >> arr[2] is same as *(arr+2).
//>> &arr[3] is same as (arr+3).    >> arr[3] is same as *(arr+3).
//>> &arr[i] is same as (arr+i).    >> arr[i] is same as *(arr+i). 

// Array and pointers

// Arrays and ponters go hand-in-hand.

intA[10]; int *ptr = A;

// A[2] and *(ptr+2) are equivalent.
// *(A+2) and ptr[2] are equivalent ways of accessing the same element.
// The above is translated as abase + offset calculation.
//        (address of A[0] + (2* sizeof(int))
// ptr ++ cam be done to move the pointer.
// However A =A+ 1 is a syntax error.
// This is because array name is a constant pointer in C.

// Array access using pointers

int main()
{
  int A[10] = { 12,3,4,5,8,16,7,88,19,10};
  int *ptr = A;
  int i;
  
  for (i=0;i<10;i++){
    printf("%d\t",A[i]);
    printf("%d\t",*(ptr+i));
    printf("%d\n", *ptr+i);
  }
}
// String copy using arrays
#include<string.h>
void mystrcpy(char source[], char dest[]){
  int len = strlen(source);
  int i;
  for(i=o;i<nlen;i++){
    dest[i] = source[i];
  }
  dest[i] = '\o';
}
 void main(){
   char s1[20] = "This is a string";
   char s2[20];
   
   mystrcpy(s1,s2);
   printf("%s\n",s2);
 }

// STRING COPY USING POINTERS
#include<string.h>
void mystrcpy(char *source, char *dest){
  while(*source){
    *dest = *source;
    dest++;
    source++;
  }
  dest[i] = '\o';
}
 void main(){
   char s1[20] = "This is a string";
   char s2[20];
   
   mystrcpy(s1,s2);
   printf("%s\n",s2);
 }
// Using pointers - Example#1
// Goal: we wish to store the names of three students say - "sai",
// "Narasimhna","lakshmi" in some appropriate data-type.
//>> what data-structure will you use?
//>> HOW ABOUT CHAR nMES[3][11]?
//>> USE char* Nmes[3]
//>>>> "names" is an array of pointers to characters.

int main(){
  char *Names[3] = {"Sai", "Narashima","Lakshmi"};
  int i ;
  for(i=0;i<3;i++){
    printf("%c\n",Names[i]);
  }
}

// An array  of pointers
// Goal : Read the three names from standard input.
main(){
  char *Names[3];
  int i;
  
  for(i=o;i<3;i++){
    printf("Enter Name %d\t",i+1);
    scanf("%s",Names[i]);
  }
}
