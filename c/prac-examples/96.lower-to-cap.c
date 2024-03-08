#include <stdio.h>
#include <string.h>
void main()
{
  char string[] = "abcdefghijklmnopqrstuvwxyz";
  unsigned i, len;
  puts(string); // string 출력함수
  
  len = strlen(string);
  for (i = 0; i < len; i++) {
    // 0xDF -> 2진수로 '11011111'
    // 대문자 A의 ASCII 코드는 65 (2진수로 01000001)
    // 소문자 a의 ASCII 코드는 97 (2진수로 01100001)
    string[i] = string[i] & 0xDF; // 비트 ADN 연산으로소문자를 대문자로 바꿈
  }
  puts(string);
}