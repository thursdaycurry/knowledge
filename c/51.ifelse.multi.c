#include <stdio.h>

void main()
{
  char you[40];
  
  scanf("%s", &you);

  if(you)
    printf("TRUE>...");
  else
    printf("FALSE>>>");
}