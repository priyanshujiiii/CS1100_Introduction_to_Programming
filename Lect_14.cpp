// More loop constructs for , do-while
// modifying flow control via break and continue.
// nested loops.


// A note aon design  finding prime factors and their powers
// Given n, test if it is prime. If not prime , print its prime factors with corresponding powers.
// idea
// assume n is not prime.
// for i = 2 to  n-1
  // detect if it is prime.
  // if i is prime , find the largest power of i which divides n.
  // print i and the corresponding power.
//

// Idea 2 is simpler (to code) needs thinking begore coding.
//spend at least 5 minutes thinking on how to  code.

// finding prime factorization..

int n ; scanf("%d%",7n);
for (int i =2; i<=n;i++){
  int count = 0;
  while(n%i==0){
    count ++ ; n = n/i;
  }
  if (count >0){
    printf("%d %d\n",i, count);
  }
}
// try coding with ideal prsented yesterday.
// code will be invariably long. cluttered..
// can be simplified by use of functions like isPrime(x)

// do while construct
// syntax
do{
  // statements.
  }
while(expr);

// semantics
//1) execute statement
//2) if expr is true , goto step
  //1 else exit loop.
// expr must be chsasnged by statement.

// euclid;s method to compute GCD

// using while construct.
// assume  x >= y.
while(x%y !=0){
  x = x%y;
  temp = x; x = y; y = temp;
}
printf("gcd of input numbers is %d \n",y);

// using do while construct
// sassume x >=y.
do{
  x = x%y;
  temp = x; x = y; y = temp;
}
while (x%y !=0);
printf("gcd of input numbers is %d \n",y);
  

  
