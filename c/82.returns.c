#include <stdio.h>

int max(int x, int y);
int min(int x, int y);
void main() {
  int i, j;
  printf("정수 2개 입력 : ");
  scanf("%d %d", &i, &j);

  printf("max(%d, %d) = %d \n", i, j, max(i, j));
  printf("min(%d, %d) = %d \n", i, j, min(i, j));

}

int max(int x, int y) {
  return (x > y ? x : y);
}

int min(int x, int y) {
  if (x > y) {
    return y;
  } else {
    return x;
  }
}

// 정수 2개 입력 : 34 99
// max(34, 99) = 99 
// min(34, 99) = 34 