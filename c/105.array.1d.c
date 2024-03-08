#include <stdio.h>
void main()
{
  int array1[4] = {10, 20, 30, 40}; // int가 4개 들어갈 수 있는 array1 배열을 만들어
  int array2[] = {10, 20, 30, 40}; // 배열 크기는 알아서 만들어줘.
  int array3[4] = {10, 20}; //10, 20을 넣고 나머지는 0으로 초기화
  int array4[4] = {0}; // 모두 0으로 초기화;
  int i;

  for (i = 0; i <= 3; i++) {
    printf("array1[%d] = %d \t", i, array1[i]);
  }
  printf("\n");

  for (i = 0; i <= 3; i++) {
    printf("array2[%d] = %d \t", i, array2[i]);
  }
  printf("\n");

for (i = 0; i <= 3; i++) {
    printf("array3[%d] = %d \t", i, array3[i]);
  }
  printf("\n");

for (i = 0; i <= 3; i++) {
    printf("array4[%d] = %d \t", i, array4[i]);
  }
  printf("\n");
}

// array1[0] = 10  array1[1] = 20  array1[2] = 30  array1[3] = 40 
// array2[0] = 10  array2[1] = 20  array2[2] = 30  array2[3] = 40 
// array3[0] = 10  array3[1] = 20  array3[2] = 0   array3[3] = 0 
// array4[0] = 0   array4[1] = 0   array4[2] = 0   array4[3] = 0 