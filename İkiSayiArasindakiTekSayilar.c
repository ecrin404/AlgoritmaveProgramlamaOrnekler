#include <stdio.h>
int main() {
    int sayi1, sayi2, i, gecici;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    // Eger sayi1 buyukse, yerlerini degistiriyoruz
    if (sayi1 > sayi2) {
        gecici = sayi1;
        sayi1 = sayi2;
        sayi2 = gecici;
    }

    printf("%d ile %d arasindaki tek sayilar:\n", sayi1, sayi2);

    // Aradaki sayilari kontrol et (Sinirlar dahil degil)
    for (i = sayi1 + 1; i < sayi2; i++) {
        // Tek sayi kontrolu (% 2 != 0)
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\nIslem tamamlandi.\n");
    return 0;
}