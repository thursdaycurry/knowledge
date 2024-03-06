#include <stdio.h>

void main()
{
  int count, tmp, total = 0;
  for (count = 1; count <= 5; count++) {
    printf("%d 번째 정수값 입력하기 : ", count);
    scanf("%d", &tmp);
    total += tmp;
  }
  printf("sum of 5 ints are... : %d \n", total);
}