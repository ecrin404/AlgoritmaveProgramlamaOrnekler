#include <stdio.h>
int main() {
    int i, toplam = 0;

    // 2'den baslayip 2'ser artirarak sadece ciftleri gezeriz
    for(i = 2; i <= 100; i += 2) {
        toplam += i; // Dogrudan ekleme yapilir
    }

    printf("1 ile 100 arasindaki cift sayilarin toplami: %d\n", toplam);

    return 0;
}
