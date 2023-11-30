#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;
    int count = 0; // variabel untuk menghitung jumlah karakter yang sama

    printf("Masukkan karakter = ");
    scanf(" %c", &C); // Gunakan spasi sebelum %c untuk mengabaikan spasi, tab, dan karakter baris baru sebelumnya

    // Periksa apakah karakter ada di dalam array
    for (int i = 0; i < 10; i++) {
        if (A[i] == C) {
            count++;
        }
    }

    // Cetak hasil berdasarkan jumlah karakter yang sama
    if (count > 0) {
        printf("ADA\n");
        printf("%d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
