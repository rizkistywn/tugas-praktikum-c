#include <stdio.h>

int main() {
    // Deklarasi array A dengan ukuran 11
    int A[11];
    
    // Data yang akan diinput
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    
    // Menghitung jumlah elemen yang diinput
    int jumlah_data = sizeof(data) / sizeof(data[0]);

    // Inisialisasi indeks array A
    int indeks_A = 0;

    // Menginput data dan menyimpan nilai yang genap ke dalam array A
    for (int i = 0; i < jumlah_data; ++i) {
        if (data[i] % 2 == 0) {
            A[indeks_A] = data[i];
            indeks_A++;
        }
    }

    // Mencetak isi array A
    printf("Isi array A setelah menyimpan nilai genap:\n");
    for (int i = 0; i < indeks_A; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
