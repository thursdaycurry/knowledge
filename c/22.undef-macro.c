#include <stdio.h>

#define SIZE 100

// SIZE 정의되어 있는 경우, 매크로 해제
#if defined SIZE 
#undef SIZE

// 매크로 설정
#define SIZE 200

#else
#define SIZE 300
#endif

void main()
{
  printf("SIZE: %d\n", SIZE);
}

// SIZE: 200