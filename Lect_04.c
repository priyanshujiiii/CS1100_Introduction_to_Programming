// The Computing Machine overview and printf scanf in C


//q1 basic print system
//q2 Can be done with only print,but loops makes it shorter.
//q3 Needed input statement (scanf) and some loop construct

//End Goals
//playing with printf command
//syntax and semantics of scanf command

//Detour:
//#computing  on computers.
//#A bird's eye-view of the compuing machine.
//How are numbers represented

//How does the computer reprsent data?
//To store: Numbers, text,graphics,and images,video,audio,program instructions.
//In some way,all information is diditized - broken down into pices and reprsented as numbers.
//Example: Reprsenting text Digitally.
//Every character is stored as a number, including spaces, digits,and punctuation.
//corresponding upper and lower cae are separate characters.
//Take Aways
// To solve anything on a computer - we need to reprsent it as a number.
// Numbers themslves are represented usinng some form of binary.
// The actual form is appropriate for efficient manipulation.
// Programs themselves are converted to binary by a complier before they can be executed!

// Control is ata statement w: Computer is currently executing statment w.
// Control flow: The order in which statements get executed. execution starts at top and goes down.
// Retraced if there is a repeat statement.

// Variable: Region on the board in which you can write a value.
// Variables have names, e.g x,yy, sides weight. we can use the name to refer to the value written in the variable.

// The type of a variable determines
// how much memory is allocated to it.
// how to interete the bit pattern stored in that memory location.
// commonly used data types: int,char,float

#include<stdio.h>
int main(){
  char ch = 'a';
  printf ("The character is: %c\n",ch)
}

// output statement 
//Format specifier
//int: %d
//float: %f
// printfformat-string,var1,var2,......varn)
// Format string specifies
// how many variables to expect?
// Type of each variable.
// How many columns to use for printing? (width)
// what is the precision ? (if applicable)
// common mistakes:
// comma missing after the double quotes.
// mismatch in the actual number of variables given and those
// expected in the format string.
// Note: Unlike typical functions, printf takes variable number of arguments.
// formated output
// printf("%w.pC",x);
// w,p and C are place holders , can take different values.
// w: width of the output. (optional)
// p: precision of the output. (optional)
// C: Conversion character.
// d: integer
// f: float
// c: character
// x: hexadecimal
// o: octal
// u: unsigned int
// e: real decimal in exponent form

#include<stdio.h>
int main(){
  float f1 = 23.4290;
  printf ("The value of f1 : %f\n",f1);
  printf ("The value of f1 : %3f\n",f1);
  printf ("The value of f1 : %20f\n",f1);
}

#include<stdio.h>
int main(){
  int z = 20;
  printf("The value of x in decimal in %d\n",z);
  printf("The value of x in octal in %o\n",z);
  printf("The value of x in hexa-decimal in %d\n",z);
}

// input statement
//scanf(format-string,&var1,&var2,....,&varn)
// How amny variables to expect ?
// Type of each variable.
// Common mistakes.
// comma missing the double quotes.
// mismatch in the actual number of variables given and those expexted in the format string.
// & missing before the variable.
// like printf , scanf also takes variable number of argumants.
#include<stdio.h>
int main(){
  int z;
  scanf("%d",&z);
  printf("value input = %d/n",z);
}
