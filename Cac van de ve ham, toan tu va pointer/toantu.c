#include <stdio.h>

int main(void) {
    const int a=1;
    int *b;
    b = &a;
    *b = 1135;
    printf("%d", a);
    return 0;
}