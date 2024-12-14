#include <stdio.h>
#include <math.h>

int main() {
    float d, h, V;

    printf("Nhap duong kinh (d): ");
    scanf("%f", &d);
    printf("Nhap chieu cao (h): ");
    scanf("%f", &h);

    float r = d / 2;  
    V = M_PI * r * r * h;

    printf("The tich hinh tru: %.2f\n", V);

    return 0;
}

