#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("tst1004.fpl", "rb");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    int M, N;

  
    fread(&M, sizeof(int), 1, file);
    fread(&N, sizeof(int), 1, file);

    printf("So hang (M): %d\n", M);
    printf("So cot (N): %d\n", N);

    int total_elements = M * N;
    float *data = (float *)malloc(total_elements * sizeof(float));
    if (data == NULL) {
        printf("Khong du bo nho.\n");
        fclose(file);
        return 1;
    }

   
    fread(data, sizeof(float), total_elements, file);

    
    float sum = 0;
    int i;
    for ( i = 0; i < total_elements; i++) {
        sum += data[i];
    }

    printf("Tong cac so thuc: %.2f\n", sum);

    
    free(data);
    fclose(file);

    return 0;
}

