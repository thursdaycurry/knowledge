#include <stdio.h>

void main()
{
  unsigned long int f;
  int n = 0;
  printf("Put number..: \n");
  scanf("%d", &n);
  f = n;
  printf("%d!=", n);

  if(n < 0) {
    goto END;
  }

  while(--n) {
    f *= n;
  }
  printf("%lu \n", f);

  END:
    printf("You sould put number which is greater or equal than 0");
}