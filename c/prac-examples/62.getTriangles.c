#include <stdio.h>

void main()
{
  int a, b, c, n;
  printf("maximum value = ? ");
  scanf("%d", &n);
  printf("A\tB\tC \n");

  for (a = 1; a <= n; a++ ) {
    for (b = 1; b <= n; b++) {
      for (c = 1; c <= n; c++) {
        if (a*a == b*b + c*c) {
          printf("%d\t%d\t%d\t \n", a, b, c);
        }
      }
    }
  }
}

// maximum value = ? 10
// A       B       C 
// 5       3       4        
// 5       4       3        
// 10      6       8        
// 10      8       6  