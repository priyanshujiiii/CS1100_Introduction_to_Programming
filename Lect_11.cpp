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
