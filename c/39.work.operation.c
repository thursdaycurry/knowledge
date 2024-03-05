#include <stdio.h>

void main()
{
  int a = 10;
  int b = 20;
  int c, d;

  c = a + b;
  printf("c =  %d\n", c);

  d = a > 5 && b < 10;
  printf("d = %d\n", d);

  if (a > b) {
    printf("a is bigger than b\n");
  } else {
    printf("a is smaller than b\n");
  }
}

// c =  30
// d = 0
// a is smaller than b