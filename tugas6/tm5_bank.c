#include <stdio.h>

int main() {
    // Jumlah uang awal
    double jumlah_uang = 1000000;

    // Bunga per bulan (dalam persen)
    double bunga_per_bulan = 2;

    // Jumlah bulan
    int jumlah_bulan = 10;

    // Menghitung jumlah uang setiap bulan
    for (int i = 0; i < jumlah_bulan; ++i) {
        // Menghitung bunga untuk bulan ini
        double bunga = (bunga_per_bulan / 100) * jumlah_uang;

        // Menambahkan bunga ke jumlah uang
        jumlah_uang += bunga;
    }

    // Menampilkan hasil
    printf("Jumlah uang setelah %d bulan adalah Rp. %.2lf\n", jumlah_bulan, jumlah_uang);

    return 0;
}
