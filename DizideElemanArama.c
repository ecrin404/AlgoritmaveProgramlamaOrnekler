#include <stdio.h>
int main() {
    int dizi[5] = {30, 35, 40, 45, 50};
    int aranan, i, bulundu = 0;

    printf("Aranan: ");
    scanf("%d", &aranan);

    for(i = 0; i < 5; i++) {
        // Aranan sayi o indekste var mi?
        if(dizi[i] == aranan) {
            printf("Bulundu, indeks: %d\n", i);
            bulundu = 1;
            break; // Bulundugu an donguyu bitir
        }
    }
    
    if(!bulundu) {
        printf("Bulunamadi.\n");
    }

    return 0;
}