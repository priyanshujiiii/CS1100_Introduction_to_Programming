// Character arrays 
// char name[20] = "Avani" ;
// char name[20] = {'A','V','A','N','I'};
// char [20]

#include<stdio.h>
int main(){
  char name[20] = "AVANI";
  printf("%s\n",name);
  printf("last character = %c\n",name[5]);
  retuen 0;
}

#include<stdio.h>
int main(){
  char name[20] = "AVANI";
  name[6]='P'
  printf("%s\n",name);
  printf("last character = %c\n",name[5]);
  printf("character at 6th index = %c",name[6]);
  retuen 0;
}
//Character arrays
// char name[20]

// Different ways of intialization
// char name[20] = "Avani"
// char name[20] = {'A','V','A','N','I'};
// char name[20];
// scanf("%s",name);
// char name[20];
// name = 'AVANI"; incorrect!!

// What is the output of this program ?

#include<stadio.h>
main(){
  char name[20] = "AVANI";
  int i ;
  
  for (i=10; i<20;i++){
    name[i] = 'X';
  }
  
  printf("name = %s\n", name[i], name[i]);
  
  for (i=0;i<20;i++){
    printf("%c %d\n", name[i], name[i]);
  }
}
                                              
// Character arrays and standard library support

// Character arrays or strings occur very often.
// c provides a standard library string.h
// exposes several useful functions:
// strlen
// strcmp;
// strcpy;
// strstr
// we can re-create library functions.

// Example1 : Finding the length of a given string

// Task : Given as the input , find the length.
// Pseudo-code:
// for i ranging from 1 to n
//if you find that ith character is
// null character then breal else increment i
// Program segment :
char a[1000],i;
scanf("%s",s);
for(i=0;s[i] != '\0';++i);
printf("Length : %d",i);
       
//Example 2 : Compare two strings
// Task :  Given two strings s1, s2, check if s1 and s2 are the same
//if(s1==s2)          This does not work
// Pseudo-code;
// Find the length l of the two strings first. If they are different.
// declare that the strings ar different.
// For i ranging if ith characters are the same. 
// if not declare Not same.
// program Segment:
// strings are in arrays a and b
int i = 0;
while (a[i] == b[i]){
  i++;
}
if(a[i]=='\0'&& b[i]=='\0'){
  printf("SAME");
else
  printf("NOT SAME");

// Example 3 : Palindromes

// Task : Given a string check if it is a palindrome.
// Pseudo-code:
  // Run an index i from 1 to n and another j from n to 1.
  // check if ith character is equal to jth character . If 
  // not , ddeclare NOT PALINDROME.
// Program Segment:
  // string is in arrray named str
int 1 =0;
int h = strlen(str) - 1;
while(h>1){
  if str[1]!= str[h]){
    printf("NOT PALINDROME\n");
    break;
  }
  i++,h--;
}
printf("PALINDROME\n");
  
// Multi-dimensonal arrays in C
  // Declaring a multi-dimensional array
  // intmyArray[size1][size2].........[sizeN]
  // How is a two-dimensional array.
  
#include<stdio.h>
main(){
  int matrix[3][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  }
}
// Multi- dimensioal arrays in C
  // Accessing elements of the array : A[i][j]-element in row i
  // and column j of array A.
  // Roes /Column numbereed from 0 .
  // Storage row - major ordering elements of row 0 ,
  // elements of row 1, etc.

// intialaizing  multi-dimensional arrays
  #include<stdio.h>
  main(){
    int matrix1[3][4]={
      1,2,3,4,
      5,6,7,8,
      9.10,11,12};
    
    int matrix2[3][4]={
      1,2,3,4,
      5,6,7,8,
      9,10,11,12};
  }
  
// Accessing Multi-dimensional arrays.
  // what does the program print?
  #include<stdio.h>
  #define N1 3
  #define N2 4
  main(){
    int matrix[N1][N2]={
      1,2,3,4,
      5,6,7,8,
      9,10,11,12};
    int i ;
    for (i=0;i<N1;i++){
      printf("%d\n",matrix[i][2]++);
    }
    for (i=0;i<N2, matrix[2][i]){
      printf(%"d\t",matrix[2][i]);
    }       
