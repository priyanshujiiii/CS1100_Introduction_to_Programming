// Can we define our "commands"?
// We alraedy know of commands like:
  // sqrt(x) evaluates to the square root of x.
  // pow(x,k) returns the values of x multiplied by itself value of k many times.
  // forward (d) moves the turtle forward d units.
// Can we define new commands? e,g
  // gcd(m,n) should evaluate to the GCD of m,n.
  // dash(d) should move the turtle forward , but draw dashes as it moves rather than a continious line.

// Functions in C

#include<stdio.h>
int main(){
  int var1 = 10;
  int var2 = 20;
  int var3, var4;
  var3 = FindSum(var1,var2);
  var4 = FindSum(var3,var2);
  printf("%d",var3);
  printf("%d",var4);
  return 0;
}


// Completeing the example

#include<stdio.h>
int main(){
  int var1 = 10;
  int var2 = 20;
  int var3, var4;
  var3 = FindSum(var1,var2);
  var4 = FindSum(var3,var2);
  printf("%d",var3);
  printf("%d",var4);
  return 0;
}

int FindSum(int a , int b){
  int c = a + b;
  return c ;
}

// Prototype of a function:
  //Nmae of the function
  // Arguments and their types.
  // Return type.
// Definition of the function:
  // Return type
  // Function name
  // Nmaes of arguments and their types 
  // Body of the function
  // Local variables
  // Return statement


// protype can be replaced by defiition

int FindSum(int a , int b){
  int c = a + b;
  return c ;
}

#include<stdio.h>
int main(){
  int var1 = 10;
  int var2 = 20;
  int var3, var4;
  var3 = FindSum(var1,var2);
  var4 = FindSum(var3,var2);
  printf("%d",var3);
  printf("%d",var4);
  return 0;
}
// Protype: Not provided.

// Definition of the function:
  // Return type
  // Function name
  // Nmaes of arguments and their types 
  // Body of the function
  // Local variables
  // Return statement

#include<stdio.h>
main(){
  char grid[5][5] = {{'c','a','t','t','y'},
                     {'c','c','s','e','p'},
                     {'e','s','c','e','l'},
                     {'s','e','e','s','e'},
                     {'e','a','p','c','s'}};
  printf("%s\n",grid[1]);
}

// ANATOMY OF A FUNCTION DEFINITION
// Function of myMultiplication retuens the result multiplication of intgers.
int myMultplyFunction(int x, int y){
  int result;
  result = x*y;
  return result;
}

// int myMultplyFunction(int x, int y)
  // int : Datatype of data returned any C datatype. "void" if nothing is returned. and 
    // Return statement , datatype matches declaration.
  // myMultiplication : Function name
  // (int x , int y) : Parameters passed to function any c datatype
// return statement  datatype matches declartion.

// Classifying functions in C.
// Functions
// >> with arguments
//   >> declared and defined with parameter list
//   >> values for parameter passed during function
//   >> call
//   >> E.g:
//          int sum(int x, int y) #declaration
//          sum(10,20); #call
// >> Without arguments
//   >> no parameter list
//   >> no value passed during function call
//   >. E.g:
//          int show(); #declaration
//          show(); #call

// FUNCTION
// >> Library function
//   >> predefined
//   >> declartions inside headrer files
//   >> E.g:
//         getch(),clrscr().. etc
// >> User defined
//   >> creadted by user
//   >> Reduced complexity of program

// New Concept : Blocks and scope
// Block: A program segment written within curly brackets.
// Scope: The program segment where a particular declaration of a variable is aapplicable.

int global; //---------------------------------------------------------- scope of global
int main(){ //---------------------------------------------------------- scope of local
  int local;                                                         
  global = 1;
  local = 2;
  {            //-----------------------   scope of very_local
    int very_local;
    very_local = global + local;
  }           //------------------------
  // we just closed the block
  // very_local can be used 
} //--------------------------------------------------------------------

// Practcing the concept : Blocks and scope

#include <stdio.h>
int FindSum(int,int);
int var1 = 10;
int main = 10;

int main(){
  int var2 = 20;
  {
    int var3;
    var3 = FindSum(var1,var2);
    printf("%d\n",var3);
  }
  float var3 = 100;
  printf("f\n",var3);
  return 0;
}

int FindSum(int  a , int b){
  int c = a+ b;
  printf("d\n",var1);
  return c ;
}
// >>Scope of var2 is the whole of main
// >>Scope of int var3 is only the inner block
// >>Scope of float var3 is only the outer block.
// >>Scope of int var1 is the whole program.

// Repel it

#include<stdio.h>
int varGlobal;
int findSum(int x , int y){
  varGlobal = 10;
}

int main(){
  intx = ind sum (10,20);
}

// Features of a C program 
// In a C program there is at least one function - main.
// Typically there are sevaeral functions which can span over many files.
// >> Recommended that we identify modules are write functions
//    pretaining to that module in a single file.
// >> Each file can be compllied separately (gcc-c- does not create executable)
// Data passing / sharing in functions
// >> via arguments and retuen types
// >> via global variables.
// >> use carefully - can have side-effects

// swap function: 

#include<stdio.h>
void swap(int a , int b){
  int temp = a;
  a = b;
  b = temp;
  return ;
}
void main(){
  int x = 20;
  int y = 40;
  swap (x,y);
  printf("x=%d;y=%d\n",x,y);
}
// what is the input of the program ?
// what is the output if we print a and binside the function swap ? (at the end of the function)
// variables are passed are passed by value in c always?

// Take - away : this is an incorrect swap program.
// How do we wrie a correct swap program?

