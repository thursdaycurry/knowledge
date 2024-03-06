#include <stdio.h>
void main() {
  char var = 'A';
  putchar(var);
  putchar(var + 1);
  putchar('\n');
  putchar('K');
  putchar('K' + 2);
  putchar('\007'); // \007 = \a escape
}ㅌ 

// AB
// KM%