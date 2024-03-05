#include <stdio.h>
void main()
{
  char s1[ ] = "Computer";
  char s2[] = "Science";

  puts(s1); // 자동으로 행변환. \0 null을 \n으로 바꿔서 출력하기 떄문
  puts(s2);

  printf(s1);
  printf(s2);
}

// Computer
// Science
// ComputerScience%  