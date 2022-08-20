// Reading / WRITING MATRICES AT THE INPUT 
// MAT : nmae of the matrix rows, cols; number of roes and columns.
// Reading Matrices fom yhe input:
for (int i = 0; i , roes; i ++)
  for(int j = 0; j < cols; j++)
    scanf("%d",mat[i][j]);
// Matrix Operations : Addition 
// WRITE A PROGRAM TO ADD TWO MATRICES a AND b.
#include<stdio.h>
main(){
  /* assume N1 and N2 defined as const int */
  int A[N1][N2];
  int B[N1][N2];
  /*intialize A,B suitably */
  int c[N1][N2];
  int i , j;
  for(i=0;i,N1;i++){
    for(j=0;j<N2;j++)
      C[i][j] = a[I][J] + B[I][j];
    }
  }
}

// Matrix Operations ; Multiplication
// Write a program to multiply matrices A and b
int main (){
  const int N;
  int A[N][N],B[N][N],C[N][N];
  int i,j,k, sum;
  /* Assume A,B are initialized suitably*/
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      sum = 0;
      for(k=0;k<n; k++){
        /* fill in your code here*/
      }
      c[i][j] = sum;
    }
  }
}


// Character grids 
// Given a character grid and a stringg , a print yhe indices of the rows 
// and columns of grid that contain s.

//  | c | a | t | t | y |        >> printf("%c", grid[2][3]);
//  | c | c | s | e | p |        >> grid[0][0] = 'b'
//  | e | s | c | e | l |        >> What is grid[3]
//  | s | e | e | s | e |        >> grid[3] = "abcde"; wrong !!
//  | e | a | p | c | s |

// which rows and columns contain cse ?
