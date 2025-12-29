#include <stdio.h>
int main() {
    // Degiskenler baslatiliyor
    int sayi, i;
    int toplam = 0;
    int carpim = 1; 
    int kare_toplam = 0;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    // 1'den N'ye kadar dongu
    for (i = 1; i <= sayi; i++) {
        if (i % 2 == 0) {
            // Sayi cift ise kareler toplamina ekle
            kare_toplam += (i * i);
        } else {
            // Sayi tek ise toplama ekle ve carp
            toplam += i;
            carpim *= i;
        }
    }

    // Sonuclari ekrana yazdirma
    printf("Tek sayilarin toplami: %d\n", toplam);
    printf("Tek sayilarin carpimi: %lld\n", carpim);
    printf("Cift sayilarin kareleri toplami: %d\n", kare_toplam);

    return 0;
}