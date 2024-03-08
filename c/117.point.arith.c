#include <stdio.h>
void main()
{
  int *p, a[] = {10, 20, 30, 40, 50};
  p = &a[0];

  printf("*p\t== %d \n", *p);
  printf("*p++\t== %d \n", *p++);
  printf("*++p\t== %d \n", *++p);

  p = p + 2; // 포인터 p 주소 2(8byte) 증가
  printf("*p\t== %d \n", *p);
  printf("a[2]\t== %d \n", a[2]);
  printf("*p + 2\t== %d \n", *p + 2);
}

/**

*p      == 10 
*p++    == 10 
*++p    == 30 
*p      == 50 
a[2]    == 30 
*p + 2  == 52 
 
*/