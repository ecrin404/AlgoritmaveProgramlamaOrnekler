#include <stdio.h>

// Isaretci kullanarak ana programdaki degiskeni degistirme
void ikiKati(int *p) {
    *p = (*p) * 2; // Yonlendirme operatörü ile degeri guncelleme 
}
int main() {
    int x = 5;
    ikiKati(&x); // Degiskenin adresini gonderiyoruz 
    printf("Yeni x: %d\n", x);
    return 0;
}