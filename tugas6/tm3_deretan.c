#include <stdio.h>

int main() {
    // Mencetak deret angka dengan menggandakan nilai sebelumnya
    int value = 1;
    for (int i = 0; i < 11; ++i) {
        printf("%d ", value);
        value *= 2;
    }

    return 0;
}
