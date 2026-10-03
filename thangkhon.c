#include <stdio.h>

void swap(int *pointer_a, int *pointer_b)
{
    // hai bien input la 2 pointer (bien chi vi tri trong bo nho)
    int temp = *pointer_a;   //*(pointer) goi gia tri tai pointer do
    *pointer_a = *pointer_b; // day gia tri cua pointer b sang a
    *pointer_b = temp;       // lam y chang o tren
    // Can thiep truc tiep gia tri duoc luu tai vi tri bo nho do
    return;
}

int main()
{
    printf("Nhap a va b");
    int a = 4, b = 6;
    scanf("%d %d", &a, &b);
    printf("a= %d, b = %d\n", a, b);
    swap(&a, &b); //&a &b tra ra 2 pointer chi vi tri cua 2 bien a,b
    printf("a= %d, b = %d\n", a, b);
    return 0;
}