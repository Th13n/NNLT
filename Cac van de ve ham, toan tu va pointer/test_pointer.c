#include <stdio.h>

int main(void)
{
    int a = 5;
    printf("a = %d \n", a);
    int *b = &a;
    printf("b la vi tri cua a tren bo nho: %d \n", b);
    printf("*b se tra ra gia tri tren o bo nho cua pointer b (la a): %d \n", *b);
    *b = 1366;
    printf("gia tri tai pointer b moi la: %d \n", *b);
    printf("Do do, gia tri cua a (co vi tri bo nho la b) cung nhan gia tri moi la %d \n", a);
    return 0;
}