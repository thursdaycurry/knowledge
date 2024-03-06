#include <stdio.h>
void main() {
  char ch;
  int Nchar = 0, Nnum = 0, Nblank = 0;
  printf("Please input string... :");
  while((ch = getchar()) != '\n') {
    if(ch >= '0' && ch <= '9') {
      ++Nnum;
      
    }
    else if (ch == ' ' || ch == '\t')
    {
      ++Nblank;
      
    }
    else
    {
      ++Nchar;
      
    }
  }

  printf("\n ***** Result ***** \n");
  printf("number = %d \n", Nnum);
  printf("blank = %d \n", Nblank);
  printf("char = %d \n", Nchar);
}