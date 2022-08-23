// Recursive Functions part 2, examples

// Palindrome
// Conceptual formulization
// Assume inputs are a string str , start index , end index end.
// Assume start <= end.
//>>>> base case 1: if the str is of length 1 it is a palindrome.
//>>>> base case 2: if str is of length 2 and str[start] == str [end],it is a palindrome.
//>>>> Recursive step: if str[start] == str[end] and 
//     str[start+1,end-1] is a palindrome, then str is a palindrome

// Counting Digits of  non-negative intger
//>>>> Base case: if n==0 return ______
//>>>> Recursive step: return 1 + number of digits in n\10
//>>>> if return value is 0, then answer is incorrect for n = 0
//>>>> if return value is 1, then answer is incorrect for n = 123
int digits(int n ){
  if (n/10 == 0) return 1;
  else return 1 + digits(n/10);
}

// Recursive Thinking (Eg:#1) : Largest Element in an array
//>> Iterative Thinking: Keep the current largest , compare it with the next element.
//   update the largest with the largest among the two . Do this for al elements in the given order.
//>> Recursive Thinking:
//>>>> Take out the first element.
//>>>> Find the largest element (call it l) in the remaining array
//     recursively (with only n-1 elements in the array)
//>>>> Compare between the first and l, and return the larger element
//     as the largest in the array.

//Recursive Thinking(Eg:#1) : Largest element in an array
//Recursive thinking: find the largest of elements 2 to n -1. Compare it with first and return the largest.
int largest(int i , int n){
  if (i==n){
    return arr[i];
  }
  int l;
  l = largest(i+1,n);
  if (arr[i]>1){
    return arr[i];
  }
  else return 1;
}
//(better) recursive thinking: Find the largest of the first half, then in the second half. and then return the largest of the two.
int largest(int i, int j){
  if(i==j) return arr[i];
  int l1,l2;
  l1 = largest(i,(i+j)/2);
  l2 = largest((i+j)/2+1,j);
  if(l1>l2){
    return l1;
  }
  else{
    return l2;
  }
  
  #define SIZE 8
  int deepmax(int arr[], int start, int end){
    if (start == end) return arr[start];
    else{
      int l = deepmax(arr,start+1,end);
      if(arr[start]>1) return arr[start];
      else return 1 ;
    }
  }
  
  int shallowmax(int arr[], int start, int end){
    if(start == end) return arr[start];
    else{
      int mid = (start + end)/2;
      int l1 = shallowmax(arr, start,mid);
      int l2 = shallowmax(arr,mid+1 ,end);
      if(l1 >l2) return l1;
      else return l2;
    }
  }
  
  
 main(){
   int arr[SIZE];
   for (int i = 0; i < SIZE;i++){
     arr[i] = i;
   }
   int max1 = shallowmax(arr,0, SIZE-1);
   printf("shallowmax answer = %d\n",max1);
   int max2 = deepmax(arr,0, SIZE-1);
   printf(" deepmax answer = %d\n",max2);
}

  // Recursive Thinking (Eg:#2): Printing an array left to right 
  // Recursive thinking ; Print the first element.
  // Recursively print the array starting at next position left to right.
  // Implementation1
  void printL2R(int arr[],int start,int end){
   if(start<=end){
     printf("%d \t",arr[start]);
     printfL2R(arr,start+1,end);
   }
}
// implementation2
void printL2R(int arr[];int n) {
  if(n==0) return;
  printf("%d\t",_____);
  printL2R(______,________);
}
// Recursive thinking:
void printL2R(int arr[];int n) {
  if(n==0) return;
  printf("%d\t",arr[0]);
  printL2R(arr+1,n-1);
}

  
// Recursive Thinking(Eg:#3): Searching in a sorted Array
// Given an array A thst is sorted , search for a given element key in the array.
// Recursive Thinking: Take out the last element, check if it is equal to the key,
// if so stop else search for the key in the remaining n-1 elements recursively.
// (better) Recursive Thinking: Divide the array into halves, check if the key 
// element is less than the middle element - then search in the left half of the array, 
// else search in the right half of the array. This is binary search.
