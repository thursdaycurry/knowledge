#include <stdio.h> // import standard input/output header file
#pragma warning(disable:4996)

int a, b, c;
int product(int x, int y);

void main() {
  printf("Enter a number between 1 and 100: ");
  scanf("%d", &a);

  printf("Enter a number bewteen 1 and 100: ");
  scanf("%d", &b);

  c = product(a, b);
  printf("%d * %d = %d \n", a, b, c);
}

int product(int x, int y) {
  return x * y;
}

// Enter a number between 1 and 100: 20
// Enter a number bewteen 1 and 100: 30
// 20 * 30 = 600 