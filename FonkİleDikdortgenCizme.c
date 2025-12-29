#include <stdio.h>

// void: Bu fonksiyon bir deger dondurmez
void dikdortgenCiz(int en, int boy) {
    // Donguler belirli eylemleri gerceklestirmek icindir 
    for (int i = 0; i < boy; i++) {
        for (int j = 0; j < en; j++) {
            // Ekrana yildiz basar
            printf("* ");
        }
        // Bir alt satira gecer
        printf("\n");
    }
}

int main() {
    int kullaniciEn, kullaniciBoy;

    // Kullanicidan genislik bilgisini al
    printf("Dikdortgenin enini giriniz: ");
    scanf("%d", &kullaniciEn);

    // Kullanicidan yukseklik bilgisini al
    printf("Dikdortgenin boyunu giriniz: ");
    scanf("%d", &kullaniciBoy);

    printf("\nCizim yapiliyor...\n");

    // Fonksiyonu cagiriyoruz
    dikdortgenCiz(kullaniciEn, kullaniciBoy);

    return 0;
}