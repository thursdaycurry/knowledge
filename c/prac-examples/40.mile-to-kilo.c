#include <stdio.h>
#define KILO 1.609

void main()
{
  float miles, kms;
  printf("\t input(miles) =>");
  scanf("%f", &miles);
  kms = KILO * miles;
  printf("\t %f mile=%f km \n", miles, kms);
}

        //  input(miles) =>3
        //  3.000000 mile=4.827000 km 