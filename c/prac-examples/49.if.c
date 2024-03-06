#include <stdio.h>
void main() {
  int a;
  printf("put integer(1~200): ");
  scanf("%d", &a);
  if ( a < 100)
    printf("입력 변수가 100보다 작다. \n");
  printf("A = %d \n", a);
}