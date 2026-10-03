#include <stdio.h>

long int Fibo(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 0) {
        return 0;
    }
    return (Fibo(n - 1) + Fibo(n - 2));
}

int main(void) {
    int n;
    printf("Hay nhap so thu n");
    scanf("%d", &n);
    printf("So Fibo thu %d la %d", n, Fibo(n));
    return 0;
}