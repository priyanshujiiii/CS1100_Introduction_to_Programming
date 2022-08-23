//  Structures and Pointers

//Define Appropriate Structures and Functions
#include<stdio.h>
struct point {
  int xCoord;
  int yCoord;
};
struct rectangle {
  struct point lowerLeft;
  struct point upperRight;
};
int IsInside(struct rectangle, struct point);
void getPoint(struct point);
// above approach doesnt work -- call by value.
struct point getPoint();
// this approach works but copies a lot of data.

//Structures can be returned from functions

struct point {
  int xCoord; int yCoord;
};
struct rectangle {
  struct point lowerLeft; struct point upperRight;
};
struct point getPoint() {
  struct point localP1;
  scanf("%d", &localP1.xCoord);
  scanf("%d", &localP1.yCoord);
  return localP1;
}
void main () {
  struct point P1;
  P1 = getPoint();
  printf("%d %d\n", P1.xCoord, P1.yCoord);
}

//Pointers to structures can be returned too!

// structure definitions as earlier.
struct point* getPoint() {
  struct point localP1;
  scanf("%d", &localP1.xCoord);
  scanf("%d", &localP1.yCoord);
  return &localP1;
}
void main () {
  struct point *P1;
  P1 = getPoint();
  printf("%d %d\n", P1->xCoord, P1->yCoord);
}
//This program is incorrect. It returns the address of a local variable

#include<stdlib.h>
// structure definitions as earlier.
struct point* getPoint() {
  struct point *ptr;
  ptr = (struct point *) malloc (sizeof (struct point));
  scanf("%d", &((*ptr).xCoord));
  // scanf("%d", &(ptr->xCoord));
  scanf("%d", &((*ptr).yCoord));
  return ptr;
}
void main () {
  struct point *P1;
  P1 = getPoint();
  printf("%d %d\n", P1->xCoord, P1->yCoord);
}
//Observe the use of malloc and now there is no copy happening!


// Members of a structure: what is allowed?
// A structure can contain as members:
// • Basic data types – for eg. int, float, char
// • Arrays – for eg. char[20], int[30]
// • Other structures – for eg. struct point
// • Pointer to basic data types – for eg. int *, float *
// • Pointer to other structures – for eg. struct point *
// • Pointer to the same structure!
// However, a structure CANNOT contain a structure of its own type
// as a member

// A dynamically growing and shrinking set
// Suppose we want to maintain students registered in a class.
// • Say we maintain an array of size 100. Each array element is of
// type struct student.
// • What if class size turns to be 120? We can always allocate
// memory and copy data into another array of size 120.
// • Lot of copying is happening. Maintain array of pointers. Yet
// 100 pointers have to be copied.
// • What if lot of students drop the course? Delete those entries
// by setting the pointers as NULL.
// Instead we will use a linked list to store the data
