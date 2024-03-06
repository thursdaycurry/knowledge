#include <stdio.h>
void main()
{
  int i, n, c = 'A';
  while (1) {
    printf("Count...?: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
      printf("%c", c);
      if ( c== 'Q')
        goto end;
      c++;
    }
    printf("\n=================\n");
  }
  end:
    printf("\n\n Done...");
  }