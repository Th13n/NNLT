#include <stdio.h>

int main(void) {
    int n, dau, cuoi;
    printf("Hay nhap so n: ");
    if(scanf("%d", &n)==0) return 1;
    int dodai = 1, start = 10;
    while (start<n)
    {
        start*=10;
        dodai+=1;
    }
    start = start/10;
    while (dodai > 1)
    {
        cuoi = n%10;
        dau = n/start;
        if (cuoi != dau) {
            printf("Khong phai palindrome");
            return 2;
        }
        n = n%start;
        n = n/10;
        start = start/100;
        dodai -=2;
    }
    printf("La palindrome");
    return 0;
}
