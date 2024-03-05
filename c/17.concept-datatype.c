#include <stdio.h>
#define AGE 28
#define PI 3.141592
#define NAME "JOHN"

const int a = 10;
const float b = 10.56789;
const char c = 'K';
const char* MOTO = "잘살자";

void main()
{
  int i = 28;
  float j = 4.0;
  char k = 'A';
  char ch[10] = "JOHN DOE"; // array var
  char *p = "Computer Science"; // pointer var

  printf("MOTO: %s, name: %s, age : %d \n", MOTO, NAME, AGE);
  printf("%s %s age: %d, GPA: %c, avg: %f\n", p, ch, i, k, j);
}

// MOTO: 잘살자, name: JOHN, age : 28 
// Computer Science JOHN DOE age: 28, GPA: A, avg: 4.000000