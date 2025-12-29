#include <stdio.h>

// Karakterleri bir ileri kaydiran fonksiyon
void sifrele(char *sPtr) {
    while (*sPtr != '\0') {
        *sPtr = *sPtr + 1; // Karakter degerini 1 artir
        sPtr++; // Bir sonraki adrese gec
    }
}

int main() {
    char mesaj[100]; // 100 karakterlik alan

    printf("Mesaj girin: ");
    scanf("%s", mesaj); // Kullanicidan girdi al

    printf("Orijinal: %s\n", mesaj);
    
    sifrele(mesaj); // Sifreleme fonksiyonunu cagir
    
    printf("Sifreli: %s\n", mesaj);

    return 0;
}