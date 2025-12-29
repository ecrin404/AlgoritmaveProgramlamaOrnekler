#include <stdio.h>

// Eleman bulunursa 1, bulunamazsa 0 doner
int elemanAra(const int *diziPtr, int boyut, int aranan) {
    for (int i = 0; i < boyut; i++) {
        if (*(diziPtr + i) == aranan) {
            printf("%d degeri %d. indiste bulundu.\n", aranan, i);
            return 1; // Bulundu
        }
    }
    return 0; // Bulunamadi
}

int main() {
    int n, aranan, bulundu = 0;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    int veriler[n];
    for (int i = 0; i < n; i++) {
        printf("%d. elemani girin: ", i);
        scanf("%d", &veriler[i]);
    }

    // Eleman bulunana kadar dongu devam eder
    while (bulundu == 0) {
        printf("Aranacak degeri girin: ");
        scanf("%d", &aranan);

        bulundu = elemanAra(veriler, n, aranan);

        if (bulundu == 0) {
            printf("Bulunamadi, lutfen tekrar deneyin.\n");
        }
    }

    printf("Program sonlandirildi.\n");
    return 0;
}