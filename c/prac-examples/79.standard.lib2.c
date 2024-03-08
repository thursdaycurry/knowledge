#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
  int i, alp = 0, no = 0, et = 0;
  char s[20];
  printf("please put chars..: ");
  scanf("%s", s);
  for (i = 0; i < strlen(s); i++){
    if (isalpha(s[i])) {
      alp++;
    }
    else if (isdigit(s[i]))
    {
      no++;
    }
    else
    {
      et++;
    }
  }
  printf("alphabet = %d \n", alp);
  printf("number = %d \n", no);
  printf("et = %d \n", et);
}

// please put chars..: Johnsmith123009...
// alphabet = 9 
// number = 6 
// et = 3 