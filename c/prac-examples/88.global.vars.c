#include <stdio.h>
void fcn1();
int x; // 값은 0으로 초기화됨

void main()
{
  printf("1) x = %d \n", x);
  fcn1();
  printf("2) x = %d \n", x);
}

void fcn1() {
  x++;
}

// 1) x = 0 
// 2) x = 1 