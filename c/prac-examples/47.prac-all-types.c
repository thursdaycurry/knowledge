#include <stdio.h>
void main()
{
  int i = 873;
  float f = 123.4567;
  char s[] = "Happy";

  printf("int tye: \n");
  printf("\t %04d \n \t %09d \n\n", i, i);

  printf("float type: \n");
  printf("\t %.3f \n \t %.1e \n\n", f, f);

  printf("string type: \n");
  printf("\t %.11s \n", s);
}