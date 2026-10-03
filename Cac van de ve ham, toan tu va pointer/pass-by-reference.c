#include <stdio.h>

int swap(int* a, int* b) {
    // 2 bien pointer a, b co gia tri la dia chi cua 2 bien duoc nhap vao
    int temp = *a;
    //*(pointer) tra ra gia tri duoc luu tai pointer do
    // temp = *a luu tru gia tri duoc luu tai dia chi "a" (temp la bien bth, ko
    // phai bien pointer)
    *a = *b;
    // Luc nay, gia tri duoc luu tai dia chi "a" doi thanh gia tri duoc luu tai
    // bien b
    *b = temp;
    return 0;
}

int force(int* a, int* b) {
    *a = 36;
    *b = 18;
    return 0;
}
int main(void) {
    int x = 3, y = 4;
    printf("Before swap x=%d, y=%d, dia chi x =%x, dia chi y = %x \n", x, y, &x, &y);
    swap(&x, &y);
    printf("After swap %d, %d dia chi x =%x, dia chi y = %x \n", x, y, &x, &y);
    force(&x, &y);
    printf("After force %d, %d dia chi x =%x, dia chi y = %x \n", x, y, &x, &y);
    return 0;
}