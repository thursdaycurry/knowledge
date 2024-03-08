// filename : 5-13.c

#include <stdio.h>
#pragma warning(disable:4996)
void extern_ex();
char s[100];

void main()
{
  printf("Please input string..");
  scanf("%s", s);
  printf("Inserted string %s is stored in global var s. \n", s);
  extern_ex();
}
