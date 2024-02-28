#include <stdio.h>
#define FZ_PT 32.0 // set constant
#define S_FACTOR (5.0/9.0) // set constant

void main() {
  float fa, ce; // set float variable as 'fa', 'ce'
  printf("Enter Fahrenheit temperature : ");
  scanf("%f", &fa);
  ce = (fa - FZ_PT) * S_FACTOR;
  printf("Celsius equivalent : %.1f\n", ce);
}

// Enter Fahrenheit temperature : 30
// Celsius equivalent : -1.1