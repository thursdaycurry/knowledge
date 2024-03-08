#include <stdio.h>

unsigned int f, x;
unsigned int factorial(unsigned int a);

void main()
{
  puts("Enger an integer value btw 1 - 8: ");
  scanf("%d", &x);
  if(x > 8 || x < 1) {
    printf("only values from 1 to 8 are acceptable!");
  }
  else {
    f = factorial(x);
    printf("%u factorial equals %u \n", x, f);
  }
}

unsigned int factorial(unsigned int a) {
  if ( a== 1) {
    return 1;
  } else {
    a *= factorial(a - 1);
    return a;
  }
}

// Enger an integer value btw 1 - 8: 
// 6
// 6 factorial equals 720 