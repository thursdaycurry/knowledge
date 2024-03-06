#include <stdio.h>

#define MAX(x, y) x > y ? x : y
#define MIN(x, y) x < y ? x : y

void main()
{
  printf("최대값 10 vs 20 : %d\n", MAX(10, 20));
  printf("최소값 10 vs 20 : %d\n", MIN(10, 20));
}

// 최대값 10 vs 20 : 20
// 최소값 10 vs 20 : 10