#include <stdio.h>
void main()
{
  int i, sum = 0;
  for (i = 1; i <= 10; i++) {
    sum += i;
    printf("%d번째 실행 : sum = %d \n", i, sum);
  }
  printf("1 ~ %d까지 합 = %d\n", i - 1, sum);
}

// 1번째 실행 : sum = 1 
// 2번째 실행 : sum = 3 
// 3번째 실행 : sum = 6 
// 4번째 실행 : sum = 10 
// 5번째 실행 : sum = 15 
// 6번째 실행 : sum = 21 
// 7번째 실행 : sum = 28 
// 8번째 실행 : sum = 36 
// 9번째 실행 : sum = 45 
// 10번째 실행 : sum = 55 
// 1 ~ 10까지 합 = 55