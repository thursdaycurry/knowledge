#include <stdio.h>
void main()
{
  char s[50];
  printf("문자열 입력? ");
  gets(s);
  printf("gets()로 문자열 입력 = %s \n", s);

  printf("\n문자열 입력? ");
  scanf("%s", s); // scanf는 띄어쓰기가 있으면 뒤에 내용은 생략된다
  printf("scanf()로 문자열 입력 = %s \n", s);
}

// 문자열 입력? John Cena 
// gets()로 문자열 입력 = John Cena 

// 문자열 입력? John Cena 
// scanf()로 문자열 입력 = John 