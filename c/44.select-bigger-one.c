#include <stdio.h>

void main() {

  int a, b, c;

  printf("Please put two int: \n");
  scanf("%d", &a);
  
  printf("Please put two int: \n");
  scanf("%d", &b);

  c = a > b ? a : b;

  printf("a(%d)와 b(%d) 중 %d가 더 큽니다", a, b, c);
}