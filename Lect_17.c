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

// Sortiing an array in decreasing order
// Task : Given array of an (n<=1000)

// selection sort

// 15 | 8 | 3 | 12 | 30 | 7 | 9 | 17 | 32 | 19
// 32 | 8 | 3 | 12 | 30 | 7 | 9 | 17 | 15 | 19
// 32 | 30 | 3 | 12 | 8 | 7 | 9 | 17 | 15 | 19
// .  |  . | . | .  | . | . | . | .  | .  | .
// 32 | 30 |19 |17  |15 | 12| 9 | 8  | 7  | 3

// pseudo code :
// while (i<n)
// maxindex == index of the max element in the part of the array indexed from i to n - . Find max index.

// Selection sort -  from the pseudocode to tyhe program
// pseudo-code:
for i ranging 0 to n-1{
  
  // max index = the index of the max element in the
  // part of the array indexed from i to n -1. Find maxindex.
  
  // swap elemts array[i]
  // and array [maxindex]
}
  
// Program segment:
for (i=0; i < n; i++){
  maxindex = i ;
  // Fill your code here.
  
  // maxindex conatins the index.
  // of max element in the arrray 
  // indexed from i to n -1 .
  
  temp = A[i];
  A[i] = A[maxindex]
  A[maxindex] = temp;
}
