#include <stdio.h>

// Fonksiyon tanimlama (definition) 
int kareHesapla(int sayi) {
    return sayi * sayi; // Sayinin karesini dondurur
}

int main() {
    // Baslik kismi
    printf("Sayi   Karesi\n");
    printf("----   ------\n");

    for(int i = 1; i <= 10; i++) {
        // %3d ve %4d sayilara 3 ve 4 karakterlik alan ayirir 
        // Boylece veriler alt alta hizali durur
        printf("%3d     %4d\n", i, kareHesapla(i)); 
    }

    return 0;
}