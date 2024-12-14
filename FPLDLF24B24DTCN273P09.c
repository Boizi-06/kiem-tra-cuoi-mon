#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[50];
    float gia;
} DienThoai;

void sapXepTheoGia(DienThoai arr[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (arr[i].gia > arr[j].gia) {
                DienThoai temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void inDanhSach(DienThoai arr[], int n) {
	int i;
    for ( i = 0; i < n; i++) {
        printf("Ten: %s, Gia: %.2f\n", arr[i].ten, arr[i].gia);
    }
}

int main() {
    DienThoai arr[] = {{"iPhone", 25000000}, {"Samsung", 20000000}, {"Xiaomi", 15000000}};
    int n = 3;

    sapXepTheoGia(arr, n);
    printf("Danh sach sau khi sap xep:\n");
    inDanhSach(arr, n);

    return 0;
}

