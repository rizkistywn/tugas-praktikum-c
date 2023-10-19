#include <stdio.h>

int main() {
    char kode, jenis;
    float harga, diskon, harga_setelah_diskon;

    printf("Masukkan kode barang (A/B/C): ");
    scanf(" %c", &kode);
    if (kode != 'A' && kode != 'B' && kode != 'C') {
        printf("Kode barang tidak valid.\n");
        return 1;
    }

    printf("Masukkan jenis barang (A/B/C): ");
    scanf(" %c", &jenis);
    if (jenis != 'A' && jenis != 'B' && jenis != 'C') {
        printf("Jenis barang tidak valid.\n");
        return 1;
    }

    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            diskon = 0;
            break;
    }

    harga_setelah_diskon = harga - (harga * diskon);
    printf("Harga setelah diskon: %.2f\n", harga_setelah_diskon);
    return 0;
}
