#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel untuk diameter bola
    double diameter = 15.0; // dalam satuan cm
    
    // Menghitung jari-jari bola
    double jari_jari = diameter / 2.0;
    
    // Menghitung volume bola menggunakan rumus (4/3) * pi * r^3
    double volume = (4.0 / 3.0) * M_PI * pow(jari_jari, 3);
    
    // Menampilkan hasil volume bola
    printf("Volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", diameter, volume);
    
    return 0;
}
