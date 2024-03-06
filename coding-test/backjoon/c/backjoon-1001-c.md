```c
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a-b);
    return 0;
}
```

prefix `&` should come before variable such as `a` and `b` in `scanf` method.

To announce the function is completed, return `0`. So `main()` return type also should be `int` instead of `void` which is default.
