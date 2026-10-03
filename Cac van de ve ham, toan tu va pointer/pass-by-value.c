#include <stdio.h>

int tong( int a, int b);

int main(void) {
    int x=3, y=4;
    printf("tong la %d\n", tong(x, y));
    printf("X la %d y la %d", x,y);
    return 0;
}


int tong(int a, int b) {
    a = a+1;
    b = b+1;
    return a+b;
}