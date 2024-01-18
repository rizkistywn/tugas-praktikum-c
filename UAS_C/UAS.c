#include <stdio.h>
#include <unistd.h>

int tingkat_kekeruhan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
int kecepatan_motor, waktu_pencucian;

void proses_pencucian(int kekeruhan)
{
    for (int i = 0; i < sizeof(tingkat_kekeruhan) / sizeof(tingkat_kekeruhan[0]); i++)
    {
        if (kekeruhan <= tingkat_kekeruhan[i])
        {
            kecepatan_motor = (i + 1) * 1000;
            waktu_pencucian = 60;
            break;
        }
    }

    printf("Motor listrik utama berputar dengan kecepatan %d rpm selama %d menit.\n", kecepatan_motor, waktu_pencucian);
    printf("Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis.\n");
    sleep(2 * 60);

    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
    sleep(3 * 60);

    printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh.\n");
    sleep(2 * 60);

    printf("Motor listrik utama berputar dengan kecepatan %d rpm selama sisa waktu mencuci.\n", kecepatan_motor);
    printf("Motor pembuka klep pembuangan air kotor aktif selama 2 menit.\n");
    sleep(2 * 60);

    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
    sleep(3 * 60);
}

void tampilkan_informasi_pencucian()
{
    printf("Proses mencuci selesai.\n");
}

int main()
{
    int kekeruhan;

    printf("Tombol Start ditekan.\n");

    printf("Motor listrik pembuka klep pengisian air aktif selama 2 menit.\n");
    sleep(2 * 60);

    printf("Masukkan nilai level kekeruhan air: ");
    scanf("%d", &kekeruhan);

    proses_pencucian(kekeruhan);

    tampilkan_informasi_pencucian();

    return 0;
}
