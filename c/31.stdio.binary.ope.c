#include <stdio.h>
void main()
{
  int x, y;
  x = 10;
  y = 3;
  printf("x + y = %d \n", x + y);
  printf("x / y = %d \n", x / y);
  printf("x %% y = %d \n", x % y);
  printf("y %% x = %d \n", y % x);

  int a, b, c;
  a = b = c = 0;
  a = ++b + ++c;
  printf("a = ++b + ++c ==> a = %d, b = %d, c = %d \n", a, b, c);

  a = b++ + c++;
  printf("a = b++ + c++ ==> a = %d, b = %d, c = %d \n ", a, b, c);

  a = b-- + --c;
  printf("a = b-- + --c ==> a = %d, b = %d, c = %d \n ", a, b, c);
}

// x + y = 13 
// x / y = 3 
// x % y = 1 
// y % x = 3 

// a = ++b + ++c ==> a = 2, b = 1, c = 1 
// a = b++ + c++ ==> a = 2, b = 2, c = 2 
// a = b-- + --c ==> a = 3, b = 1, c = 1 