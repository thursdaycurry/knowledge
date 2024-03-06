#include <stdio.h>
void main() {
  char ch;
  int in;
  ch = in = 'A';

  printf("ch = %d \n", ch); 
  printf("in = %d \n", in);
  printf("-------- \n");

  ch = in = 100;
  printf("ch = %c \n", ch);
  printf("in = %c \n", in);
}

// ch = 65 
// in = A 
// -------- 
// ch = d 
// in = d 