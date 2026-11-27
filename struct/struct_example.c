#include <stdio.h>
#include <string.h>
#include <stddef.h>   // offsetof

/* ------------------------------------------------------------------
   1. Struct don gian: cac thanh phan (member) co kieu du lieu khac nhau
   ------------------------------------------------------------------ */
struct Student {
    char name[30];      // chuoi ky tu, 30 bytes
    int id;              // so nguyen, thuong 4 bytes
    float gpa;           // so thuc, thuong 4 bytes
    char gender;          // 1 ky tu, 1 byte
};

/* ------------------------------------------------------------------
   2. Struct chua mang va con tro
   ------------------------------------------------------------------ */
struct Classroom {
    char room_name[20];
    int num_students;
    struct Student *students;   // con tro toi mang Student (cap phat ngoai)
};

/* ------------------------------------------------------------------
   3. Struct long nhau (nested struct)
   ------------------------------------------------------------------ */
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[30];
    struct Date birthday;   // struct nam trong struct
    double salary;
};

/* ------------------------------------------------------------------
   4. Struct minh hoa padding/alignment ro ret (de so sanh kich thuoc)
   ------------------------------------------------------------------ */
struct Padded {
    char c;      // 1 byte
    int i;       // 4 bytes -> can padding truoc de align
    char c2;     // 1 byte
    double d;    // 8 bytes -> can padding truoc de align
};

/* Sap xep lai thu tu thanh phan tu lon den nho giup giam padding */
struct Packed {
    double d;    // 8 bytes
    int i;       // 4 bytes
    char c;      // 1 byte
    char c2;     // 1 byte
};

void print_student(const struct Student *s) {
    printf("  Ten: %-10s | MSSV: %-6d | GPA: %.2f | Gioi tinh: %c\n",
           s->name, s->id, s->gpa, s->gender);
}

int main(void) {
    /* --- Khoi tao va su dung struct Student --- */
    struct Student sv1 = {"Nguyen Van A", 2210001, 8.5f, 'M'};
    struct Student sv2;
    strcpy(sv2.name, "Tran Thi B");
    sv2.id = 2210002;
    sv2.gpa = 9.1f;
    sv2.gender = 'F';

    printf("=== Danh sach sinh vien ===\n");
    print_student(&sv1);
    print_student(&sv2);

    /* --- Struct chua con tro toi mang struct khac --- */
    struct Student arr[2] = {sv1, sv2};
    struct Classroom lop = {"B4-603", 2, arr};

    printf("\n=== Lop %s (%d sinh vien) ===\n", lop.room_name, lop.num_students);
    for (int i = 0; i < lop.num_students; i++) {
        print_student(&lop.students[i]);
    }

    /* --- Nested struct --- */
    struct Employee nv = {"Le Van C", {15, 8, 1995}, 15000000.0};
    printf("\n=== Nhan vien ===\n");
    printf("  Ten: %s | Ngay sinh: %02d/%02d/%04d | Luong: %.0f\n",
           nv.name, nv.birthday.day, nv.birthday.month, nv.birthday.year, nv.salary);

    /* --- Uoc luong kich thuoc struct (sizeof) --- */
    printf("\n=== Uoc luong kich thuoc struct (sizeof) ===\n");
    printf("sizeof(char)            = %zu byte\n", sizeof(char));
    printf("sizeof(int)              = %zu byte\n", sizeof(int));
    printf("sizeof(float)            = %zu byte\n", sizeof(float));
    printf("sizeof(double)           = %zu byte\n", sizeof(double));

    printf("\nsizeof(struct Student)   = %zu byte\n", sizeof(struct Student));
    printf("sizeof(struct Date)      = %zu byte\n", sizeof(struct Date));
    printf("sizeof(struct Employee)  = %zu byte\n", sizeof(struct Employee));

    printf("\nsizeof(struct Padded)    = %zu byte  (chua sap xep toi uu)\n", sizeof(struct Padded));
    printf("sizeof(struct Packed)    = %zu byte  (sap xep theo thu tu giam dan ve kich thuoc)\n", sizeof(struct Packed));

    /* --- Xem offset cua tung thanh phan de thay ro vung dem (padding) --- */
    printf("\n=== offsetof trong struct Padded ===\n");
    printf("offset(c)  = %zu\n", offsetof(struct Padded, c));
    printf("offset(i)  = %zu\n", offsetof(struct Padded, i));
    printf("offset(c2) = %zu\n", offsetof(struct Padded, c2));
    printf("offset(d)  = %zu\n", offsetof(struct Padded, d));

    printf("\n=== offsetof trong struct Packed ===\n");
    printf("offset(d)  = %zu\n", offsetof(struct Packed, d));
    printf("offset(i)  = %zu\n", offsetof(struct Packed, i));
    printf("offset(c)  = %zu\n", offsetof(struct Packed, c));
    printf("offset(c2) = %zu\n", offsetof(struct Packed, c2));

    return 0;
}
