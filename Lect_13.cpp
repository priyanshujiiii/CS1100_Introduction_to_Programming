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

