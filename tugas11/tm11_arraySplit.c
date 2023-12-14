#include <stdio.h>

int main() {
    // Array A
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    
    // Array B dan C
    int B[12], C[12];
    
    // Menghitung rata-rata nilai array A
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    float average = (float)sum / 12.0;
    
    // Memindahkan nilai array A ke array B atau C
    int bIndex = 0, cIndex = 0;
    for (int i = 0; i < 12; i++) {
        if (A[i] > average) {
            B[bIndex++] = A[i];
        } else {
            C[cIndex++] = A[i];
        }
    }
    
    // Menampilkan isi array A
    printf("Isi array A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    // Menampilkan isi array B
    printf("Isi array B: ");
    for (int i = 0; i < bIndex; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
    
    // Menampilkan isi array C
    printf("Isi array C: ");
    for (int i = 0; i < cIndex; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    
    return 0;
}
