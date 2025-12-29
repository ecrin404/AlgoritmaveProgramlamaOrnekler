#include <stdio.h>
int main() {
    int sayilar[5], i;
    float toplam = 0;

    for(i = 0; i < 5; i++) {
        printf("%d. sayiyi girin: ", i + 1);
        scanf("%d", &sayilar[i]);
        toplam += sayilar[i]; // Her girilen sayiyi toplama ekle
    }

    printf("Toplam: %.2f\n", toplam);
    printf("Ortalama: %.2f\n", toplam / 5);
    return 0;
}
