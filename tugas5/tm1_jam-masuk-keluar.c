#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, durasi;

    printf("Masukkan jam masuk (format 1-12): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam pulang (format 1-12): ");
    scanf("%d", &jam_keluar);

    if (jam_keluar >= jam_masuk) {
        durasi = jam_keluar - jam_masuk;
    } else {
        durasi = (12 - jam_masuk) + jam_keluar;
    }

    printf("Lama bekerja: %d jam\n", durasi);

    return 0;
}
