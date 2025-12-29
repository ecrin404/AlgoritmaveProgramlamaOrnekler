#include <stdio.h>
int main() {
    int sayi, terssayi = 0, kalan;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    // Orijinal sayiyi yazdirmak istersen burada saklamalisin
    printf("Girdiginiz sayinin tersi: ");
    
    while(sayi != 0) {
        kalan = sayi % 10;                 // Son basamagi al
        terssayi = terssayi * 10 + kalan;  // Tersi olustur
        sayi = sayi / 10;                  // Sayiyi kucult
    }
    
    printf("%d\n", terssayi);
    return 0;
}