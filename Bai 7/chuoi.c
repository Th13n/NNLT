#include <stdio.h>
#define MAX_INPUT 100

int main(void) {
    char s[MAX_INPUT];
    int n;
    fgets(s, MAX_INPUT, stdin);
    sscanf(s, "%d", &n);
    printf("Hello %d", n);
    return 0;
}