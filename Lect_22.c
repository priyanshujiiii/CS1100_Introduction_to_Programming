/ swap function: 

#include<stdio.h>
void swap(int a , int b){
  int temp = a;
  a = b;
  b = temp;
  return ;
}
void main(){
  int x = 20;
  int y = 40;
  swap (x,y);
  printf("x=%d;y=%d\n",x,y);
}
// what is the input of the program ?
// what is the output if we print a and binside the function swap ? (at the end of the function)
// variables are passed are passed by value in c always?

// Take - away : this is an incorrect swap program.
// How do we wrie a correct swap program?

// Replace string
#include<stdio.h>
void replace(char s[10]){
  int i = 0;
  while (s[i] != 0){
    if (s[i] == 's'){
      s[i] = 'S';
    }
    i++;
  }
  printf("s\n",s);
}

int main(){
  char arr [10] = "Maths";
  replace(arr);
  
  printf("%s\n",arr);
}
//>> what is the output of the program ?
//>> recall : variables are passedby values in C always!
//>> printf("%p\n",arr);
//   printf("%p\n".&arr);
//>> The address of the array is copied when the function is called.
//>> This behaves like pass by refernce which is supported by other languages like Pascal, C++

#include<stdio.h>

void(int Matrix[2][4]) --> (int Matrix [][]);
void replace(char s []){
  int i = 0;
  while(s[i] != 0){
    if (s[i] == 's'){
      s[i] = 'S';
    }
    i++;
  }
  printf("s\n",s);
}
int main(){
  char arr[10] = "Maths";
  replace(arr);
  
  printf("%s\n",arr);
}

//-------

#include<stdio.h>

void replace(char s[10]){
  int i = 0;
  while(s[i] !=0){
    if (s[i] != 0){
      s[i] = 'S'
    }
    i++;
    }
  }
  printf("%s\n",s);
}
           
int main(){
  char arr[10] = "Maths";
  replace(arr);
  
  printf("%s\n",arr);
}
// example
#include<stdio.h>
int maxIndex(intB[], int low,int high){
  // returns an index which denotes the index of
  // the max element in the set B[low] ..... B[high], both
  // inclusive
}
void swap(in B[], int index1 , int index2){
   //swap at the elements index1 and index2
}
int main(){
  intA[10] = { 10,20,17,-10,4,28,4,9,-1,9 };
  
  for (inti = 0; i <10; i ++){
    int k = maxIndex(A, i,9);
    swapA(A,i,k);
  }
}
