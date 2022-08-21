// Call by values for all data types in C
// int , char , float
//>> CHANGES MADE TO THE PARAMETERS PASSEDDO NOT GET REFLECTED IN THE CALLER.
//>> swap function for intgers does nt work!
//>> we need pointers to write a correct swap function.

// arrays.
//>> Recall: array name is address of the first array location.
//>> Modification made to array elements inside the function are reflected in the caller.
//>> string modification functions rely on this.

// Global vs local variable.
//>> Global variable
//>>>> Lifetime: complete program.
//>>>> Scope: Anywhere in the program including all functions unless masked by a local variable of the same name.
int g = 10;
int fun(int x ){
  int g = 20;
  printf("%d\n",g);
}
//>> Local variable:
//>>>> Lifetime and scope:
//     Block or function.
char* mycopy(char input[]){
  char str[100];
  // code to copy
  // input to str
  return str;
}
//>>>> this is incorrect.
//>>>> str is local to mycopy.
//>>>> its address should
//>>>> not be passed.


