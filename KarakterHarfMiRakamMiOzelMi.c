#include <stdio.h>
int main() {
    char karakter;

    printf("Bir karakter giriniz: ");
    // Kullanicidan tek bir karakter aliniyor
    scanf("%c", &karakter);

    // ASCII tablosunda '0' ile '9' arasinda mi kontrolu
    if (karakter >= '0' && karakter <= '9') {
        printf("'%c' bir rakamdir.\n", karakter);
    }
    // 'a'-'z' veya 'A'-'Z' arasinda mi kontrolu (Harf kontrolu)
    else if ((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z')) {
        printf("'%c' bir harftir.\n", karakter);
    }
    // Diger tum durumlar (semboller, bosluklar vb.)
    else {
        printf("'%c' ozel bir karakterdir.\n", karakter);
    }

    return 0;
}