#include <stdio.h>

int main() {
    // Inisialisasi array satu dimensi
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    
    // Input nilai integer dari pengguna
    int N;
    printf("Masukkan bilangan integer = ");
    scanf("%d", &N);
    
    // Tampilkan nilai integer dalam array
    printf("\nNilai integer dalam array:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    
    // Periksa apakah ada nilai N dalam array
    int ada = 0;  // Flag untuk menandai apakah nilai N ditemukan
    printf("\n\n");
    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            if (ada == 0) {
                printf("ADA\nLokasi bilangan yang sama: %d", i);
                ada = 1;  // Set flag menjadi 1 karena nilai N ditemukan
            } else {
                printf(" %d", i);  // Cetak indeks tambahan jika ada nilai N lainnya
            }
        }
    }
    
    // Jika tidak ada nilai N dalam array
    if (ada == 0) {
        printf("TIDAK ADA\n");
    }
    
    return 0;
}
