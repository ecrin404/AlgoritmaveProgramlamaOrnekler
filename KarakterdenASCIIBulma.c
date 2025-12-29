#include <stdio.h>
int main() {
    char karakter;
    printf("Bir karakter giriniz: ");
    
    // Kullanicidan karakter aliyoruz
    scanf("%c", &karakter);
    
    // %d kullanmak karakterin sayisal (ASCII) degerini yazdirir
    printf("Girilen karakterin ASCII degeri: %d\n", karakter);
    
    return 0;
}