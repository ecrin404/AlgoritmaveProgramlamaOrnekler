#include <stdio.h>

// Fonksiyon: Verilen adresteki degeri faiz ekleyerek gunceller
void faizEkle(float *bakiyePtr, float oran) {
    // Pointer (isaretci) üzerinden orijinal degiskene erisip guncelliyoruz
    *bakiyePtr = *bakiyePtr + (*bakiyePtr * oran); 
}

int main() {
    // Degisken Tanımlamaları
    float anaBakiye;
    const float faizOrani = 0.05f; // %5 Sabit Faiz Oranı

    // Kullanıcıdan veri alma
    printf("Lutfen mevcut bakiyenizi giriniz: ");
    scanf("%f", &anaBakiye);

    printf("\nIslem oncesi bakiye: %.2f\n", anaBakiye);
    printf("Uygulanan sabit faiz orani: %.2f\n", faizOrani);

    // Adres operatoru (&) ile degiskenin bellekteki adresini gonderiyoruz
    faizEkle(&anaBakiye, faizOrani);

    // Sonucu ekrana yazdırma
    printf("Faiz eklendikten sonraki yeni bakiye: %.2f\n", anaBakiye);

    return 0;
}