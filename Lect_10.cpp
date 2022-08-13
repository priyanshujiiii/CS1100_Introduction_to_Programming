// Finding min of n intgers
#include<stdio.h>
main(){
  int n; int currInt;
  int a; int min;
  
  scanf("%d",&n);
  a = 1;
  while(a<=n){
    scanf("%d",&currint);
    if (a==1){
      min = currInt;
    }
    if (currInt < min){
      min = currInt;
    }
    a++  
  }
  pritnf("min=%d\",min);
}
//points to remember
// is the counter updated?
// corner cases: a single input ?
// min accurs as the first or last element.

// when control is at the scanf statement. we are scannin g the a-th input.
// just before the statement a ++ w have computed min of first a elemnts given by user.         

         
// Finding min of positive integers: terminiated by a negative integer.

#include<stdio.h>
main(){
  int n ; int currInt;
  int min;
  
  scanf("%d",&currInt);
  min = currInt;
  while(currInt>=0){
    scanf("%d",&currInt);
    if (currInt<min){
      min = currInt;
    }
  }
  print("min = %d\n",min);
}
