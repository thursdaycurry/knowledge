#include <stdio.h>

void main()
{
  int i, sum = 0;
  for (i = 0; i <= 100; i++) {
    if(i %2 == 1) {
      // if(i %2) {  // also possible because return value 1 represents truthy value.
      sum += i;
    }
  }

  printf("sum of odd between 1- 100 is : %d", sum);
}