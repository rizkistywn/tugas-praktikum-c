#include <stdio.h>

int main() {
    // Array A
    char A[8] = {'A', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};
    
    // Flag untuk menandai apakah ada huruf yang sama
    int isDuplicate = 0;
    
    // Memeriksa huruf yang sama dalam array A
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (A[i] == A[j]) {
                isDuplicate = 1;
                printf("ADA\nHuruf yang sama: %c\n", A[i]);
                break;  // Hentikan pencarian setelah menemukan satu pasang huruf yang sama
            }
        }
        if (isDuplicate) {
            break;  // Hentikan pencarian jika sudah menemukan huruf yang sama
        }
    }
    
    // Jika tidak ada huruf yang sama
    if (!isDuplicate) {
        printf("TIDAK ADA\n");
    }
    
    return 0;
}
