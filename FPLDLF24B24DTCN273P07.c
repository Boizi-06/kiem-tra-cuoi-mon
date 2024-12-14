#include <stdio.h>

int tongSoLe(int arr[], int n) {
    int tong = 0;
    int i;
    for ( i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            tong += arr[i];
        }
    }
    return tong;
}

int main() {
    int arr[100] ;
    int z,i;
    int n = sizeof(arr) / sizeof(int);
    printf("moi ban nhap vao so phan tu cua mang\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	printf("phan tu thu %d\n",i+1);
    	scanf("%d",&arr[i]);
	}
    

    printf("Tong cac so le: %d\n", tongSoLe(arr, n));
    return 0;
}

