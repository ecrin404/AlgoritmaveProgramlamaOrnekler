// Bir sayinin kendisi haric pozitif bolenlerinin toplami kendisine esitse mukemmel sayidir.
#include <stdio.h>
int main() {
    int sayi, i;
    int bolentoplami = 0; // Bolenlerin toplamini tutacak degisken

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // Negatif veya sifir girilirse hata mesaji veriyoruz
    if (sayi <= 0) {
        printf("Lutfen pozitif bir tam sayi giriniz.\n");
        return 1;
    }

    // 1'den sayinin yarisina kadar olan bolenleri ariyoruz
    for (i = 1; i <= sayi / 2; i++) {
        // Eger sayi i'ye tam bolunuyorsa
        if (sayi % i == 0) {
            bolentoplami = bolentoplami + i; // Toplama ekle
        }
    }

    // Toplam sayinin kendisine esit mi kontrolu
    if (bolentoplami == sayi) {
        printf("%d mukemmel bir sayidir.\n", sayi);
    } 
    else {
        printf("%d mukemmel bir sayi degildir.\n", sayi);
    }

    return 0;
}