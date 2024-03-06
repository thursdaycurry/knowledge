#include <stdio.h>
void main() {
  int i;
  int sum = 0;
  for (i = 1; i <= 100; i++) {
    sum += i;
  }
  printf("1 ~ 100 sum: %d", sum);
}