#include <stdio.h>

void swap(int *x, int *y);

void main()
{
  int a = 3, b = 5;
  printf("호출 전 a = %d, b = %d \n", a, b);
  swap(&a, &b);

  printf("호출 후 a = %d, b = %d \n", a, b);
}

void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;

  printf("함수 내 x = %d, y = %d \n", *x, *y);
}

// 호출 전 a = 3, b = 5 
// 함수 내 x = 5, y = 3 
// 호출 후 a = 5, b = 3 