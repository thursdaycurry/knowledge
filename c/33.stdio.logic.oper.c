#include <stdio.h>
void main() {
  int a = 4, b = 7, c, d, e;
  
  c = a > 2 && b <= 7; // true && true -> 1
  printf("c = %d \n", c);

  d = a < 2 || b <= 7; // false || true -> 1
  printf("d = %d \n", d);

  e = !a; // false -> 0
  printf("e = %d \n", e);
}

// c = 1 
// d = 1 
// e = 0 