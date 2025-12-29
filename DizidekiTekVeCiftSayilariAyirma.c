#include <stdio.h>
int main() {
    int dizi[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    // Ciftleri tara ve yazdir
    printf("Ciftler: ");
    for(i = 0; i < 10; i++) {
        if(dizi[i] % 2 == 0) printf("%d ", dizi[i]);
    }

    // Tekleri tara ve yazdir
    printf("\nTekler: ");
    for(i = 0; i < 10; i++) {
        if(dizi[i] % 2 != 0) printf("%d ", dizi[i]);
    }
    return 0;
}