#include <stdio.h>
#define MAX_ARRAY 100

int main(void) {
    int sang_nguyen_to[MAX_ARRAY];
    int counter = 0, flag = 0;
    int a, b;
    printf("Hay nhap 2 so a, b: ");
    scanf("%d %d", &a, &b);
    for (int i = 2; i < b; i++) {
        for (int j = 2; j <= i; j++) {
            if (j * j > i) {
                sang_nguyen_to[counter] = i;
                if (i > a && !flag) flag = counter;
                counter += 1;
                break;
            }
            if (i % j == 0) break;
        }
    }
    for (int i = flag; i < counter; i++) {
        printf("%d ", sang_nguyen_to[i]);
    }

    return 0;
}