#include <stdio.h>

int safeIntRead();

int main(void) {
    int n;
    n = safeIntRead();
    printf("So vua nhap: %d", n);
    return 0;
}

int safeIntRead() {
    char s[101];
    int output = 0;
    char trash;
    do {
        printf("Nhap so nguyen: ");
        fgets(s, 100, stdin);
        // if (sscanf(s, "%d %c", &output, &trash) == 1) {
        //     printf("Nhap thanh cong \n");
        // } else {
        //     printf("Nhap so ngu nhu con cho\n");
        //     printf("%d %c\n", output, trash);
        // }
    } while (sscanf(s, "%d %c", &output, &trash) != 1);  // sscanf tra ve so luong gia tri quet (parse) duoc
    // Nen neu co gia tri trash, sscanf tra ve 2 ==> vo hieu.
    return output;
}
