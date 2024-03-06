#include <stdio.h>
#include <conio.h>
#include "19.factorial.h" 

int main() {
    int x;
    scanf("%d", &x);
    printf("%d ! = %d", x, factorial(x));
    getch(); 
    return 0;
}
