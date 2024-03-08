#include <stdio.h>
int change(int *); // 포인터 변수를 매개변수로 받는 함수 원형 선언

void main()
{
  int a = 10;
  int *p = &a;
  printf("함수 호출 이전 a : %d \n", a);

  change(p);

  printf("함수 호출 이후 a : %d \n", a);
}

int change(int *k)
{
  *k = *k + *k;
}