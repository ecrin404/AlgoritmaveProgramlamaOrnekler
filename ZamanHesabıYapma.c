#include <stdio.h>

// Saniyeyi saat, dakika ve saniyeye donusturen fonksiyon
void saniyeCevir(int toplamSaniye) {
    int saat, dakika, sn, kalan;

    saat = toplamSaniye / 3600;    // 1 saat = 3600 saniye
    kalan = toplamSaniye % 3600;   // Saatten artan saniye
    dakika = kalan / 60;           // 1 dakika = 60 saniye
    sn = kalan % 60;               // Dakikadan artan saniye

    printf("------------------\n");
    printf("%02d:%02d:%02d\n", saat, dakika, sn);
    printf("------------------\n");
}

int main() {
    int saniye;

    printf("Saniye degerini giriniz: ");
    scanf("%d", &saniye);

    saniyeCevir(saniye);

    return 0;
}