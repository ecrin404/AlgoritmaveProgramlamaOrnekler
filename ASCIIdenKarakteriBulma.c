#include <stdio.h>
int main() {
    int sayi;
    printf("Bir ASCII degeri giriniz (0-127 arasi): ");
    
    // Kullanicidan tam sayi aliyoruz
    scanf("%d", &sayi);
    
    // %c kullanmak sayiyi karaktere donusturup yazdirir
    printf("ASCII degeri %d olan karakter: %c\n", sayi, sayi);
    
    return 0;
}
