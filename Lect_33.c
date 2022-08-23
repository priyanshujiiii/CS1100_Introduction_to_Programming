// File Handling in C

//A simple program
#include<stdio.h>
int main()
{
  char buffer[100];
  scanf("%s", buffer);
  printf("%s\n", buffer);
}
//• Program reads from standard input - the keyboard.
//• Program writes to standard output - the monitor.
//• Files : viewed as resources like keyboard/monitor.
//• Can we make a program read from a file?
//• Can we make it write to a file?

//Input-Output in C
//• C does not provide any built-in functions for input output.
//• A library of functions is provided, these function prototypes
//can be found in stdio.h.
//• Input/Output in C is performed with streams.
//• Stream is a sequence of characters.
//• Every program has 3 streams available for it to use.
//• standard input stream called stdin
//• standard output stream called stdout
//• standard error stream called stderr
//• When we do scanf it reads from the stream stdin.
//• When we do printf it reads from the stream stdout.
//• Question - can we read and write from arbitrary streams?


//Function analogous to scanf()
//Input:
scanf("format specifier", address of variables);
fscanf(streampointer,"format specifier", address of variables);
//• streampointer is a pointer to a type called FILE.
FILE *fptr;
//• To use any file we need to open it using fopen.
//• However, we already have stdin open for reading.

//A simple program – modified

main()
{
  char buffer[100];
  fscanf(stdin, "%s", buffer);
  printf("%s\n", buffer);
}
//• Note the use of fscanf and stdin.
//• Similarly we can use stdout.

//Function analogous to printf()
//Ouput:
//• printf(“ format specifier ”, variables);
//• fprintf(stream-pointer “ format specifier”, variables);
//• Filepointer is a pointer to a type called FILE.
//FILE *fptr;
//• To use any file we need to open it using fopen.
//• However, we already have “stdout” open for writing

//A simple program – modified once more

main()
{
  char buffer[100];
  fscanf(stdin, "%s", buffer);
  fprintf(stdout, "%s\n", buffer);
}
//• Note the use of fscanf and stdin.
//• Note the use of fprintf and stdout.
//• The original program and the two modifications are exactly
//same in their behaviour.
//• Only the functions used are different

//Streams vs Devices
//• Each of the standard stream is mapped to a device.
//Read/write on the stream is mapped to input/output on the
//device.
//• For example, stdin is mapped to a keyboard.
//• stdout is mapped to a display.
//• By default, stderr is mapped to a display. That is why we
//get the error messages on screen.

//Can we have other streams?
//• Yes, C-handles files as streams. But some set up is needed
//before using it as a stream.
//• We need to open the file in the program before reading or
//writing to it. This uses the fopen function.
//• Prototype : (FILE *) fopen("filename","mode");
//• Usage Eg : (FILE *) fopen("mydatafile.txt","r");
//• This returns a pointer to the structure pre-assigned. This is
//what our own stream.
//• Any fprintf will be able to write to this stream if it uses the
//correct stream pointer (in this case FILE * pointer)

//Read from a file other than stdin

main() {
  FILE *fin;
  char buffer[100];
  fin = fopen("myFile.txt", "r");
  if (fin == NULL){
    printf("could not open file myfile.txt");
    return -1;
  }
  fscanf(fin, "%s", buffer);
  fprintf(stdout, "%s\n", buffer);
  fclose (fin);
}

//Read and write to files

int main() {
  FILE *fin, *fout;
  char buffer[100];
  fin = fopen("myfile.txt", "r");
  fscanf(fin, "%s", buffer);
  fout = fopen("outFile.txt", "w");
  fprintf(fout, "%s\n", buffer);
  fclose (fin);
  fclose (fout);
  return 0;
}

Copy files program

int main() {
  FILE *fin, *fout;
  fin = fopen("Lab8.txt", "r");
  fout = fopen("copy-of-Lab8.txt", "w");
  if (fin == NULL || fout == NULL) {
  printf("Error opening input or output file. Exiting..\n");
  return 0;
  }
  char buffer[1000];
  while (fgets(buffer, 1000, fin) != NULL) {
    fputs(buffer, fout);
  }
  fclose(fin);
  fclose(fout);
}

//Desirable behaviour
//mycopy Lab8.txt copy-of-Lab8.txt
//• How do you rename an executable to a different name?
//gcc -o mycopy copyprogram.c
//• How do I pass parameters to a program?
//• By passing parameters to main.
//main() function can be defined with no parameters
//OR
//with two parameters.
//• an integer typically called argc (count of number of
//arguments)
//• an array of character pointers typically called argv (value of
//the arguments).
//int main(int argc, char* argv[]);


int main(int argc, char* argv[]) {
  printf("argc = %d\n", argc);
}
//• Every C program has one input: the name of the executable.
//• How do you get the name of the executable?

int main(int argc, char* argv[]) {
  printf("name of executable is = %s\n", argv[0]);
}

//Example#2
//• How many arguments can you pass to main?
//As many as you wish to!
//• How do you access them?
int main(int argc, char* argv[]) {
  for (int i = 0; i < argc; i++){
    printf("argument %d is %s\n", i, argv[i]);
  }
}

// Back to : Copy files program -- 1

int main() {
  FILE *fin, *fout;
  fin = fopen("Lab8.txt", "r");
  fout = fopen("copy-of-Lab8.txt", "w");
  if (fin == NULL || fout == NULL) {
    printf("Error opening input or output file. Exiting..\n");
    return 0;
  }
  char buffer[1000];
  while (fgets(buffer, 1000, fin) != NULL) {
    fputs(buffer, fout);
  }
  fclose(fin);
  fclose(fout);
}

//Back to : Copy files program

int main(int argc, char* argv[]) {
  FILE *fin, *fout;
  if (argc < 3) {
    printf("Usage: mycopy <source-file> <destination-file>\n");
    return 0;
  }
  fin = fopen(argv[1], "r");
  fout = fopen(argv[2], "w");
  if (fin == NULL || fout == NULL) {
    printf("Error opening input or output file. Exiting..\n");
    return 0;
  }
  char buffer[1000];
  while (fgets(buffer, 1000, fin) != NULL) {
  fputs(buffer, fout);
  }
  fclose(fin);
  fclose(fout)
//Modify this program to take command line arguments

//Learnings from this lecture
//• A C program has 3 streams available for it :
//stdin, stdout, stderr
//• We can open files for reading and writing using the fopen
//command.
//• The fgets and fputs functions allow us to read and write to
//streams line by line.
//• main can have arguments and these can be very helpful
