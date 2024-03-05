#include <stdio.h>
void main()
{
  int in_money, coin_500, coin_100, coin_50, coin_10;
  printf("How much money?");
  scanf("%d", &in_money);

  coin_500 = in_money / 500;
  in_money = in_money % 500;

  coin_100 = in_money / 100;
  in_money = in_money % 100;

  coin_50 = in_money / 50;
  in_money = in_money % 50;

  coin_10 = in_money / 10;
  in_money = in_money % 10;

  printf("\n 오백원: %d개 \n", coin_500);
  printf("\n 백원: %d개 \n", coin_100);
  printf("\n 오십원: %d개 \n", coin_50);
  printf("\n 십원: %d개 \n", coin_10);
  printf("\n 잔돈: %d개 \n", in_money);
}

// How much money?18691

//  오백원: 37개 

//  백원: 1개 

//  오십원: 1개 

//  십원: 4개 

//  잔돈: 1개 