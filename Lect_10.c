// More examples of while loop

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
// what happens when first input is negative ?
// and a check in the end.
         
         
         
// TESTING IF A NUMBER IS PRIME 
// a number n is prime if it has no other - divisor other than one and itself.
// idea:
// start checking from 2 to n-1.
// if any of the above divides n , declare "not prime"!
// else declare "prime".

         
  // Template of a program
scanf("%d",&n);
i = 2; flag = 0;
while(i<n){
  if(n%i == 0){
    flag = 1;
    break;
  }
  i = i+1
}
if (1 == flag){
  printf("not prime \n");
}
else{
  printf("prime\n");
}  
  
//Finding GCD of two integrs
// Given positive integers x and y , output the GCD of x and y.
// idea
// let z be min of x and y.
// output largest such i as gcd.

         
// Given positive integers x and y , output the GCD of X and Y.

if (x<y){
  z = x;
}
else{
  z = y;
}

// z contains min of x and y
gcd = 1; i =1;
while(i<=z){
  if ((x%i==0) && (y%i == 0)){
    gcd = i;
  }
  i++
}
         
// idea2
// Given x and y , output the GCD Of X an Y.
// Idea2
//If y divides x we are done!
// else there is a smaller problem to solve!
// gcd(x,y) = gcd(x-y,y)
// needs proof
// gcd(1034,237) = gcd(797,237) = gcd(560,237) = gcd(323,237) = gcd(86,237) = gcd(86,151) = gcd(86,65) =  gcd(21,65) =  gcd(21,44)
// gcd(23,44) = gcd(2,21) = 1

//idea3
// Given x and y , output the GCD of x and y.
// If x%y == 0, we are done!
// else modify x and y suitably.
// x = x%y;
// what if x < y?
// exchange a and y.
         
// euclid algorithm
// assume x >=y.
while(-------){
  // modify x ,y as needeed.
  // if x < y , exchange x and y.
}
printf("gcd of input numbers is %d\n",y);

         
//repel program

#include<stdio.h>
int main(){
  int x ,y ,z;
  scanf("%d",&x);
  scanf("%d",&y);
  if (x<y){
    z = x;
  }
  else{
    z = y;
  }
  // contains min of a and y
  int i , gcd;
  gcd = 1; i  = 1;
  while(i<=z){
    if((x%i == 0)&&(y%i==0)){
      gcd  = i;
    }
    i++;
  }
  printf( "gcd of input number is %d\n",gcd);
  return 0;
}
// Today tasks Lerning so far
// Naturally needed loops.
// Finding min of positive integers. Euclid's idea are natural use cases foe while construct
// we could achieve all of them using while construct

// A very important and useful learning : Power of a clever algorithm.
