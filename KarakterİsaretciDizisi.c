#include <stdio.h>
int main() {
    // Isaretci dizisi kullanarak dize dizisi olusturma 
    const char *takimlar[3] = {"Kupa", "Sinek", "Karo"}; 
    for(int i = 0; i < 3; i++) {
        printf("Takim %d: %s\n", i, takimlar[i]); // Her giris bir isaretcidir
    }
    return 0;
}