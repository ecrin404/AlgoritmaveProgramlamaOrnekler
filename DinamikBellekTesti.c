#include <stdio.h>
#include <stdlib.h> // malloc, calloc, realloc ve free fonksiyonlari icin

int main() {
    int n = 3;
    int *dizi1, *dizi2;

    // malloc: Belirtilen boyutta ham bellek tahsis eder 
    dizi1 = (int*) malloc(n * sizeof(int));
    
    // calloc: Bellek tahsisi yapar ve icini sifirla doldurur
    dizi2 = (int*) calloc(n, sizeof(int));

    // Bellek kontrolü 
    if (dizi1 == NULL || dizi2 == NULL) {
        printf("Bellek tahsis edilemedi!\n");
        return 1;
    }

    // Veri atama
    for(int i = 0; i < n; i++) {
        dizi1[i] = (i + 1) * 10;
    }

    // realloc: Mevcut bellek alanini yeniden boyutlandirir 
    // Gerekirse eski verileri yeni alana kopyalar 
    int *temp = (int*) realloc(dizi1, 5 * sizeof(int));
    
    if (temp != NULL) {
        dizi1 = temp;
        dizi1[3] = 40;
        dizi1[4] = 50;
    }

    printf("Dinamik bellek islemleri tamamlandi.\n");

    // free: Tahsis edilen bellek alanini serbest birakir 
    free(dizi1);
    free(dizi2);

    return 0;
}