#include <stdio.h>

int main() {
    int n = 5;
    switch (n) {
        default:
            printf("a\n");
        case 3:
            printf("Hello");
        case 4:
            printf("Hello 123123");
    }
    return 0;
}