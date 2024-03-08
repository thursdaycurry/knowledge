#include <stdio.h>
#include <math.h>
void main()
{
  double val = -1.0;
  do {
    printf("\n");
    printf("sine of %f is %f \n", val, sin(val));
    printf("cosine of %f is %f \n", val, cos(val));
    printf("tangent of %f is %f \n", val, tan(val));
    val++;
  } while (val <= 1.0);
}

// sine of -1.000000 is -0.841471 
// cosine of -1.000000 is 0.540302 
// tangent of -1.000000 is -1.557408 

// sine of 0.000000 is 0.000000 
// cosine of 0.000000 is 1.000000 
// tangent of 0.000000 is 0.000000 

// sine of 1.000000 is 0.841471 
// cosine of 1.000000 is 0.540302 
// tangent of 1.000000 is 1.557408 