#include <stdio.h>

int main(void) {
    int n;
    printf("Hay nhap so n: ");
    if (scanf("%d", &n)==0) return 1;
    int tang = 0, giam = 0;
    int so_cuoi = n%10;
    while (n>9)
    {
        n = n/10;
        if (n%10 >= so_cuoi) tang = 1;
        if (n%10 <= so_cuoi) giam = 1;
        so_cuoi = n%10;
    }
    if (!tang) printf("So nay tang ngat");
    else if (!giam) printf("So nay giam ngat");
    else printf("So nay khong tang cung khong giam");
    return 0;
}
