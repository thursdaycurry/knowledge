#include <stdio.h>
void main()
{
  int in;
  float fl;
  char ch;
  char str[50];

  printf("문자 입력 후 Enter 키 누르기 \n");
  scanf("%c", &ch);
  printf("%c\n", ch);

  printf("정수 입력 후 Enter 키 누르기 \n");
  scanf("%d", &in);
  printf("%d\n", in);

  printf("실수 입력 후 Enter 키 누르기 \n");
  scanf("%f", &fl);
  printf("%f\n", fl);

  printf("문자열 입력 후 Enter 키 누르기 \n");
  scanf("%s", str);
  printf("%s\n", str);
}

// a
// a
// 정수 입력 후 Enter 키 누르기 
// 2
// 2
// 실수 입력 후 Enter 키 누르기 
// 3.3
// 3.300000
// 문자열 입력 후 Enter 키 누르기 
// string
// string