#include <stdio.h>

int main() {
    // Deklarasi array untuk menyimpan nilai mahasiswa
    int nilai_mahasiswa[10];

    // Input nilai mahasiswa
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%d", &nilai_mahasiswa[i]);
    }

    // Cetak daftar nilai mahasiswa yang lulus
    printf("\nDaftar nilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; ++i) {
        if (nilai_mahasiswa[i] >= 60) {
            printf("Nilai mahasiswa %d: %d\n", i + 1, nilai_mahasiswa[i]);
        }
    }

    return 0;
}
