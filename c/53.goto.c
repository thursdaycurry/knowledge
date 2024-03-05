#include <stdio.h>
void main()
{
  int i;
  printf("input integer(1 ~ 10): ");
  scanf("%d", &i);

  if (i == 1)
    goto ONE;
  else if(i == 2)
    goto TWO;
  else
    goto EXIT;

  ONE:
    printf("You put 1..\n");
    goto EXIT;
  TWO:
    printf("You put 2..\n");
    goto EXIT;
  EXIT:
    printf("Exit....\n");
  }