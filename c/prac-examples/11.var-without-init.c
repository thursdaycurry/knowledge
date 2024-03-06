#include <stdio.h>
void main() {
  int i;
  // int sum = 0;
  int sum; // sum에 초기값을 넣어주지 않으면 garbage value 때문에 엉뚱한 결과값이 나온다
  
  for (i = 1; i <= 10; i++)
    sum = sum + 1;
  printf("sum from 1 till 10 is = %d \n", sum);
}