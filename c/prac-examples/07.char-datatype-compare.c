#include <stdio.h>

void main() {
  char ch1;
  char ch2;
  ch1 = 0;
  ch2 = '0';

  printf("ch1의 ASCII 코드값 = %d, ASCII 문자 = %c \n", ch1, ch1);
  printf("ch2의 ASCII 코드값 = %d, ASCII 문자 = %c \n", ch2, ch2);
}

// ch1의 ASCII 코드값 = 0, ASCII 문자 =  // ASCII 코드값 0은 null이기 때문에 표시 안됨
// ch2의 ASCII 코드값 = 48, ASCII 문자 = 0  // ASCII 코드값 48 출력