#include<stdio.h>
int main() {
    int sayi;
    printf("Bir sayi girin: ");
    // scanf ile kullanicidan veri aliyoruz. %d tam sayi demektir.
    // & isareti sayinin hafizadaki adresini belirtir.
    scanf("%d", &sayi);

    printf("Girdiginiz sayi: %d", sayi);
    
    return 0;
}