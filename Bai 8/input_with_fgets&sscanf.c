#include <stdio.h>

void inputInt(int* input) {
    char buffer[100];
    char trash;
    do {
        printf(">>");
        fgets(buffer, 100, stdin);
    } while (sscanf(buffer, "%d %c", input, &trash) != 1);
}

void inputFloat(float* input) {
    char buffer[100];
    char trash;
    do {
        printf(">>");
        fgets(buffer, 100, stdin);
    } while (sscanf(buffer, "%f %c", input, &trash) != 1);
}

int main(void) {
    float x;
    inputFloat(&x);
    printf("So vua nhap: %f", x);
    return 0;
}
