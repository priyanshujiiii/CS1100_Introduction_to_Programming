
// Selection sort - number of comparisons

// which input do we consider ?
// Do number of comparison depend on the particular array values?
// How does the method perfom when the array is nearly sorted ?


// consider a "worst-case" input.
// irrespective of whether the array is sorted or not , the method always needs n(n+)/2 comparisons.

// 15 | 8 | 3 | 12 | 30 | 7 | 9 | 17 | 32 | 19
// 15 | 8 | 3 | 12 | 30 | 7 | 9 | 17 | 32 | 19
// 15 |12 | 8 | 3  | 30 | 7 | 9 | 17 | 32 | 19
// ...........................................
// 32 |30 |19 | 17 | 15 |12 | 9 |  8 | 7  | 3
