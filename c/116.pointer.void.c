#include <stdio.h>
void main()
{
  int a = 100;
  char b = 'b';
  void *p = NULL; // void형 포인터 선언 및 초기화
  p = (int *)&a;

  printf("p = %d \n", p); // ex)1799695804

  printf("*p = %d \n", *(int *)p);

  p = (char *)&b;
  printf("*p = %c \n", *(char *)p);
}