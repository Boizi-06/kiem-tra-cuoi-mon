#include <stdio.h>
#include <math.h>

float tinhTheTichHinhTru(float d, float h) {
    float r = d / 2;  
    return M_PI * r * r * h;
}

int main() {
    float d, h;

    printf("Nhap duong kinh (d): ");
    scanf("%f", &d);
    printf("Nhap chieu cao (h): ");
    scanf("%f", &h);

    printf("The tich hinh tru: %.2f\n", tinhTheTichHinhTru(d, h));
    return 0;
}

