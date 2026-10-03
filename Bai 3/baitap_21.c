#include <stdio.h>

int main(void) {
    unsigned int a = 10; 
    int b = 6;
    float c = 12.5f;
    char d = 'k';
    printf("Cac bien la: a=%u, b=%d, c=%.2f, d=%c \n", a,b,c,d); //Q1
    printf("Thap luc phan cua a:%x \n", a); //Q2
    b = b << 3;
    printf("b sau khi dich: %d \n", b); //Q3
    c = c/4.5f;
    printf("f sau khi chia: %.2f \n", c); //Q4
    printf("Gia tri so cua char d la: %d \n", d); //Q5
    d += 5;
    printf("Gia tri moi cua char d la: %c \n", d); //Q6
    printf("Tang b va tang bang ++: %d \n", ++b); //Q7
    d = b>0;
    printf("Toi se in char d o dang char=%c va dang so=%d \n", d, (int)d);//Q8
    printf("Toi se in gia tri cua phep tinh AND duoi dang so nguyen la %u va dang thap luc phan %x \n", a&0xAu, a&&0xAu); //Q9 
    printf("Toi se in gia tri cua phep tinh OR duoi dang so nguyen la %u va dang thap luc phan %x \n", a|(1u<<15), a|(1u<<15)); //Q10
    return 0;
}