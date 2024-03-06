#include <stdio.h>

void main()
{
  int num, sum = 0;
  while(1) {
    printf("num(end..? : 0)");
    scanf("%d", &num);
    if (num == 0)
      break;
    sum += num;
  }
  printf("sum = %d", sum);
}