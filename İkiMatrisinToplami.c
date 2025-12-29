#include <stdio.h>
int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int toplam[2][2], i, j;

    // Satir dongusu
    for(i = 0; i < 2; i++) {
        // Sutun dongusu
        for(j = 0; j < 2; j++) {
            // Elemanlari topla ve sakla
            toplam[i][j] = a[i][j] + b[i][j];
            printf("%d ", toplam[i][j]);
        }
        printf("\n"); // Alt satira gec
    }
    return 0;
}