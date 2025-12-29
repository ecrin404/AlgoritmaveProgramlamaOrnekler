#include <stdio.h>
int main() {
    int sayi;
    int basamaksayisi = 0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    // Negatif sayilari pozitife ceviriyoruz
    if(sayi < 0) {
        sayi = -sayi;
    }

    // Basamak sayisi hesaplama dongusu
    do {
        // Sayiyi 10'a bolerek bir basamak eksiltiyoruz
        sayi = sayi / 10;
        // Her bolmede sayaci artiriyoruz
        basamaksayisi++;
    } while(sayi != 0); // Sayi 0 olana kadar devam et
    
    // Sonucu ekrana yazdiriyoruz
    printf("Girdiginiz sayi %d basamaklidir.\n", basamaksayisi);
    
    return 0;
}