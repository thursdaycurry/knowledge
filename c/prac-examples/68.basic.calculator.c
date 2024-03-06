#include <stdio.h>

int main() {
  int op_num1, op_num2;
  char op;

  printf("Calculator.. \n");
  printf("please input operator.. (+, -, *, /): ");
  scanf("%c", &op);

  printf("first operand : \n");
  scanf("%d", &op_num1);

  printf("second operand : \n");
  scanf("%d", &op_num2);

  switch(op) {
    case '+':
      printf("%d + %d = %d\n", op_num1, op_num2, op_num1 + op_num2);
      break;

    case '-':
      printf("%d - %d = %d\n", op_num1, op_num2, op_num1 - op_num2);
      break;

    case '*':
      printf("%d * %d = %d\n", op_num1, op_num2, op_num1 * op_num2);
      break;

    case '/':
      printf("%d / %d = %d\n", op_num1, op_num2, op_num1 / op_num2);
      break;
  }
}

// Calculator.. 
// please input operator.. (+, -, *, /): +
// first operand : 
// 2
// second operand : 
// 3
// 2 + 3 = 5