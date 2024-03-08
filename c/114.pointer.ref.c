#include <stdio.h>
void main()
{
  int *p, i = 3, j;
  
  p = &i; // i의 주소를 -> p에 저장
  j = *p; // i의 값을 j에 저장
  j++; // j ++

  printf("*p = %d \n", *p);
  printf("p = %x \n", p);
  printf("j = %d \n", j);
}

// *p = 3 // i의 주소에 저장된 값
// p = 6eea6db4  // p는 i의 주소값
// j = 4  