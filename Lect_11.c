// GCD algorithm, Bisection method for square root

// Euclid's algorithm
#include<stdio.h>
main(){
  int x,y;int temp;
  scanf("%d %d,&x,&y");
  if(x<y){
    temp = x; x = y; y = temp;
  }
  // assume x >= y.
  while(x%y! = 0){
    x = x%y;
    temp = x; x = y; y = temp;
  }
  printf("gcd of input numbers is %d \n",y);
}

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

#include<stdio.h>
main(){
  int x,y;
  int temo;
  scanf("%d %d",&x,&y);
  if(x<y){
    temp = x; x = y; y = temp;
  }
  // assume x >= y
  while(x%y != 0){
    x = x%y;
    printf("x = %d, y = %d\n",x,y);
    if(x<y){
      temp = x; x = y ; y = temp;
    }
  }
  printf("gcd of input numbers is %d \n",y);
}

// Today Task: Computing a common mathematical function.
// Compute positive square-root of an integer-- approximately

// lets compute underroot 55
// in fact we are interested in the value in the value at which the function f(x) = x^2 - 55 evaluates to zero !
// start with some initial guess: say 1 ,. The value of f (!) is -ve!
// pick another guess where value is positive say 25.
// the function must be zero in between these two values.
// two initial values xL = 1, xR = 25.
// HOW DO WE PICK THE REFINED guess?
// take mid-point
// we now have 3 values. xL, xR, xM.
// which are useful ? the two closest ones with opposite sign for f(x)

// Two initial values such that 
// f(xL) is negative and f(xR) is positive.
//Take mid-point xM = xL+ xR/2
// pick two of xL,xR,xM WHICH ARE CLOSEST AND HAVE OPPOSITE SIGN FOR F(X).
// How long ? till the two estinates are close enough!

// using while loop

#include<stdio.h>
main(){
  double xL = 1; double xR = 25;
  double xM, epsilon;
  epsilon = 0.0001;
  
  while (xR - xL >= epsilon){
    xM = (xL+ xR)/2;
    if((xM*xM - 55)>0){
      xR = xM;
    }
    else{
      xL = xM;
    }
  }
  printf("sqrt of 55 is %.4f\n",xL);
}
