#include <stdio.h>
int main() {
    // Degiskenler tanimlaniyor
    int sayi, i;
    int isAsal = 1; // Baslangicta asal kabul ediyoruz
   
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // 1 ve daha kucuk sayilar asal degildir
    if (sayi <= 1) {
        isAsal = 0;
    } 
    else {
        // 2'den baslayarak sayiya kadar kontrol ediyoruz
        for (i = 2; i < sayi; i++) {
            // Eger sayi herhangi bir i degerine tam bolunurse
            if (sayi % i == 0) {
                isAsal = 0; // Asal olmadigi anlasildi
                break;      // Donguden cik
            }
        }
    } 
  
    // Sonucun ekrana yazdirilmasi
    if (isAsal == 1) {
        printf("%d bir asal sayidir.\n", sayi);
    } 
    else {
        printf("%d bir asal sayi degildir.\n", sayi);
    }

    return 0;
}