#include <stdio.h>

int main(void) {
    int a;
    scanf_s("%d", &a);
    switch (a)
    {
    default:
        printf("Deo tim thay mon hoc");
        // break;
    case 1:
        printf("Ngon ngu lap trinh");
        // break;
    case 2:
        printf("Ki thuat so");
        // break;
    case 3:
        printf("Giai tich mach");
        // break;
    case 4:
        printf("Vi xu ly");
        // break;
    }
return 0;
}