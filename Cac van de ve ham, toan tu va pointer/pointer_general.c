#include <stdio.h>

int main(void) {
    int* p;
    int a = 5;
    p = &a;
    int q = &a;
    printf("%d, %d, %d, %d, %d", a, &a, p, *p, q);

    return 0;
}