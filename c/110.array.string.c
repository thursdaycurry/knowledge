#include <stdio.h>
void main() {
  char str_in[50], str_out[50];
  int i = 0;
  printf("Please enter string : ");
  scanf("%s", str_in);

  do {
    str_out[i] = '*';
    i++;
  } while (str_in[i] != '\0');
  str_out[i] = '\0'; // 문자열 끝 null 저장
  printf("입력 문자열 배열 str_in = %s \n", str_in);
  printf("출력 문자열 배열 str_out = %s \n", str_out);
}

// Please enter string : Johnson
// 입력 문자열 배열 str_in = Johnson 
// 출력 문자열 배열 str_out = ******* 