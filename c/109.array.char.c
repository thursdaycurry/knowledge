#include <stdio.h>
void main()
{
  char name[] = "HONG GIL DONG";
  char adrs1[6] = {'S', 'E', 'O', 'U', 'L', '\0'};
  char adrs2[6] = {'S', 'E', 'O', 'U', 'L'};
  printf("name: %s \n", name);
  printf("adrs1: %s \n", adrs1);
  printf("adrs2: %s \n", adrs2);
  printf("adrs2 last: %c \n", adrs2[5]);
}

// name: HONG GIL DONG 
// adrs1: SEOUL 
// adrs2: SEOUL 
// adrs2 last:  