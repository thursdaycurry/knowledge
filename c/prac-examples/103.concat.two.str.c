#include <stdio.h>
#include <string.h>

void main()
{
  char str1[20], str2[20];
  printf("please input two characters \n");

  scanf("%s", str1);
  scanf("%s", str2);

  strcat(str1, str2); // concat str2 to str1

  printf("%s concated str1 \n", str1);
  printf("%s just str2 \n", str2);
}