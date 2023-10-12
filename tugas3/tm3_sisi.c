#include <stdio.h>
#include <math.h>

int main() {
    double sisiAlas, sisiTinggi, sisiMiring;

    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%lf", &sisiAlas);
    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%lf", &sisiTinggi);

    sisiMiring = sqrt(sisiAlas * sisiAlas + sisiTinggi * sisiTinggi);

    printf("Panjang sisi miring segitiga adalah: %.2lf cm\n", sisiMiring);

    return 0;
}
