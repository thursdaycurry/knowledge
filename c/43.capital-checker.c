#include <stdio.h>
void main()
{
  char ch;
  int j;

  printf("Put char.. \n");
  scanf("%c", &ch);
  j = (ch >= 'a' && ch <= 'z');

  printf("Result : %d \n", j);
}