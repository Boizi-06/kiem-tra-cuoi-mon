#include <stdio.h>

typedef struct {
    char ten[50];
    float gia;
    char hang[30];
} DienThoai;

int main() {
    DienThoai dt = {"iPhone 14", 25000000, "Apple"};
    printf("Ten: %s\n", dt.ten);
    printf("Gia: %.2f\n", dt.gia);
    printf("Hang: %s\n", dt.hang);
    return 0;
}

