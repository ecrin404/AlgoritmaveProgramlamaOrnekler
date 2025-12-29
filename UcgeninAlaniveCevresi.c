#include <stdio.h>
int main() {
    
    // t: taban, y: yukseklik, h: hipotenus (veya 3. kenar)
    // Alanin kusuratli cıkabilme ihtimaline karsi 'float' kullaniyoruz
    float t, y, h, alan, cevre; 

    printf("Ucgenin kenarlarinin uzunlugu:\n");
    scanf("%f %f %f", &t, &y, &h); // %f float icin (ondalikli sayi) kullanilir
    
    alan = (t * y) / 2; // Alan formulu: (taban * yukseklik) / 2
    cevre = t + y + h; // Cevre formulu: t + y + h
    
    // %.2f ifadesi , virgulden sonra sadece 2 bas. gosterilmesini saglar
    printf("Ucgenin Alani : %.2f\n", alan);
    printf("Ucgenin Cevresi : %.2f\n", cevre);
    
    return 0;
}
