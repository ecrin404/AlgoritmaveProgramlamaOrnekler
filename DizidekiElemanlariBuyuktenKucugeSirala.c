#include <stdio.h>
int main() {
    int dizi[5] = {5, 2, 7, 9, 6}, i, j, gecici;

    // Dis dongu her adimda bir elemani sabitler
    for(i = 0; i < 4; i++) {
        // Ic dongu karsilastirma yapar
        for(j = 0; j < 4 - i; j++) {
            if(dizi[j] > dizi[j+1]) {
                // Yer degistirme islemi
                gecici = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = gecici;
            }
        }
    }

    printf("Sirali: ");
    for(i = 0; i < 5; i++) printf("%d ", dizi[i]);
    return 0;
}