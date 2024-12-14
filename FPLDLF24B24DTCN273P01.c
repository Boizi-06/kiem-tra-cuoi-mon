#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Kieu int:\n");
    printf("  Do rong: %zu bit\n", sizeof(int) * 8);
    printf("  Gia tri nho nhat: %d\n", INT_MIN);
    printf("  Gia tri lon nhat: %d\n\n", INT_MAX);

    printf("Kieu unsigned int:\n");
    printf("  Do rong: %zu bit\n", sizeof(unsigned int) * 8);
    printf("  Gia tri nho nhat: 0\n");
    printf("  Gia tri lon nhat: %u\n\n", UINT_MAX);

    printf("Kieu float:\n");
    printf("  Do rong: %zu bit\n", sizeof(float) * 8);
    printf("  Gia tri nho nhat: %.10e\n", FLT_MIN);
    printf("  Gia tri lon nhat: %.10e\n\n", FLT_MAX);

    printf("Kieu double:\n");
    printf("  Do rong: %zu bit\n", sizeof(double) * 8);
    printf("  Gia tri nho nhat: %.10e\n", DBL_MIN);
    printf("  Gia tri lon nhat: %.10e\n\n", DBL_MAX);

    printf("Kieu char:\n");
    printf("  Do rong: %zu bit\n", sizeof(char) * 8);
    printf("  Gia tri nho nhat: %d\n", CHAR_MIN);
    printf("  Gia tri lon nhat: %d\n", CHAR_MAX);

    return 0;
}

