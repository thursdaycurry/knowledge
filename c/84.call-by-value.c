#include <stdio.h>
void swap(int x, int y);
void main()
{
  int a = 3, b = 5; // argument
  printf("호출 전 a = %d, b = %d \n", a, b);
  swap(a, b); // parameter
  printf("호출 후 a = %d, b = %d \n", a, b);

  // call-by-value로 매개변수를 전달할 시, argument와 parameter가 저장되는 메모리는 다르다
}

void swap(int x, int y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
  printf("함수 내 x = %d, y = %d \n", x, y);
}

// 호출 전 a = 3, b = 5 
// 함수 내 x = 5, y = 3 
// 호출 후 a = 3, b = 5 