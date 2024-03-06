#include <stdio.h>
#include <stdlib.h>

void main()
{
  unsigned secret_num, guess_num, k, times = 1;
  unsigned again = 1, win = 0;
  char replay;

  printf("** Game start! ** \n");
  while(again) {

    printf("\n %u 번째 게임 \n", times++);

    secret_num = rand(); // 0 ~ 2147483647 사이 중 하나 선택 -> 100으로 나눈 나머지니까 -> 0~99 사이 값
    printf("rand() : %d", secret_num);
    printf("secret_num is : %d \n", secret_num);
    win = 0;
    k = 1;
    // k 기회
    while (k++ <= 7 ){
      printf("0 ~ 99 입력하세요 \n")
      scanf("%u", &guess_num);
      if (guess_num == secret_num) {
        win = 1;
        k = 8;
      }
      else if (guess_num < secret_num) {
        printf("%u 보다 높은 수.. \n", guess_num);
      } else {
        printf("%u 보다 작은 수.. \n", guess_num);
      }
    }
    if (win) {
      printf(" you win !!! \n");
    } else {
      printf(" you lose.... answer was .. %u", secret_num);
    }

    printf("Play again?");
    getchar();

    replay = getchar();
    if (!(replay == 'y' || again =='yY')) {
      again = 0;
    }
  }
  printf("==================");
}