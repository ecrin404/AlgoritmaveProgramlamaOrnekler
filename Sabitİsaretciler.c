#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    // Isaret edilen yer sabit (read-only), ama isaretci degisebilir
    const int *ptr = &x; 

    printf("Ilk adres x'i gosteriyor. Deger: %d\n", *ptr);

    // Gecerli: Isaretci artik y degiskeninin adresini tutuyor
    ptr = &y; 
    printf("Yeni adres y'yi gosteriyor. Deger: %d\n", *ptr);


    return 0;
}