#include <stdio.h>
void main() {
  enum day1
  {
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
  } d1;

enum day2
  {
    sun = 2,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
  } d2;

d1 = WED;
d2 = wed;

printf("Enum d1 value : %d \n", d1);
printf("Enum d2 value : %d \n", d2);
}

// Enum d1 value : 3 
// Enum d2 value : 5 