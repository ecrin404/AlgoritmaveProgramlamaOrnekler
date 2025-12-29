#include <stdio.h>
int main() {
    int a, b, alan; // Degiskenleri tanimliyoruz --- a (kisa kenar), b (uzun kenar)

    printf("Dikdortgenin kisa kenarinin uzunlugu : ");
    scanf("%d", &a);
    
    
    printf("Dikdortgenin uzun kenarinin uzunlugu : ");
    scanf("%d", &b);
    
    alan = a * b; // Dikdortgenin Alani: Kisa K * Uzun K

    printf("Dikdortgenin alani : %d", alan); // Sonucu ekrana yazdiriyoruz

    return 0;
}