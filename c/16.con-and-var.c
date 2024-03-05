#include <stdio.h>
#define PI 3.141592

const int K = 10;

void main() {
  double a;
  a = K + PI;
  // K = 20; // 상수 변경 시 에러 발생
  printf("%f \n", a); // 13.141592 

  int x, y, z;
  x = 10;
  y = 20;
  z = x + y;
  printf("%d\n", z); // 30
}