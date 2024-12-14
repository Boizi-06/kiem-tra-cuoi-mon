#include <stdio.h>
#include <math.h>

#define GRAVITY 9.8

int main() {
    float x, R, u, theta;

    printf("Nhap van toc u (m/s): ");
    scanf("%f", &u);
    printf("Nhap goc theta (do): ");
    scanf("%f", &theta);
    printf("Nhap ban kinh R (m): ");
    scanf("%f", &R);

    theta = theta * M_PI / 180;  
    x = (u * cos(theta)) / (GRAVITY * R);

    printf("Gia tri cua x: %.2f\n", x);

    return 0;
}

