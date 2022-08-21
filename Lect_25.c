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
  
