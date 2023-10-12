#include <stdio.h>
#include <math.h>

int main() {
    double sisiAlas, sisiTinggi, sisiMiring;

    // Meminta input sisi alas dan sisi tinggi dari pengguna
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%lf", &sisiAlas);
    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%lf", &sisiTinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisiMiring = sqrt(sisiAlas * sisiAlas + sisiTinggi * sisiTinggi);

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga adalah: %.2lf cm\n", sisiMiring);

    return 0;
}
