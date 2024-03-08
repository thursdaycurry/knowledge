#include <stdio.h>
void main()
{
  int days = 365;
  int month = 12;
  int Table[5] = {1, 2, 3, 4, 5};

  printf("days 주소 %x \n", &days);
  printf("month 주소 %x \n", &month);
  printf("배열명 Table 주소 %x \n", Table);
  printf("배열명 Table 첫번쨰 요소 주소 %x \n", &Table[0]);
  printf("배열명 Table 두번째 요소 주소 %x \n", &Table[1]);
}

// days 주소 6bbcad8c 
// month 주소 6bbcad88 
// 배열명 Table 주소 6bbcad90 
// 배열명 Table 첫번쨰 요소 주소 6bbcad90 
// 배열명 Table 두번째 요소 주소 6bbcad94 