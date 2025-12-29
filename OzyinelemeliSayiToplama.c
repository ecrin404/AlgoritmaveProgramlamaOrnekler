#include <stdio.h>

// Ozyinelemeli fonksiyon
// Fonksiyon int turunde bir deger dondurur 
int toplamHesapla(int n) {
    // Durdurma noktasi (base case)
    if (n <= 1) {
        return 1;
    } 
    // Ozyinelemeli adim (recursive step)
    // Fonksiyon kendisini n-1 parametresi ile tekrar cagirir
    else {
        return n + toplamHesapla(n - 1);
    }
}

int main() {
    int sayi;

    // Kullanicidan veri alma islemi
    printf("Lutfen bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    // Fonksiyon cagrisi ve sonucun ekrana yazdirilmasi
    if (sayi < 1) {
        printf("Lutfen 1 veya daha buyuk bir sayi giriniz.\n");
    } else {
        printf("1'den %d sayisina kadar toplam: %d\n", sayi, toplamHesapla(sayi));
    }

    return 0;
}