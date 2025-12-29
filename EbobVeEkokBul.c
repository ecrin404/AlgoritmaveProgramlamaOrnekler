#include <stdio.h>
int main() {
    int n1, n2, i, ebob, ekok;

    printf("Iki pozitif tam sayi giriniz:\n");
    scanf("%d %d", &n1, &n2);

    // 1'den baslayarak kucuk olan sayiya kadar ortak bolen ara
    for (i = 1; i <= n1 && i <= n2; ++i) {
        // Her iki sayiyi da tam bolen en buyuk i'yi sakla
        if (n1 % i == 0 && n2 % i == 0) {
            ebob = i;
        }
    }

    // EKOK formulu: (a * b) / EBOB(a, b)
    ekok = (n1 * n2) / ebob;

    printf("EBOB(%d, %d) = %d\n", n1, n2, ebob);
    printf("EKOK(%d, %d) = %d\n", n1, n2, ekok);

    return 0;
}