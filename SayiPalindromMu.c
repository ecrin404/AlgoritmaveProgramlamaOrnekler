#include <stdio.h>
int main() {
    int sayi, orijinal, ters = 0, kalan;

    printf("Bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    // Sayinin orijinal degerini sakliyoruz
    orijinal = sayi;

    // Sayiyi tersine cevirme islemi
    while (sayi != 0) {
        kalan = sayi % 10;          // Son basamagi al
        ters = ters * 10 + kalan;   // Tersi olustur
        sayi /= 10;                 // Sayiyi kucult
    }

    // Karsilastirma yapiliyor
    if (orijinal == ters) {
        printf("%d bir palindrom sayidir.\n", orijinal);
    } else {
        printf("%d bir palindrom sayi degildir.\n", orijinal);
    }

    return 0;
}