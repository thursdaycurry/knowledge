#include <stdio.h>
int score_sum(int gr[], int); // assign function prototype
 
void main()
{
  int score[5] = {10, 20, 30, 40, 50};
  int sum;
  sum = score_sum(score, 5);

  printf("sum = %d \n", sum);
  printf("score[0] = %d \n", score[0]);
  printf("score[1] = %d \n", score[1]);
}

int score_sum(int gr[], int size) {
  int result = 0;
  int i;

  for (i = 0; i <= size; i++) {
    result += gr[i];
  }
  gr[0] = 0;

  return result;
}