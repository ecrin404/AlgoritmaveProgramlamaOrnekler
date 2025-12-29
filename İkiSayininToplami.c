#include <stdio.h>
int main() {
    int sayi1, sayi2, toplam; // Degisken tanimlamalari

    printf("Iki sayi giriniz:\n");
    scanf("%d %d", &sayi1, &sayi2); // Kullanicinin girdigi degerleri okuma
    
    toplam = sayi1 + sayi2;
    printf("Iki sayinin toplami: %d", toplam); // Sonucun ekrana yazdirilmasi
    
    return 0;
}