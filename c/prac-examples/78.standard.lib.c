#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
  double x = 12.34;
  int i = -5, j = 2;
  int a, b, c;
  a = ceil(x);
  b = floor(x);
  c = pow(4, j);

  printf("abs(-5) = %d \n", abs(i));
  printf("ceil(12.34) = %d \n", a);

  printf("cos(10) = %d \n", cos(10));
  printf("exp(2) = %.f \n", exp(j));
  printf("floor(12.34) = %d \n", b);
  printf("sqrt(2) = %5f \n", sqrt(j));
  printf("pow(4,2) = %d \n", c);
}

// abs(-5) = 5 
// ceil(12.34) = 13 
// cos(10) = -1995674849 
// exp(2) = 7 
// floor(12.34) = 12 
// sqrt(2) = 1.414214 
// pow(4,2) = 16 