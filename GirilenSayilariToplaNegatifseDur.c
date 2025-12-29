#include <stdio.h>
int main() {
    int toplam = 0, girilen_sayi;

    do {
        printf("Bir sayi girin (Cikmak icin negatif): ");
        scanf("%d", &girilen_sayi);

        // Sayi negatif degilse toplama ekle
        if (girilen_sayi >= 0) {
            toplam += girilen_sayi;
            printf("Guncel Toplam: %d\n", toplam);
        }

    } while (girilen_sayi >= 0); // Negatif girilirse donguden cikar

    printf("Dongu bitti. Nihai Toplam: %d\n", toplam);

    return 0;
}