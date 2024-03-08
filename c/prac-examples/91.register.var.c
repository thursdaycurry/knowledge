#include <stdio.h>
void main()
{
  
  register int num1 = 10; // CPU 레지스터에 저장
  register long long int num2 = 20;

  // printf("num 1 size = %d, num2 size = %d \n", sizeof(num1), sizeof(num2));
  // printf("%p, %p \n", &num1, &num2);
  // 레지스터에 저장되면, 주소가 없으므로 컴파일 에러 발생

  num2 = 0;
  for (num1 = 0; num1 <= 10; ++num1)
    num2 += num1;
  num1--;

  printf("num1 = %d, num2 = %lld", num1, num2);
}