#include <stdio.h>
#include <stdlib.h>

void main()
{
  int i, a;
  printf("input number:");
  scanf("%d", &a); // &주소 연산자. a의 주소를 줄게!

  srand(a);
  for (i = 1; i <= 5; i++) {
    printf("%d \n", rand());
  }
}