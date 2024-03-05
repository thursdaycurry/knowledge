#include <stdio.h>
void main()
{
  int i;
  printf("give me int: ");
  scanf("%d", &i);
  printf("%d \n", !(i % 2) ? 1 : 0);
}