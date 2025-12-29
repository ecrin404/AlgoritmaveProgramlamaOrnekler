// Bir sayinin her basamaginin, toplam basamak sayisi kadar kuvvetinin toplami kendisini veriyorsa o sayi Armstrong sayisidir.
#include <stdio.h>
int main() {
    int sayi, orijinal, kalan, toplam = 0;
    
    printf("Bir tam sayi girin: ");
    scanf("%d", &sayi);
    
    orijinal = sayi; // Karsilastirma icin orijinali sakla
    
    while(sayi > 0) {
        kalan = sayi % 10;
        toplam = toplam + (kalan * kalan * kalan); // Basamagin kubunu ekle
        sayi = sayi / 10;  // Sayiyi bir basamak kucult
    }
    
    if(toplam == orijinal) {
        printf("%d bir Armstrong sayisidir.\n", orijinal);
    } else {
        printf("%d bir Armstrong sayisi degildir.\n", orijinal);
    }
    
    return 0;
}