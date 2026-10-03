#include <stdio.h>

int main(void) {
    int n;
    printf("Hay nhap so luong so: ");
    if (scanf("%d", &n)==0) return 1;
    if (n==1) {
        printf("Qua it so");
        return 2;
    }

    int so_be, so_lon, so_nhap;
    printf("Hay nhap so thu nhat: ");
    scanf("%d", &so_nhap);
    so_be = so_nhap;
    so_lon = so_nhap;
    for (int i = 1; i<n; i++) {
        printf("Hay nhap so thu %d: ", i+1);
        scanf("%d", &so_nhap);
        if (so_nhap < so_be) so_be = so_nhap;
        if (so_nhap > so_lon) so_lon = so_nhap;
    }
    printf("So lon nhat la: %d \n", so_lon);
    printf("So be nhat la: %d", so_be);
    return 0;
}