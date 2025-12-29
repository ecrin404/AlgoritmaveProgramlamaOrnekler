#include <stdio.h>
int main() {
    int k, alan; 
    // k: kenar uzunlugu (uzunluk olarak sadece tam sayi -int- alabiliyor)

    printf("Karenin bir kenarinin uzunlugu : ");

    // Kullanicinin girdigi tam sayi degerini 'k' degiskenine atiyoruz
    scanf("%d", &k);
    
    alan = k * k; // Karenin Alani: Kenar * Kenar

    printf("Karenin alani : %d", alan); // Sonucu ekrana yazdiriyoruz

    return 0;
}