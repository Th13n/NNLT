#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d \n", arr[i]);
}

int main(void) {
    int n;
    printf("Nhap do dai mang");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) a[i] = i;
    print_array(a, n);
    return 0;
}