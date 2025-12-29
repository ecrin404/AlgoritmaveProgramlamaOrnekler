#include <stdio.h>

int main() {
    int secim;
    float yaricap, taban, yukseklik, kenar, alan;
    float pi = 3.14; // Daha hassas sonuc icin 3.14 yapildi

    do {
        // Menu ekrana yazdiriliyor
        printf("\n --- MENU --- \n");
        printf("1 - Dairenin Alanini Hesapla\n");
        printf("2 - Ucgenin Alanini Hesapla\n");
        printf("3 - Karenin Alanini Hesapla\n");
        printf("4 - Cikis\n");
        printf("Seciniz (1 - 4): ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                // Daire hesabi
                printf("Dairenin yaricapini giriniz: ");
                scanf("%f", &yaricap);
                if (yaricap > 0) {
                    alan = pi * yaricap * yaricap;
                    printf("Dairenin alani: %.2f\n", alan);
                } else {
                    printf("Hata: Yaricap pozitif olmali.\n");
                }
                break;

            case 2:
                // Ucgen hesabi
                printf("Ucgenin taban uzunlugunu giriniz: ");
                scanf("%f", &taban);
                printf("Ucgenin yuksekligini giriniz: ");
                scanf("%f", &yukseklik);
                if (taban > 0 && yukseklik > 0) {
                    alan = (taban * yukseklik) / 2;
                    printf("Ucgenin alani: %.2f\n", alan);
                } else {
                    printf("Hata: Degerler pozitif olmali.\n");
                }
                break;

            case 3:
                // Kare hesabi
                printf("Karenin bir kenar uzunlugunu giriniz: ");
                scanf("%f", &kenar);
                if (kenar > 0) {
                    alan = kenar * kenar;
                    printf("Karenin alani: %.2f\n", alan);
                } else {
                    printf("Hata: Kenar pozitif olmali.\n");
                }
                break;

            case 4:
                // Cikis islemi
                printf("Programdan cikiliyor...\n");
                break;

            default:
                // Hatali secim durumu
                printf("Gecersiz secim! Tekrar deneyiniz.\n");
        }
    } while (secim != 4); // 4 basilmadigi surece doner

    return 0;
}