// Introduction to arrays, manipulating integer arrays

// One Dimensional arrays in c.
// intger and character array.
// manipulating arrrays.

// Programming for real life problems
//Here are some real life problems that we may want to solve using computers.
//Given the marks obtained by students in asss clsasss , print as histogram.
// Evaluate a polynomial a1x1 + a2x2 ......... anxn.
//Encrypt and decrypt messages.

// To store several elements of the same type.
// store 100 intgers.
// store 2000 characters.
// store 500 floats.

// Declaartion:
// data - types array-name[array-size];
// int marks[7];
//char name [10]
// float score score[1000];- defones 1000 vasssriable!
// the value of marks [2] is 75.
// new values can be assigned to elements marks[3] = 36;


// storing arrays
// all elements are of same type
// the number of elements is finite and fixed!

//Differen ways of initalizing array.
// int count[] = {10,23,50}
// int count [10] = {0}
// using a loop to exlicitly intialize the elements.
//common mistsake : Forgetting to initialize the elements of array.

#include<stdio.h>
main(){
  int x;
  int y;
  int arr[10] = {5};
  
  printf("%p\n",&x);
  printf("%p\n",&y);
  printf("%p\n",&arr);
  
  printf("%p\n",&arr[1]);
}

//

#include<stdio.h>
main(){
  int x;
  int y;
  int arr[10] = {5};
  
  //printf("%p\n",&x);
  //printf("%p\n",&y);
  printf("%p\n",&arr[0]);
  printf("%p\n",&arr[1]);
  
  printf("%ld\n",sizeof(arr));
  printf("%p\n",&arr[1]);
}
// Genersating Histograms
// Grading for an exam is over and we wish to plot histogram of marks of the students.
// Assume test wasss for 20 marks.
// Intger scores. No negative marking. 
// What are the possible different scores ?
// use arrays instead of 20 different variables.

// counter number of students who scored marks-i

#include <stdio.h>
int main(){
  const int MAX_MARKS = 20;
  const int NUM_STUDENTS = 184;
  int marks_count[MAX_MARKS+1];
  
  int i , curr_marks;
  for(i=1;i<=NUM_STUDENTS;i++){
    printf("Enter the msarks for Rollnumber %d\t",i);
    scanf("%d",&curr_marks);
           /* fill in your code*/
  }
}
