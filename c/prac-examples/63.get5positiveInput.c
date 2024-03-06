#include <stdio.h>
void main()
{
  int sum = 0, num = 0, i = 0;
  while(i < 5) {
    while(num <= 0) {
      printf("input positive numb (#%d ..)", i + 1);
      scanf("%d", &num);
    }
    sum += num;
    num = 0;
    i++;
  }
  printf("total: %d \n", sum);
}