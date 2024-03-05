#include <stdio.h>
#define UNIV "HAPPYUNIV"
#define DEP "Department of Computer Science"

void main()
{
  char score;
  char name[20];

  printf("Please give me a name: ");
  gets(name);

  printf("Please give me score: ");
  score = getchar();
  printf("\n\n");

  puts(UNIV);
  puts(DEP);
  puts(name);
  printf("score : %c", score);
}


// HAPPYUNIV
// Department of Computer Science
// John
// score : A%  