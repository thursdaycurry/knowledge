#include <stdio.h>
#include <ctype.h>

void main()
{
  char ch, ch1, ch2;
  printf("Please input character \n");
  ch = getchar();
  if (isupper(ch)) {
    printf("%c is a uppercase \n", ch);
    ch1 = tolower(ch);
    printf("%c is a lower case now \n", ch1);
  } else if(islower(ch)) {
    printf("%c is a lower case \n", ch);
    ch2 = toupper(ch);
    printf("%c is a uppercase now \n", ch2);
  } else {
    printf("Please input alphabet...");
  }
}