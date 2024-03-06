#include <stdio.h>
#define ADDR "서울 강남구"
#define TEL "1111-1111"
#define ADD(a, b) ((a + b))

void main() {
  printf("주소 : %s \n", ADDR);
  printf("전화번호 : %s \n", TEL);
  printf("1 + 1 ? %d \n", ADD(1, 1));
}

// 주소 : 서울 강남구 
// 전화번호 : 1111-1111 
// 1 + 1 ? 2 