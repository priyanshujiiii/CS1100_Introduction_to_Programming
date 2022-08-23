// Matrix addition and multiplication, character grids

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

//  | c | a | t | t | y |        >> find(s1,s2)
//  | c | c | s | e | p |        >> returns 1 if s2 is ptsent in s1 , else0.
//  | e | s | c | e | l |        >> what are s1 and s2? char arrays
//  | s | e | e | s | e |        >> Solve it for rows , what about columns ? Find transpose !
//  | e | a | p | c | s |

// Transpose of a matrix
// Given a character grid , find gridT which is the transpose of grid.

//  | c | a | t | t | y |        | c | c | e | s | e |
//  | c | c | s | e | p |        | a | c | s | e | a |
//  | e | s | c | e | l |        | t | s | c | e | p |
//  | s | e | e | s | e |        | t | e | e | s | c |
//  | e | a | p | c | s |        | y | p | l | e | s |
//         grid                          gridT

// Given a character grid , and a string s , print the indices of the 
// rows and columns of grid that contains .
// Pseudo-code:
// For each row R of grid
  // if(find(R,s))print(index of R)
  // gridT = transpose(grid)
  // For each row R of gridT
  // If (find(R,s))print(index of R)
// Functions: concept of writing the programs for find , transpose
// etc seperately and using them in the main program.

#include<stdio.h>
main(){
  char grid[5][5] = {{'c','a','t','t','y'},
                     {'c','c','s','e','p'},
                     {'e','s','c','e','l'},
                     {'s','e','e','s','e'},
                     {'e','a','p','c','s'}};
  char gridT[5][5];
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j ++){
      gridT[i][j] = grid[j][i];
    }
  }
}
