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
//>>>> Take out the first 
