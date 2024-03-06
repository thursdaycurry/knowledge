#include <stdio.h>

void main()
{
  int i, sum = 0;

  for (i = 1; i <= 100; i = i+2)
    sum += i;

  printf("sum of odd between 1-100 is : %d", sum);
}