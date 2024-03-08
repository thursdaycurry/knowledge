#include <stdio.h>

// assign func here before call
int sum(int a, int b);
void main() {
  printf("Sum : %d", sum(3, 10));
}

int sum(int a, int b) {
  return a + b;
}