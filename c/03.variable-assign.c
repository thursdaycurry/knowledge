#include <stdio.h>

void main() {
  int i, sum;
  for (i = 1; i <= 10;i++) 
    sum = sum + i;
  printf("sum from 1 to 10 is %d\n", sum);
}