#include <stdio.h>

void main()
{
  int a;
  printf("please input int");
  scanf("%d", &a);

  if (a%2 == 0)
    printf("%d is even\n", a);
  if (a%2 == 1)
    printf("%d is odd\n", a);
}