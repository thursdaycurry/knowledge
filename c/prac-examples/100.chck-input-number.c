#include <stdio.h>
#include <ctype.h>

void main()
{
  char ch;
  ch = getchar();
  if (isdigit(ch)) {
    printf("%c is a number", ch);
  } else {
    printf("%c is NOT a number", ch);
  }
}