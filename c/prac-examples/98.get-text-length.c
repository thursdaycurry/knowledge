#include <stdio.h>
#include <string.h>

void main()
{
  char string[200];
  printf("input and press Enter \n");
  printf("If not, it will done");

  do
  {
    gets(string);
    if (strlen(string) == 0) {
      break;
    }
    printf("string length is %d", strlen(string));
  } while (1);
}