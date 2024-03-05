#include <stdio.h>
int a = 200;

void func() {
  int a = 1000;
  printf("local variable has this value: %d\n", a);
}

void main()
{
  func();

  printf("global variable has this value: %d\n", a);
}

// local variable has this value: 1000
// global variable has this value: 200