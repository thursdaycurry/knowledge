#include <stdio.h>
void static_test();

void main()
{
  int i = 0;
  while(i < 5) {
    static_test();
    i++;
  }
}

void static_test() {
  static int s; // 정적변수 s 0으로 자동 초기화. 이후 재호출 시 초기화 안됨
  // 자바스크립트의 경우 바깥 스코프에서 변수를 선언해야 정적 함수를 쓸 수 있는데, C에서는 함수 내부에서 바로 정적 함수를 쓸 수 있다는 점!

  auto int a = 0; // 자동변수. 블록에서 벗어나면 메모리 스택에서 휘발됨
  ++s;
  ++a;
  printf("static s = %d, auto a = %d \n", s, a);
}

// static s = 1, auto a = 1 
// static s = 2, auto a = 1 
// static s = 3, auto a = 1 
// static s = 4, auto a = 1 
// static s = 5, auto a = 1 

