#include <stdio.h>

int main(void) {
    int a[10];
    for (int i = 0; i < 10; i++) a[i] = 1;
    for (int i = 0; i < 10; i++) {
        printf("%x ", &a[i]);  // in dia chi tung phan tu cua mang
    }
    printf("\n");
    printf("%x \n", a);  // In ten mang se cho ra dia chi dau tien cua mang;
    for (int i = 0; i < 10; i++) {
        printf("%x ", a + i);  // in dia chi tung phan tu trong mang???
    }
    return 0;
}