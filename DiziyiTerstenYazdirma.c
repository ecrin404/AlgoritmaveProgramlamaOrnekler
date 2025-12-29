#include <stdio.h>
int main() {
    int n, i;
    printf("Eleman sayisi: ");
    scanf("%d", &n);

    int dizi[n]; // Kullanici sayisina gore dizi olusturuldu

    for(i = 0; i < n; i++) {
        // Kullanicidan elemanlari al
        scanf("%d", &dizi[i]);
    }

    printf("Tersten: ");
    // n-1'den baslayarak 0'a kadar geri git
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", dizi[i]);
    }
    return 0;
}