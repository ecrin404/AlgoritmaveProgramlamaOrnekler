#include <stdio.h>
int main() {
    int n, i;
    int t1 = 0; // Birinci terim
    int t2 = 1; // Ikinci terim
    int sonrakiterim;

    printf("Istenilen terim sayisini (n) girin: ");
    scanf("%d", &n);

    // Negatif veya sifir kontrolu
    if (n <= 0) {
        printf("Lutfen pozitif bir sayi girin.\n");
        return 1;
    }

    // Sadece 1 terim istenirse
    if (n == 1) {
        printf("%d\n", t1);
    } 
    else {
        // Ilk iki terimi yazdir
        printf("%d, %d", t1, t2);
        // 3. terimden baslayarak n. terime kadar hesapla
        for (i = 3; i <= n; i++) {
            sonrakiterim = t1 + t2; // Terimleri topla
            printf(", %d", sonrakiterim);
            t1 = t2; // t1'i guncelle
            t2 = sonrakiterim; // t2'i guncelle
        }
        printf("\n");
    }

    return 0;
}