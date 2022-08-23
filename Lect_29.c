//  Pointers and pass by value

// Example#2 : sum and average of array elements
// we wish to return sum and average of elements of an array.
#include<stdio.h>
int sumavg(int A,int n , float *avg){
  int sum = 0;
  for(int i =0;i<n;i++){
    sum = sum + *(A+i);
  }
  *avg = sum/n;
  return sum;
}
int main(){
  int arr[5] = {1,2,3,4,5}
  float mean;
  int sum;
  
  sum = sumavg(arr,5,&mean);
  printf("%d %f\n",sum,mean);
}

// okay lets fix the memory allocation issue

