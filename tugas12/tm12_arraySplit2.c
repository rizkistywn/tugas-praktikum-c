#include <stdio.h>

int main() {
    // Array A
    char A[11] = {'A', 'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', '\0'};
    
    // Array untuk menghitung jumlah setiap huruf
    int count[26] = {0};  // Inisialisasi jumlah setiap huruf menjadi 0
    
    // Menghitung jumlah setiap huruf dalam array A
    for (int i = 0; i < 10; i++) {
        count[A[i] - 'A']++;
    }
    
    // Mencari huruf yang memiliki jumlah terbanyak
    char maxChar;
    int maxCount = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = 'A' + i;
        }
    }
    
    // Menampilkan hasil
    printf("Huruf yang terbanyak: %c\n", maxChar);
    printf("Jumlah huruf terbanyak: %d\n", maxCount);
    
    return 0;
}
