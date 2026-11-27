#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat bo nho thất bại!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Tong cac phan tu: %d\n", sum);
    printf("Trung binh: %.2f\n", (double)sum / n);

    // Cap phat lai bo nho voi kich thuoc lon hon (them 5 phan tu)
    int new_n = n + 5;
    int* new_arr = (int*)realloc(arr, new_n * sizeof(int));
    if (new_arr == NULL) {
        printf("Cap phat lai bo nho thất bại!\n");
        free(arr);
        return 1;
    }
    arr = new_arr;

    for (int i = n; i < new_n; i++) {
        arr[i] = 0;
    }
    printf("Da mo rong mang tu %d len %d phan tu.\n", n, new_n);

    free(arr);
    arr = NULL;

    // Cap phat dong cho chuoi (string) bang calloc
    int max_len = 100;
    char* name = (char*)calloc(max_len, sizeof(char));
    if (name == NULL) {
        printf("Cap phat bo nho cho chuoi thất bại!\n");
        return 1;
    }

    printf("Nhap ten: ");
    scanf("%99s", name);
    printf("Xin chao, %s!\n", name);

    free(name);
    name = NULL;

    return 0;
}
