#include <stdio.h>
void main() {
  float a = 3.14;
  
  // sizeof()
  printf("int 형 크기 = %d바이트 \n", sizeof(int));
  printf("float 형 변수 a 크기 = %d바이트 \n", sizeof(a));

  // 자동 형변환
  int x = 3, y = 4;
  double z;
  z = x / y;
  printf("자동 형변환 x / y = %f \n", z);

  int d = 3, e = 4;
  double f;
  f = (double)d / e;
  printf("강제 형변환 d / e = %f \n", f);
}

// int 형 크기 = 4바이트 
// float 형 변수 a 크기 = 4바이트 
// 자동 형변환 x / y = 0.000000  // 정상적으로 출력이 안된다. 왜냐하면 연산 시 int로 설정되어 0 결과가 나오고, 0을 다시 double로 변환하여 0.0000..이 됨
// 강제 형변환 d / e = 0.750000 