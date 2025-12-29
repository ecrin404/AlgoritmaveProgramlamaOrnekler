#include <stdio.h>
int main() {

    int a, b, c;
    float ortalama; // Kusuratli sonuclar icin float kullandik

    printf("Uc sayi giriniz:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    // 3.0 yazarak C'ye "ben ondalikli bir sonuc istiyorum sinyalini veriyoruz
    ortalama = (a + b + c) / 3.0;
    
    // %.2f ile virgulden sonra sadece 2 basamak gosteriyoruz
    printf("Uc sayinin ortalamasi: %.2f\n", ortalama);
    
    return 0;
}