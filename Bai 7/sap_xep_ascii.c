#include <stdio.h>
#define MAX_ARRAY 100

void print_array(char arr[], int size) {
    for (int i = 0; i < size; i++) printf("%c \n", arr[i]);
}

int main(void) {
    char s[MAX_ARRAY];
    fgets(s, MAX_ARRAY, stdin);
    int size = MAX_ARRAY;
    for (int i = 0; i < MAX_ARRAY; i++) {
        if (s[i] == 0) {
            size = i - 1;
            break;
        }
    }
    printf("%d \n", size);
    print_array(s, size);
    printf("%s", s);
    return 0;
}