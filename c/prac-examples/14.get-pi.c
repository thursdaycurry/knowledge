#include <stdio.h>
#define IN "원의 반지름은 100. \n"
#define PI 3.1415926535
#define AREA(X) (PI * X * X)
#define OUT printf("원 면적 구한 뒤 프로그램 종료! \n")

void main() {
  printf("%s \n", IN);
  printf("원 면적은 %10.5f\n", AREA(100));
  OUT;
}

// 원의 반지름은 100. 
 
// 원 면적은 31415.92653
// 원 면적 구한 뒤 프로그램 종료! 