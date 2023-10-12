#include <stdio.h>

int main() {
    int celcius;
    float fahrenheit, reamur;

    printf("Masukkan suhu dalam Celsius: ");
    scanf("%d", &celcius);

    fahrenheit = (celcius * 9.0 / 5.0) + 32;

    reamur = celcius * 4.0 / 5.0;

    printf("Suhu dalam Fahrenheit: %.2f derajat Fahrenheit\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f derajat Reamur\n", reamur);

    return 0;
}
