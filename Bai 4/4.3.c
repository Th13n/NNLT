#include <stdio.h>

int main(void) {
    int n,a=0;
    printf("Hay nhap so n: ");
    if (scanf("%d", &n)==0) return 1;
    while (n>1)
    {
        if (n%2==0) n = n/2;
        else n = 3*n+1;
        a = a+1;
    }
    printf("So lan chay la %d", a);
    return 0;
}