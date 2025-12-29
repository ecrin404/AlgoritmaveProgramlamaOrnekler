// 1 ile 100 dahil degil

#include <stdio.h>
int main() {
    // Sayi 2'den baslar cunku 1 dahil degil
    int sayi = 2;

    do {
        // Degeri ekrana yazdir
        printf("%d\n", sayi);
        
        // Sayiyi bir artir
        sayi++;
        
    } while(sayi < 100); // 100'den kucuk oldugu surece devam et

    return 0;
}