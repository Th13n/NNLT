#include <stdio.h>
#include <float.h>

float operato(float a, float b, unsigned int op);
// 0:+ 1:- 2:* 3:
// if operator >3 return 0 and printf error
// if divided = 0 thi return 0 and printf error

int main(void) {
    printf("a = 2, b= 3 , a+b = %f", operato(2,3,0));
    return 0;
}

float operato(float a, float b, unsigned int op) {
    switch (op)
    {
    case 0:
        return a+b;
    case 1:
        return a-b;
    case 2:
        return a*b;
    case 3:
        if (b==0) {
            printf("Chia cho 0");
            return 0;
        }
        return a/b;
    default:
        printf("Nhap so sai");
        return 0;
    }
}
