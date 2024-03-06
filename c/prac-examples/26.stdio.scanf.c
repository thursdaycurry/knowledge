#include <stdio.h>
#pragma warning(disable:4996) // 비권장 함수 경고 무시
void main()
{
  int a;
  long long int b;
  float c;
  char ch;
  char s[20];

  printf("정수와 long long int 입력하라: ");
  scanf("%d %lld", &a, &b);
  printf("a = %d, b = %lld \n", a, b);

  printf("실수를 입력하라: ");
  scanf("%f", &c);
  printf("c = %10.4f, c(지수로 표현) = %e \n", c, c);

  printf("문자 입력 : ");
  scanf(" %c", &ch);
  printf("ch = %c \n", ch);

  printf("문자열 입력 : ");
  scanf("%s", s);
  printf("s[] = %s \n", s);
}

// 정수와 long long int 입력하라: 10 20
// a = 10, b = 20 
// 실수를 입력하라: 29.99999
// c =    30.0000, c(지수로 표현) = 2.999999e+01 
// 문자 입력 : j   
// ch = j 
// 문자열 입력 : john
// s[] = john 