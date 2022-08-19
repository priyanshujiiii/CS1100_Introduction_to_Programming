// Seraching for an element in a sorted array.
// 32 | 30 | 19 | 17 | 15 | 12 | 9 | 8 | 7 | 3
// task :  Search for a key in a sorted array.
// Binary search:
               // Check the middle element . If found break.
               // Else decide which part of the array is relevant and repeat.
// can be done since array is sorted!

int n , key; scanf("%d", &key);
start = 0; end = n -1;
while (________){
  mid = ______ ;
  if (A[mid]==key){
    printf("Found at %d", mid);
    break ;
  }
  if (A[mid]> key){
    star = __________;
  }
  else{
    end = __________;
  }
}

// solution 

// Linear Search versus Binary Search

// Execrcise for you:
// Take a large sorted array.
// use linear search to find an element not present in the array needs n comparisons
// use binary search to find the same element in the array count and print the number of comparisons 
// check the perfomance in terms of time.

