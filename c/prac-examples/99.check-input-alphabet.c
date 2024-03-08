#include <stdio.h>
#include <ctype.h>

void main()
{
  char ch;
  printf("input char or number");
  ch = getchar();
  if (isalpha(ch)) {
    printf("%c is alphabet character \n", ch);
  } else {
    printf("%c is not alpha character \n", ch);
  }
}