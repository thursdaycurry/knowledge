#include <stdio.h>
void main() {
  // short int의 범위는 -32768 ~ 32767
  short int num1, num2;
  
  // 범위를 넘어섰기 때문에 다음 반대편으로 돌아와서 음양이 바뀜
  num1 = 32767 + 1; // to be 32768 -> as is -32768
  num2 = -32768 - 1; // to be -32769 -> as is 32767

  printf("num1 = %d\n", num1);
  printf("num2 = %d\n", num2);
}