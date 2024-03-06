#include <stdio.h>
void main()
{
  int a = 4, b, c, d;
  b = a > 2; // true -> 1
  printf("b = %d \n", b);

  c = a < 2; // false -> 0
  printf("c = %d \n", c);

  d = a == 4; // true -> 1
  printf("d = %d \n", d);
}

// b = 1 
// c = 0 
// d = 1 