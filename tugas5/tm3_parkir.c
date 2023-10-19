#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya;

    // Meminta input jam masuk dan jam keluar
    printf("Masukkan jam masuk parkir: ");
    scanf("%d", &jam_masuk);

    printf("Masukkan jam keluar parkir: ");
    scanf("%d", &jam_keluar);

    // Menghitung lama parkir
    lama_parkir = jam_keluar - jam_masuk;

    // Menghitung biaya parkir
    if (lama_parkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + (lama_parkir - 2) * 500;
    }

    // Menampilkan biaya parkir
    printf("Biaya parkir: %d\n", biaya);

    return 0;
}
