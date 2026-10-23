#include <stdio.h>

int main(void) {
    const int a = 1;
    printf("Ban dau a = %d \n", a);
    int* b;
    b = &a;
    printf("Hay nhap so ma ban muon doi a thanh:");
    scanf("%d", &(*b));
    printf("Luc sau a = %d", a);
    return 0;
}