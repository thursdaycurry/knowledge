#include <stdio.h>
#include <string.h>
void main()
{
  int len;
  char s[50];
  strcpy(s, "COMPUTER SCIENCE"); // 문자열 복사
  printf("%s \n\n", s);
  len = strlen(s);
  printf("%d \n\n", len);
}