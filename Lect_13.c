// Example problems which need nested loops

// nested loop
// printing pattern
// input
#include<stdio.h>
main(){
  for(int i = 1;i<=4;i++){
    for(int j =1; j<=8;j++){
      print("*");
    }
    printf("\n");
  }
}
// output
//********
//********
//********
//********


// input
#include<stdio.h>
main(){
  int k = 2;
  for(inti=1;i<=4;i++){
    for(intj =1;j<=k;j++){
      printf("*");
    }
    printf("\n");
    k = k+2;
  }
}
//output:
//**
//****
//******
//********


// nested loops
// type of task:
// for each row do something
// for each column /9in the particular row ) do sommething.
// naturally occur when dealingwith matrices / 2d arrays (we will come to them soon!)

// printing first k primes
// while (we havent found k primes)
// determine if the next number is prime.

int n = 2;
while(count <= 10){
  // decide if n is prime
  // if n in prime , increment n
  // irrespective if that increment n
}

// expected solution

int n =2;
while (count <= 10){
  // decide if n i prime
  int i = 2;int flag = 0;int j = 3;int k = 5;
  while (i<n){
    if(n%i==0 || n%j==0 || n%k ==0){
      flag = 1; break;
    }
    i = i+1;
  }
  // if n is prime increment counter , print n.
  if (0== flag){
    printf(" The %d prime is %d\n");
    count++;
  }
  // irrespective if that increment n 
  n++;
}

// mam solution
int n =2;
while (count <= 10){
  // decide if n i prime
  int i = 2;int flag = 0;
  while (i<n){
    if(n%i==0){
      flag = 1; break;
    }
    i = i+1;
  }
  // if n is prime increment counter , print n.
  if (0== flag){
    printf(" The %d prime is %d\n");
    count++;
  }
  // irrespective if that increment n 
  n++;
}

// A note aon design  finding prime factors and their powers
// Given n, test if it is prime. If not prime , print its prime factors with corresponding powers.
// idea
// assume n is not prime.
// for i = 2 to  n-1
  // detect if it is prime.
  // if i is prime , find the largest power of i which divides n.
  // print i and the corresponding power.
//
