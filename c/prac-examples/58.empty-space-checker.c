#include <stdio.h>

void main()
{
  char c;
  while ((c = getchar()) == '  ');

  printf("드디어 정상적. 입력값 : '%c'", c);
}