#include <stdio.h>
void main()
{

  // syllable 타입의 톤 사용
  enum syllable
  {
    Do,
    Re,
    Mi,
    Fa
  } tone;

// Enume을 각 숫자로 체크
  for (tone = Do; tone <= Fa; tone+=1){
    switch(tone) {
      case Do :
        printf("도는 하얀 도라지 \n");
        break;

      case Re:
        printf("레는 둥근 레코드 \n");
        break;

      case Mi :
        printf("미는 파란 미나리 \n");
        break;
      
      case Fa :
        printf("파는 예쁜 파랑새 \n");
        break;
      }
  }
}