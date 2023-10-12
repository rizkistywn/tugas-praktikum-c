#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    if (bilangan > 0) {
        if (bilangan % 2 == 0) {
            printf("Bilangan ini adalah GENAP.\n");
        } else {
            printf("Bilangan ini adalah GANJIL.\n");
        }
    } else {
        printf("Mohon masukkan bilangan bulat positif.\n");
    }

    return 0;
}
