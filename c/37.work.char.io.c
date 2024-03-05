#include <stdio.h>

void main()
{

  char c;
  char d;
  printf("get char \n");
  c = getchar();
  d = c - 32;
  
  putchar(c);
  printf("\n");
  putchar(d);
}

// get char 
// a
// aA%  