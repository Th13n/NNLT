#include <stdio.h>

int main(void) {
    int a = 1;
    long int b = 10;
    unsigned int c = 10;
    float d = 10;
    double e = 10;
    long double f = 10;
    printf("%d %d %d %d %d %d", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e), sizeof(f));
    return 0;
}