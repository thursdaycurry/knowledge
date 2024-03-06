#include <stdio.h>
void main() {
  static char a[31] = "KOREA NATIONAL";
  int i, counter;
  counter = 0;

  for (i = 0; i <= 29; i++) {
    if (a[i] == 'O') {
      counter++;
    }
  }
  printf("How many times 'O' is used: %d \n", counter);
}