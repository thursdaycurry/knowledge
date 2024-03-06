#include <stdio.h>

void main()
{
  int score;

  printf("Please input your score: ");
  scanf("%d", &score);

  if (score >= 90)
    printf("%d A \n", score);
  else if (score >= 80)
    printf("%d B \n", score);
  else if (score >= 70)
    printf("%d C \n", score);
  else if (score >= 60)
    printf("%d D \n", score);
  else
    printf("%d F \n", score);
}

// Please input your score: 88
// 88 B