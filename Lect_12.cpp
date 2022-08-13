// More loop constructs for 
// modiying flow control via break and continue.
// Nested loops.
// simple method to compute GCD.
// Given positive intgers x and y, output the GCD of x and y.
int x,y,z;
scanf("%d",&x); scanf("%d",&y);
if(x<y){
  z = x;
}
else{
  z = y;
}
//z contains min of x and y
int i , gcd;
gcd = 1 , i  =1;
while(i<=z){
  if((x%i==0) && (y%i == 0)){
    gcd = i;
  }
  i++
}
printf("gcd of input numbers in %d\n",gcd);
// our goal: use for loop for the same program.


// for construct
//syntax 
// for(stmt1;expr;stmt2){
//       statements;
//}
//semantics 
//1.execute stmt1.
//2 if expr is true , execute statements. execute stmt2 . goto step 2.
//3 if expr is fale , exit loop.
// if expr is false , exit loop.
// expr must be be changedto ensure that it is not an infinite loop.


// simple method to compute GCD: using the loop.
// Given positive intgers x and y , output the gcd of x and y.
// z contains min of x and y
int gcd = 1;
for(int i =1; i <=z;i++){
  if((x%i == 0)&&(y%i==0)){
    gcd = i
  }
}
// at the end of the body stmt 2 (i++) is executed.
// can replace i ++ using any of:
// can replace i ++ using any of:
// ++i;
// i = i+1;
// i +=1;
// stmt 1 , expr, stmt2 are all optional!
// if expr is empty it is assumed to be true.

// euclid's method to ccompute GCD
// using while construct
// assume x >= y.
while(x%y!=0){
  x = %y;
  temp = x; x = y; y = temp;
}
printf("gcd of input numbers in %d \n",y);
// using for construct
for(;x%y!=0;){
  x = x%y;
  temp = x; x = y; y = temp;
}
printf("gcd of input number is %d \n",y);
