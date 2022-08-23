// Pointers and malloc

// Using pointers - Example#1
// Goal: we wish to store the names of three students say - "sai",
// "Narasimhna","lakshmi" in some appropriate data-type.
//>> what data-structure will you use?
//>> HOW ABOUT CHAR nMES[3][11]?
//>> USE char* Nmes[3]
//>>>> "names" is an array of pointers to characters.
#include<stdio.h>
#include<string,h>
int main(){
  char *Names[3] = {"Sai", "Narashima","Lakshmi"};
  int i ;
  for(i=0;i<3;i++){
    printf("%c\n",Names[i]);
  }
}

// An array  of pointers - Another program

main(){
  char *Names[3]; char temp[100];int i;

  for(i=o;i<3;i++){
    scanf("%s",temp);
    Nmaes[i] = temp;
    printf("%s\n",Names[i]);
  }
  for(i=o;i<3;i++){
    printf("%s\n",Names[i]);
  }
}


// Allocating memory uisng malloc
//>> mallco = memory allocator - is a function that allocates memory to the program and returns
//   a pointer th that memory
//>> 
int *ptr;
ptr = (int*) malloc(size of the memory required);
//>> The input to malloc is size of the memory required.
//>> Mallco returns a pointer to the memory allocated - the type of the pointor is void(void*).
//>> Note the typecasting into(int*).
//>> Memory obtained using malloc is destroyed only when it is explicitly freed or the program terminates.
//>> The is unlike variables which are unavailable outside their scope.
#include<stdlib.h>
int main(){
  char *Names[3]; char temp[100];int i;
  for(i=0,i<3,i++){
    scanf("%s",temp);
    Names[i]=(char *)malloc(strlen(temp)+1));
    strcpy(Names[i],temp);
    printf("%s\n", Names[i]);
  }
  for(i=0;i<3;i++){
    printf("%s\n",Names[i]);
  }
}
    
