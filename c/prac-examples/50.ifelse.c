#include <stdio.h>
void main()
{
  int a;
  printf("Please input integer");
  scanf("%d", &a);
  if ( a % 2 == 0)
  {
    printf("input integer %d \n", a);
    printf("This is even. \n");
  }
  else
  {
    printf("input integer %d \n", a);
    printf("This is odd. \n");
  }
}