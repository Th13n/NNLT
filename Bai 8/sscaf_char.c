#include <stdio.h>

int main(void) {
    char s[10] = "12,34";
    char s1 = 'a';
    int a, b;
    sscanf(s, "%d,%d", &a, &b);
    printf("%d %c %d", a, s1, b);
    return 0;
}