#include <stdio.h>
#include <math.h>

int main() {
    float panjangAlas, tinggi, luas, keliling;

    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &panjangAlas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    luas = 0.5 * panjangAlas * tinggi;
    float sisiKetiga = sqrt(panjangAlas * panjangAlas + tinggi * tinggi);
    keliling = panjangAlas + tinggi + sisiKetiga;

    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}
