#include <stdio.h>
void main()
{
  char *cp = "COMPUTER";

  int i = 0;
  do
  {
    printf("*(cp+%d) : %c \n", i, *(cp + i));
  } while (*(cp + i++) != '\0');
}

// *(cp+0) : C 
// *(cp+1) : O 
// *(cp+2) : M 
// *(cp+3) : P 
// *(cp+4) : U 
// *(cp+5) : T 
// *(cp+6) : E 
// *(cp+7) : R 
// *(cp+8) :  