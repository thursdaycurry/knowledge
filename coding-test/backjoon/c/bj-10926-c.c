#include <stdio.h>

int main(void) {
  char id[50];
  scanf("%s", id);
  printf("%s?\?!", id); // 삼중자로 해석되지 않도록 백슬래시로 표시

  return 0;
}

/*
 C언어 삼중자(TrigraphSequence)
 
 C언어에서 사용하는 기본 문자집합(character set)은 ASCII
 그러나 몇몇 국가에서 ISO/IEC 646(한국 포함)을 키보드로 사용

 일부 문장들은 각 나라 상황에 맞게 구성하도록 허용

 Trigraph 정의해서 자주 쓰지 않는 문자 조합으로 다른 문자 표현하도록 함

 ??= -> #
 ??/ -> \
 ??' -> ^
 ??( -> [
 ??) -> ]
 ??! -> |
 ??< -> {
 ??> -> }
 ??- -> ~

*/