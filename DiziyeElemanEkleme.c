#include <stdio.h>
int main() {
    // Kapasitesi 10 olan ama icinde 5 eleman bulunan bir dizi
    int dizi[10] = {10, 20, 30, 40, 50};
    int boyut = 5; // Mevcut eleman sayisi
    int kapasite = 10;
    int yeni_deger, pozisyon, i;

    printf("Mevcut dizi: ");
    for(i = 0; i < boyut; i++) printf("%d ", dizi[i]);

    printf("\n\nEklemek istediginiz degeri girin: ");
    scanf("%d", &yeni_deger);

    printf("Hangi indekse eklemek istersiniz (0-%d): ", boyut);
    scanf("%d", &pozisyon);

    // Kapasite kontrolu ve gecersiz pozisyon kontrolu
    if (boyut >= kapasite) {
        printf("Hata: Dizi dolu!\n");
    } else if (pozisyon < 0 || pozisyon > boyut) {
        printf("Hata: Gecersiz pozisyon!\n");
    } else {
        // Elemanlari saga kaydirma islemi
        // Sondan baslayarak pozisyona kadar kaydiriyoruz
        for (i = boyut; i > pozisyon; i--) {
            dizi[i] = dizi[i - 1];
        }

        // Yeni degeri bosalan yere yerlestir
        dizi[pozisyon] = yeni_deger;
        
        // Boyutu bir artir
        boyut++;

        printf("\nYeni dizi: ");
        for(i = 0; i < boyut; i++) printf("%d ", dizi[i]);
        printf("\n");
    }

    return 0;
}