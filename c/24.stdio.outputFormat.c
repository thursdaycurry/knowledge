#include <stdio.h>
void main() {
  printf("%%d : %d \n", 2147483647);
  printf("%%ld : %ld \n", 2147483647);
  printf("%%lld : %lld \n", 2147483647);
  printf("%%u : %u \n", 2147483647);
  printf("%%o : %o \n", 2147483647);
  printf("%%x : %x \n", 2147483647);
  printf("%%X : %X \n", 2147483647);
  printf("%%f : %f \n", 1234.5678);
  printf("%%lf : %lf \n", 1234.5678);
  printf("%%e : %e \n", 1234.5678);
  printf("%%c : %c \n", 'a');
  printf("%%s : %s \n", "knou");

  printf("test \n", 123, 22);
  printf("test %d \n");
  printf("test %d %d \n");
}