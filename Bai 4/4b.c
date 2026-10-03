#include <stdio.h>

int main(void) {
    int so_hang, so_coupon, gia_hang=0;
    int tong = 0;
    printf("Hay nhap so luong hang");
    scanf("%d",&so_hang);
    for (int i = 0; i<so_hang; i++) {
        while (gia_hang<=0)
        {
            printf("Hay nhap gia hang:");
            scanf("%d", &gia_hang);
            if(gia_hang <=0 ) printf("Gia tri sai, hay nhap lai\n");
        }
        tong += gia_hang;
        gia_hang = 0;
    }
    printf("Tong gia tri hang hoa cua ban la: %d", tong);
    return 0;
}